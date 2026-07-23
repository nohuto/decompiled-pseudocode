/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x14011A84C
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400C300C (MiBitmapsCachedEntryLengthChanged.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  BOOLEAN v5; // bl
  int v8; // r8d
  int v9; // ecx
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 *v12; // rax
  __int64 v13; // rdi
  int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // r10d
  int v18; // ecx
  _RTL_BALANCED_NODE **v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  _RTL_BALANCED_NODE *v22; // r14
  _RTL_BALANCED_NODE *v23; // r8
  BOOLEAN v24; // r8
  _RTL_BALANCED_NODE *v25; // rdx
  _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax

  v5 = 0;
  if ( !a4 )
  {
    v13 = *(_QWORD *)(a1 + 160);
    v14 = *(_BYTE *)(a1 + 168) & 1;
    if ( !v13 )
      return;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v13 + 24);
      if ( a2 + a3 <= v15 )
      {
        v16 = *(_QWORD *)v13;
      }
      else
      {
        if ( a2 < *(_DWORD *)(v13 + 28) + v15 )
        {
          a4 = v13 - 24;
          break;
        }
        v16 = *(_QWORD *)(v13 + 8);
      }
      if ( v14 && v16 )
        v13 ^= v16;
      else
        v13 = v16;
      if ( !v13 )
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
      v11 = a1 + 176;
      v12 = *(unsigned __int64 **)(v11 + 8);
      if ( *v12 != v11 )
        __fastfail(3u);
      *(_QWORD *)a4 = v11;
      *(_QWORD *)(a4 + 8) = v12;
      *v12 = a4;
      *(_QWORD *)(v11 + 8) = a4;
      return;
    }
LABEL_6:
    MiBitmapsCachedEntryLengthChanged((_RTL_RB_TREE *)a1, v10, 0);
    return;
  }
  v19 = (_RTL_BALANCED_NODE **)(a1 + 176);
  v20 = v18 - a2 - a3;
  v21 = a2 - v8;
  if ( *v19 == (_RTL_BALANCED_NODE *)v19 )
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
  v22 = *v19;
  if ( (_RTL_BALANCED_NODE **)(*v19)->Children[1] != v19
    || (v23 = v22->Children[0], v22->Children[0]->Children[1] != v22) )
  {
    __fastfail(3u);
  }
  *v19 = v23;
  v23->Children[1] = (_RTL_BALANCED_NODE *)v19;
  HIDWORD(v22[2].Left) = v20;
  LODWORD(v22[2].Children[0]) = v17;
  *(_DWORD *)(a4 + 52) = v21;
  MiBitmapsCachedEntryLengthChanged((_RTL_RB_TREE *)a1, a4, 0);
  v24 = 0;
  v25 = *(_RTL_BALANCED_NODE **)(a1 + 144);
  if ( !v25 )
    goto LABEL_32;
  while ( v22[2].Children[0] < v25[2].Children[0] )
  {
    v26 = v25->Children[0];
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
    {
      if ( !v26 )
      {
LABEL_31:
        v24 = 0;
        goto LABEL_32;
      }
      v26 = (_RTL_BALANCED_NODE *)((unsigned __int64)v25 ^ (unsigned __int64)v26);
    }
    if ( !v26 )
      goto LABEL_31;
LABEL_28:
    v25 = v26;
  }
  v26 = v25->Children[1];
  if ( (*(_BYTE *)(a1 + 152) & 1) == 0 )
  {
LABEL_27:
    if ( !v26 )
      goto LABEL_49;
    goto LABEL_28;
  }
  if ( v26 )
  {
    v26 = (_RTL_BALANCED_NODE *)((unsigned __int64)v25 ^ (unsigned __int64)v26);
    goto LABEL_27;
  }
LABEL_49:
  v24 = 1;
LABEL_32:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 144), v25, v24, v22);
  v27 = *(_QWORD *)(a1 + 160);
  if ( !v27 )
    goto LABEL_39;
  while ( 2 )
  {
    if ( LODWORD(v22[2].Children[0]) < *(_DWORD *)(v27 + 24) )
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
LABEL_36:
      v27 = v28;
      continue;
    }
    break;
  }
  v28 = *(_QWORD *)(v27 + 8);
  if ( (*(_BYTE *)(a1 + 168) & 1) == 0 )
  {
LABEL_35:
    if ( !v28 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( v28 )
  {
    v28 ^= v27;
    goto LABEL_35;
  }
LABEL_42:
  v5 = 1;
LABEL_39:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)v27, v5, v22 + 1);
}
