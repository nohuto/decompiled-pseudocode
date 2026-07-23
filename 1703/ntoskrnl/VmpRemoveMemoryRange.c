/*
 * XREFs of VmpRemoveMemoryRange @ 0x140252564
 * Callers:
 *     VmDeleteMemoryRange @ 0x1407054B0 (VmDeleteMemoryRange.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpFlushTbVaRange @ 0x140251F98 (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x1402524DC (VmpProcessContextLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(PEX_SPIN_LOCK SpinLock, _QWORD *a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v3; // rbp
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  _RTL_BALANCED_NODE *v9; // rdx
  unsigned __int64 v10; // rcx
  _RTL_BALANCED_NODE *v12; // rbx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v13 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_15;
  }
  VmpFlushTbVaRange(SpinLock, a2[8], a2[9], &v15, &v14, &v13);
  v8 = *((_QWORD *)SpinLock + 1);
  if ( !v8 )
  {
LABEL_14:
    v7 = -1073741172;
    goto LABEL_15;
  }
  v9 = (_RTL_BALANCED_NODE *)a2[6];
  while ( (unsigned __int64)v9 > *(_QWORD *)(v8 + 32) )
  {
    v10 = *(_QWORD *)(v8 + 8);
LABEL_9:
    if ( (SpinLock[4] & 1) != 0 && v10 )
      v8 ^= v10;
    else
      v8 = v10;
    if ( !v8 )
      goto LABEL_14;
  }
  if ( (unsigned __int64)v9 < *(_QWORD *)(v8 + 24) )
  {
    v10 = *(_QWORD *)v8;
    goto LABEL_9;
  }
  v12 = (_RTL_BALANCED_NODE *)(v8 - 24);
  if ( *(_RTL_BALANCED_NODE **)(v8 - 24 + 48) == v9
    && v12[2].Children[1] == (_RTL_BALANCED_NODE *)a2[7]
    && v12[2].ParentValue == a2[8]
    && v12[3].Children[0] == (_RTL_BALANCED_NODE *)a2[9] )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v8);
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), v12);
    ++*((_QWORD *)SpinLock + 5);
    if ( !*((_QWORD *)SpinLock + 1) )
      *((_QWORD *)SpinLock + 9) = -1LL;
    v3 = v12;
    v7 = 0;
  }
  else
  {
    v7 = -1073741637;
  }
LABEL_15:
  if ( v13 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v13);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v7;
}
