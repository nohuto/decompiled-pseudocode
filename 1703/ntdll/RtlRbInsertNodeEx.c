/*
 * XREFs of RtlRbInsertNodeEx @ 0x18001E790
 * Callers:
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_180009BD0 @ 0x180009BD0 (sub_180009BD0.c)
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18001B91C @ 0x18001B91C (sub_18001B91C.c)
 *     sub_18001BB44 @ 0x18001BB44 (sub_18001BB44.c)
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180052B08 @ 0x180052B08 (sub_180052B08.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 p_ParentValue; // rax
  _RTL_BALANCED_NODE *v6; // r8
  unsigned __int64 v7; // rax
  bool v8; // zf
  char v9; // r11
  _RTL_BALANCED_NODE *v10; // r8
  unsigned __int64 v11; // rbx
  _BOOL8 v12; // rbx
  ULONG_PTR v13; // rax
  int v14; // r10d
  _RTL_BALANCED_NODE **v15; // r14
  unsigned __int64 v16; // rax
  _BOOL8 v17; // rsi
  unsigned __int64 v18; // rax
  ULONG_PTR *v19; // r11
  ULONG_PTR v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE *v24; // rax
  unsigned __int64 v25; // rdx
  BOOL v26; // ebx
  ULONG_PTR v27; // rax
  int v28; // r9d
  _BOOL8 v29; // r11
  _RTL_BALANCED_NODE **v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  _RTL_BALANCED_NODE *v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  ULONG_PTR v40; // rdi
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r10
  ULONG_PTR v43; // rbp
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rdi

  Node->0 = 0uLL;
  if ( Parent )
  {
    if ( ((__int64)Tree->Min & 1) != 0 )
      v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
    else
      v6 = Node;
    Parent->Children[Right] = v6;
    v7 = (unsigned __int64)Parent;
    if ( ((__int64)Tree->Min & 1) != 0 )
      v7 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
    p_ParentValue = v7 | 1;
    Node->ParentValue = p_ParentValue;
    if ( !Right )
    {
      p_ParentValue = (unsigned __int64)Tree->Min & 0xFFFFFFFFFFFFFFFEuLL;
      if ( Parent == (PRTL_BALANCED_NODE)p_ParentValue )
      {
        v8 = ((__int64)Tree->Min & 1) == 0;
        Tree->Min = Node;
        if ( !v8 )
          LOBYTE(Tree->Min) |= 1u;
      }
    }
    if ( (*(_BYTE *)&Parent->16 & 1) == 0 )
      return p_ParentValue;
    v9 = (__int64)Tree->Min & 1;
    while ( 1 )
    {
      v10 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v9 && v10 )
        v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v10);
      v11 = (unsigned __int64)v10->Children[0];
      if ( v9 && v11 )
        v11 ^= (unsigned __int64)v10;
      v12 = v11 != (_QWORD)Parent;
      p_ParentValue = (unsigned __int64)v10->Children[!v12];
      if ( v9 )
      {
        if ( !p_ParentValue )
          break;
        p_ParentValue ^= (unsigned __int64)v10;
      }
      if ( !p_ParentValue || (*(_BYTE *)(p_ParentValue + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->16 &= ~1u;
      Node = v10;
      *(_BYTE *)(p_ParentValue + 16) &= ~1u;
      Parent = (PRTL_BALANCED_NODE)(v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !Parent )
          return p_ParentValue;
        Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v10 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        *(_BYTE *)&v10->16 |= 1u;
        p_ParentValue = (unsigned __int64)Parent->Children[0];
        v9 = (__int64)Tree->Min & 1;
        if ( v9 && p_ParentValue )
          p_ParentValue ^= (unsigned __int64)Parent;
        Right = v10 != (_RTL_BALANCED_NODE *)p_ParentValue;
        if ( (*(_BYTE *)&Parent->16 & 1) != 0 )
          continue;
      }
      return p_ParentValue;
    }
    if ( Right == v12 )
    {
LABEL_38:
      v26 = !v12;
      v27 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v28 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v27 )
        v27 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v27 != v10 )
        __fastfail(0x1Du);
      v29 = v26;
      v30 = &v10->Children[!v26];
      v31 = (unsigned __int64)*v30;
      if ( ((__int64)Tree->Min & 1) != 0 && v31 )
        v31 ^= (unsigned __int64)v10;
      if ( (PRTL_BALANCED_NODE)v31 != Parent )
        __fastfail(0x1Du);
      p_ParentValue = (unsigned __int64)&v10->ParentValue;
      v32 = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v32 )
          goto LABEL_83;
        v32 ^= (unsigned __int64)v10;
      }
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 8);
        if ( v28 && v33 )
          v33 ^= v32;
        if ( (_RTL_BALANCED_NODE *)v33 == v10 )
        {
          if ( v28 )
            v34 = (unsigned __int64)Parent ^ v32;
          else
            v34 = (unsigned __int64)Parent;
          *(_QWORD *)(v32 + 8) = v34;
        }
        else
        {
          v38 = *(_QWORD *)v32;
          if ( v28 && v38 )
            v38 ^= v32;
          if ( (_RTL_BALANCED_NODE *)v38 != v10 )
            __fastfail(0x1Du);
          if ( v28 )
            v39 = (unsigned __int64)Parent ^ v32;
          else
            v39 = (unsigned __int64)Parent;
          *(_QWORD *)v32 = v39;
        }
        goto LABEL_49;
      }
LABEL_83:
      if ( Tree->Root != v10 )
        __fastfail(0x1Du);
      Tree->Root = Parent;
LABEL_49:
      if ( v28 && v32 )
        v32 ^= (unsigned __int64)Parent;
      Parent->ParentValue &= 3uLL;
      Parent->ParentValue |= v32;
      v35 = (unsigned __int64)Parent->Children[v29];
      if ( v28 )
      {
        if ( !v35 )
        {
LABEL_52:
          if ( v28 && v35 )
            v35 ^= (unsigned __int64)v10;
          *v30 = (_RTL_BALANCED_NODE *)v35;
          v36 = v10;
          if ( v28 )
            v36 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v10);
          Parent->Children[v29] = v36;
          if ( v28 )
            v37 = (unsigned __int64)Parent ^ (unsigned __int64)v10;
          else
            v37 = (unsigned __int64)Parent;
          *(_QWORD *)p_ParentValue &= 3uLL;
          *(_QWORD *)p_ParentValue |= v37;
          *(_BYTE *)p_ParentValue |= 1u;
          *(_BYTE *)&Parent->16 &= ~1u;
          return p_ParentValue;
        }
        v35 ^= (unsigned __int64)Parent;
      }
      if ( v35 )
      {
        v40 = *(_QWORD *)(v35 + 16);
        v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v28 && v41 )
          v41 ^= v35;
        if ( (PRTL_BALANCED_NODE)v41 != Parent )
          __fastfail(0x1Du);
        if ( v28 )
          v42 = (unsigned __int64)v10 ^ v35;
        else
          v42 = (unsigned __int64)v10;
        *(_QWORD *)(v35 + 16) = v42 | v40 & 3;
      }
      goto LABEL_52;
    }
    v13 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v14 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v13 )
      v13 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v13 != Parent )
      __fastfail(0x1Du);
    v15 = &Parent->Children[!v12];
    v16 = (unsigned __int64)*v15;
    if ( ((__int64)Tree->Min & 1) != 0 && v16 )
      v16 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v16 != Node )
      __fastfail(0x1Du);
    v17 = v12;
    v18 = (unsigned __int64)v10->Children[v12];
    if ( ((__int64)Tree->Min & 1) != 0 && v18 )
      v18 ^= (unsigned __int64)v10;
    if ( (PRTL_BALANCED_NODE)v18 != Parent )
      goto LABEL_117;
    v19 = &Parent->ParentValue;
    v20 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v20 != v10 )
LABEL_117:
      __fastfail(0x1Du);
    if ( ((__int64)Tree->Min & 1) != 0 )
      v21 = (unsigned __int64)Node ^ (unsigned __int64)v10;
    else
      v21 = (unsigned __int64)Node;
    v10->Children[v17] = (_RTL_BALANCED_NODE *)v21;
    v22 = (unsigned __int64)v10;
    if ( v14 )
      v22 = (unsigned __int64)Node ^ (unsigned __int64)v10;
    Node->ParentValue &= 3uLL;
    Node->ParentValue |= v22;
    v23 = (unsigned __int64)Node->Children[v17];
    if ( v14 )
    {
      if ( !v23 )
      {
LABEL_32:
        if ( v14 && v23 )
          v23 ^= (unsigned __int64)Parent;
        *v15 = (_RTL_BALANCED_NODE *)v23;
        v24 = Parent;
        if ( v14 )
          v24 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
        Node->Children[v17] = v24;
        if ( v14 )
          v25 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
        else
          v25 = (unsigned __int64)Node;
        *v19 &= 3uLL;
        *v19 |= v25;
        Parent = Node;
        goto LABEL_38;
      }
      v23 ^= (unsigned __int64)Node;
    }
    if ( v23 )
    {
      v43 = *(_QWORD *)(v23 + 16);
      v44 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v14 && v44 )
        v44 ^= v23;
      if ( (PRTL_BALANCED_NODE)v44 != Node )
        __fastfail(0x1Du);
      if ( v14 )
        v45 = (unsigned __int64)Parent ^ v23;
      else
        v45 = (unsigned __int64)Parent;
      *(_QWORD *)(v23 + 16) = v45 | v43 & 3;
    }
    goto LABEL_32;
  }
  v8 = ((__int64)Tree->Min & 1) == 0;
  Tree->Min = Node;
  Tree->Root = Node;
  if ( !v8 )
    LOBYTE(Tree->Min) |= 1u;
  Node->ParentValue = 0LL;
  return p_ParentValue;
}
