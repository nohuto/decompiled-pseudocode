/*
 * XREFs of VmpRemoveMemoryRange @ 0x1402ACBE0
 * Callers:
 *     VmDeleteMemoryRange @ 0x1407A0B60 (VmDeleteMemoryRange.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpFlushTbVaRange @ 0x1402ABFDC (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x1402AC838 (VmpProcessContextLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(PEX_SPIN_LOCK SpinLock, _QWORD *a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v3; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // r8d
  _RTL_BALANCED_NODE *v12; // rcx
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *v15; // rbx
  _RTL_BALANCED_NODE *v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_18;
  }
  VmpFlushTbVaRange(SpinLock, a2[8], a2[9], &v21, &v20, &v19);
  v8 = (unsigned __int64)(SpinLock + 2);
  v9 = *((_QWORD *)SpinLock + 2);
  v10 = *((_QWORD *)SpinLock + 1);
  if ( (v9 & 1) != 0 && v10 )
    v10 ^= v8;
  v11 = v9 & 1;
  if ( !v10 )
  {
LABEL_17:
    v7 = -1073741172;
    goto LABEL_18;
  }
  v12 = (_RTL_BALANCED_NODE *)a2[6];
  while ( (unsigned __int64)v12 > *(_QWORD *)(v10 + 32) )
  {
    v13 = *(_QWORD *)(v10 + 8);
LABEL_12:
    if ( v11 && v13 )
      v10 ^= v13;
    else
      v10 = v13;
    if ( !v10 )
      goto LABEL_17;
  }
  if ( (unsigned __int64)v12 < *(_QWORD *)(v10 + 24) )
  {
    v13 = *(_QWORD *)v10;
    goto LABEL_12;
  }
  v15 = (_RTL_BALANCED_NODE *)(v10 - 24);
  v16 = *(_RTL_BALANCED_NODE **)(v10 - 24 + 48);
  if ( v12 == v16 )
  {
    if ( v15[2].Children[1] == (_RTL_BALANCED_NODE *)a2[7]
      && v15[2].ParentValue == a2[8]
      && v15[3].Children[0] == (_RTL_BALANCED_NODE *)a2[9] )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v10);
      RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), v15);
      v3 = v15;
      goto LABEL_38;
    }
    if ( v12 == v16 && a2[8] == v15[2].ParentValue )
    {
      v17 = a2[7];
      if ( (_RTL_BALANCED_NODE *)v17 < v15[2].Children[1] && (_RTL_BALANCED_NODE *)a2[9] < v15[3].Children[0] )
      {
        v15[2].Children[0] = (_RTL_BALANCED_NODE *)(v17 + 1);
        v15[2].ParentValue = a2[9] + 1LL;
        goto LABEL_38;
      }
    }
  }
  if ( (_RTL_BALANCED_NODE *)a2[7] == v15[2].Children[1]
    && (_RTL_BALANCED_NODE *)a2[9] == v15[3].Children[0]
    && v12 > v16
    && a2[8] > v15[2].ParentValue )
  {
    v15[2].Children[1] = (_RTL_BALANCED_NODE *)((char *)v12 - 1);
    v15[3].Children[0] = (_RTL_BALANCED_NODE *)(a2[8] - 1LL);
LABEL_38:
    ++*((_QWORD *)SpinLock + 5);
    v18 = *(_QWORD *)v8;
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( v18 )
      {
        v18 ^= v8;
        goto LABEL_41;
      }
LABEL_42:
      *((_QWORD *)SpinLock + 9) = -1LL;
    }
    else
    {
LABEL_41:
      if ( !v18 )
        goto LABEL_42;
    }
    v7 = 0;
  }
  else
  {
    v7 = -1073741637;
  }
LABEL_18:
  if ( v19 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v19);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v7;
}
