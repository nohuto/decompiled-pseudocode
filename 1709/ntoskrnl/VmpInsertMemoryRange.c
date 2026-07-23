/*
 * XREFs of VmpInsertMemoryRange @ 0x140279020
 * Callers:
 *     VmCreateMemoryRange @ 0x14073D7F0 (VmCreateMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x14027964C (VmpProcessContextLockExclusive.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, PRTL_BALANCED_NODE Node, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbp
  _RTL_BALANCED_NODE **v9; // r10
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _RTL_BALANCED_NODE **v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  BOOLEAN v16; // r8
  _RTL_BALANCED_NODE *v17; // rdx
  _RTL_BALANCED_NODE *v18; // r8
  _RTL_BALANCED_NODE *v19; // rax
  BOOLEAN v20; // r8
  _RTL_BALANCED_NODE *v21; // rdx
  unsigned __int64 ParentValue; // rcx
  _RTL_BALANCED_NODE *v23; // rax

  v6 = VmpProcessContextLockExclusive(SpinLock);
  v7 = *((_QWORD *)SpinLock + 9);
  v8 = v6;
  if ( v7 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v7 != a3 )
  {
    v10 = -1073740007;
    goto LABEL_59;
  }
  v9 = (_RTL_BALANCED_NODE **)(SpinLock + 2);
  v10 = 0;
  v11 = *((_QWORD *)SpinLock + 1);
  while ( v11 )
  {
    if ( Node[2].Children[1] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v11 + 24) )
    {
      v12 = *(_QWORD *)v11;
    }
    else
    {
      if ( Node[2].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v11 + 32) )
      {
LABEL_19:
        v10 = -1073741800;
        goto LABEL_59;
      }
      v12 = *(_QWORD *)(v11 + 8);
    }
    if ( (SpinLock[4] & 1) != 0 && v12 )
      v11 ^= v12;
    else
      v11 = v12;
  }
  v13 = (_RTL_BALANCED_NODE **)(SpinLock + 6);
  v14 = *((_QWORD *)SpinLock + 3);
  while ( v14 )
  {
    if ( Node[3].Children[0] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v14 + 64) )
    {
      v15 = *(_QWORD *)v14;
    }
    else
    {
      if ( Node[2].ParentValue <= *(_QWORD *)(v14 + 72) )
        goto LABEL_19;
      v15 = *(_QWORD *)(v14 + 8);
    }
    if ( (SpinLock[8] & 1) != 0 && v15 )
      v14 ^= v15;
    else
      v14 = v15;
  }
  v16 = 0;
  v17 = *v9;
  if ( !*v9 )
    goto LABEL_43;
  v18 = Node[2].Children[0];
  while ( 1 )
  {
    if ( v18 <= v17[1].Children[1] && v18 < v17[1].Children[0] )
    {
      v19 = v17->Children[0];
      if ( (SpinLock[4] & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_36;
        v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v17 ^ (unsigned __int64)v19);
      }
      if ( !v19 )
      {
LABEL_36:
        v16 = 0;
        goto LABEL_43;
      }
      goto LABEL_41;
    }
    v19 = v17->Children[1];
    if ( (SpinLock[4] & 1) != 0 )
    {
      if ( !v19 )
        break;
      v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v17 ^ (unsigned __int64)v19);
    }
    if ( !v19 )
      break;
LABEL_41:
    v17 = v19;
  }
  v16 = 1;
LABEL_43:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), v17, v16, Node + 1);
  v20 = 0;
  v21 = *v13;
  if ( !*v13 )
    goto LABEL_58;
  ParentValue = Node[2].ParentValue;
  while ( 2 )
  {
    if ( (_RTL_BALANCED_NODE *)ParentValue <= v21[3].Children[0] && ParentValue < v21[2].ParentValue )
    {
      v23 = v21->Children[0];
      if ( (SpinLock[8] & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_51;
        v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v23);
      }
      if ( !v23 )
      {
LABEL_51:
        v20 = 0;
        goto LABEL_58;
      }
LABEL_56:
      v21 = v23;
      continue;
    }
    break;
  }
  v23 = v21->Children[1];
  if ( (SpinLock[8] & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_57;
    v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v21 ^ (unsigned __int64)v23);
  }
  if ( v23 )
    goto LABEL_56;
LABEL_57:
  v20 = 1;
LABEL_58:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 6), v21, v20, Node);
LABEL_59:
  if ( v8 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v8);
  }
  return v10;
}
