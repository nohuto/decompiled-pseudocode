/*
 * XREFs of RtlRbInsertNodeEx @ 0x180021C90
 * Callers:
 *     sub_180005E60 @ 0x180005E60 (sub_180005E60.c)
 *     sub_18001F734 @ 0x18001F734 (sub_18001F734.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_18002235C @ 0x18002235C (sub_18002235C.c)
 *     sub_1800235C8 @ 0x1800235C8 (sub_1800235C8.c)
 *     sub_1800241D0 @ 0x1800241D0 (sub_1800241D0.c)
 *     sub_18004334C @ 0x18004334C (sub_18004334C.c)
 *     sub_18005E81C @ 0x18005E81C (sub_18005E81C.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *v4; // r14
  unsigned __int64 v7; // r10
  char Min; // cl
  char v9; // r8
  unsigned __int64 ParentValue; // rax
  _RTL_BALANCED_NODE *v11; // rcx
  unsigned __int64 v12; // rax
  PRTL_BALANCED_NODE v13; // rcx
  char v14; // bl
  _RTL_BALANCED_NODE *v15; // rdx
  char v16; // r8
  unsigned __int64 v17; // rcx
  BOOL v18; // eax
  _BOOL8 v19; // rcx
  _BOOL8 v20; // rbp
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // rax
  int v23; // r8d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rdi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 Root; // r9
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  int v39; // r8d
  _RTL_BALANCED_NODE **v40; // rsi
  _RTL_BALANCED_NODE *v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  _RTL_BALANCED_NODE *v47; // rcx
  ULONG_PTR v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx

  v4 = 0LL;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v7 = (unsigned __int64)Parent;
  Min = (char)Tree->Min;
  v9 = Min & 1;
  if ( !Parent )
  {
    ParentValue = (unsigned __int64)Tree ^ (unsigned __int64)Node;
    if ( v9 )
    {
      Tree->Root = (PRTL_BALANCED_NODE)ParentValue;
      Min = (char)Tree->Min;
    }
    else
    {
      Tree->Root = Node;
    }
    if ( (Min & 1) != 0 )
    {
      Tree->Min = (PRTL_BALANCED_NODE)ParentValue;
      LOBYTE(ParentValue) = ParentValue | 1;
      LOBYTE(Tree->Min) = ParentValue;
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return ParentValue;
  }
  v11 = Node;
  if ( v9 )
    v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)Node);
  Parent->Children[Right] = v11;
  v12 = (unsigned __int64)Parent;
  if ( ((__int64)Tree->Min & 1) != 0 )
    v12 = (unsigned __int64)Parent ^ (unsigned __int64)Node;
  ParentValue = v12 | 1;
  Node->ParentValue = ParentValue;
  if ( !Right )
  {
    v13 = Tree->Min;
    if ( ((unsigned __int8)v13 & 1) != 0 )
      ParentValue = v13 == (PRTL_BALANCED_NODE)1 ? 0LL : (unsigned __int64)v13 ^ ((unsigned __int64)Tree | 1);
    else
      ParentValue = (unsigned __int64)Tree->Min;
    if ( Parent == (PRTL_BALANCED_NODE)ParentValue )
    {
      if ( ((unsigned __int8)v13 & 1) != 0 )
      {
        Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(ParentValue) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        LOBYTE(Tree->Min) = ParentValue;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->16 & 1) != 0 )
  {
    v14 = (char)Tree->Min;
    while ( 1 )
    {
      v15 = (_RTL_BALANCED_NODE *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
      v16 = v14 & 1;
      if ( (v14 & 1) != 0 && v15 )
        v15 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v15);
      v17 = (unsigned __int64)v15->Children[0];
      if ( v16 && v17 )
        v17 ^= (unsigned __int64)v15;
      v18 = v17 != v7;
      v19 = v17 == v7;
      v20 = v18;
      v21 = (unsigned __int64)v15->Children[v19];
      if ( v16 )
      {
        if ( !v21 )
          break;
        v21 ^= (unsigned __int64)v15;
      }
      if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(v7 + 16) &= ~1u;
      Node = v15;
      *(_BYTE *)(v21 + 16) &= ~1u;
      ParentValue = v15->ParentValue;
      v7 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v7 )
          return ParentValue;
        v7 ^= (unsigned __int64)v15;
      }
      if ( v7 )
      {
        *(_BYTE *)&v15->16 = ParentValue | 1;
        v14 = (char)Tree->Min;
        ParentValue = *(_QWORD *)v7;
        if ( (v14 & 1) != 0 && ParentValue )
          ParentValue ^= v7;
        Right = v15 != (_RTL_BALANCED_NODE *)ParentValue;
        if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
          continue;
      }
      return ParentValue;
    }
    if ( Right == v20 )
    {
LABEL_88:
      Root = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      v37 = (unsigned int)v20 ^ 1;
      v38 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v39 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v38 )
        v38 ^= v7;
      if ( (_RTL_BALANCED_NODE *)v38 != v15 )
        __fastfail(0x1Du);
      v40 = &v15->Children[(unsigned int)v37 ^ 1LL];
      v41 = *v40;
      if ( ((__int64)Tree->Min & 1) != 0 && v41 )
        v41 = (_RTL_BALANCED_NODE *)((unsigned __int64)v15 ^ (unsigned __int64)v41);
      if ( v41 != (_RTL_BALANCED_NODE *)v7 )
        __fastfail(0x1Du);
      v42 = v15->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_107;
        v42 ^= (unsigned __int64)v15;
      }
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v43 )
          v43 ^= v42;
        if ( (_RTL_BALANCED_NODE *)v43 == v15 )
        {
          v44 = v7 ^ v42;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v44 = v7;
          *(_QWORD *)(v42 + 8) = v44;
        }
        else
        {
          v45 = *(_QWORD *)v42;
          if ( ((__int64)Tree->Min & 1) != 0 && v45 )
            v45 ^= v42;
          if ( (_RTL_BALANCED_NODE *)v45 != v15 )
            __fastfail(0x1Du);
          v46 = v7 ^ v42;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v46 = v7;
          *(_QWORD *)v42 = v46;
        }
LABEL_125:
        if ( v39 && v42 )
          v42 ^= v7;
        *(_QWORD *)(v7 + 16) &= 3uLL;
        *(_QWORD *)(v7 + 16) |= v42;
        v47 = *(_RTL_BALANCED_NODE **)(v7 + 8 * v37);
        if ( v39 )
        {
          if ( !v47 )
          {
LABEL_140:
            if ( v39 && v47 )
              v47 = (_RTL_BALANCED_NODE *)((unsigned __int64)v15 ^ (unsigned __int64)v47);
            *v40 = v47;
            v51 = v7 ^ (unsigned __int64)v15;
            ParentValue = v7 ^ (unsigned __int64)v15;
            if ( !v39 )
              ParentValue = (unsigned __int64)v15;
            *(_QWORD *)(v7 + 8 * v37) = ParentValue;
            v15->ParentValue &= 3uLL;
            if ( !v39 )
              v51 = v7;
            v15->ParentValue |= v51;
            if ( ((__int64)Tree->Min & 1) != 0 )
            {
              LOBYTE(ParentValue) = (unsigned __int8)Tree ^ Root;
              if ( Root )
                v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ Root);
            }
            else
            {
              v4 = (_RTL_BALANCED_NODE *)Root;
            }
            Tree->Root = v4;
            *(_BYTE *)&v15->16 |= 1u;
            *(_BYTE *)(v7 + 16) &= ~1u;
            return ParentValue;
          }
          v47 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v47);
        }
        if ( v47 )
        {
          v48 = v47->ParentValue;
          v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v39 && v49 )
            v49 ^= (unsigned __int64)v47;
          if ( v49 != v7 )
            __fastfail(0x1Du);
          v50 = (unsigned __int64)v47 ^ (unsigned __int64)v15;
          if ( !v39 )
            v50 = (unsigned __int64)v15;
          v47->ParentValue = v48 & 3 | v50;
        }
        goto LABEL_140;
      }
LABEL_107:
      if ( (_RTL_BALANCED_NODE *)Root != v15 )
        __fastfail(0x1Du);
      Root = v7;
      goto LABEL_125;
    }
    v22 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v23 = v14 & 1;
    if ( (v14 & 1) != 0 && v22 )
      v22 ^= (unsigned __int64)Node;
    if ( v22 != v7 )
      __fastfail(0x1Du);
    v24 = *(_QWORD *)(v7 + 8 * v19);
    if ( (v14 & 1) != 0 && v24 )
      v24 ^= v7;
    if ( (PRTL_BALANCED_NODE)v24 != Node )
      __fastfail(0x1Du);
    v25 = (unsigned __int64)v15->Children[v20];
    if ( (v14 & 1) != 0 && v25 )
      v25 ^= (unsigned __int64)v15;
    if ( v25 != v7 )
      goto LABEL_91;
    v26 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v14 & 1) != 0 && v26 )
      v26 ^= v7;
    if ( (_RTL_BALANCED_NODE *)v26 != v15 )
LABEL_91:
      __fastfail(0x1Du);
    v27 = (unsigned __int64 *)&Node->Children[v20];
    v28 = (unsigned __int64)v15 ^ (unsigned __int64)Node;
    v29 = (unsigned __int64)v15 ^ (unsigned __int64)Node;
    if ( (v14 & 1) == 0 )
      v29 = (unsigned __int64)Node;
    v15->Children[v20] = (_RTL_BALANCED_NODE *)v29;
    Node->ParentValue &= 3uLL;
    if ( (v14 & 1) == 0 )
      v28 = (unsigned __int64)v15;
    Node->ParentValue |= v28;
    v30 = *v27;
    if ( (v14 & 1) != 0 )
    {
      if ( !v30 )
      {
LABEL_80:
        if ( v23 && v30 )
          v30 ^= v7;
        *(_QWORD *)(v7 + 8 * !v20) = v30;
        v34 = v7 ^ (unsigned __int64)Node;
        v35 = v7 ^ (unsigned __int64)Node;
        if ( !v23 )
          v35 = v7;
        *v27 = v35;
        *(_QWORD *)(v7 + 16) &= 3uLL;
        if ( !v23 )
          v34 = (unsigned __int64)Node;
        *(_QWORD *)(v7 + 16) |= v34;
        v7 = (unsigned __int64)Node;
        goto LABEL_88;
      }
      v30 ^= (unsigned __int64)Node;
    }
    if ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v23 && v32 )
        v32 ^= v30;
      if ( (PRTL_BALANCED_NODE)v32 != Node )
        __fastfail(0x1Du);
      v33 = v30 ^ v7;
      if ( !v23 )
        v33 = v7;
      *(_QWORD *)(v30 + 16) = v31 & 3 | v33;
    }
    goto LABEL_80;
  }
  return ParentValue;
}
