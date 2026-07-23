/*
 * XREFs of VmpInsertMemoryRange @ 0x1402AC110
 * Callers:
 *     VmCreateMemoryRange @ 0x1407A09B0 (VmCreateMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x1402AC838 (VmpProcessContextLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, PRTL_BALANCED_NODE Node, __int64 a3, int a4)
{
  PRTL_BALANCED_NODE v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r15
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // edx
  unsigned __int64 v17; // rax
  _RTL_BALANCED_NODE **v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // edx
  unsigned __int64 v22; // rax
  _RTL_BALANCED_NODE *v23; // rax
  unsigned __int64 ParentValue; // r8
  unsigned __int64 v25; // rcx
  char *v26; // r9
  __int64 v27; // rax
  int v28; // edx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  BOOLEAN v32; // r8
  int v33; // ecx
  _RTL_BALANCED_NODE *v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  BOOLEAN v38; // r8
  int v39; // ecx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rax

  v8 = 0LL;
  v9 = VmpProcessContextLockExclusive(SpinLock);
  v10 = *((_QWORD *)SpinLock + 9);
  v11 = v9;
  if ( v10 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v10 != a3 )
  {
    v15 = -1073740007;
    goto LABEL_91;
  }
  v12 = (unsigned __int64)(SpinLock + 2);
  v13 = *((_QWORD *)SpinLock + 2);
  v14 = *((_QWORD *)SpinLock + 1);
  if ( (v13 & 1) != 0 && v14 )
    v14 ^= v12;
  v16 = v13 & 1;
  while ( v14 )
  {
    if ( Node[2].Children[1] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v14 + 24) )
    {
      v17 = *(_QWORD *)v14;
    }
    else
    {
      if ( Node[2].Children[0] <= (_RTL_BALANCED_NODE *)*(_QWORD *)(v14 + 32) )
      {
LABEL_21:
        v15 = -1073741800;
        goto LABEL_91;
      }
      v17 = *(_QWORD *)(v14 + 8);
    }
    if ( v16 && v17 )
      v14 ^= v17;
    else
      v14 = v17;
  }
  v18 = (_RTL_BALANCED_NODE **)(SpinLock + 6);
  v19 = *((_QWORD *)SpinLock + 4);
  v20 = *((_QWORD *)SpinLock + 3);
  if ( (v19 & 1) != 0 && v20 )
    v20 ^= (unsigned __int64)v18;
  v21 = v19 & 1;
  while ( v20 )
  {
    if ( Node[3].Children[0] < (_RTL_BALANCED_NODE *)*(_QWORD *)(v20 + 64) )
    {
      v22 = *(_QWORD *)v20;
    }
    else
    {
      if ( Node[2].ParentValue <= *(_QWORD *)(v20 + 72) )
        goto LABEL_21;
      v22 = *(_QWORD *)(v20 + 8);
    }
    if ( v21 && v22 )
      v20 ^= v22;
    else
      v20 = v22;
  }
  if ( a4 )
  {
    v23 = Node[2].Children[0];
    if ( v23 )
    {
      ParentValue = Node[2].ParentValue;
      if ( ParentValue )
      {
        v25 = *(_QWORD *)v12;
        v26 = (char *)&v23[-1].ParentValue + 7;
        v27 = *((_QWORD *)SpinLock + 2);
        if ( (v27 & 1) != 0 && v25 )
          v25 ^= v12;
        v28 = v27 & 1;
        while ( v25 )
        {
          if ( (unsigned __int64)v26 > *(_QWORD *)(v25 + 32) )
          {
            v29 = *(_QWORD *)(v25 + 8);
          }
          else
          {
            if ( (unsigned __int64)v26 >= *(_QWORD *)(v25 + 24) )
            {
              if ( *(_QWORD *)(v25 + 48) + 1LL != ParentValue )
                break;
              v8 = Node;
              *(_QWORD *)(v25 + 32) = Node[2].Children[1];
              *(_QWORD *)(v25 + 48) = Node[3].Children[0];
              goto LABEL_90;
            }
            v29 = *(_QWORD *)v25;
          }
          if ( v28 && v29 )
            v25 ^= v29;
          else
            v25 = v29;
        }
      }
    }
    v15 = -1073741503;
    goto LABEL_91;
  }
  v30 = *((_QWORD *)SpinLock + 2);
  v31 = *(_QWORD *)v12;
  if ( (v30 & 1) != 0 && v31 )
    v31 ^= v12;
  v32 = 0;
  v33 = v30 & 1;
  if ( v31 )
  {
    v34 = Node[2].Children[0];
    while ( 1 )
    {
      if ( (unsigned __int64)v34 > *(_QWORD *)(v31 + 32) || (unsigned __int64)v34 >= *(_QWORD *)(v31 + 24) )
      {
        v35 = *(_QWORD *)(v31 + 8);
        if ( v33 )
        {
          if ( !v35 )
            goto LABEL_70;
          v35 ^= v31;
        }
        if ( !v35 )
        {
LABEL_70:
          v32 = 1;
          break;
        }
      }
      else
      {
        v35 = *(_QWORD *)v31;
        if ( v33 )
        {
          if ( !v35 )
            goto LABEL_64;
          v35 ^= v31;
        }
        if ( !v35 )
        {
LABEL_64:
          v32 = 0;
          break;
        }
      }
      v31 = v35;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), (PRTL_BALANCED_NODE)v31, v32, Node + 1);
  v36 = *((_QWORD *)SpinLock + 4);
  v37 = (unsigned __int64)*v18;
  if ( (v36 & 1) != 0 && v37 )
    v37 ^= (unsigned __int64)v18;
  v38 = 0;
  v39 = v36 & 1;
  if ( !v37 )
    goto LABEL_89;
  v40 = Node[2].ParentValue;
  while ( 1 )
  {
    if ( v40 <= *(_QWORD *)(v37 + 72) && v40 < *(_QWORD *)(v37 + 64) )
    {
      v41 = *(_QWORD *)v37;
      if ( v39 )
      {
        if ( !v41 )
          goto LABEL_82;
        v41 ^= v37;
      }
      if ( !v41 )
      {
LABEL_82:
        v38 = 0;
        goto LABEL_89;
      }
      goto LABEL_87;
    }
    v41 = *(_QWORD *)(v37 + 8);
    if ( v39 )
    {
      if ( !v41 )
        break;
      v41 ^= v37;
    }
    if ( !v41 )
      break;
LABEL_87:
    v37 = v41;
  }
  v38 = 1;
LABEL_89:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 6), (PRTL_BALANCED_NODE)v37, v38, Node);
LABEL_90:
  v15 = 0;
LABEL_91:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v11);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v15;
}
