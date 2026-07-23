/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x14007E0DC
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400AF604 (MiBitmapsCachedEntryLengthChanged.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  BOOLEAN v5; // bl
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rax
  int v17; // r10d
  int v18; // ecx
  _QWORD **v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  _QWORD **v22; // r14
  _QWORD *v23; // r8
  BOOLEAN v24; // r8
  _RTL_BALANCED_NODE *v25; // rdx
  _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax

  v5 = 0;
  if ( !a4 )
  {
    v11 = *(_QWORD *)(a1 + 160);
    v12 = *(_BYTE *)(a1 + 168) & 1;
    if ( !v11 )
      return;
    while ( 1 )
    {
      v13 = *(_DWORD *)(v11 + 24);
      if ( a2 + a3 > v13 )
      {
        if ( a2 < *(_DWORD *)(v11 + 28) + v13 )
        {
          a4 = v11 - 24;
          break;
        }
        v14 = *(_QWORD *)(v11 + 8);
      }
      else
      {
        v14 = *(_QWORD *)v11;
      }
      if ( v12 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
      if ( !v11 )
        return;
    }
  }
  v8 = *(_DWORD *)(a4 + 48);
  if ( v8 == a2 || (v17 = a2 + a3, v18 = v8 + *(_DWORD *)(a4 + 52), a2 + a3 == v18) )
  {
    *(_DWORD *)(a4 + 52) -= a3;
    v9 = *(_DWORD *)(a4 + 52);
    if ( v8 == a2 )
      *(_DWORD *)(a4 + 48) = v8 + a3;
    v10 = a4;
    if ( !v9 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)a4);
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(a4 + 24));
      v15 = a1 + 176;
      v16 = *(_QWORD **)(v15 + 8);
      if ( *v16 != v15 )
        __fastfail(3u);
      *(_QWORD *)a4 = v15;
      *(_QWORD *)(a4 + 8) = v16;
      *v16 = a4;
      *(_QWORD *)(v15 + 8) = a4;
      return;
    }
LABEL_6:
    MiBitmapsCachedEntryLengthChanged(a1, v10, 0LL);
    return;
  }
  v19 = (_QWORD **)(a1 + 176);
  v20 = v18 - a2 - a3;
  v21 = a2 - v8;
  if ( *v19 == v19 )
  {
    if ( v21 <= v20 )
    {
      *(_DWORD *)(a4 + 52) = v20;
      *(_DWORD *)(a4 + 48) = v17;
      if ( *(_DWORD *)(a1 + 140) > v21 )
        v21 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v21;
    }
    else
    {
      *(_DWORD *)(a4 + 52) = v21;
      if ( *(_DWORD *)(a1 + 140) > v20 )
        v20 = *(_DWORD *)(a1 + 140);
      *(_DWORD *)(a1 + 140) = v20;
    }
    v10 = a4;
    goto LABEL_6;
  }
  v22 = (_QWORD **)*v19;
  v23 = (_QWORD *)**v19;
  if ( (_QWORD **)(*v19)[1] != v19 || (_QWORD **)v23[1] != v22 )
    __fastfail(3u);
  *v19 = v23;
  v23[1] = v19;
  *((_DWORD *)v22 + 13) = v20;
  *((_DWORD *)v22 + 12) = v17;
  *(_DWORD *)(a4 + 52) = v21;
  MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
  v24 = 0;
  v25 = *(_RTL_BALANCED_NODE **)(a1 + 144);
  if ( !v25 )
    goto LABEL_29;
  while ( 1 )
  {
    if ( (_RTL_BALANCED_NODE *)v22[6] >= v25[2].Children[0] )
    {
      v26 = v25->Children[1];
      if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
      {
        if ( !v26 )
        {
LABEL_28:
          v24 = 1;
          goto LABEL_29;
        }
        v26 = (_RTL_BALANCED_NODE *)((unsigned __int64)v25 ^ (unsigned __int64)v26);
      }
      if ( !v26 )
        goto LABEL_28;
      goto LABEL_36;
    }
    v26 = v25->Children[0];
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
      break;
LABEL_35:
    if ( !v26 )
      goto LABEL_40;
LABEL_36:
    v25 = v26;
  }
  if ( v26 )
  {
    v26 = (_RTL_BALANCED_NODE *)((unsigned __int64)v25 ^ (unsigned __int64)v26);
    goto LABEL_35;
  }
LABEL_40:
  v24 = 0;
LABEL_29:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 144), v25, v24, (PRTL_BALANCED_NODE)v22);
  v27 = *(_QWORD *)(a1 + 160);
  if ( !v27 )
    goto LABEL_39;
  while ( 2 )
  {
    if ( *((_DWORD *)v22 + 12) < *(_DWORD *)(v27 + 24) )
    {
      v28 = *(_QWORD *)v27;
      if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_39;
        v28 ^= v27;
      }
      if ( !v28 )
        goto LABEL_39;
LABEL_33:
      v27 = v28;
      continue;
    }
    break;
  }
  v28 = *(_QWORD *)(v27 + 8);
  if ( (*(_BYTE *)(a1 + 168) & 1) == 0 )
  {
LABEL_32:
    if ( !v28 )
      goto LABEL_41;
    goto LABEL_33;
  }
  if ( v28 )
  {
    v28 ^= v27;
    goto LABEL_32;
  }
LABEL_41:
  v5 = 1;
LABEL_39:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v27, v5, (PRTL_BALANCED_NODE)v22 + 1);
}
