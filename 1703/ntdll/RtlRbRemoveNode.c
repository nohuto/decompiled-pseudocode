/*
 * XREFs of RtlRbRemoveNode @ 0x180028010
 * Callers:
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_180009CF8 @ 0x180009CF8 (sub_180009CF8.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_18001EB74 @ 0x18001EB74 (sub_18001EB74.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_1800528A4 @ 0x1800528A4 (sub_1800528A4.c)
 *     sub_18005FE54 @ 0x18005FE54 (sub_18005FE54.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  char Min; // r9
  _RTL_BALANCED_NODE *v4; // rax
  unsigned __int64 v5; // rcx
  _RTL_BALANCED_NODE *v6; // r8
  char v7; // r9
  PRTL_BALANCED_NODE v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  char v11; // r9
  char v12; // r9
  _RTL_BALANCED_NODE *v13; // rdx
  unsigned __int64 v14; // rcx
  _RTL_BALANCED_NODE *v15; // r9
  ULONG_PTR ParentValue; // r11
  unsigned __int64 v17; // r9
  char v18; // si
  unsigned __int64 v19; // r9
  ULONG_PTR v20; // r9
  unsigned __int64 v21; // rax
  char v22; // r11
  unsigned __int64 v23; // rax
  char v24; // r9
  _RTL_BALANCED_NODE *v25; // r9
  ULONG_PTR v26; // rsi
  unsigned __int64 v27; // rcx
  char v28; // r11
  unsigned __int64 v29; // r9
  ULONG_PTR v30; // rcx
  ULONG_PTR v31; // rsi
  ULONG_PTR v32; // r11
  char v33; // si
  ULONG_PTR v34; // rbp
  _RTL_BALANCED_NODE **v35; // r14
  unsigned __int64 v36; // rcx
  _RTL_BALANCED_NODE *v37; // r11
  __int64 v38; // rax
  unsigned __int64 v39; // r9
  _RTL_BALANCED_NODE **v40; // rbx
  char v41; // dl
  _RTL_BALANCED_NODE *v42; // rcx
  ULONG_PTR *p_ParentValue; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  char v46; // dl
  unsigned __int64 v47; // rsi
  __int64 v48; // rbx
  __int64 v49; // r11
  unsigned __int64 v50; // rdx
  char v51; // al
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r9
  _RTL_BALANCED_NODE *v56; // r9
  unsigned __int64 v57; // rdx
  _RTL_BALANCED_NODE *v58; // rdx
  _RTL_BALANCED_NODE *v59; // r9
  __int64 v60; // rdi
  unsigned __int64 v61; // rax
  int v62; // edx
  _RTL_BALANCED_NODE **v63; // rsi
  _RTL_BALANCED_NODE *v64; // rax
  __int64 v65; // r14
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  _RTL_BALANCED_NODE *v68; // rax
  unsigned __int64 v69; // rax
  _RTL_BALANCED_NODE *v70; // rax
  _RTL_BALANCED_NODE *v71; // rax
  unsigned __int64 v72; // rax
  bool v73; // zf
  char v74; // dl
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // r11
  int v77; // edx
  unsigned __int64 v78; // r9
  unsigned __int64 v79; // r11
  _RTL_BALANCED_NODE *v80; // r11
  unsigned __int64 v81; // r9
  _RTL_BALANCED_NODE *v82; // r9
  unsigned __int64 v83; // r9
  _RTL_BALANCED_NODE *v84; // r9
  ULONG_PTR v85; // r9
  unsigned __int64 v86; // r10
  unsigned __int64 v87; // r10
  ULONG_PTR v88; // rbp
  unsigned __int64 v89; // rdi
  unsigned __int64 v90; // rdi
  unsigned __int64 v91; // r11
  _RTL_BALANCED_NODE *v92; // r11
  ULONG_PTR v93; // rbp
  unsigned __int64 v94; // r11
  unsigned __int64 v95; // r11

  Min = (char)Tree->Min;
  v4 = Node->Children[0];
  if ( (Min & 1) != 0 && v4 )
    v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v4);
  v5 = (unsigned __int64)Node->Children[1];
  if ( (Min & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)Node;
  if ( v4 )
  {
    if ( !v5 )
      goto LABEL_5;
    v8 = (PRTL_BALANCED_NODE)v5;
    v6 = (_RTL_BALANCED_NODE *)v5;
    v10 = 1;
    if ( *(_QWORD *)v5 )
    {
      v10 = 0;
      do
      {
        v47 = (unsigned __int64)v8->Children[0];
        v6 = v8;
        if ( (Min & 1) != 0 && v47 )
          v8 = (PRTL_BALANCED_NODE)(v47 ^ (unsigned __int64)v8);
        else
          v8 = v8->Children[0];
      }
      while ( v8->Children[0] );
    }
    if ( (Min & 1) != 0 )
      v15 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v8);
    else
      v15 = v4;
    v8->Children[0] = v15;
    ParentValue = v4->ParentValue;
    v17 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v18 = (__int64)Tree->Min & 1;
    if ( v18 && v17 )
      v17 ^= (unsigned __int64)v4;
    if ( (PRTL_BALANCED_NODE)v17 != Node )
      __fastfail(0x1Du);
    v19 = (unsigned __int64)v8;
    if ( v18 )
      v19 = (unsigned __int64)v4 ^ (unsigned __int64)v8;
    v4->ParentValue = v19 | ParentValue & 3;
    v20 = *(_QWORD *)(v5 + 16);
    v21 = v20 & 0xFFFFFFFFFFFFFFFCuLL;
    v22 = (__int64)Tree->Min & 1;
    if ( v22 && v21 )
      v21 ^= v5;
    if ( (PRTL_BALANCED_NODE)v21 != Node )
      __fastfail(0x1Du);
    v23 = (unsigned __int64)v8;
    if ( v22 )
      v23 = v5 ^ (unsigned __int64)v8;
    *(_QWORD *)(v5 + 16) = v23 | v20 & 3;
    v4 = v8->Children[1];
    v24 = (__int64)Tree->Min & 1;
    if ( v24 && v4 )
      v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ (unsigned __int64)v4);
    if ( v24 )
      v25 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v8);
    else
      v25 = (_RTL_BALANCED_NODE *)v5;
    v26 = v8->ParentValue;
    v8->Children[1] = v25;
    v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = (__int64)Tree->Min & 1;
    if ( v28 && v27 )
      v29 = (unsigned __int64)v8 ^ v27;
    else
      v29 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v29 == v6 )
    {
LABEL_40:
      v11 = (char)v8->16;
      v30 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v28 )
      {
        if ( v30 )
          v30 ^= (unsigned __int64)Node;
        if ( v30 )
          v30 ^= (unsigned __int64)v8;
      }
      v31 = v30 | v26 & 3;
      v8->ParentValue = v31;
      *(_BYTE *)&v8->16 ^= (*(_BYTE *)&Node->16 ^ v31) & 1;
      v32 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v32 )
      {
        v33 = (__int64)Tree->Min & 1;
        if ( v33 )
          v32 ^= (unsigned __int64)Node;
        v34 = *(_QWORD *)(v32 + 8);
        if ( v33 && v34 )
          v34 ^= v32;
        v35 = (_RTL_BALANCED_NODE **)(v32 + 8LL * (v34 == (_QWORD)Node));
        v36 = (unsigned __int64)*v35;
        if ( v33 && v36 )
          v36 ^= v32;
        if ( (PRTL_BALANCED_NODE)v36 != Node )
          __fastfail(0x1Du);
        if ( v33 )
          v37 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ v32);
        else
          v37 = v8;
        *v35 = v37;
      }
      else
      {
        if ( Tree->Root != Node )
          __fastfail(0x1Du);
        Tree->Root = v8;
      }
      goto LABEL_11;
    }
    if ( v28 )
    {
      if ( !v27 )
      {
LABEL_206:
        if ( v8 == v6 )
          goto LABEL_40;
LABEL_207:
        __fastfail(0x1Du);
      }
      v27 ^= (unsigned __int64)v8;
    }
    if ( v27 )
      goto LABEL_207;
    goto LABEL_206;
  }
  v4 = (_RTL_BALANCED_NODE *)v5;
LABEL_5:
  v6 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  v7 = Min & 1;
  if ( v7 && v6 )
    v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v6);
  v8 = Node;
  if ( !v6 )
  {
    if ( v4 )
      v4->ParentValue = 0LL;
    if ( Tree->Root != Node )
      __fastfail(0x1Du);
    v73 = ((__int64)Tree->Min & 1) == 0;
    Tree->Min = v4;
    if ( !v73 )
      LOBYTE(Tree->Min) |= 1u;
    Tree->Root = v4;
    return (unsigned __int8)v4;
  }
  v9 = (unsigned __int64)v6->Children[1];
  if ( v7 && v9 )
    v9 ^= (unsigned __int64)v6;
  if ( (PRTL_BALANCED_NODE)v9 != Node )
  {
    v14 = (unsigned __int64)v6->Children[0];
    if ( v7 && v14 )
      v14 ^= (unsigned __int64)v6;
    if ( (PRTL_BALANCED_NODE)v14 != Node )
      __fastfail(0x1Du);
    v10 = 0;
    if ( (PRTL_BALANCED_NODE)((unsigned __int64)Tree->Min & 0xFFFFFFFFFFFFFFFEuLL) != Node )
      goto LABEL_10;
    if ( v4 )
    {
      Tree->Min = v4;
      if ( !v7 )
        goto LABEL_10;
    }
    else
    {
      Tree->Min = v6;
      if ( !v7 )
        goto LABEL_10;
    }
    LOBYTE(Tree->Min) |= 1u;
    goto LABEL_10;
  }
  v10 = 1;
LABEL_10:
  v11 = (char)Node->16;
LABEL_11:
  v12 = v11 & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v4 )
    v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v6);
  else
    v13 = v4;
  v6->Children[v10] = v13;
  if ( v4 )
  {
    v45 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v46 = (__int64)Tree->Min & 1;
    if ( v46 && v45 )
      v45 ^= (unsigned __int64)v4;
    if ( (PRTL_BALANCED_NODE)v45 != v8 )
      __fastfail(0x1Du);
    if ( v46 && v6 )
      v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v6);
    v4->ParentValue = (ULONG_PTR)v6;
    return (unsigned __int8)v4;
  }
  if ( v12 )
    return (unsigned __int8)v4;
  while ( 1 )
  {
    v38 = v10 ^ 1LL;
    v39 = (unsigned __int64)v6->Children[v38];
    v40 = &v6->Children[v38];
    v41 = (__int64)Tree->Min & 1;
    if ( v41 && v39 )
      v42 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ v39);
    else
      v42 = v6->Children[v38];
    p_ParentValue = &v42->ParentValue;
    if ( (*(_BYTE *)&v42->16 & 1) == 0 )
      goto LABEL_53;
    v76 = *p_ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v77 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v76 )
      v76 ^= (unsigned __int64)v42;
    if ( (_RTL_BALANCED_NODE *)v76 != v6 )
      __fastfail(0x1Du);
    if ( ((__int64)Tree->Min & 1) != 0 && v39 )
      v39 ^= (unsigned __int64)v6;
    if ( (_RTL_BALANCED_NODE *)v39 != v42 )
      __fastfail(0x1Du);
    v78 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( !v78 )
        goto LABEL_179;
      v78 ^= (unsigned __int64)v6;
    }
    if ( v78 )
    {
      v79 = *(_QWORD *)(v78 + 8);
      if ( ((__int64)Tree->Min & 1) != 0 && v79 )
        v79 ^= v78;
      if ( (_RTL_BALANCED_NODE *)v79 == v6 )
      {
        if ( ((__int64)Tree->Min & 1) != 0 )
          v80 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ v78);
        else
          v80 = v42;
        *(_QWORD *)(v78 + 8) = v80;
      }
      else
      {
        v91 = *(_QWORD *)v78;
        if ( ((__int64)Tree->Min & 1) != 0 && v91 )
          v91 ^= v78;
        if ( (_RTL_BALANCED_NODE *)v91 != v6 )
          __fastfail(0x1Du);
        if ( ((__int64)Tree->Min & 1) != 0 )
          v92 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ v78);
        else
          v92 = v42;
        *(_QWORD *)v78 = v92;
      }
      goto LABEL_140;
    }
LABEL_179:
    if ( Tree->Root != v6 )
      __fastfail(0x1Du);
    Tree->Root = v42;
LABEL_140:
    if ( v77 && v78 )
      v78 ^= (unsigned __int64)v42;
    *p_ParentValue &= 3uLL;
    *p_ParentValue |= v78;
    v81 = (unsigned __int64)v42->Children[v10];
    if ( !v77 )
      goto LABEL_142;
    if ( v81 )
    {
      v81 ^= (unsigned __int64)v42;
LABEL_142:
      if ( v81 )
      {
        v93 = *(_QWORD *)(v81 + 16);
        v94 = v93 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v77 && v94 )
          v94 ^= v81;
        if ( (_RTL_BALANCED_NODE *)v94 != v42 )
          __fastfail(0x1Du);
        if ( v77 )
          v95 = (unsigned __int64)v6 ^ v81;
        else
          v95 = (unsigned __int64)v6;
        *(_QWORD *)(v81 + 16) = v95 | v93 & 3;
      }
    }
    if ( v77 && v81 )
      v81 ^= (unsigned __int64)v6;
    *v40 = (_RTL_BALANCED_NODE *)v81;
    if ( v77 )
      v82 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v42);
    else
      v82 = v6;
    v42->Children[v10] = v82;
    if ( v77 )
      v42 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v42);
    v6->ParentValue &= 3uLL;
    v6->ParentValue |= (unsigned __int64)v42;
    *(_BYTE *)p_ParentValue &= ~1u;
    *(_BYTE *)&v6->16 |= 1u;
    v42 = *v40;
    v41 = (__int64)Tree->Min & 1;
    if ( v41 && v42 )
      v42 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v42);
LABEL_53:
    v44 = (unsigned __int64)v42->Children[0];
    if ( v42->Children[0] )
    {
      if ( v41 )
        v44 ^= (unsigned __int64)v42;
      if ( (*(_BYTE *)(v44 + 16) & 1) != 0 )
        break;
    }
    v4 = v42->Children[1];
    if ( v4 )
    {
      if ( v41 )
        v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ (unsigned __int64)v4);
      if ( (*(_BYTE *)&v4->16 & 1) != 0 )
        break;
    }
    if ( (*(_BYTE *)&v6->16 & 1) != 0 )
    {
      *(_BYTE *)&v6->16 &= ~1u;
      *(_BYTE *)&v42->16 |= 1u;
      return (unsigned __int8)v4;
    }
    *(_BYTE *)&v42->16 |= 1u;
    v4 = (_RTL_BALANCED_NODE *)(v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    v74 = (__int64)Tree->Min & 1;
    if ( v74 )
    {
      if ( !v4 )
        return (unsigned __int8)v4;
      v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v4);
    }
    if ( !v4 )
      return (unsigned __int8)v4;
    v75 = (unsigned __int64)v4->Children[1];
    if ( v74 && v75 )
      v75 ^= (unsigned __int64)v4;
    v73 = v75 == (_QWORD)v6;
    v6 = v4;
    v10 = v73;
  }
  v48 = v10;
  v49 = v10 ^ 1LL;
  v50 = (unsigned __int64)v42->Children[v49];
  v51 = (__int64)Tree->Min & 1;
  if ( v51 )
  {
    if ( v50 )
    {
      v50 ^= (unsigned __int64)v42;
      goto LABEL_70;
    }
  }
  else
  {
LABEL_70:
    if ( v50 && (*(_BYTE *)(v50 + 16) & 1) != 0 )
      goto LABEL_72;
  }
  v59 = v42->Children[v10];
  if ( v51 && v59 )
    v59 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ (unsigned __int64)v59);
  *(_BYTE *)&v59->16 &= ~1u;
  v60 = v10 ^ 1;
  v61 = v59->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v62 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v61 )
    v61 ^= (unsigned __int64)v59;
  if ( (_RTL_BALANCED_NODE *)v61 != v42 )
    __fastfail(0x1Du);
  v63 = &v42->Children[v60 ^ 1];
  v64 = *v63;
  if ( ((__int64)Tree->Min & 1) != 0 && v64 )
    v64 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ (unsigned __int64)v64);
  if ( v64 != v59 )
    __fastfail(0x1Du);
  v65 = v60;
  v66 = (unsigned __int64)v6->Children[v60];
  if ( ((__int64)Tree->Min & 1) != 0 && v66 )
    v66 ^= (unsigned __int64)v6;
  if ( (_RTL_BALANCED_NODE *)v66 != v42 )
    goto LABEL_320;
  v67 = v42->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 && v67 )
    v67 ^= (unsigned __int64)v42;
  if ( (_RTL_BALANCED_NODE *)v67 != v6 )
LABEL_320:
    __fastfail(0x1Du);
  if ( ((__int64)Tree->Min & 1) != 0 )
    v68 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v6);
  else
    v68 = v59;
  v6->Children[v65] = v68;
  if ( v62 && v6 )
    v69 = (unsigned __int64)v59 ^ (unsigned __int64)v6;
  else
    v69 = (unsigned __int64)v6;
  v59->ParentValue &= 3uLL;
  v59->ParentValue |= v69;
  v70 = v59->Children[v65];
  if ( v62 )
  {
    if ( v70 )
    {
      v70 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v70);
      goto LABEL_110;
    }
  }
  else
  {
LABEL_110:
    if ( v70 )
    {
      v88 = v70->ParentValue;
      v89 = v88 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v62 && v89 )
        v89 ^= (unsigned __int64)v70;
      if ( (_RTL_BALANCED_NODE *)v89 != v59 )
        __fastfail(0x1Du);
      if ( v62 )
        v90 = (unsigned __int64)v42 ^ (unsigned __int64)v70;
      else
        v90 = (unsigned __int64)v42;
      v70->ParentValue = v90 | v88 & 3;
    }
  }
  if ( v62 && v70 )
    v70 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ (unsigned __int64)v70);
  *v63 = v70;
  v71 = v42;
  if ( v62 )
    v71 = (_RTL_BALANCED_NODE *)((unsigned __int64)v59 ^ (unsigned __int64)v42);
  v59->Children[v65] = v71;
  if ( v62 )
    v72 = (unsigned __int64)v59 ^ (unsigned __int64)v42;
  else
    v72 = (unsigned __int64)v59;
  v42->ParentValue &= 3uLL;
  v50 = (unsigned __int64)v42;
  v42->ParentValue |= v72;
  v42 = v59;
LABEL_72:
  *(_BYTE *)&v42->16 ^= (*(_BYTE *)&v42->16 ^ *(_BYTE *)&v6->16) & 1;
  *(_BYTE *)&v6->16 &= ~1u;
  *(_BYTE *)(v50 + 16) &= ~1u;
  v52 = v42->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  LODWORD(v4) = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v52 )
    v52 ^= (unsigned __int64)v42;
  if ( (_RTL_BALANCED_NODE *)v52 != v6 )
    __fastfail(0x1Du);
  v53 = (unsigned __int64)v6->Children[v49];
  if ( ((__int64)Tree->Min & 1) != 0 && v53 )
    v53 ^= (unsigned __int64)v6;
  if ( (_RTL_BALANCED_NODE *)v53 != v42 )
    __fastfail(0x1Du);
  v54 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v54 )
    {
      v54 ^= (unsigned __int64)v6;
      goto LABEL_77;
    }
  }
  else
  {
LABEL_77:
    if ( v54 )
    {
      v55 = *(_QWORD *)(v54 + 8);
      if ( ((__int64)Tree->Min & 1) != 0 && v55 )
        v55 ^= v54;
      if ( (_RTL_BALANCED_NODE *)v55 == v6 )
      {
        if ( ((__int64)Tree->Min & 1) != 0 )
          v56 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ v54);
        else
          v56 = v42;
        *(_QWORD *)(v54 + 8) = v56;
      }
      else
      {
        v83 = *(_QWORD *)v54;
        if ( ((__int64)Tree->Min & 1) != 0 && v83 )
          v83 ^= v54;
        if ( (_RTL_BALANCED_NODE *)v83 != v6 )
          __fastfail(0x1Du);
        if ( ((__int64)Tree->Min & 1) != 0 )
          v84 = (_RTL_BALANCED_NODE *)((unsigned __int64)v42 ^ v54);
        else
          v84 = v42;
        *(_QWORD *)v54 = v84;
      }
      goto LABEL_83;
    }
  }
  if ( Tree->Root != v6 )
    __fastfail(0x1Du);
  Tree->Root = v42;
LABEL_83:
  if ( (_DWORD)v4 && v54 )
    v54 ^= (unsigned __int64)v42;
  v42->ParentValue &= 3uLL;
  v42->ParentValue |= v54;
  v57 = (unsigned __int64)v42->Children[v48];
  if ( (_DWORD)v4 )
  {
    if ( v57 )
    {
      v57 ^= (unsigned __int64)v42;
      goto LABEL_85;
    }
  }
  else
  {
LABEL_85:
    if ( v57 )
    {
      v85 = *(_QWORD *)(v57 + 16);
      v86 = v85 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (_DWORD)v4 && v86 )
        v86 ^= v57;
      if ( (_RTL_BALANCED_NODE *)v86 != v42 )
        __fastfail(0x1Du);
      if ( (_DWORD)v4 )
        v87 = (unsigned __int64)v6 ^ v57;
      else
        v87 = (unsigned __int64)v6;
      *(_QWORD *)(v57 + 16) = v87 | v85 & 3;
    }
  }
  if ( (_DWORD)v4 && v57 )
    v57 ^= (unsigned __int64)v6;
  v6->Children[v49] = (_RTL_BALANCED_NODE *)v57;
  if ( (_DWORD)v4 )
    v58 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v42);
  else
    v58 = v6;
  v42->Children[v48] = v58;
  if ( (_DWORD)v4 )
    v42 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v42);
  v6->ParentValue &= 3uLL;
  v6->ParentValue |= (unsigned __int64)v42;
  return (unsigned __int8)v4;
}
