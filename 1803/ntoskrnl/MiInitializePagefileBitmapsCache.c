/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x14017DFE4
 * Callers:
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 *     MiRescanPagefileBitmaps @ 0x14017DE34 (MiRescanPagefileBitmaps.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

BOOLEAN __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  BOOLEAN v1; // bl
  _RTL_RB_TREE *v2; // r14
  _RTL_RB_TREE *v3; // r15
  _RTL_BALANCED_NODE *v4; // rsi
  _RTL_BALANCED_NODE *v6; // rdi
  _RTL_BALANCED_NODE *v7; // rbp
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  _RTL_BALANCED_NODE *v17; // rax
  BOOLEAN result; // al

  v1 = 0;
  v2 = (_RTL_RB_TREE *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = (_RTL_RB_TREE *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = (_RTL_BALANCED_NODE *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v6 = *(_RTL_BALANCED_NODE **)(a1 + 192);
  v7 = (_RTL_BALANCED_NODE *)((char *)v6 + 28616);
  memset(v6, 0, 0x7000uLL);
  while ( v6 < v7 )
  {
    v8 = v4->Children[1];
    if ( v8->Children[0] != v4 )
      __fastfail(3u);
    v6->Children[0] = v4;
    v6->Children[1] = v8;
    v8->Children[0] = v6;
    v4->Children[1] = v6;
    v6 = (_RTL_BALANCED_NODE *)((char *)v6 + 56);
  }
  HIDWORD(v6[2].Left) = -1;
  LODWORD(v6[2].Children[0]) = -1;
  Min = v2->Min;
  Root = (unsigned __int64)v2->Root;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)v2;
    else
      Root = 0LL;
  }
  v11 = 0;
  v12 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(Root + 8);
      if ( v12 )
      {
        if ( !v13 )
          break;
        v13 ^= Root;
      }
      if ( !v13 )
        break;
      Root = v13;
    }
    v11 = 1;
  }
  RtlRbInsertNodeEx(v2, (PRTL_BALANCED_NODE)Root, v11, v6);
  v14 = v3->Min;
  v15 = (unsigned __int64)v3->Root;
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( v15 )
      v15 ^= (unsigned __int64)v3;
    else
      v15 = 0LL;
  }
  v16 = (unsigned __int8)v14 & 1;
  if ( v15 )
  {
    while ( 1 )
    {
      if ( LODWORD(v6[2].Children[0]) < *(_DWORD *)(v15 + 24) )
      {
        v17 = *(_RTL_BALANCED_NODE **)v15;
        if ( v16 )
        {
          if ( !v17 )
            break;
          v17 = (_RTL_BALANCED_NODE *)(v15 ^ (unsigned __int64)v17);
        }
        if ( !v17 )
          break;
      }
      else
      {
        v17 = *(_RTL_BALANCED_NODE **)(v15 + 8);
        if ( v16 )
        {
          if ( !v17 )
            goto LABEL_27;
          v17 = (_RTL_BALANCED_NODE *)(v15 ^ (unsigned __int64)v17);
        }
        if ( !v17 )
        {
LABEL_27:
          v1 = 1;
          break;
        }
      }
      v15 = (unsigned __int64)v17;
    }
  }
  result = RtlRbInsertNodeEx(v3, (PRTL_BALANCED_NODE)v15, v1, v6 + 1);
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
