/*
 * XREFs of RtlRbRemoveNode @ 0x14005EF60
 * Callers:
 *     IoStopDiskIoAttributionForContext @ 0x140007C70 (IoStopDiskIoAttributionForContext.c)
 *     PfSnNameRemove @ 0x14001292C (PfSnNameRemove.c)
 *     KiRemoveTimer2 @ 0x14005DBF0 (KiRemoveTimer2.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC (KiAbEntryUpdateWaiterTreePosition.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400C0700 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400C300C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiResetClockInterval @ 0x14010F138 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 *     MiRescanPageFileBitmapPortion @ 0x14011A238 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14011A84C (MiInvalidatePageFileBitmapsCache.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14024E828 (PspJobIoRateVolumeEntryRemove.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14025D3C4 (RtlpHpVsFreeChunkRemove.c)
 *     VmpFaultEntryRemove @ 0x140278C5C (VmpFaultEntryRemove.c)
 *     VmpRemoveMemoryRange @ 0x1402799A0 (VmpRemoveMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140492018 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14074F0A0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  $7D93978C745EB1C2D28075BAF55422B4 v4; // dl
  _RTL_BALANCED_NODE *v5; // r9
  unsigned __int64 v6; // rcx
  _RTL_BALANCED_NODE *v7; // rax
  char v8; // dl
  PRTL_BALANCED_NODE v9; // r11
  bool v10; // zf
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  BOOL v13; // edi
  $424C8BBEF8F6C852886B4C6E806B5DB0 v14; // bl
  char v15; // bl
  _RTL_BALANCED_NODE *v16; // rdx
  $7D93978C745EB1C2D28075BAF55422B4 v17; // bl
  _RTL_BALANCED_NODE *v18; // rbp
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  _RTL_BALANCED_NODE **v21; // r14
  char v22; // dl
  _RTL_BALANCED_NODE *v23; // r8
  unsigned __int64 *v24; // r11
  _RTL_BALANCED_NODE *v25; // rcx
  _RTL_BALANCED_NODE *v26; // rcx
  $424C8BBEF8F6C852886B4C6E806B5DB0 v27; // cl
  unsigned __int64 v28; // rsi
  _RTL_BALANCED_NODE *v29; // rdx
  unsigned __int64 ParentValue; // rbx
  unsigned __int64 v31; // rdx
  char v32; // si
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rdx
  char v36; // bl
  unsigned __int64 v37; // rdx
  char v38; // dl
  _RTL_BALANCED_NODE *v39; // rdx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  char v42; // dl
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  char v47; // si
  unsigned __int64 v48; // rbp
  __int64 v49; // rcx
  PRTL_BALANCED_NODE *v50; // r14
  unsigned __int64 v51; // rcx
  PRTL_BALANCED_NODE v52; // rdx
  unsigned __int64 v53; // rcx
  char v54; // dl
  _BOOL8 v55; // rsi
  __int64 v56; // rbx
  _RTL_BALANCED_NODE *v57; // r9
  char v58; // dl
  unsigned __int64 v59; // rcx
  int v60; // edx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  _RTL_BALANCED_NODE *v66; // rcx
  unsigned __int64 v67; // rcx
  char v68; // dl
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // r10
  unsigned __int64 v73; // rcx
  int v74; // edx
  unsigned __int64 v75; // r9
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rcx
  _RTL_BALANCED_NODE *v78; // rcx
  _RTL_BALANCED_NODE *v79; // rcx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  _RTL_BALANCED_NODE *v82; // r11
  unsigned int v83; // edi
  unsigned __int64 v84; // rcx
  int v85; // edx
  __int64 v86; // r9
  _RTL_BALANCED_NODE **v87; // rdi
  _RTL_BALANCED_NODE *v88; // rcx
  __int64 v89; // r14
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  _RTL_BALANCED_NODE *v92; // rcx
  unsigned __int64 v93; // r9
  _RTL_BALANCED_NODE *v94; // rcx
  _RTL_BALANCED_NODE *v95; // rcx
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // r9
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rbp
  unsigned __int64 v103; // r9
  unsigned __int64 v104; // r9

  v4 = Tree->0;
  v5 = Node->Children[0];
  if ( (*(_BYTE *)&v4 & 1) != 0 && v5 )
    v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v5);
  v6 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v4 & 1) != 0 && v6 )
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
        v28 = (unsigned __int64)v9->Children[0];
        v7 = v9;
        if ( (*(_BYTE *)&v4 & 1) != 0 && v28 )
          v9 = (PRTL_BALANCED_NODE)(v28 ^ (unsigned __int64)v9);
        else
          v9 = v9->Children[0];
      }
      while ( v9->Children[0] );
    }
    if ( (*(_BYTE *)&v4 & 1) != 0 )
      v29 = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)v9);
    else
      v29 = v5;
    v9->Children[0] = v29;
    ParentValue = v5->ParentValue;
    v31 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v32 = *(_BYTE *)&Tree->0 & 1;
    if ( v32 && v31 )
      v31 ^= (unsigned __int64)v5;
    if ( (PRTL_BALANCED_NODE)v31 != Node )
      __fastfail(0x1Du);
    v33 = (unsigned __int64)v9;
    if ( v32 )
      v33 = (unsigned __int64)v5 ^ (unsigned __int64)v9;
    v5->ParentValue = v33 | ParentValue & 3;
    v34 = *(_QWORD *)(v6 + 16);
    v35 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
    v36 = *(_BYTE *)&Tree->0 & 1;
    if ( v36 && v35 )
      v35 ^= v6;
    if ( (PRTL_BALANCED_NODE)v35 != Node )
      __fastfail(0x1Du);
    v37 = (unsigned __int64)v9;
    if ( v36 )
      v37 = v6 ^ (unsigned __int64)v9;
    *(_QWORD *)(v6 + 16) = v37 | v34 & 3;
    v5 = v9->Children[1];
    v38 = *(_BYTE *)&Tree->0 & 1;
    if ( v38 && v5 )
      v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v5);
    if ( v38 )
      v39 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v9);
    else
      v39 = (_RTL_BALANCED_NODE *)v6;
    v40 = v9->ParentValue;
    v9->Children[1] = v39;
    v41 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
    v42 = *(_BYTE *)&Tree->0 & 1;
    if ( v42 && v41 )
      v43 = (unsigned __int64)v9 ^ v41;
    else
      v43 = v40 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_RTL_BALANCED_NODE *)v43 == v7 )
    {
LABEL_55:
      v14 = v9->0;
      v44 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v42 )
      {
        if ( v44 )
          v44 ^= (unsigned __int64)Node;
        if ( v44 )
          v44 ^= (unsigned __int64)v9;
      }
      v45 = v44 | v40 & 3;
      v9->ParentValue = v45;
      *(_BYTE *)&v9->0 ^= (*(_BYTE *)&Node->0 ^ v45) & 1;
      v46 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v46 )
      {
        v47 = *(_BYTE *)&Tree->0 & 1;
        if ( v47 )
          v46 ^= (unsigned __int64)Node;
        v48 = *(_QWORD *)(v46 + 8);
        if ( v47 && v48 )
          v48 ^= v46;
        v49 = 0LL;
        if ( (PRTL_BALANCED_NODE)v48 == Node )
          v49 = 8LL;
        v50 = (PRTL_BALANCED_NODE *)(v49 + v46);
        v51 = *(_QWORD *)(v49 + v46);
        if ( v47 && v51 )
          v51 ^= v46;
        if ( (PRTL_BALANCED_NODE)v51 != Node )
          __fastfail(0x1Du);
        if ( v47 )
          v52 = (PRTL_BALANCED_NODE)((unsigned __int64)v9 ^ v46);
        else
          v52 = v9;
        *v50 = v52;
      }
      else
      {
        if ( Tree->Root != Node )
          __fastfail(0x1Du);
        Tree->Root = v9;
      }
      goto LABEL_22;
    }
    if ( v42 )
    {
      if ( !v41 )
      {
LABEL_207:
        if ( v9 == v7 )
          goto LABEL_55;
LABEL_208:
        __fastfail(0x1Du);
      }
      v41 ^= (unsigned __int64)v9;
    }
    if ( v41 )
      goto LABEL_208;
    goto LABEL_207;
  }
  v5 = (_RTL_BALANCED_NODE *)v6;
LABEL_5:
  v7 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
  v8 = *(_BYTE *)&v4 & 1;
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
    return (unsigned __int8)v7;
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
LABEL_227:
    *(_BYTE *)&Tree->0 |= 1u;
    goto LABEL_21;
  }
  Tree->Min = v7;
  if ( v8 )
    goto LABEL_227;
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
    v53 = v5->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v54 = *(_BYTE *)&Tree->0 & 1;
    if ( v54 && v53 )
      v53 ^= (unsigned __int64)v5;
    if ( (PRTL_BALANCED_NODE)v53 != v9 )
      __fastfail(0x1Du);
    if ( v54 && v7 )
      v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)v5 ^ (unsigned __int64)v7);
    v5->ParentValue = (unsigned __int64)v7;
    return (unsigned __int8)v7;
  }
  if ( v15 )
    return (unsigned __int8)v7;
  while ( 1 )
  {
    v17 = Tree->0;
    v18 = v7;
    v19 = !v13;
    v20 = (unsigned __int64)v7->Children[v19];
    v21 = &v7->Children[v19];
    v22 = *(_BYTE *)&v17 & 1;
    if ( (*(_BYTE *)&v17 & 1) != 0 && v20 )
      v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ v20);
    else
      v23 = v7->Children[v19];
    v24 = (unsigned __int64 *)&v23->16;
    if ( (*(_BYTE *)&v23->0 & 1) == 0 )
      goto LABEL_29;
    v73 = *v24 & 0xFFFFFFFFFFFFFFFCuLL;
    v74 = *(_BYTE *)&v17 & 1;
    if ( (*(_BYTE *)&v17 & 1) != 0 && v73 )
      v73 ^= (unsigned __int64)v23;
    if ( (_RTL_BALANCED_NODE *)v73 != v7 )
      __fastfail(0x1Du);
    if ( (*(_BYTE *)&v17 & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)v7;
    if ( (_RTL_BALANCED_NODE *)v20 != v23 )
      __fastfail(0x1Du);
    v75 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v17 & 1) != 0 )
    {
      if ( !v75 )
        goto LABEL_180;
      v75 ^= (unsigned __int64)v7;
    }
    if ( v75 )
    {
      v76 = *(_QWORD *)(v75 + 8);
      if ( (*(_BYTE *)&v17 & 1) != 0 && v76 )
        v76 ^= v75;
      if ( (_RTL_BALANCED_NODE *)v76 == v7 )
      {
        if ( (*(_BYTE *)&v17 & 1) != 0 )
          v77 = (unsigned __int64)v23 ^ v75;
        else
          v77 = (unsigned __int64)v23;
        *(_QWORD *)(v75 + 8) = v77;
      }
      else
      {
        v100 = *(_QWORD *)v75;
        if ( (*(_BYTE *)&v17 & 1) != 0 && v100 )
          v100 ^= v75;
        if ( (_RTL_BALANCED_NODE *)v100 != v7 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)&v17 & 1) != 0 )
          v101 = (unsigned __int64)v23 ^ v75;
        else
          v101 = (unsigned __int64)v23;
        *(_QWORD *)v75 = v101;
      }
      goto LABEL_127;
    }
LABEL_180:
    if ( Tree->Root != v7 )
      __fastfail(0x1Du);
    Tree->Root = v23;
LABEL_127:
    if ( (*(_BYTE *)&v17 & 1) != 0 && v75 )
      v75 ^= (unsigned __int64)v23;
    *v24 = v75 | *(_DWORD *)v24 & 3;
    v78 = v23->Children[v13];
    if ( (*(_BYTE *)&v17 & 1) == 0 )
      goto LABEL_129;
    if ( v78 )
    {
      v78 = (_RTL_BALANCED_NODE *)((unsigned __int64)v23 ^ (unsigned __int64)v78);
LABEL_129:
      if ( v78 )
      {
        v97 = v78->ParentValue;
        v98 = v97 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v74 && v98 )
          v98 ^= (unsigned __int64)v78;
        if ( (_RTL_BALANCED_NODE *)v98 != v23 )
          __fastfail(0x1Du);
        if ( v74 )
          v99 = (unsigned __int64)v7 ^ (unsigned __int64)v78;
        else
          v99 = (unsigned __int64)v7;
        v78->ParentValue = v99 | v97 & 3;
      }
    }
    if ( v74 && v78 )
      v78 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v78);
    *v21 = v78;
    if ( v74 )
      v79 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v23);
    else
      v79 = v7;
    v23->Children[v13] = v79;
    if ( v74 )
      v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v23);
    v7->ParentValue = (unsigned __int64)v23 | *(_DWORD *)&v7->0 & 3;
    *(_BYTE *)v24 &= ~1u;
    *(_BYTE *)&v7->0 |= 1u;
    v23 = *v21;
    v22 = *(_BYTE *)&Tree->0 & 1;
    if ( v22 && v23 )
      v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v23);
LABEL_29:
    v25 = v23->Children[0];
    if ( v23->Children[0] )
    {
      if ( v22 )
        v25 = (_RTL_BALANCED_NODE *)((unsigned __int64)v23 ^ (unsigned __int64)v25);
      if ( (*(_BYTE *)&v25->0 & 1) != 0 )
        break;
    }
    v26 = v23->Children[1];
    if ( v26 )
    {
      if ( v22 )
        v26 = (_RTL_BALANCED_NODE *)((unsigned __int64)v23 ^ (unsigned __int64)v26);
      if ( (*(_BYTE *)&v26->0 & 1) != 0 )
        break;
    }
    v27 = v7->0;
    if ( (*(_BYTE *)&v27 & 1) != 0 )
    {
      v7->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(*(_BYTE *)&v27 & 0xFE);
      *(_BYTE *)&v23->0 |= 1u;
      return (unsigned __int8)v7;
    }
    *(_BYTE *)&v23->0 |= 1u;
    v67 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v68 = *(_BYTE *)&Tree->0 & 1;
    if ( v68 && v67 )
      v7 = (_RTL_BALANCED_NODE *)(v67 ^ (unsigned __int64)v7);
    else
      v7 = (_RTL_BALANCED_NODE *)(v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v7 )
      return (unsigned __int8)v7;
    v69 = (unsigned __int64)v7->Children[1];
    if ( v68 && v69 )
      v69 ^= (unsigned __int64)v7;
    v13 = v69 == (_QWORD)v18;
  }
  v55 = v13;
  v56 = !v13;
  v57 = v23->Children[v56];
  v58 = *(_BYTE *)&Tree->0 & 1;
  if ( v58 )
  {
    if ( v57 )
    {
      v57 = (_RTL_BALANCED_NODE *)((unsigned __int64)v23 ^ (unsigned __int64)v57);
      goto LABEL_80;
    }
  }
  else
  {
LABEL_80:
    if ( v57 && (*(_BYTE *)&v57->0 & 1) != 0 )
      goto LABEL_82;
  }
  v82 = v23->Children[v13];
  if ( v58 && v82 )
    v82 = (_RTL_BALANCED_NODE *)((unsigned __int64)v23 ^ (unsigned __int64)v82);
  *(_BYTE *)&v82->0 &= ~1u;
  v83 = !v13;
  v84 = v82->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v85 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v84 )
    v84 ^= (unsigned __int64)v82;
  if ( (_RTL_BALANCED_NODE *)v84 != v23 )
    __fastfail(0x1Du);
  v86 = v83;
  v87 = &v23->Children[v83 ^ 1LL];
  v88 = *v87;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v88 )
    v88 = (_RTL_BALANCED_NODE *)((unsigned __int64)v23 ^ (unsigned __int64)v88);
  if ( v88 != v82 )
    __fastfail(0x1Du);
  v89 = v86;
  v90 = (unsigned __int64)v7->Children[v86];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v90 )
    v90 ^= (unsigned __int64)v7;
  if ( (_RTL_BALANCED_NODE *)v90 != v23 )
    goto LABEL_321;
  v91 = v23->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v91 )
    v91 ^= (unsigned __int64)v23;
  if ( (_RTL_BALANCED_NODE *)v91 != v7 )
LABEL_321:
    __fastfail(0x1Du);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v92 = (_RTL_BALANCED_NODE *)((unsigned __int64)v82 ^ (unsigned __int64)v7);
  else
    v92 = v82;
  v7->Children[v89] = v92;
  if ( v85 && v7 )
    v93 = (unsigned __int64)v82 ^ (unsigned __int64)v7;
  else
    v93 = (unsigned __int64)v7;
  v82->ParentValue = v93 | *(_DWORD *)&v82->0 & 3;
  v94 = v82->Children[v89];
  if ( v85 )
  {
    if ( v94 )
    {
      v94 = (_RTL_BALANCED_NODE *)((unsigned __int64)v82 ^ (unsigned __int64)v94);
      goto LABEL_156;
    }
  }
  else
  {
LABEL_156:
    if ( v94 )
    {
      v102 = v94->ParentValue;
      v103 = v102 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v85 && v103 )
        v103 ^= (unsigned __int64)v94;
      if ( (_RTL_BALANCED_NODE *)v103 != v82 )
        __fastfail(0x1Du);
      if ( v85 )
        v104 = (unsigned __int64)v23 ^ (unsigned __int64)v94;
      else
        v104 = (unsigned __int64)v23;
      v94->ParentValue = v104 | v102 & 3;
    }
  }
  if ( v85 && v94 )
    v94 = (_RTL_BALANCED_NODE *)((unsigned __int64)v23 ^ (unsigned __int64)v94);
  *v87 = v94;
  v95 = v23;
  if ( v85 )
    v95 = (_RTL_BALANCED_NODE *)((unsigned __int64)v82 ^ (unsigned __int64)v23);
  v82->Children[v89] = v95;
  if ( v85 )
    v96 = (unsigned __int64)v82 ^ (unsigned __int64)v23;
  else
    v96 = (unsigned __int64)v82;
  v57 = v23;
  v23->ParentValue = v96 | *(_DWORD *)&v23->0 & 3;
  v23 = v82;
LABEL_82:
  *(_BYTE *)&v23->0 ^= (*(_BYTE *)&v7->0 ^ *(_BYTE *)&v23->0) & 1;
  *(_BYTE *)&v7->0 &= ~1u;
  *(_BYTE *)&v57->0 &= ~1u;
  v59 = v23->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v60 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v59 )
    v59 ^= (unsigned __int64)v23;
  if ( (_RTL_BALANCED_NODE *)v59 != v7 )
    __fastfail(0x1Du);
  v61 = (unsigned __int64)v7->Children[v56];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v61 )
    v61 ^= (unsigned __int64)v7;
  if ( (_RTL_BALANCED_NODE *)v61 != v23 )
    __fastfail(0x1Du);
  v62 = v7->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    if ( v62 )
    {
      v62 ^= (unsigned __int64)v7;
      goto LABEL_87;
    }
  }
  else
  {
LABEL_87:
    if ( v62 )
    {
      v63 = *(_QWORD *)(v62 + 8);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v63 )
        v63 ^= v62;
      if ( (_RTL_BALANCED_NODE *)v63 == v7 )
      {
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v64 = (unsigned __int64)v23 ^ v62;
        else
          v64 = (unsigned __int64)v23;
        *(_QWORD *)(v62 + 8) = v64;
      }
      else
      {
        v80 = *(_QWORD *)v62;
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v80 )
          v80 ^= v62;
        if ( (_RTL_BALANCED_NODE *)v80 != v7 )
          __fastfail(0x1Du);
        if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          v81 = (unsigned __int64)v23 ^ v62;
        else
          v81 = (unsigned __int64)v23;
        *(_QWORD *)v62 = v81;
      }
      goto LABEL_93;
    }
  }
  if ( Tree->Root != v7 )
    __fastfail(0x1Du);
  Tree->Root = v23;
LABEL_93:
  if ( v60 && v62 )
    v62 ^= (unsigned __int64)v23;
  v23->ParentValue = v62 | *(_DWORD *)&v23->0 & 3;
  v65 = (unsigned __int64)v23->Children[v55];
  if ( v60 )
  {
    if ( v65 )
    {
      v65 ^= (unsigned __int64)v23;
      goto LABEL_95;
    }
  }
  else
  {
LABEL_95:
    if ( v65 )
    {
      v70 = *(_QWORD *)(v65 + 16);
      v71 = v70 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v60 && v71 )
        v71 ^= v65;
      if ( (_RTL_BALANCED_NODE *)v71 != v23 )
        __fastfail(0x1Du);
      if ( v60 )
        v72 = (unsigned __int64)v7 ^ v65;
      else
        v72 = (unsigned __int64)v7;
      *(_QWORD *)(v65 + 16) = v72 | v70 & 3;
    }
  }
  if ( v60 && v65 )
    v65 ^= (unsigned __int64)v7;
  v7->Children[v56] = (_RTL_BALANCED_NODE *)v65;
  if ( v60 )
    v66 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v23);
  else
    v66 = v7;
  v23->Children[v55] = v66;
  if ( v60 )
    v23 = (_RTL_BALANCED_NODE *)((unsigned __int64)v7 ^ (unsigned __int64)v23);
  v7->ParentValue = (unsigned __int64)v23 | *(_DWORD *)&v7->0 & 3;
  return (unsigned __int8)v7;
}
