/*
 * XREFs of RtlRbRemoveNode @ 0x180021260
 * Callers:
 *     sub_180005D90 @ 0x180005D90 (sub_180005D90.c)
 *     sub_180008170 @ 0x180008170 (sub_180008170.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180022300 @ 0x180022300 (sub_180022300.c)
 *     sub_180023F18 @ 0x180023F18 (sub_180023F18.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_18005E8BC @ 0x18005E8BC (sub_18005E8BC.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  char Min; // di
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdx
  _RTL_BALANCED_NODE *v8; // r14
  char v9; // di
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rax
  _BOOL8 v12; // r15
  PRTL_BALANCED_NODE v13; // r9
  _RTL_BALANCED_NODE *v14; // r8
  _RTL_BALANCED_NODE *v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // dl
  unsigned __int64 v23; // rax
  char v24; // cl
  _RTL_BALANCED_NODE *v25; // rax
  bool v26; // zf
  ULONG_PTR ParentValue; // rcx
  char v28; // di
  unsigned __int64 v29; // rax
  char v30; // si
  unsigned __int64 v31; // r11
  ULONG_PTR v32; // rax
  ULONG_PTR v33; // rcx
  ULONG_PTR v34; // rcx
  PRTL_BALANCED_NODE v35; // r11
  unsigned __int64 v36; // rax
  _RTL_BALANCED_NODE *v37; // rax
  char v38; // si
  ULONG_PTR v39; // r11
  __int64 v40; // rax
  PRTL_BALANCED_NODE *v41; // r11
  ULONG_PTR v42; // rax
  PRTL_BALANCED_NODE v43; // rcx
  PRTL_BALANCED_NODE v44; // rcx
  unsigned __int64 Root; // rax
  unsigned __int64 v46; // rcx
  char v47; // cl
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  PRTL_BALANCED_NODE v50; // rcx
  _RTL_BALANCED_NODE *v51; // rax
  char v52; // di
  _RTL_BALANCED_NODE *v53; // rcx
  char v54; // cl
  char v55; // cl
  _RTL_BALANCED_NODE *v56; // rsi
  __int64 v57; // rbp
  unsigned __int64 v58; // rax
  _RTL_BALANCED_NODE *v59; // rdx
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // rcx
  int v62; // r9d
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  ULONG_PTR v69; // r11
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  _RTL_BALANCED_NODE *v73; // rax
  _RTL_BALANCED_NODE *v74; // rcx
  _RTL_BALANCED_NODE *v75; // rax
  char v76; // cl
  _RTL_BALANCED_NODE *v77; // rax
  char v78; // al
  unsigned __int64 v79; // rax
  _RTL_BALANCED_NODE *v80; // r10
  _RTL_BALANCED_NODE *v81; // r9
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r10d
  __int64 v85; // r11
  _RTL_BALANCED_NODE **v86; // rsi
  _RTL_BALANCED_NODE *v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rcx
  _RTL_BALANCED_NODE *v91; // rax
  _RTL_BALANCED_NODE **v92; // rdi
  _RTL_BALANCED_NODE *v93; // rcx
  ULONG_PTR v94; // r11
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  _RTL_BALANCED_NODE *v98; // rax
  unsigned __int64 v99; // r10
  unsigned __int64 v100; // rax
  int v101; // r9d
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rcx
  ULONG_PTR v109; // r11
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx

  Min = (char)Tree->Min;
  v4 = (unsigned __int64)Node->Children[0];
  if ( (Min & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)Node;
  v6 = (unsigned __int64)Node->Children[1];
  if ( (Min & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)Node;
  v7 = v6;
  if ( v4 )
    v7 = v4;
  v8 = 0LL;
  v9 = Min & 1;
  v10 = 0LL;
  if ( v4 )
    v10 = v6;
  if ( !v10 )
  {
    v14 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v9 && v14 )
      v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v14);
    v13 = Node;
    if ( !v14 )
    {
      if ( v7 )
        *(_QWORD *)(v7 + 16) = 0LL;
      v44 = Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( ((unsigned __int8)v44 & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      if ( (PRTL_BALANCED_NODE)Root != Node )
        __fastfail(0x1Du);
      if ( ((unsigned __int8)v44 & 1) != 0 )
      {
        v46 = 0LL;
        LOBYTE(Root) = v7 ^ (unsigned __int8)Tree;
        if ( v7 )
          v46 = v7 ^ (unsigned __int64)Tree;
        Tree->Min = (PRTL_BALANCED_NODE)v46;
        v47 = v46 | 1;
        LOBYTE(Tree->Min) = v47;
      }
      else
      {
        Tree->Min = (PRTL_BALANCED_NODE)v7;
        v47 = v7;
      }
      if ( (v47 & 1) != 0 )
      {
        LOBYTE(Root) = v7 ^ (unsigned __int8)Tree;
        if ( v7 )
          v8 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)Tree);
        Tree->Root = v8;
      }
      else
      {
        Tree->Root = (PRTL_BALANCED_NODE)v7;
      }
      return Root;
    }
    v48 = (unsigned __int64)v14->Children[1];
    if ( v9 && v48 )
      v48 ^= (unsigned __int64)v14;
    if ( (PRTL_BALANCED_NODE)v48 == Node )
    {
      LODWORD(v12) = 1;
    }
    else
    {
      v49 = (unsigned __int64)v14->Children[0];
      if ( v9 && v49 )
        v49 ^= (unsigned __int64)v14;
      if ( (PRTL_BALANCED_NODE)v49 != Node )
        __fastfail(0x1Du);
      v50 = Tree->Min;
      LODWORD(v12) = 0;
      if ( ((unsigned __int8)v50 & 1) != 0 )
      {
        if ( v50 == (PRTL_BALANCED_NODE)1 )
          v51 = 0LL;
        else
          v51 = (_RTL_BALANCED_NODE *)((unsigned __int64)v50 ^ ((unsigned __int64)Tree | 1));
      }
      else
      {
        v51 = Tree->Min;
      }
      if ( v51 == Node )
      {
        if ( v7 )
        {
          if ( ((unsigned __int8)v50 & 1) != 0 )
          {
            Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Tree ^ v7);
            LOBYTE(Tree->Min) = (unsigned __int8)Tree ^ v7 | 1;
          }
          else
          {
            Tree->Min = (PRTL_BALANCED_NODE)v7;
          }
        }
        else if ( ((unsigned __int8)v50 & 1) != 0 )
        {
          Tree->Min = (PRTL_BALANCED_NODE)((unsigned __int64)Tree ^ (unsigned __int64)v14);
          LOBYTE(Tree->Min) = (unsigned __int8)Tree ^ (unsigned __int8)v14 | 1;
        }
        else
        {
          Tree->Min = v14;
        }
      }
    }
    v28 = (char)Node->16;
    goto LABEL_129;
  }
  v11 = *(_RTL_BALANCED_NODE **)v6;
  LODWORD(v12) = 1;
  v13 = (PRTL_BALANCED_NODE)v6;
  v14 = (_RTL_BALANCED_NODE *)v6;
  if ( *(_QWORD *)v6 )
  {
    LODWORD(v12) = 0;
    do
    {
      v14 = v13;
      if ( v9 && v11 )
        v13 = (PRTL_BALANCED_NODE)((unsigned __int64)v11 ^ (unsigned __int64)v13);
      else
        v13 = v11;
      v11 = v13->Children[0];
    }
    while ( v13->Children[0] );
  }
  if ( v9 && v4 )
    v15 = (_RTL_BALANCED_NODE *)(v4 ^ (unsigned __int64)v13);
  else
    v15 = (_RTL_BALANCED_NODE *)v4;
  v13->Children[0] = v15;
  v16 = *(_QWORD *)(v4 + 16);
  v17 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = (__int64)Tree->Min & 1;
  if ( v18 && v17 )
    v17 ^= v4;
  if ( (PRTL_BALANCED_NODE)v17 != Node )
    __fastfail(0x1Du);
  v19 = v4 ^ (unsigned __int64)v13;
  if ( !v18 )
    v19 = (unsigned __int64)v13;
  *(_QWORD *)(v4 + 16) = v16 & 3 | v19;
  v20 = *(_QWORD *)(v6 + 16);
  v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
  v22 = (__int64)Tree->Min & 1;
  if ( v22 && v21 )
    v21 ^= v6;
  if ( (PRTL_BALANCED_NODE)v21 != Node )
    __fastfail(0x1Du);
  v23 = v6 ^ (unsigned __int64)v13;
  if ( !v22 )
    v23 = (unsigned __int64)v13;
  *(_QWORD *)(v6 + 16) = v20 & 3 | v23;
  v7 = (unsigned __int64)v13->Children[1];
  v24 = (__int64)Tree->Min & 1;
  if ( v24 && v7 )
    v7 ^= (unsigned __int64)v13;
  v25 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v13);
  v26 = v24 == 0;
  ParentValue = v13->ParentValue;
  v28 = ParentValue;
  if ( v26 )
    v25 = (_RTL_BALANCED_NODE *)v6;
  v13->Children[1] = v25;
  v29 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v30 = (__int64)Tree->Min & 1;
  if ( v30 && v29 )
    v31 = (unsigned __int64)v13 ^ v29;
  else
    v31 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (_RTL_BALANCED_NODE *)v31 != v14 )
  {
    v28 = ParentValue;
    if ( v30 )
    {
      if ( !v29 )
        goto LABEL_51;
      v29 ^= (unsigned __int64)v13;
    }
    if ( v29 )
      goto LABEL_52;
LABEL_51:
    if ( v13 != v14 )
LABEL_52:
      __fastfail(0x1Du);
  }
  v32 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v30 )
  {
    if ( v32 )
      v32 ^= (unsigned __int64)Node;
    if ( v32 )
      v32 ^= (unsigned __int64)v13;
  }
  v33 = v32 | ParentValue & 3;
  v13->ParentValue = v33;
  *(_BYTE *)&v13->16 = v33 ^ (v33 ^ *(_BYTE *)&Node->16) & 1;
  v34 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v34 )
  {
    v38 = (__int64)Tree->Min & 1;
    if ( v38 )
      v34 ^= (unsigned __int64)Node;
    v39 = *(_QWORD *)(v34 + 8);
    if ( v38 && v39 )
      v39 ^= v34;
    v40 = 0LL;
    if ( (PRTL_BALANCED_NODE)v39 == Node )
      v40 = 8LL;
    v41 = (PRTL_BALANCED_NODE *)(v40 + v34);
    v42 = *(_QWORD *)(v40 + v34);
    if ( v38 && v42 )
      v42 ^= v34;
    if ( (PRTL_BALANCED_NODE)v42 != Node )
      __fastfail(0x1Du);
    v43 = (PRTL_BALANCED_NODE)((unsigned __int64)v13 ^ v34);
    if ( !v38 )
      v43 = v13;
    *v41 = v43;
  }
  else
  {
    v35 = Tree->Min;
    v36 = (unsigned __int64)Tree->Root;
    if ( ((unsigned __int8)v35 & 1) != 0 )
    {
      if ( v36 )
        v36 ^= (unsigned __int64)Tree;
      else
        v36 = 0LL;
    }
    if ( (PRTL_BALANCED_NODE)v36 != Node )
      __fastfail(0x1Du);
    v37 = v13;
    if ( ((unsigned __int8)v35 & 1) != 0 )
      v37 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v13);
    Tree->Root = v37;
  }
LABEL_129:
  v52 = v28 & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v7 )
    v53 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v14);
  else
    v53 = (_RTL_BALANCED_NODE *)v7;
  LOBYTE(Root) = v12;
  v14->Children[v12] = v53;
  if ( v7 )
  {
    Root = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v54 = (__int64)Tree->Min & 1;
    if ( v54 && Root )
      Root ^= v7;
    if ( (PRTL_BALANCED_NODE)Root != v13 )
      __fastfail(0x1Du);
    if ( v54 && v14 )
      v14 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v14);
    *(_QWORD *)(v7 + 16) = v14;
    return Root;
  }
  if ( v52 )
    return Root;
  v55 = (char)Tree->Min;
  while ( 1 )
  {
    v56 = v14;
    v57 = !v12;
    v58 = (unsigned __int64)v14->Children[v57];
    if ( (v55 & 1) != 0 && v58 )
      v59 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ v58);
    else
      v59 = v14->Children[v57];
    if ( (*(_BYTE *)&v59->16 & 1) == 0 )
      goto LABEL_211;
    v60 = (unsigned __int64)Tree->Root;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( v60 )
        v60 ^= (unsigned __int64)Tree;
      else
        v60 = 0LL;
    }
    v61 = v59->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v62 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v61 )
      v61 ^= (unsigned __int64)v59;
    if ( (_RTL_BALANCED_NODE *)v61 != v14 )
      __fastfail(0x1Du);
    if ( ((__int64)Tree->Min & 1) != 0 && v58 )
      v58 ^= (unsigned __int64)v14;
    if ( (_RTL_BALANCED_NODE *)v58 != v59 )
      __fastfail(0x1Du);
    v63 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( !v63 )
        goto LABEL_166;
      v63 ^= (unsigned __int64)v14;
    }
    if ( !v63 )
    {
LABEL_166:
      if ( (_RTL_BALANCED_NODE *)v60 != v14 )
        __fastfail(0x1Du);
      v60 = (unsigned __int64)v59;
      goto LABEL_182;
    }
    v64 = *(_QWORD *)(v63 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v64 )
      v64 ^= v63;
    if ( (_RTL_BALANCED_NODE *)v64 == v14 )
    {
      v65 = (unsigned __int64)v59 ^ v63;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v65 = (unsigned __int64)v59;
      *(_QWORD *)(v63 + 8) = v65;
    }
    else
    {
      v66 = *(_QWORD *)v63;
      if ( ((__int64)Tree->Min & 1) != 0 && v66 )
        v66 ^= v63;
      if ( (_RTL_BALANCED_NODE *)v66 != v14 )
        __fastfail(0x1Du);
      v67 = (unsigned __int64)v59 ^ v63;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v67 = (unsigned __int64)v59;
      *(_QWORD *)v63 = v67;
    }
LABEL_182:
    if ( v62 && v63 )
      v63 ^= (unsigned __int64)v59;
    v59->ParentValue &= 3uLL;
    v59->ParentValue |= v63;
    v68 = (unsigned __int64)v59->Children[v12];
    if ( !v62 )
      goto LABEL_188;
    if ( v68 )
    {
      v68 ^= (unsigned __int64)v59;
LABEL_188:
      if ( v68 )
      {
        v69 = *(_QWORD *)(v68 + 16);
        v70 = v69 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v62 && v70 )
          v70 ^= v68;
        if ( (_RTL_BALANCED_NODE *)v70 != v59 )
          __fastfail(0x1Du);
        v71 = v68 ^ (unsigned __int64)v14;
        if ( !v62 )
          v71 = (unsigned __int64)v14;
        *(_QWORD *)(v68 + 16) = v69 & 3 | v71;
      }
    }
    if ( v62 && v68 )
      v68 ^= (unsigned __int64)v14;
    v14->Children[v57] = (_RTL_BALANCED_NODE *)v68;
    v72 = (unsigned __int64)v14 ^ (unsigned __int64)v59;
    v73 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ (unsigned __int64)v59);
    if ( !v62 )
      v73 = v14;
    v59->Children[v12] = v73;
    v14->ParentValue &= 3uLL;
    if ( !v62 )
      v72 = (unsigned __int64)v59;
    v14->ParentValue |= v72;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      v74 = 0LL;
      if ( v60 )
        v74 = (_RTL_BALANCED_NODE *)(v60 ^ (unsigned __int64)Tree);
    }
    else
    {
      v74 = (_RTL_BALANCED_NODE *)v60;
    }
    Tree->Root = v74;
    *(_BYTE *)&v59->16 &= ~1u;
    *(_BYTE *)&v14->16 |= 1u;
    v55 = (char)Tree->Min;
    v59 = v14->Children[v57];
    if ( (v55 & 1) != 0 && v59 )
      v59 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ (unsigned __int64)v59);
LABEL_211:
    v75 = v59->Children[0];
    v76 = v55 & 1;
    if ( v59->Children[0] )
    {
      if ( v76 )
        v75 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v75);
      if ( (*(_BYTE *)&v75->16 & 1) != 0 )
        break;
    }
    v77 = v59->Children[1];
    if ( v77 )
    {
      if ( v76 )
        v77 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v77);
      if ( (*(_BYTE *)&v77->16 & 1) != 0 )
        break;
    }
    v78 = (char)v14->16;
    if ( (v78 & 1) != 0 )
    {
      LOBYTE(Root) = v78 & 0xFE;
      *(_BYTE *)&v14->16 = Root;
      *(_BYTE *)&v59->16 |= 1u;
      return Root;
    }
    *(_BYTE *)&v59->16 |= 1u;
    v55 = (char)Tree->Min;
    Root = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v55 & 1) != 0 && Root )
      v14 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v14);
    else
      v14 = (_RTL_BALANCED_NODE *)(v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v14 )
      return Root;
    v79 = (unsigned __int64)v14->Children[1];
    if ( (v55 & 1) != 0 && v79 )
      v79 ^= (unsigned __int64)v14;
    v12 = v79 == (_QWORD)v56;
  }
  v80 = v59->Children[v57];
  if ( v76 )
  {
    if ( v80 )
    {
      v80 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v80);
      goto LABEL_237;
    }
LABEL_239:
    v81 = v59->Children[v12];
    if ( v76 && v81 )
      v81 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v81);
    *(_BYTE *)&v81->16 &= ~1u;
    v82 = (unsigned int)v12 ^ 1;
    v83 = v81->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v84 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v83 )
      v83 ^= (unsigned __int64)v81;
    if ( (_RTL_BALANCED_NODE *)v83 != v59 )
      __fastfail(0x1Du);
    v85 = (unsigned int)v82;
    v86 = &v59->Children[v12];
    v87 = *v86;
    if ( ((__int64)Tree->Min & 1) != 0 && v87 )
      v87 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v87);
    if ( v87 != v81 )
      __fastfail(0x1Du);
    v88 = (unsigned __int64)v14->Children[v82];
    if ( ((__int64)Tree->Min & 1) != 0 && v88 )
      v88 ^= (unsigned __int64)v14;
    if ( (_RTL_BALANCED_NODE *)v88 != v59 )
      goto LABEL_348;
    v89 = v59->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 && v89 )
      v89 ^= (unsigned __int64)v59;
    if ( (_RTL_BALANCED_NODE *)v89 != v14 )
LABEL_348:
      __fastfail(0x1Du);
    v90 = (unsigned __int64)v14 ^ (unsigned __int64)v81;
    v91 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ (unsigned __int64)v81);
    if ( ((__int64)Tree->Min & 1) == 0 )
      v91 = v81;
    v14->Children[v85] = v91;
    if ( !v84 || !v14 )
      v90 = (unsigned __int64)v14;
    v81->ParentValue &= 3uLL;
    v92 = &v81->Children[v85];
    v81->ParentValue |= v90;
    v93 = *v92;
    if ( v84 )
    {
      if ( v93 )
      {
        v93 = (_RTL_BALANCED_NODE *)((unsigned __int64)v81 ^ (unsigned __int64)v93);
        goto LABEL_268;
      }
    }
    else
    {
LABEL_268:
      if ( v93 )
      {
        v94 = v93->ParentValue;
        v95 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v84 && v95 )
          v95 ^= (unsigned __int64)v93;
        if ( (_RTL_BALANCED_NODE *)v95 != v81 )
          __fastfail(0x1Du);
        v96 = (unsigned __int64)v93 ^ (unsigned __int64)v59;
        if ( !v84 )
          v96 = (unsigned __int64)v59;
        v93->ParentValue = v94 & 3 | v96;
      }
    }
    if ( v84 && v93 )
      v93 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v93);
    *v86 = v93;
    v97 = (unsigned __int64)v59 ^ (unsigned __int64)v81;
    v98 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v81);
    if ( !v84 )
      v98 = v59;
    *v92 = v98;
    v59->ParentValue &= 3uLL;
    v26 = v84 == 0;
    v80 = v59;
    if ( v26 )
      v97 = (unsigned __int64)v81;
    v59->ParentValue |= v97;
    v59 = v81;
  }
  else
  {
LABEL_237:
    if ( !v80 || (*(_BYTE *)&v80->16 & 1) == 0 )
      goto LABEL_239;
  }
  *(_BYTE *)&v59->16 ^= (*(_BYTE *)&v14->16 ^ *(_BYTE *)&v59->16) & 1;
  *(_BYTE *)&v14->16 &= ~1u;
  *(_BYTE *)&v80->16 &= ~1u;
  v99 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v99 )
      v99 ^= (unsigned __int64)Tree;
    else
      v99 = 0LL;
  }
  v100 = v59->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v101 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v100 )
    v100 ^= (unsigned __int64)v59;
  if ( (_RTL_BALANCED_NODE *)v100 != v14 )
    __fastfail(0x1Du);
  v102 = (unsigned __int64)v14->Children[v57];
  if ( ((__int64)Tree->Min & 1) != 0 && v102 )
    v102 ^= (unsigned __int64)v14;
  if ( (_RTL_BALANCED_NODE *)v102 != v59 )
    __fastfail(0x1Du);
  v103 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v103 )
    {
      v103 ^= (unsigned __int64)v14;
      goto LABEL_302;
    }
LABEL_303:
    if ( (_RTL_BALANCED_NODE *)v99 != v14 )
      __fastfail(0x1Du);
    v99 = (unsigned __int64)v59;
  }
  else
  {
LABEL_302:
    if ( !v103 )
      goto LABEL_303;
    v104 = *(_QWORD *)(v103 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v104 )
      v104 ^= v103;
    if ( (_RTL_BALANCED_NODE *)v104 == v14 )
    {
      v105 = (unsigned __int64)v59 ^ v103;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v105 = (unsigned __int64)v59;
      *(_QWORD *)(v103 + 8) = v105;
    }
    else
    {
      v106 = *(_QWORD *)v103;
      if ( ((__int64)Tree->Min & 1) != 0 && v106 )
        v106 ^= v103;
      if ( (_RTL_BALANCED_NODE *)v106 != v14 )
        __fastfail(0x1Du);
      v107 = (unsigned __int64)v59 ^ v103;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v107 = (unsigned __int64)v59;
      *(_QWORD *)v103 = v107;
    }
  }
  if ( v101 && v103 )
    v103 ^= (unsigned __int64)v59;
  v59->ParentValue &= 3uLL;
  v59->ParentValue |= v103;
  v108 = (unsigned __int64)v59->Children[v12];
  if ( v101 )
  {
    if ( v108 )
    {
      v108 ^= (unsigned __int64)v59;
      goto LABEL_327;
    }
  }
  else
  {
LABEL_327:
    if ( v108 )
    {
      v109 = *(_QWORD *)(v108 + 16);
      v110 = v109 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v101 && v110 )
        v110 ^= v108;
      if ( (_RTL_BALANCED_NODE *)v110 != v59 )
        __fastfail(0x1Du);
      v111 = (unsigned __int64)v14 ^ v108;
      if ( !v101 )
        v111 = (unsigned __int64)v14;
      *(_QWORD *)(v108 + 16) = v109 & 3 | v111;
    }
  }
  if ( v101 && v108 )
    v108 ^= (unsigned __int64)v14;
  v14->Children[!v12] = (_RTL_BALANCED_NODE *)v108;
  v112 = (unsigned __int64)v59 ^ (unsigned __int64)v14;
  Root = (unsigned __int64)v59 ^ (unsigned __int64)v14;
  if ( !v101 )
    Root = (unsigned __int64)v14;
  v59->Children[v12] = (_RTL_BALANCED_NODE *)Root;
  v14->ParentValue &= 3uLL;
  if ( !v101 )
    v112 = (unsigned __int64)v59;
  v14->ParentValue |= v112;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    LOBYTE(Root) = v99 ^ (unsigned __int8)Tree;
    if ( v99 )
      v8 = (_RTL_BALANCED_NODE *)(v99 ^ (unsigned __int64)Tree);
    Tree->Root = v8;
  }
  else
  {
    Tree->Root = (PRTL_BALANCED_NODE)v99;
  }
  return Root;
}
