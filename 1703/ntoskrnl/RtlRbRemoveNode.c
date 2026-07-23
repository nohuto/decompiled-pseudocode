/*
 * XREFs of RtlRbRemoveNode @ 0x140048460
 * Callers:
 *     PfSnNameRemove @ 0x140021FFC (PfSnNameRemove.c)
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14004B7C8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiResetClockInterval @ 0x140067A68 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x140067A94 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14007DABC (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14007E0DC (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400AC1E0 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400AF604 (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14011F070 (KiAbEntryUpdateOwnerTreePosition.c)
 *     IoStopDiskIoAttributionForContext @ 0x14011F498 (IoStopDiskIoAttributionForContext.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140239878 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140245ED0 (RtlpHpVsFreeChunkRemove.c)
 *     VmpFaultEntryRemove @ 0x140251DF0 (VmpFaultEntryRemove.c)
 *     VmpRemoveMemoryRange @ 0x140252564 (VmpRemoveMemoryRange.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404F257C (EtwpSetProviderTraitsCommon.c)
 *     EtwpDeleteSessionDemuxObject @ 0x140711550 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  $7D93978C745EB1C2D28075BAF55422B4 v2; // r10
  _RTL_BALANCED_NODE *v5; // rax
  unsigned __int64 v6; // rcx
  _RTL_BALANCED_NODE *v7; // r8
  char v8; // r10
  PRTL_BALANCED_NODE v9; // rbx
  bool v10; // zf
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  $424C8BBEF8F6C852886B4C6E806B5DB0 v14; // r10
  char v15; // r10
  _RTL_BALANCED_NODE *v16; // rdx
  $7D93978C745EB1C2D28075BAF55422B4 v17; // bl
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  _RTL_BALANCED_NODE **v20; // r14
  char v21; // cl
  _RTL_BALANCED_NODE *v22; // rdx
  unsigned __int64 *v23; // r10
  _RTL_BALANCED_NODE *v24; // rax
  _RTL_BALANCED_NODE *v25; // rdx
  unsigned __int64 ParentValue; // r10
  unsigned __int64 v27; // rdx
  char v28; // si
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  char v32; // r10
  unsigned __int64 v33; // rax
  char v34; // dl
  _RTL_BALANCED_NODE *v35; // rdx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  char v38; // dl
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  char v43; // si
  unsigned __int64 v44; // rbp
  _RTL_BALANCED_NODE **v45; // r14
  unsigned __int64 v46; // rcx
  _RTL_BALANCED_NODE *v47; // rdx
  unsigned __int64 v48; // rcx
  char v49; // dl
  __int64 v50; // rsi
  __int64 v51; // rbx
  _RTL_BALANCED_NODE *v52; // r9
  char v53; // cl
  unsigned __int64 v54; // rax
  int v55; // ecx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  _RTL_BALANCED_NODE *v61; // rax
  char v62; // dl
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  int v65; // ecx
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  _RTL_BALANCED_NODE *v69; // rax
  _RTL_BALANCED_NODE *v70; // rax
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // r9
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // r10
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  _RTL_BALANCED_NODE *v77; // r10
  __int64 v78; // rdi
  unsigned __int64 v79; // rax
  int v80; // ecx
  _RTL_BALANCED_NODE **v81; // r15
  _RTL_BALANCED_NODE *v82; // rax
  __int64 v83; // rdi
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  _RTL_BALANCED_NODE *v86; // rax
  unsigned __int64 v87; // r9
  _RTL_BALANCED_NODE **v88; // r14
  _RTL_BALANCED_NODE *v89; // rax
  _RTL_BALANCED_NODE *v90; // rax
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rbx
  unsigned __int64 v93; // r9
  unsigned __int64 v94; // r9
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rdi
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // r9

  v2 = Tree->0;
  v5 = Node->Children[0];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v5 )
    v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v5);
  v6 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)Node;
  if ( v5 )
  {
    if ( !v6 )
      goto LABEL_5;
    v9 = (PRTL_BALANCED_NODE)v6;
    v7 = (_RTL_BALANCED_NODE *)v6;
    v13 = 1;
    if ( *(_QWORD *)v6 )
    {
      v13 = 0;
      do
      {
        v71 = (unsigned __int64)v9->Children[0];
        v7 = v9;
        if ( (*(_BYTE *)&v2 & 1) != 0 && v71 )
          v9 = (PRTL_BALANCED_NODE)(v71 ^ (unsigned __int64)v9);
        else
          v9 = v9->Children[0];
      }
      while ( v9->Children[0] );
    }
    if ( (*(_BYTE *)&v2 & 1) != 0 )
      v25 = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)v9);
    else
      v25 = v5;
    v9->Children[0] = v25;
    ParentValue = v5->ParentValue;
    v27 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = *(_BYTE *)&Tree->0 & 1;
    if ( v28 && v27 )
      v27 ^= (unsigned __int64)v5;
    if ( (PRTL_BALANCED_NODE)v27 != Node )
      __fastfail(0x1Du);
    v29 = (unsigned __int64)v9;
    if ( v28 )
      v29 = (unsigned __int64)v5 ^ (unsigned __int64)v9;
    v5->ParentValue = v29 | ParentValue & 3;
    v30 = *(_QWORD *)(v6 + 16);
    v31 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
    v32 = *(_BYTE *)&Tree->0 & 1;
    if ( v32 && v31 )
      v31 ^= v6;
    if ( (PRTL_BALANCED_NODE)v31 != Node )
      __fastfail(0x1Du);
    v33 = (unsigned __int64)v9;
    if ( v32 )
      v33 = v6 ^ (unsigned __int64)v9;
    *(_QWORD *)(v6 + 16) = v33 | v30 & 3;
    v5 = v9->Children[1];
    v34 = *(_BYTE *)&Tree->0 & 1;
    if ( v34 && v5 )
      v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v5);
    if ( v34 )
      v35 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v9);
    else
      v35 = (_RTL_BALANCED_NODE *)v6;
    v36 = v9->ParentValue;
    v9->Children[1] = v35;
    v37 = v36 & 0xFFFFFFFFFFFFFFFCuLL;
    v38 = *(_BYTE *)&Tree->0 & 1;
    if ( v38 && v37 )
      v39 = (unsigned __int64)v9 ^ v37;
    else
      v39 = v36 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v39 == v7 )
    {
LABEL_51:
      v14 = v9->0;
      v40 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v38 )
      {
        if ( v40 )
          v40 ^= (unsigned __int64)Node;
        if ( v40 )
          v40 ^= (unsigned __int64)v9;
      }
      v41 = v40 | v36 & 3;
      v9->ParentValue = v41;
      *(_BYTE *)&v9->0 ^= (*(_BYTE *)&Node->0 ^ v41) & 1;
      v42 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v42 )
      {
        v43 = *(_BYTE *)&Tree->0 & 1;
        if ( v43 )
          v42 ^= (unsigned __int64)Node;
        v44 = *(_QWORD *)(v42 + 8);
        if ( v43 && v44 )
          v44 ^= v42;
        v45 = (_RTL_BALANCED_NODE **)(v42 + 8LL * (v44 == (_QWORD)Node));
        v46 = (unsigned __int64)*v45;
        if ( v43 && v46 )
          v46 ^= v42;
        if ( (PRTL_BALANCED_NODE)v46 != Node )
          __fastfail(0x1Du);
        if ( v43 )
          v47 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ v42);
        else
          v47 = v9;
        *v45 = v47;
      }
      else
      {
        if ( Tree->Root != Node )
          __fastfail(0x1Du);
        Tree->Root = v9;
      }
      goto LABEL_22;
    }
    if ( v38 )
    {
      if ( !v37 )
      {
LABEL_205:
        if ( v9 == v7 )
          goto LABEL_51;
LABEL_206:
        __fastfail(0x1Du);
      }
      v37 ^= (unsigned __int64)v9;
    }
    if ( v37 )
      goto LABEL_206;
    goto LABEL_205;
  }
  v5 = (_RTL_BALANCED_NODE *)v6;
LABEL_5:
  v7 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  v8 = *(_BYTE *)&v2 & 1;
  if ( v8 && v7 )
    v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v7);
  v9 = Node;
  if ( !v7 )
  {
    if ( v5 )
      v5->ParentValue = 0LL;
    if ( Tree->Root != Node )
      __fastfail(0x1Du);
    v10 = (*(_BYTE *)&Tree->0 & 1) == 0;
    Tree->Min = v5;
    if ( !v10 )
      *(_BYTE *)&Tree->0 |= 1u;
    Tree->Root = v5;
    return (unsigned __int8)v5;
  }
  v11 = (unsigned __int64)v7->Children[1];
  if ( v8 && v11 )
    v11 ^= (unsigned __int64)v7;
  if ( (PRTL_BALANCED_NODE)v11 == Node )
  {
    v13 = 1;
    goto LABEL_21;
  }
  v12 = (unsigned __int64)v7->Children[0];
  if ( v8 && v12 )
    v12 ^= (unsigned __int64)v7;
  if ( (PRTL_BALANCED_NODE)v12 != Node )
    __fastfail(0x1Du);
  v13 = 0;
  if ( (PRTL_BALANCED_NODE)((unsigned __int64)Tree->Min & 0xFFFFFFFFFFFFFFFEuLL) != Node )
    goto LABEL_21;
  if ( v5 )
  {
    Tree->Min = v5;
    if ( !v8 )
      goto LABEL_21;
LABEL_225:
    *(_BYTE *)&Tree->0 |= 1u;
    goto LABEL_21;
  }
  Tree->Min = v7;
  if ( v8 )
    goto LABEL_225;
LABEL_21:
  v14 = Node->0;
LABEL_22:
  v15 = *(_BYTE *)&v14 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v5 )
    v16 = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)v7);
  else
    v16 = v5;
  v7->Children[v13] = v16;
  if ( v5 )
  {
    v48 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v49 = *(_BYTE *)&Tree->0 & 1;
    if ( v49 && v48 )
      v48 ^= (unsigned __int64)v5;
    if ( (PRTL_BALANCED_NODE)v48 != v9 )
      __fastfail(0x1Du);
    if ( v49 && v7 )
      v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)v7);
    v5->ParentValue = (unsigned __int64)v7;
    return (unsigned __int8)v5;
  }
  if ( v15 )
    return (unsigned __int8)v5;
  while ( 1 )
  {
    v17 = Tree->0;
    v18 = v13 ^ 1LL;
    v19 = (unsigned __int64)v7->Children[v18];
    v20 = &v7->Children[v18];
    v21 = *(_BYTE *)&v17 & 1;
    if ( (*(_BYTE *)&v17 & 1) != 0 && v19 )
      v22 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ v19);
    else
      v22 = v7->Children[v18];
    v23 = (unsigned __int64 *)&v22->16;
    if ( (*(_BYTE *)&v22->0 & 1) == 0 )
      goto LABEL_29;
    v64 = *v23 & 0xFFFFFFFFFFFFFFFCuLL;
    v65 = *(_BYTE *)&v17 & 1;
    if ( (*(_BYTE *)&v17 & 1) != 0 && v64 )
      v64 ^= (unsigned __int64)v22;
    if ( (_RTL_BALANCED_NODE *)v64 != v7 )
      __fastfail(0x1Du);
    if ( (*(_BYTE *)&v17 & 1) != 0 && v19 )
      v19 ^= (unsigned __int64)v7;
    if ( (_RTL_BALANCED_NODE *)v19 != v22 )
      __fastfail(0x1Du);
    v66 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v17 & 1) != 0 )
    {
      if ( !v66 )
        goto LABEL_178;
      v66 ^= (unsigned __int64)v7;
    }
    if ( v66 )
    {
      v67 = *(_QWORD *)(v66 + 8);
      if ( (*(_BYTE *)&v17 & 1) != 0 && v67 )
        v67 ^= v66;
      if ( (_RTL_BALANCED_NODE *)v67 == v7 )
      {
        if ( (*(_BYTE *)&v17 & 1) != 0 )
          v68 = (unsigned __int64)v22 ^ v66;
        else
          v68 = (unsigned __int64)v22;
        *(_QWORD *)(v66 + 8) = v68;
      }
      else
      {
        v95 = *(_QWORD *)v66;
        if ( (*(_BYTE *)&v17 & 1) != 0 && v95 )
          v95 ^= v66;
        if ( (_RTL_BALANCED_NODE *)v95 != v7 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)&v17 & 1) != 0 )
          v96 = (unsigned __int64)v22 ^ v66;
        else
          v96 = (unsigned __int64)v22;
        *(_QWORD *)v66 = v96;
      }
      goto LABEL_115;
    }
LABEL_178:
    if ( Tree->Root != v7 )
      __fastfail(0x1Du);
    Tree->Root = v22;
LABEL_115:
    if ( (*(_BYTE *)&v17 & 1) != 0 && v66 )
      v66 ^= (unsigned __int64)v22;
    *v23 = v66 | *(_DWORD *)v23 & 3;
    v69 = v22->Children[v13];
    if ( (*(_BYTE *)&v17 & 1) == 0 )
      goto LABEL_117;
    if ( v69 )
    {
      v69 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 ^ (unsigned __int64)v69);
LABEL_117:
      if ( v69 )
      {
        v92 = v69->ParentValue;
        v93 = v92 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v65 && v93 )
          v93 ^= (unsigned __int64)v69;
        if ( (_RTL_BALANCED_NODE *)v93 != v22 )
          __fastfail(0x1Du);
        if ( v65 )
          v94 = (unsigned __int64)v7 ^ (unsigned __int64)v69;
        else
          v94 = (unsigned __int64)v7;
        v69->ParentValue = v94 | v92 & 3;
      }
    }
    if ( v65 && v69 )
      v69 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v69);
    *v20 = v69;
    if ( v65 )
      v70 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v22);
    else
      v70 = v7;
    v22->Children[v13] = v70;
    if ( v65 )
      v22 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v22);
    v7->ParentValue = (unsigned __int64)v22 | *(_DWORD *)&v7->0 & 3;
    *(_BYTE *)v23 &= ~1u;
    *(_BYTE *)&v7->0 |= 1u;
    v22 = *v20;
    v21 = *(_BYTE *)&Tree->0 & 1;
    if ( v21 && v22 )
      v22 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v22);
LABEL_29:
    v24 = v22->Children[0];
    if ( v22->Children[0] )
    {
      if ( v21 )
        v24 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 ^ (unsigned __int64)v24);
      if ( (*(_BYTE *)&v24->0 & 1) != 0 )
        break;
    }
    v5 = v22->Children[1];
    if ( v5 )
    {
      if ( v21 )
        v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 ^ (unsigned __int64)v5);
      LOBYTE(v5) = v5->0;
      if ( ((unsigned __int8)v5 & 1) != 0 )
        break;
    }
    if ( (*(_BYTE *)&v7->0 & 1) != 0 )
    {
      *(_BYTE *)&v7->0 &= ~1u;
      *(_BYTE *)&v22->0 |= 1u;
      return (unsigned __int8)v5;
    }
    *(_BYTE *)&v22->0 |= 1u;
    v5 = (_RTL_BALANCED_NODE *)(v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    v62 = *(_BYTE *)&Tree->0 & 1;
    if ( v62 )
    {
      if ( !v5 )
        return (unsigned __int8)v5;
      v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v5);
    }
    if ( !v5 )
      return (unsigned __int8)v5;
    v63 = (unsigned __int64)v5->Children[1];
    if ( v62 && v63 )
      v63 ^= (unsigned __int64)v5;
    v10 = v63 == (_QWORD)v7;
    v7 = v5;
    v13 = v10;
  }
  v50 = v13;
  v51 = v13 ^ 1LL;
  v52 = v22->Children[v51];
  v53 = *(_BYTE *)&Tree->0 & 1;
  if ( v53 && v52 )
    v52 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 ^ (unsigned __int64)v52);
  if ( !v52 || (*(_BYTE *)&v52->0 & 1) == 0 )
  {
    v77 = v22->Children[v13];
    if ( v53 && v77 )
      v77 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 ^ (unsigned __int64)v77);
    *(_BYTE *)&v77->0 &= ~1u;
    v78 = v13 ^ 1;
    v79 = v77->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v80 = *(_BYTE *)&Tree->0 & 1;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v79 )
      v79 ^= (unsigned __int64)v77;
    if ( (_RTL_BALANCED_NODE *)v79 != v22 )
      __fastfail(0x1Du);
    v81 = &v22->Children[(unsigned int)v78 ^ 1LL];
    v82 = *v81;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v82 )
      v82 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 ^ (unsigned __int64)v82);
    if ( v82 != v77 )
      __fastfail(0x1Du);
    v83 = v78;
    v84 = (unsigned __int64)v7->Children[v83];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v84 )
      v84 ^= (unsigned __int64)v7;
    if ( (_RTL_BALANCED_NODE *)v84 != v22 )
      goto LABEL_319;
    v85 = v22->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v85 )
      v85 ^= (unsigned __int64)v22;
    if ( (_RTL_BALANCED_NODE *)v85 != v7 )
LABEL_319:
      __fastfail(0x1Du);
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      v86 = (_RTL_BALANCED_NODE *)((unsigned __int64)v77 ^ (unsigned __int64)v7);
    else
      v86 = v77;
    v7->Children[v83] = v86;
    if ( v80 && v7 )
      v87 = (unsigned __int64)v77 ^ (unsigned __int64)v7;
    else
      v87 = (unsigned __int64)v7;
    v88 = &v77->Children[v83];
    v77->ParentValue = v87 | *(_DWORD *)&v77->0 & 3;
    v89 = v77->Children[v83];
    if ( v80 )
    {
      if ( !v89 )
      {
LABEL_155:
        if ( v80 && v89 )
          v89 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 ^ (unsigned __int64)v89);
        *v81 = v89;
        v90 = v22;
        if ( v80 )
          v90 = (_RTL_BALANCED_NODE *)((unsigned __int64)v77 ^ (unsigned __int64)v22);
        *v88 = v90;
        if ( v80 )
          v91 = (unsigned __int64)v77 ^ (unsigned __int64)v22;
        else
          v91 = (unsigned __int64)v77;
        v52 = v22;
        v22->ParentValue = v91 | *(_DWORD *)&v22->0 & 3;
        v22 = v77;
        goto LABEL_72;
      }
      v89 = (_RTL_BALANCED_NODE *)((unsigned __int64)v77 ^ (unsigned __int64)v89);
    }
    if ( v89 )
    {
      v97 = v89->ParentValue;
      v98 = v97 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v80 && v98 )
        v98 ^= (unsigned __int64)v89;
      if ( (_RTL_BALANCED_NODE *)v98 != v77 )
        __fastfail(0x1Du);
      if ( v80 )
        v99 = (unsigned __int64)v22 ^ (unsigned __int64)v89;
      else
        v99 = (unsigned __int64)v22;
      v89->ParentValue = v99 | v97 & 3;
    }
    goto LABEL_155;
  }
LABEL_72:
  *(_BYTE *)&v22->0 ^= (*(_BYTE *)&v22->0 ^ *(_BYTE *)&v7->0) & 1;
  *(_BYTE *)&v7->0 &= ~1u;
  *(_BYTE *)&v52->0 &= ~1u;
  v54 = v22->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v55 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v54 )
    v54 ^= (unsigned __int64)v22;
  if ( (_RTL_BALANCED_NODE *)v54 != v7 )
    __fastfail(0x1Du);
  v56 = (unsigned __int64)v7->Children[v51];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v56 )
    v56 ^= (unsigned __int64)v7;
  if ( (_RTL_BALANCED_NODE *)v56 != v22 )
    __fastfail(0x1Du);
  v57 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    if ( v57 )
    {
      v57 ^= (unsigned __int64)v7;
      goto LABEL_77;
    }
  }
  else
  {
LABEL_77:
    if ( v57 )
    {
      v58 = *(_QWORD *)(v57 + 8);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v58 )
        v58 ^= v57;
      if ( (_RTL_BALANCED_NODE *)v58 == v7 )
      {
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v59 = (unsigned __int64)v22 ^ v57;
        else
          v59 = (unsigned __int64)v22;
        *(_QWORD *)(v57 + 8) = v59;
      }
      else
      {
        v75 = *(_QWORD *)v57;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v75 )
          v75 ^= v57;
        if ( (_RTL_BALANCED_NODE *)v75 != v7 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v76 = (unsigned __int64)v22 ^ v57;
        else
          v76 = (unsigned __int64)v22;
        *(_QWORD *)v57 = v76;
      }
      goto LABEL_83;
    }
  }
  if ( Tree->Root != v7 )
    __fastfail(0x1Du);
  Tree->Root = v22;
LABEL_83:
  if ( v55 && v57 )
    v57 ^= (unsigned __int64)v22;
  v22->ParentValue = v57 | *(_DWORD *)&v22->0 & 3;
  v60 = (unsigned __int64)v22->Children[v50];
  if ( v55 )
  {
    if ( v60 )
    {
      v60 ^= (unsigned __int64)v22;
      goto LABEL_85;
    }
  }
  else
  {
LABEL_85:
    if ( v60 )
    {
      v72 = *(_QWORD *)(v60 + 16);
      v73 = v72 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v55 && v73 )
        v73 ^= v60;
      if ( (_RTL_BALANCED_NODE *)v73 != v22 )
        __fastfail(0x1Du);
      if ( v55 )
        v74 = (unsigned __int64)v7 ^ v60;
      else
        v74 = (unsigned __int64)v7;
      *(_QWORD *)(v60 + 16) = v74 | v72 & 3;
    }
  }
  if ( v55 && v60 )
    v60 ^= (unsigned __int64)v7;
  v7->Children[v51] = (_RTL_BALANCED_NODE *)v60;
  if ( v55 )
    v61 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v22);
  else
    v61 = v7;
  v22->Children[v50] = v61;
  if ( v55 )
    v22 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v22);
  v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)v22 | *(_DWORD *)&v7->0 & 3);
  v7->ParentValue = (unsigned __int64)v5;
  return (unsigned __int8)v5;
}
