/*
 * XREFs of RtlRbRemoveNode @ 0x1400E9770
 * Callers:
 *     KiSetClockInterval @ 0x140005980 (KiSetClockInterval.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140063D78 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140064B24 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnNameRemove @ 0x14008B770 (PfSnNameRemove.c)
 *     MiRescanPageFileBitmapPortion @ 0x14009C878 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14009D014 (MiInvalidatePageFileBitmapsCache.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1400AC2DC (RtlpHpVsFreeChunkRemove.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400CD8D4 (IoStopDiskIoAttributionForContext.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400D7170 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400DA49C (MiBitmapsCachedEntryLengthChanged.c)
 *     KiRemoveTimer2 @ 0x1400E9160 (KiRemoveTimer2.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiResetClockInterval @ 0x140184708 (KiResetClockInterval.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140284BAC (PspJobIoRateVolumeEntryRemove.c)
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140297018 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140297FE0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 *     VmpFaultEntryRemove @ 0x1402ABD44 (VmpFaultEntryRemove.c)
 *     VmpRemoveMemoryRange @ 0x1402ACBE0 (VmpRemoveMemoryRange.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140590B80 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapShrinkStorage @ 0x140706E50 (HvpViewMapShrinkStorage.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1407AFEC0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  $7D93978C745EB1C2D28075BAF55422B4 v2; // bl
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdx
  _RTL_BALANCED_NODE *v8; // r14
  char v9; // bl
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rax
  _BOOL8 v12; // r15
  PRTL_BALANCED_NODE v13; // r9
  _RTL_BALANCED_NODE *v14; // r8
  _RTL_BALANCED_NODE *v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // dl
  unsigned __int64 v23; // rax
  char v24; // cl
  _RTL_BALANCED_NODE *v25; // rax
  bool v26; // zf
  unsigned __int64 ParentValue; // rcx
  $424C8BBEF8F6C852886B4C6E806B5DB0 v28; // bl
  unsigned __int64 v29; // rax
  char v30; // si
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  _RTL_BALANCED_NODE *v35; // r11
  unsigned __int64 v36; // rax
  _RTL_BALANCED_NODE *v37; // rax
  char v38; // si
  unsigned __int64 v39; // r11
  __int64 v40; // rax
  PRTL_BALANCED_NODE *v41; // r11
  unsigned __int64 v42; // rax
  PRTL_BALANCED_NODE v43; // rcx
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 Root; // rax
  unsigned __int64 v46; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v47; // cl
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  _RTL_BALANCED_NODE *v50; // rcx
  _RTL_BALANCED_NODE *v51; // rax
  char v52; // bl
  _RTL_BALANCED_NODE *v53; // rcx
  char v54; // cl
  $7D93978C745EB1C2D28075BAF55422B4 v55; // cl
  _RTL_BALANCED_NODE *v56; // rsi
  __int64 v57; // rbp
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // rax
  int v62; // r10d
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // r9
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  _RTL_BALANCED_NODE *v73; // rax
  _RTL_BALANCED_NODE *v74; // rcx
  __int64 v75; // rax
  char v76; // cl
  __int64 v77; // rax
  $424C8BBEF8F6C852886B4C6E806B5DB0 v78; // al
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r10
  unsigned __int64 v81; // r9
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  int v84; // r10d
  __int64 v85; // r11
  __int64 *v86; // rsi
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rcx
  _RTL_BALANCED_NODE *v91; // rax
  unsigned __int64 *v92; // rbx
  unsigned __int64 v93; // rcx
  __int64 v94; // r11
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // r10
  unsigned __int64 v100; // rax
  int v101; // r9d
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  _RTL_BALANCED_NODE **v108; // rsi
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // r11
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rcx
  _RTL_BALANCED_NODE *v114; // rax

  v2 = Tree->0;
  v4 = (unsigned __int64)Node->Children[0];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)Node;
  v6 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)Node;
  v7 = v6;
  if ( v4 )
    v7 = v4;
  v8 = 0LL;
  v9 = *(_BYTE *)&v2 & 1;
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
      Min = Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      if ( (PRTL_BALANCED_NODE)Root != Node )
        __fastfail(0x1Du);
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        v46 = 0LL;
        LOBYTE(Root) = v7 ^ (unsigned __int8)Tree;
        if ( v7 )
          v46 = v7 ^ (unsigned __int64)Tree;
        Tree->Min = (_RTL_BALANCED_NODE *)v46;
        v47 = ($7D93978C745EB1C2D28075BAF55422B4)(v46 | 1);
        Tree->0 = v47;
      }
      else
      {
        Tree->Min = (_RTL_BALANCED_NODE *)v7;
        v47 = ($7D93978C745EB1C2D28075BAF55422B4)v7;
      }
      if ( (*(_BYTE *)&v47 & 1) != 0 )
      {
        LOBYTE(Root) = v7 ^ (unsigned __int8)Tree;
        if ( v7 )
          v8 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)Tree);
        Tree->Root = v8;
      }
      else
      {
        Tree->Root = (_RTL_BALANCED_NODE *)v7;
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
        if ( v50 == (_RTL_BALANCED_NODE *)1 )
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
            Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v7);
            Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ v7 | 1);
          }
          else
          {
            Tree->Min = (_RTL_BALANCED_NODE *)v7;
          }
        }
        else if ( ((unsigned __int8)v50 & 1) != 0 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v14);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v14 | 1);
        }
        else
        {
          Tree->Min = v14;
        }
      }
    }
    v28 = Node->0;
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
  v18 = *(_BYTE *)&Tree->0 & 1;
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
  v22 = *(_BYTE *)&Tree->0 & 1;
  if ( v22 && v21 )
    v21 ^= v6;
  if ( (PRTL_BALANCED_NODE)v21 != Node )
    __fastfail(0x1Du);
  v23 = v6 ^ (unsigned __int64)v13;
  if ( !v22 )
    v23 = (unsigned __int64)v13;
  *(_QWORD *)(v6 + 16) = v20 & 3 | v23;
  v7 = (unsigned __int64)v13->Children[1];
  v24 = *(_BYTE *)&Tree->0 & 1;
  if ( v24 && v7 )
    v7 ^= (unsigned __int64)v13;
  v25 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v13);
  v26 = v24 == 0;
  ParentValue = v13->ParentValue;
  v28 = ($424C8BBEF8F6C852886B4C6E806B5DB0)ParentValue;
  if ( v26 )
    v25 = (_RTL_BALANCED_NODE *)v6;
  v13->Children[1] = v25;
  v29 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v30 = *(_BYTE *)&Tree->0 & 1;
  if ( v30 && v29 )
    v31 = (unsigned __int64)v13 ^ v29;
  else
    v31 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (_RTL_BALANCED_NODE *)v31 != v14 )
  {
    v28 = ($424C8BBEF8F6C852886B4C6E806B5DB0)ParentValue;
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
  v13->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v33 ^ (v33 ^ *(_BYTE *)&Node->0) & 1);
  v34 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v34 )
  {
    v38 = *(_BYTE *)&Tree->0 & 1;
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
  v52 = *(_BYTE *)&v28 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v7 )
    v53 = (_RTL_BALANCED_NODE *)(v7 ^ (unsigned __int64)v14);
  else
    v53 = (_RTL_BALANCED_NODE *)v7;
  LOBYTE(Root) = v12;
  v14->Children[v12] = v53;
  if ( v7 )
  {
    Root = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v54 = *(_BYTE *)&Tree->0 & 1;
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
  v55 = Tree->0;
  while ( 1 )
  {
    v56 = v14;
    v57 = !v12;
    v58 = (unsigned __int64)v14->Children[v57];
    if ( (*(_BYTE *)&v55 & 1) != 0 && v58 )
      v59 = (unsigned __int64)v14 ^ v58;
    else
      v59 = (unsigned __int64)v14->Children[v57];
    if ( (*(_BYTE *)(v59 + 16) & 1) == 0 )
      goto LABEL_209;
    v60 = (unsigned __int64)Tree->Root;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( v60 )
        v60 ^= (unsigned __int64)Tree;
      else
        v60 = 0LL;
    }
    v61 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v62 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v61 )
      v61 ^= v59;
    if ( (_RTL_BALANCED_NODE *)v61 != v14 )
      __fastfail(0x1Du);
    if ( ((__int64)Tree->Min & 1) != 0 && v58 )
      v58 ^= (unsigned __int64)v14;
    if ( v58 != v59 )
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
      v60 = v59;
      goto LABEL_182;
    }
    v64 = *(_QWORD *)(v63 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v64 )
      v64 ^= v63;
    if ( (_RTL_BALANCED_NODE *)v64 == v14 )
    {
      v65 = v59 ^ v63;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v65 = v59;
      *(_QWORD *)(v63 + 8) = v65;
    }
    else
    {
      v66 = *(_QWORD *)v63;
      if ( ((__int64)Tree->Min & 1) != 0 && v66 )
        v66 ^= v63;
      if ( (_RTL_BALANCED_NODE *)v66 != v14 )
        __fastfail(0x1Du);
      v67 = v59 ^ v63;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v67 = v59;
      *(_QWORD *)v63 = v67;
    }
LABEL_182:
    if ( v62 && v63 )
      v63 ^= v59;
    *(_QWORD *)(v59 + 16) = v63 | *(_DWORD *)(v59 + 16) & 3;
    v68 = *(_QWORD *)(v59 + 8 * v12);
    if ( !v62 )
      goto LABEL_188;
    if ( v68 )
    {
      v68 ^= v59;
LABEL_188:
      if ( v68 )
      {
        v69 = *(_QWORD *)(v68 + 16);
        v70 = v69 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v62 && v70 )
          v70 ^= v68;
        if ( v70 != v59 )
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
    v72 = (unsigned __int64)v14 ^ v59;
    v73 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ v59);
    if ( !v62 )
    {
      v73 = v14;
      v72 = v59;
    }
    *(_QWORD *)(v59 + 8 * v12) = v73;
    v14->ParentValue = *(_DWORD *)&v14->0 & 3 | v72;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
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
    *(_BYTE *)(v59 + 16) &= ~1u;
    *(_BYTE *)&v14->0 |= 1u;
    v55 = Tree->0;
    v59 = (unsigned __int64)v14->Children[v57];
    if ( (*(_BYTE *)&v55 & 1) != 0 && v59 )
      v59 ^= (unsigned __int64)v14;
LABEL_209:
    v75 = *(_QWORD *)v59;
    v76 = *(_BYTE *)&v55 & 1;
    if ( *(_QWORD *)v59 )
    {
      if ( v76 )
        v75 ^= v59;
      if ( (*(_BYTE *)(v75 + 16) & 1) != 0 )
        break;
    }
    v77 = *(_QWORD *)(v59 + 8);
    if ( v77 )
    {
      if ( v76 )
        v77 ^= v59;
      if ( (*(_BYTE *)(v77 + 16) & 1) != 0 )
        break;
    }
    v78 = v14->0;
    if ( (*(_BYTE *)&v78 & 1) != 0 )
    {
      LOBYTE(Root) = *(_BYTE *)&v78 & 0xFE;
      v14->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)Root;
      *(_BYTE *)(v59 + 16) |= 1u;
      return Root;
    }
    *(_BYTE *)(v59 + 16) |= 1u;
    v55 = Tree->0;
    Root = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v55 & 1) != 0 && Root )
      v14 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v14);
    else
      v14 = (_RTL_BALANCED_NODE *)(v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v14 )
      return Root;
    v79 = (unsigned __int64)v14->Children[1];
    if ( (*(_BYTE *)&v55 & 1) != 0 && v79 )
      v79 ^= (unsigned __int64)v14;
    v12 = v79 == (_QWORD)v56;
  }
  v80 = *(_QWORD *)(v59 + 8 * v57);
  if ( v76 )
  {
    if ( v80 )
    {
      v80 ^= v59;
      goto LABEL_235;
    }
LABEL_237:
    v81 = *(_QWORD *)(v59 + 8 * v12);
    if ( v76 && v81 )
      v81 ^= v59;
    *(_BYTE *)(v81 + 16) &= ~1u;
    v82 = (unsigned int)v12 ^ 1;
    v83 = *(_QWORD *)(v81 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v84 = *(_BYTE *)&Tree->0 & 1;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v83 )
      v83 ^= v81;
    if ( v83 != v59 )
      __fastfail(0x1Du);
    v85 = (unsigned int)v82;
    v86 = (__int64 *)(v59 + 8 * v12);
    v87 = *v86;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v87 )
      v87 ^= v59;
    if ( v87 != v81 )
      __fastfail(0x1Du);
    v88 = (unsigned __int64)v14->Children[v82];
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v88 )
      v88 ^= (unsigned __int64)v14;
    if ( v88 != v59 )
      goto LABEL_342;
    v89 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v89 )
      v89 ^= v59;
    if ( (_RTL_BALANCED_NODE *)v89 != v14 )
LABEL_342:
      __fastfail(0x1Du);
    v90 = (unsigned __int64)v14 ^ v81;
    v91 = (_RTL_BALANCED_NODE *)((unsigned __int64)v14 ^ v81);
    if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
      v91 = (_RTL_BALANCED_NODE *)v81;
    v14->Children[v85] = v91;
    if ( !v84 || !v14 )
      v90 = (unsigned __int64)v14;
    v92 = (unsigned __int64 *)(v81 + 8 * v85);
    *(_QWORD *)(v81 + 16) = v90 | *(_DWORD *)(v81 + 16) & 3;
    v93 = *v92;
    if ( v84 )
    {
      if ( v93 )
      {
        v93 ^= v81;
        goto LABEL_266;
      }
    }
    else
    {
LABEL_266:
      if ( v93 )
      {
        v94 = *(_QWORD *)(v93 + 16);
        v95 = v94 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v84 && v95 )
          v95 ^= v93;
        if ( v95 != v81 )
          __fastfail(0x1Du);
        v96 = v93 ^ v59;
        if ( !v84 )
          v96 = v59;
        *(_QWORD *)(v93 + 16) = v94 & 3 | v96;
      }
    }
    if ( v84 && v93 )
      v93 ^= v59;
    *v86 = v93;
    v97 = v59 ^ v81;
    v26 = v84 == 0;
    v98 = v59 ^ v81;
    v80 = v59;
    if ( v26 )
    {
      v98 = v59;
      v97 = v81;
    }
    *v92 = v98;
    *(_QWORD *)(v59 + 16) = *(_DWORD *)(v59 + 16) & 3 | v97;
    v59 = v81;
  }
  else
  {
LABEL_235:
    if ( !v80 || (*(_BYTE *)(v80 + 16) & 1) == 0 )
      goto LABEL_237;
  }
  *(_BYTE *)(v59 + 16) ^= (*(_BYTE *)&v14->0 ^ *(_BYTE *)(v59 + 16)) & 1;
  *(_BYTE *)&v14->0 &= ~1u;
  *(_BYTE *)(v80 + 16) &= ~1u;
  v99 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v99 )
      v99 ^= (unsigned __int64)Tree;
    else
      v99 = 0LL;
  }
  v100 = *(_QWORD *)(v59 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v101 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v100 )
    v100 ^= v59;
  if ( (_RTL_BALANCED_NODE *)v100 != v14 )
    __fastfail(0x1Du);
  v102 = (unsigned __int64)v14->Children[v57];
  if ( ((__int64)Tree->Min & 1) != 0 && v102 )
    v102 ^= (unsigned __int64)v14;
  if ( v102 != v59 )
    __fastfail(0x1Du);
  v103 = v14->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v103 )
    {
      v103 ^= (unsigned __int64)v14;
      goto LABEL_298;
    }
LABEL_299:
    if ( (_RTL_BALANCED_NODE *)v99 != v14 )
      __fastfail(0x1Du);
    v99 = v59;
  }
  else
  {
LABEL_298:
    if ( !v103 )
      goto LABEL_299;
    v104 = *(_QWORD *)(v103 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v104 )
      v104 ^= v103;
    if ( (_RTL_BALANCED_NODE *)v104 == v14 )
    {
      v105 = v59 ^ v103;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v105 = v59;
      *(_QWORD *)(v103 + 8) = v105;
    }
    else
    {
      v106 = *(_QWORD *)v103;
      if ( ((__int64)Tree->Min & 1) != 0 && v106 )
        v106 ^= v103;
      if ( (_RTL_BALANCED_NODE *)v106 != v14 )
        __fastfail(0x1Du);
      v107 = v59 ^ v103;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v107 = v59;
      *(_QWORD *)v103 = v107;
    }
  }
  if ( v101 && v103 )
    v103 ^= v59;
  v108 = (_RTL_BALANCED_NODE **)(v59 + 8 * v12);
  *(_QWORD *)(v59 + 16) = v103 | *(_DWORD *)(v59 + 16) & 3;
  v109 = (unsigned __int64)*v108;
  if ( v101 )
  {
    if ( v109 )
    {
      v109 ^= v59;
      goto LABEL_323;
    }
  }
  else
  {
LABEL_323:
    if ( v109 )
    {
      v110 = *(_QWORD *)(v109 + 16);
      v111 = v110 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v101 && v111 )
        v111 ^= v109;
      if ( v111 != v59 )
        __fastfail(0x1Du);
      v112 = (unsigned __int64)v14 ^ v109;
      if ( !v101 )
        v112 = (unsigned __int64)v14;
      *(_QWORD *)(v109 + 16) = v110 & 3 | v112;
    }
  }
  if ( v101 && v109 )
    v109 ^= (unsigned __int64)v14;
  v14->Children[!v12] = (_RTL_BALANCED_NODE *)v109;
  v113 = v59 ^ (unsigned __int64)v14;
  v114 = (_RTL_BALANCED_NODE *)(v59 ^ (unsigned __int64)v14);
  if ( !v101 )
  {
    v114 = v14;
    v113 = v59;
  }
  *v108 = v114;
  Root = *(_DWORD *)&v14->0 & 3;
  v14->ParentValue = Root | v113;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    LOBYTE(Root) = v99 ^ (unsigned __int8)Tree;
    if ( v99 )
      v8 = (_RTL_BALANCED_NODE *)(v99 ^ (unsigned __int64)Tree);
    Tree->Root = v8;
  }
  else
  {
    Tree->Root = (_RTL_BALANCED_NODE *)v99;
  }
  return Root;
}
