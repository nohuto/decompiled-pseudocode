/*
 * XREFs of RtlRbRemoveNode @ 0x18003A530
 * Callers:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     RtlpHpSegContextCompact @ 0x180036078 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180037818 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180038558 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x18003D9A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180060CB4 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180064118 (EtwpDereferenceUmGuidEntry.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800720D4 (RtlpHpVsFreeChunkRemove.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  $7D93978C745EB1C2D28075BAF55422B4 v2; // r9
  _RTL_BALANCED_NODE *v4; // rax
  unsigned __int64 v5; // rcx
  _RTL_BALANCED_NODE *v6; // r8
  char v7; // r9
  PRTL_BALANCED_NODE v8; // r11
  unsigned __int64 v9; // rcx
  BOOL v10; // esi
  $424C8BBEF8F6C852886B4C6E806B5DB0 v11; // r9
  char v12; // r9
  _RTL_BALANCED_NODE *v13; // rdx
  _RTL_BALANCED_NODE *v14; // r9
  unsigned __int64 ParentValue; // rbx
  unsigned __int64 v16; // r9
  char v17; // di
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  char v21; // bl
  unsigned __int64 v22; // rax
  char v23; // r9
  _RTL_BALANCED_NODE *v24; // r9
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  char v27; // bl
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  char v32; // di
  unsigned __int64 v33; // rbp
  __int64 v34; // rcx
  PRTL_BALANCED_NODE *v35; // r14
  unsigned __int64 v36; // rcx
  PRTL_BALANCED_NODE v37; // rbx
  unsigned __int64 v38; // rcx
  _RTL_BALANCED_NODE *v39; // r14
  __int64 v40; // rax
  _RTL_BALANCED_NODE *v41; // r9
  _RTL_BALANCED_NODE **v42; // rdi
  $7D93978C745EB1C2D28075BAF55422B4 v43; // al
  char v44; // dl
  _RTL_BALANCED_NODE *v45; // rcx
  $E34C8FD80FDA445B69BC9589A435A5F4 *v46; // r11
  _RTL_BALANCED_NODE *v47; // rax
  _RTL_BALANCED_NODE *v48; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v49; // al
  unsigned __int64 v50; // rcx
  char v51; // dl
  unsigned __int64 v52; // rbx
  _BOOL8 v53; // rbx
  __int64 v54; // r11
  _RTL_BALANCED_NODE *v55; // rdx
  char v56; // al
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // rdx
  _RTL_BALANCED_NODE *v63; // rdx
  char v64; // cl
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdx
  int v67; // eax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r9
  unsigned __int64 v70; // r9
  _RTL_BALANCED_NODE *v71; // rdx
  _RTL_BALANCED_NODE *v72; // rdx
  _RTL_BALANCED_NODE *v73; // r9
  unsigned int v74; // esi
  unsigned __int64 v75; // rax
  int v76; // edx
  __int64 v77; // rdi
  _RTL_BALANCED_NODE **v78; // rsi
  _RTL_BALANCED_NODE *v79; // rax
  __int64 v80; // r14
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  _RTL_BALANCED_NODE *v83; // rax
  unsigned __int64 v84; // rax
  _RTL_BALANCED_NODE *v85; // rax
  _RTL_BALANCED_NODE *v86; // rax
  unsigned __int64 v87; // rax
  bool v88; // zf
  unsigned __int64 v89; // r9
  unsigned __int64 v90; // r10
  unsigned __int64 v91; // r10
  unsigned __int64 v92; // r9
  unsigned __int64 v93; // r9
  unsigned __int64 v94; // rbp
  unsigned __int64 v95; // r9
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // r9
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // rbp
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // rdi

  v2 = Tree->0;
  v4 = Node->Children[0];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v4 )
    v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v4);
  v5 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v5 )
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
        v52 = (unsigned __int64)v8->Children[0];
        v6 = v8;
        if ( (*(_BYTE *)&v2 & 1) != 0 && v52 )
          v8 = (PRTL_BALANCED_NODE)(v52 ^ (unsigned __int64)v8);
        else
          v8 = v8->Children[0];
      }
      while ( v8->Children[0] );
    }
    if ( (*(_BYTE *)&v2 & 1) != 0 )
      v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v8);
    else
      v14 = v4;
    v8->Children[0] = v14;
    ParentValue = v4->ParentValue;
    v16 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = *(_BYTE *)&Tree->0 & 1;
    if ( v17 && v16 )
      v16 ^= (unsigned __int64)v4;
    if ( (PRTL_BALANCED_NODE)v16 != Node )
      __fastfail(0x1Du);
    v18 = (unsigned __int64)v8;
    if ( v17 )
      v18 = (unsigned __int64)v4 ^ (unsigned __int64)v8;
    v4->ParentValue = v18 | ParentValue & 3;
    v19 = *(_QWORD *)(v5 + 16);
    v20 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
    v21 = *(_BYTE *)&Tree->0 & 1;
    if ( v21 && v20 )
      v20 ^= v5;
    if ( (PRTL_BALANCED_NODE)v20 != Node )
      __fastfail(0x1Du);
    v22 = (unsigned __int64)v8;
    if ( v21 )
      v22 = v5 ^ (unsigned __int64)v8;
    *(_QWORD *)(v5 + 16) = v22 | v19 & 3;
    v4 = v8->Children[1];
    v23 = *(_BYTE *)&Tree->0 & 1;
    if ( v23 && v4 )
      v4 = (_RTL_BALANCED_NODE *)((unsigned __int64)v8 ^ (unsigned __int64)v4);
    if ( v23 )
      v24 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v8);
    else
      v24 = (_RTL_BALANCED_NODE *)v5;
    v25 = v8->ParentValue;
    v8->Children[1] = v24;
    v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
    v27 = *(_BYTE *)&Tree->0 & 1;
    if ( v27 && v26 )
      v28 = (unsigned __int64)v8 ^ v26;
    else
      v28 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v28 == v6 )
    {
LABEL_34:
      v11 = v8->0;
      v29 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v27 )
      {
        if ( v29 )
          v29 ^= (unsigned __int64)Node;
        if ( v29 )
          v29 ^= (unsigned __int64)v8;
      }
      v30 = v29 | v25 & 3;
      v8->ParentValue = v30;
      *(_BYTE *)&v8->0 ^= (*(_BYTE *)&Node->0 ^ v30) & 1;
      v31 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v31 )
      {
        v32 = *(_BYTE *)&Tree->0 & 1;
        if ( v32 )
          v31 ^= (unsigned __int64)Node;
        v33 = *(_QWORD *)(v31 + 8);
        if ( v32 && v33 )
          v33 ^= v31;
        v34 = 0LL;
        if ( (PRTL_BALANCED_NODE)v33 == Node )
          v34 = 8LL;
        v35 = (PRTL_BALANCED_NODE *)(v34 + v31);
        v36 = *(_QWORD *)(v34 + v31);
        if ( v32 && v36 )
          v36 ^= v31;
        if ( (PRTL_BALANCED_NODE)v36 != Node )
          __fastfail(0x1Du);
        if ( v32 )
          v37 = (PRTL_BALANCED_NODE)((unsigned __int64)v8 ^ v31);
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
    if ( v27 )
    {
      if ( !v26 )
      {
LABEL_209:
        if ( v8 == v6 )
          goto LABEL_34;
LABEL_210:
        __fastfail(0x1Du);
      }
      v26 ^= (unsigned __int64)v8;
    }
    if ( v26 )
      goto LABEL_210;
    goto LABEL_209;
  }
  v4 = (_RTL_BALANCED_NODE *)v5;
LABEL_5:
  v6 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  v7 = *(_BYTE *)&v2 & 1;
  if ( v7 && v6 )
    v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v6);
  v8 = Node;
  if ( !v6 )
  {
    if ( v4 )
      v4->ParentValue = 0LL;
    if ( Tree->Root != Node )
      __fastfail(0x1Du);
    v88 = (*(_BYTE *)&Tree->0 & 1) == 0;
    Tree->Min = v4;
    if ( !v88 )
      *(_BYTE *)&Tree->0 |= 1u;
    Tree->Root = v4;
    return (unsigned __int8)v4;
  }
  v9 = (unsigned __int64)v6->Children[1];
  if ( v7 && v9 )
    v9 ^= (unsigned __int64)v6;
  if ( (PRTL_BALANCED_NODE)v9 != Node )
  {
    v38 = (unsigned __int64)v6->Children[0];
    if ( v7 && v38 )
      v38 ^= (unsigned __int64)v6;
    if ( (PRTL_BALANCED_NODE)v38 != Node )
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
    *(_BYTE *)&Tree->0 |= 1u;
    goto LABEL_10;
  }
  v10 = 1;
LABEL_10:
  v11 = Node->0;
LABEL_11:
  v12 = *(_BYTE *)&v11 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v4 )
    v13 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v6);
  else
    v13 = v4;
  v6->Children[v10] = v13;
  if ( v4 )
  {
    v50 = v4->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v51 = *(_BYTE *)&Tree->0 & 1;
    if ( v51 && v50 )
      v50 ^= (unsigned __int64)v4;
    if ( (PRTL_BALANCED_NODE)v50 != v8 )
      __fastfail(0x1Du);
    if ( v51 && v6 )
      v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v6);
    v4->ParentValue = (unsigned __int64)v6;
    return (unsigned __int8)v4;
  }
  if ( v12 )
    return (unsigned __int8)v4;
  while ( 1 )
  {
    v39 = v6;
    v40 = !v10;
    v41 = v6->Children[v40];
    v42 = &v6->Children[v40];
    v43 = Tree->0;
    v44 = *(_BYTE *)&v43 & 1;
    if ( (*(_BYTE *)&v43 & 1) != 0 && v41 )
      v45 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v41);
    else
      v45 = v41;
    v46 = &v45->16;
    if ( (*(_BYTE *)&v45->0 & 1) == 0 )
      goto LABEL_55;
    v66 = v46->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v67 = *(_BYTE *)&v43 & 1;
    if ( v67 && v66 )
      v66 ^= (unsigned __int64)v45;
    if ( (_RTL_BALANCED_NODE *)v66 != v6 )
      __fastfail(0x1Du);
    if ( v67 && v41 )
      v41 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v41);
    if ( v41 != v45 )
      __fastfail(0x1Du);
    v68 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v67 )
    {
      if ( !v68 )
        goto LABEL_182;
      v68 ^= (unsigned __int64)v6;
    }
    if ( v68 )
    {
      v69 = *(_QWORD *)(v68 + 8);
      if ( v67 && v69 )
        v69 ^= v68;
      if ( (_RTL_BALANCED_NODE *)v69 == v6 )
      {
        if ( v67 )
          v70 = (unsigned __int64)v45 ^ v68;
        else
          v70 = (unsigned __int64)v45;
        *(_QWORD *)(v68 + 8) = v70;
      }
      else
      {
        v97 = *(_QWORD *)v68;
        if ( v67 && v97 )
          v97 ^= v68;
        if ( (_RTL_BALANCED_NODE *)v97 != v6 )
          __fastfail(0x1Du);
        if ( v67 )
          v98 = (unsigned __int64)v45 ^ v68;
        else
          v98 = (unsigned __int64)v45;
        *(_QWORD *)v68 = v98;
      }
      goto LABEL_114;
    }
LABEL_182:
    if ( Tree->Root != v6 )
      __fastfail(0x1Du);
    Tree->Root = v45;
LABEL_114:
    if ( v67 && v68 )
      v68 ^= (unsigned __int64)v45;
    v46->ParentValue &= 3uLL;
    v46->ParentValue |= v68;
    v71 = v45->Children[v10];
    if ( !v67 )
      goto LABEL_116;
    if ( v71 )
    {
      v71 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ (unsigned __int64)v71);
LABEL_116:
      if ( v71 )
      {
        v94 = v71->ParentValue;
        v95 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v67 && v95 )
          v95 ^= (unsigned __int64)v71;
        if ( (_RTL_BALANCED_NODE *)v95 != v45 )
          __fastfail(0x1Du);
        if ( v67 )
          v96 = (unsigned __int64)v6 ^ (unsigned __int64)v71;
        else
          v96 = (unsigned __int64)v6;
        v71->ParentValue = v96 | v94 & 3;
      }
    }
    if ( v67 && v71 )
      v71 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v71);
    *v42 = v71;
    if ( v67 )
      v72 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v45);
    else
      v72 = v6;
    v45->Children[v10] = v72;
    if ( v67 )
      v45 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v45);
    v6->ParentValue &= 3uLL;
    v6->ParentValue |= (unsigned __int64)v45;
    *(_BYTE *)&v46->0 &= ~1u;
    *(_BYTE *)&v6->0 |= 1u;
    v45 = *v42;
    v44 = *(_BYTE *)&Tree->0 & 1;
    if ( v44 && v45 )
      v45 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v45);
LABEL_55:
    v47 = v45->Children[0];
    if ( v45->Children[0] )
    {
      if ( v44 )
        v47 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ (unsigned __int64)v47);
      if ( (*(_BYTE *)&v47->0 & 1) != 0 )
        break;
    }
    v48 = v45->Children[1];
    if ( v48 )
    {
      if ( v44 )
        v48 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ (unsigned __int64)v48);
      if ( (*(_BYTE *)&v48->0 & 1) != 0 )
        break;
    }
    v49 = v6->0;
    if ( (*(_BYTE *)&v49 & 1) != 0 )
    {
      LOBYTE(v4) = *(_BYTE *)&v49 & 0xFE;
      v6->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)v4;
      *(_BYTE *)&v45->0 |= 1u;
      return (unsigned __int8)v4;
    }
    *(_BYTE *)&v45->0 |= 1u;
    v4 = (_RTL_BALANCED_NODE *)(v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    v64 = *(_BYTE *)&Tree->0 & 1;
    if ( v64 && v4 )
      v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)v4 ^ (unsigned __int64)v6);
    else
      v6 = (_RTL_BALANCED_NODE *)(v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v6 )
      return (unsigned __int8)v4;
    v65 = (unsigned __int64)v6->Children[1];
    if ( v64 && v65 )
      v65 ^= (unsigned __int64)v6;
    v10 = v65 == (_QWORD)v39;
  }
  v53 = v10;
  v54 = !v10;
  v55 = v45->Children[v54];
  v56 = *(_BYTE *)&Tree->0 & 1;
  if ( v56 )
  {
    if ( v55 )
    {
      v55 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ (unsigned __int64)v55);
      goto LABEL_72;
    }
  }
  else
  {
LABEL_72:
    if ( v55 && (*(_BYTE *)&v55->0 & 1) != 0 )
      goto LABEL_74;
  }
  v73 = v45->Children[v10];
  if ( v56 && v73 )
    v73 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ (unsigned __int64)v73);
  *(_BYTE *)&v73->0 &= ~1u;
  v74 = !v10;
  v75 = v73->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v76 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v75 )
    v75 ^= (unsigned __int64)v73;
  if ( (_RTL_BALANCED_NODE *)v75 != v45 )
    __fastfail(0x1Du);
  v77 = v74;
  v78 = &v45->Children[v74 ^ 1LL];
  v79 = *v78;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v79 )
    v79 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ (unsigned __int64)v79);
  if ( v79 != v73 )
    __fastfail(0x1Du);
  v80 = v77;
  v81 = (unsigned __int64)v6->Children[v77];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v81 )
    v81 ^= (unsigned __int64)v6;
  if ( (_RTL_BALANCED_NODE *)v81 != v45 )
    goto LABEL_324;
  v82 = v45->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v82 )
    v82 ^= (unsigned __int64)v45;
  if ( (_RTL_BALANCED_NODE *)v82 != v6 )
LABEL_324:
    __fastfail(0x1Du);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v83 = (_RTL_BALANCED_NODE *)((unsigned __int64)v73 ^ (unsigned __int64)v6);
  else
    v83 = v73;
  v6->Children[v80] = v83;
  if ( v76 && v6 )
    v84 = (unsigned __int64)v73 ^ (unsigned __int64)v6;
  else
    v84 = (unsigned __int64)v6;
  v73->ParentValue &= 3uLL;
  v73->ParentValue |= v84;
  v85 = v73->Children[v80];
  if ( v76 )
  {
    if ( v85 )
    {
      v85 = (_RTL_BALANCED_NODE *)((unsigned __int64)v73 ^ (unsigned __int64)v85);
      goto LABEL_138;
    }
  }
  else
  {
LABEL_138:
    if ( v85 )
    {
      v99 = v85->ParentValue;
      v100 = v99 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v76 && v100 )
        v100 ^= (unsigned __int64)v85;
      if ( (_RTL_BALANCED_NODE *)v100 != v73 )
        __fastfail(0x1Du);
      if ( v76 )
        v101 = (unsigned __int64)v45 ^ (unsigned __int64)v85;
      else
        v101 = (unsigned __int64)v45;
      v85->ParentValue = v101 | v99 & 3;
    }
  }
  if ( v76 && v85 )
    v85 = (_RTL_BALANCED_NODE *)((unsigned __int64)v45 ^ (unsigned __int64)v85);
  *v78 = v85;
  v86 = v45;
  if ( v76 )
    v86 = (_RTL_BALANCED_NODE *)((unsigned __int64)v73 ^ (unsigned __int64)v45);
  v73->Children[v80] = v86;
  if ( v76 )
    v87 = (unsigned __int64)v73 ^ (unsigned __int64)v45;
  else
    v87 = (unsigned __int64)v73;
  v45->ParentValue &= 3uLL;
  v55 = v45;
  v45->ParentValue |= v87;
  v45 = v73;
LABEL_74:
  *(_BYTE *)&v45->0 ^= (*(_BYTE *)&v6->0 ^ *(_BYTE *)&v45->0) & 1;
  *(_BYTE *)&v6->0 &= ~1u;
  *(_BYTE *)&v55->0 &= ~1u;
  v57 = v45->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  LODWORD(v4) = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v57 )
    v57 ^= (unsigned __int64)v45;
  if ( (_RTL_BALANCED_NODE *)v57 != v6 )
    __fastfail(0x1Du);
  v58 = (unsigned __int64)v6->Children[v54];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v58 )
    v58 ^= (unsigned __int64)v6;
  if ( (_RTL_BALANCED_NODE *)v58 != v45 )
    __fastfail(0x1Du);
  v59 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    if ( v59 )
    {
      v59 ^= (unsigned __int64)v6;
      goto LABEL_79;
    }
  }
  else
  {
LABEL_79:
    if ( v59 )
    {
      v60 = *(_QWORD *)(v59 + 8);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v60 )
        v60 ^= v59;
      if ( (_RTL_BALANCED_NODE *)v60 == v6 )
      {
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v61 = (unsigned __int64)v45 ^ v59;
        else
          v61 = (unsigned __int64)v45;
        *(_QWORD *)(v59 + 8) = v61;
      }
      else
      {
        v92 = *(_QWORD *)v59;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v92 )
          v92 ^= v59;
        if ( (_RTL_BALANCED_NODE *)v92 != v6 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v93 = (unsigned __int64)v45 ^ v59;
        else
          v93 = (unsigned __int64)v45;
        *(_QWORD *)v59 = v93;
      }
      goto LABEL_85;
    }
  }
  if ( Tree->Root != v6 )
    __fastfail(0x1Du);
  Tree->Root = v45;
LABEL_85:
  if ( (_DWORD)v4 && v59 )
    v59 ^= (unsigned __int64)v45;
  v45->ParentValue &= 3uLL;
  v45->ParentValue |= v59;
  v62 = (unsigned __int64)v45->Children[v53];
  if ( (_DWORD)v4 )
  {
    if ( v62 )
    {
      v62 ^= (unsigned __int64)v45;
      goto LABEL_87;
    }
  }
  else
  {
LABEL_87:
    if ( v62 )
    {
      v89 = *(_QWORD *)(v62 + 16);
      v90 = v89 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (_DWORD)v4 && v90 )
        v90 ^= v62;
      if ( (_RTL_BALANCED_NODE *)v90 != v45 )
        __fastfail(0x1Du);
      if ( (_DWORD)v4 )
        v91 = (unsigned __int64)v6 ^ v62;
      else
        v91 = (unsigned __int64)v6;
      *(_QWORD *)(v62 + 16) = v91 | v89 & 3;
    }
  }
  if ( (_DWORD)v4 && v62 )
    v62 ^= (unsigned __int64)v6;
  v6->Children[v54] = (_RTL_BALANCED_NODE *)v62;
  if ( (_DWORD)v4 )
    v63 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v45);
  else
    v63 = v6;
  v45->Children[v53] = v63;
  if ( (_DWORD)v4 )
    v45 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6 ^ (unsigned __int64)v45);
  v6->ParentValue &= 3uLL;
  v6->ParentValue |= (unsigned __int64)v45;
  return (unsigned __int8)v4;
}
