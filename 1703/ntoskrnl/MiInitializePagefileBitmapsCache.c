/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x14015988C
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x1401597E0 (MiRescanPagefileBitmaps.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

BOOLEAN __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  BOOLEAN v1; // bl
  __int64 v2; // r14
  _RTL_RB_TREE *v3; // r12
  _RTL_BALANCED_NODE *v4; // rsi
  _RTL_BALANCED_NODE *v6; // rdi
  _RTL_BALANCED_NODE *v7; // rbp
  _RTL_BALANCED_NODE *v8; // rax
  BOOLEAN v9; // r8
  unsigned __int64 v10; // rdx
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN result; // al
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *v14; // rax

  v1 = 0;
  v2 = a1 + 144;
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
  v9 = 0;
  HIDWORD(v6[2].Left) = -1;
  LODWORD(v6[2].Children[0]) = -1;
  v10 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
      {
        if ( !v13 )
          break;
        v13 ^= v10;
      }
      if ( !v13 )
        break;
      v10 = v13;
    }
    v9 = 1;
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v2, (PRTL_BALANCED_NODE)v10, v9, v6);
  Root = v3->Root;
  if ( v3->Root )
  {
    while ( 1 )
    {
      if ( LODWORD(v6[2].Children[0]) < LODWORD(Root[1].Children[0]) )
      {
        v14 = Root->Children[0];
        if ( (*(_BYTE *)&v3->0 & 1) != 0 )
        {
          if ( !v14 )
            break;
          v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v14);
        }
        if ( !v14 )
          break;
      }
      else
      {
        v14 = Root->Children[1];
        if ( (*(_BYTE *)&v3->0 & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_21;
          v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v14);
        }
        if ( !v14 )
        {
LABEL_21:
          v1 = 1;
          break;
        }
      }
      Root = v14;
    }
  }
  result = RtlRbInsertNodeEx(v3, Root, v1, v6 + 1);
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
