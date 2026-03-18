/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00518E8 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreCleanDC @ 0x1C0080350 (GreCleanDC.c)
 *     ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00FDC20 (-vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00495E4 (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C004DBDC (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     GreDCSelectBrush @ 0x1C00514D0 (GreDCSelectBrush.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C0051ED8 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     GreSelectPalette @ 0x1C006ED50 (GreSelectPalette.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C009F11C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C009F158 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00EDC58 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this)
{
  DC *v2; // rcx
  __int64 v3; // rdx
  int v4; // ebx
  DC *v5; // rcx
  __int64 v6; // r15
  BOOL v7; // r13d
  struct REGION *v8; // rcx
  REGION *v9; // rcx
  DC *v10; // rbx
  struct HPATH__ *v11; // rdx
  __int64 v12; // rbx
  struct HOBJ__ *v13; // r12
  unsigned __int16 *v14; // rsi
  char v15; // al
  unsigned int v16; // esi
  GdiHandleManager *v17; // r14
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // edx
  __int64 v21; // r9
  _DWORD *v22; // rdx
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // rsi
  unsigned __int16 *v30; // rbx
  char v31; // al
  unsigned int v32; // esi
  GdiHandleManager *v33; // r14
  __int64 v34; // rcx
  unsigned int v35; // r8d
  unsigned int v36; // edx
  __int64 v37; // r9
  _DWORD *v38; // rdx
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rcx
  unsigned int v42; // r8d
  unsigned int v43; // edx
  __int64 v44; // r10
  __int64 v45; // rcx
  _OWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int128 v50; // xmm0
  __int128 *v51; // rcx
  __int128 *v52; // rax
  __int128 v53; // xmm0
  __int64 v54; // rsi
  unsigned __int16 *v55; // rbx
  char v56; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v57; // rdx
  unsigned int v58; // esi
  GdiHandleManager *v59; // r14
  __int64 v60; // rcx
  unsigned int v61; // r8d
  unsigned int v62; // edx
  __int64 v63; // r9
  _DWORD *v64; // rdx
  int v65; // eax
  __int64 v66; // rsi
  __int64 v67; // rcx
  unsigned int v68; // r8d
  unsigned int v69; // edx
  __int64 v70; // r10
  __int64 v71; // rbx
  unsigned __int16 *v72; // rsi
  char v73; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v74; // rdx
  unsigned int v75; // esi
  GdiHandleManager *v76; // r14
  __int64 v77; // rcx
  unsigned int v78; // r8d
  unsigned int v79; // edx
  __int64 v80; // r9
  _DWORD *v81; // rdx
  int v82; // eax
  __int64 v83; // rsi
  __int64 v84; // rcx
  unsigned int v85; // r8d
  unsigned int v86; // edx
  __int64 v87; // r10
  __int64 v88; // rbx
  DC *v89; // rax
  __int64 v90; // rsi
  unsigned __int16 *v91; // rbx
  char v92; // al
  unsigned int v93; // esi
  GdiHandleManager *v94; // r14
  __int64 v95; // rcx
  unsigned int v96; // r8d
  unsigned int v97; // edx
  __int64 v98; // r9
  _DWORD *v99; // rdx
  int v100; // eax
  __int64 v101; // rsi
  __int64 v102; // rcx
  unsigned int v103; // r8d
  unsigned int v104; // edx
  __int64 v105; // r10
  __int64 v106; // rbx
  DC *v107; // rdx
  __int64 v108; // rax
  __int64 v109; // r8
  int v110; // ecx
  DC *v111; // r12
  unsigned int v112; // eax
  unsigned int v113; // esi
  __int64 v114; // r14
  unsigned int v115; // edx
  unsigned int v116; // ecx
  __int64 v117; // r9
  unsigned int v118; // eax
  __int64 v119; // r9
  unsigned int v120; // edx
  unsigned int v121; // ecx
  DC *v122; // rdx
  int v123; // eax
  GdiHandleManager *v125; // rbx
  unsigned int v126; // eax
  __int64 v127; // r8
  unsigned __int64 v128; // rdx
  unsigned int v129; // r9d
  unsigned int v130; // ecx
  __int64 v131; // r8
  struct OBJECT *v132; // rdx
  char v133; // bl
  unsigned int v134; // edx
  __int64 v135; // rdx
  __int64 v136; // rcx
  unsigned int v137; // ebx
  unsigned int v138; // edx
  __int64 v139; // rdx
  __int64 v140; // rcx
  unsigned int v141; // ebx
  unsigned int v142; // ebx
  unsigned int v143; // ebx
  unsigned int v144; // ebx
  unsigned int v145; // ebx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v146; // rdx
  unsigned int v147; // ecx
  unsigned int v148; // ebx
  unsigned int v149; // ebx
  __int64 v150; // rcx
  unsigned __int16 *v151; // [rsp+30h] [rbp-79h] BYREF
  int v152; // [rsp+38h] [rbp-71h]
  char v153[8]; // [rsp+50h] [rbp-59h] BYREF
  struct OBJECT *v154; // [rsp+58h] [rbp-51h]
  __int64 v155; // [rsp+120h] [rbp+77h] BYREF

  v2 = *this;
  v3 = *((_QWORD *)v2 + 10);
  v4 = *(_DWORD *)(v3 + 8);
  if ( (v4 & 0x1000) != 0 )
    GreDCSelectBrush(v2, *(_QWORD *)(v3 + 16));
  if ( (v4 & 0x2000) != 0 )
    GreDCSelectPen(*this, *(struct HOBJ__ **)(*((_QWORD *)*this + 10) + 24LL));
  v5 = *this;
  v6 = 0LL;
  v7 = *(_DWORD *)(*((_QWORD *)*this + 10) + 308LL) != 1 || (*((_DWORD *)v5 + 66) & 1) != 0;
  if ( *((int *)v5 + 29) > 1 )
    GreRestoreDC(*(struct HOBJ__ **)v5, 1);
  if ( *((struct PALETTE **)*this + 12) != ppalDefault )
    GreSelectPalette(*(HDC *)*this);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    hbmSelectBitmap(*(struct HOBJ__ **)*this, (struct HOBJ__ *)gahStockObjects[21]);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1260) = -1;
  v8 = (struct REGION *)*((_QWORD *)*this + 28);
  if ( v8 )
  {
    if ( v8 != prgnDefault )
      FreeObject(v8, 4LL);
    *((_QWORD *)*this + 28) = 0LL;
  }
  v9 = (REGION *)*((_QWORD *)*this + 29);
  if ( v9 )
  {
    REGION::vDeleteREGION(v9);
    *((_QWORD *)*this + 29) = 0LL;
  }
  v10 = *this;
  v11 = (struct HPATH__ *)*((_QWORD *)*this + 21);
  if ( v11 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v153, v11);
    if ( v154 && (*((_DWORD *)v154 + 22) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v154, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v153);
    *((_QWORD *)v10 + 21) = 0LL;
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 19));
  v12 = *((_QWORD *)*this + 20);
  if ( v12 )
  {
    v13 = *(struct HOBJ__ **)v12;
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v151, (struct OBJECT *)v12, 0, 0, 1);
    if ( !v152 )
    {
LABEL_43:
      if ( (_WORD)v6 == 1 )
      {
        v6 = 0LL;
        v151 = 0LL;
        v152 = 0;
        HANDLELOCK::bLockHobj((HANDLELOCK *)&v151, v13, 0xAu);
        if ( v152 )
        {
          v125 = gpHandleManager;
          v126 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v151 & 0xFFFFFF);
          v127 = *((_QWORD *)v125 + 2);
          v128 = v126;
          v129 = *(_DWORD *)(v127 + 2056);
          if ( v126 >= v129 + ((*(unsigned __int16 *)(v127 + 2) + 0xFFFF) << 16) )
            goto LABEL_207;
          if ( v126 >= v129 )
            v130 = ((v126 - v129) >> 16) + 1;
          else
            v130 = 0;
          v131 = *(_QWORD *)(v127 + 8LL * v130 + 8);
          if ( v130 )
            v128 = ((1 - v130) << 16) - v129 + v126;
          if ( (unsigned int)v128 >= *(_DWORD *)(v131 + 20) )
LABEL_207:
            v132 = 0LL;
          else
            v132 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v131 + 24) + 8 * (v128 >> 8))
                                     + 16LL * (unsigned __int8)v128
                                     + 8);
          v133 = *((_BYTE *)GdiHandleManager::GetEntryFromObject(v125, v132) + 15);
          HANDLELOCK::vUnlock((HANDLELOCK *)&v151);
          if ( (v133 & 2) != 0 )
            bDeleteFont(v13, 0LL);
          if ( v152 )
            HANDLELOCK::vUnlock((HANDLELOCK *)&v151);
        }
      }
      else
      {
        v6 = 0LL;
      }
      goto LABEL_45;
    }
    v14 = v151;
    if ( *((_BYTE *)v151 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
    {
      v134 = (unsigned __int16)*(_DWORD *)v12 | (*(_DWORD *)v12 >> 8) & 0xFF0000;
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v134 | (v134 >> 8) & 0xFF0000);
    }
    v15 = *((_BYTE *)v14 + 14);
    LODWORD(v6) = *(_DWORD *)(v12 + 8);
    if ( v15 == 5 )
    {
      v135 = *(_QWORD *)(v12 + 616);
      v136 = 0LL;
    }
    else
    {
      if ( v15 != 16 )
      {
LABEL_23:
        --*(_DWORD *)(v12 + 8);
        v16 = *(_DWORD *)v14 & 0xFFFFFF;
        if ( v16 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v16,
                                        1)
                 + 13) == HIWORD(v16) )
              v16 = (unsigned __int16)v16;
          }
          else
          {
            v16 = (unsigned __int16)v16;
          }
        }
        v17 = gpHandleManager;
        v18 = *((_QWORD *)gpHandleManager + 2);
        v19 = *(_DWORD *)(v18 + 2056);
        if ( v16 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
          goto LABEL_201;
        if ( v16 >= v19 )
          v20 = ((v16 - v19) >> 16) + 1;
        else
          v20 = 0;
        v21 = *(_QWORD *)(v18 + 8LL * v20 + 8);
        if ( v20 )
          v16 += ((1 - v20) << 16) - v19;
        if ( v16 >= *(_DWORD *)(v21 + 20) )
LABEL_201:
          v22 = 0LL;
        else
          v22 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v16 >> 8))
                           + 16LL * (unsigned __int8)v16
                           + 8);
        v23 = (unsigned __int16)*v22;
        v24 = v23 | (*v22 >> 8) & 0xFF0000u;
        if ( (unsigned int)v24 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v137 = (unsigned __int16)v23;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v23,
                                        1)
                 + 13) == WORD1(v24) )
              v24 = v137;
          }
          else
          {
            v24 = (unsigned __int16)v23;
          }
        }
        v25 = *((_QWORD *)v17 + 2);
        v26 = *(_DWORD *)(v25 + 2056);
        if ( (unsigned int)v24 < v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v24 >= v26 )
            v27 = (((unsigned int)v24 - v26) >> 16) + 1;
          else
            v27 = 0;
          v28 = *(_QWORD *)(v25 + 8LL * v27 + 8);
          if ( v27 )
            v24 = ((1 - v27) << 16) - v26 + (unsigned int)v24;
          *(_DWORD *)(*(_QWORD *)v28 + 24 * v24 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)(unsigned int)v24 >> 8))
          + 16LL * (unsigned __int8)v24,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_43;
      }
      v135 = *(_QWORD *)(v12 + 152);
      v136 = 2LL;
    }
    TrackObjectReferenceDecrement(v136, v135);
    goto LABEL_23;
  }
LABEL_45:
  v29 = *((_QWORD *)*this + 13);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v151, (struct OBJECT *)v29, 0, 0, 1);
  if ( !v152 )
    goto LABEL_65;
  v30 = v151;
  if ( *((_BYTE *)v151 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v138 = (unsigned __int16)*(_DWORD *)v29 | (*(_DWORD *)v29 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v138 | (v138 >> 8) & 0xFF0000);
  }
  v31 = *((_BYTE *)v30 + 14);
  if ( v31 == 5 )
  {
    v139 = *(_QWORD *)(v29 + 616);
    v140 = 0LL;
LABEL_213:
    TrackObjectReferenceDecrement(v140, v139);
    goto LABEL_49;
  }
  if ( v31 == 16 )
  {
    v139 = *(_QWORD *)(v29 + 152);
    v140 = 2LL;
    goto LABEL_213;
  }
LABEL_49:
  --*(_DWORD *)(v29 + 8);
  v32 = *(_DWORD *)v30 & 0xFFFFFF;
  if ( v32 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v141 = *v30;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v32,
                                  1)
           + 13) == HIWORD(v32) )
        v32 = v141;
    }
    else
    {
      v32 = *v30;
    }
  }
  v33 = gpHandleManager;
  v34 = *((_QWORD *)gpHandleManager + 2);
  v35 = *(_DWORD *)(v34 + 2056);
  if ( v32 >= v35 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
    goto LABEL_220;
  if ( v32 >= v35 )
    v36 = ((v32 - v35) >> 16) + 1;
  else
    v36 = 0;
  v37 = *(_QWORD *)(v34 + 8LL * v36 + 8);
  if ( v36 )
    v32 += ((1 - v36) << 16) - v35;
  if ( v32 >= *(_DWORD *)(v37 + 20) )
LABEL_220:
    v38 = 0LL;
  else
    v38 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * ((unsigned __int64)v32 >> 8))
                     + 16LL * (unsigned __int8)v32
                     + 8);
  v39 = (unsigned __int16)*v38;
  v40 = v39 | (*v38 >> 8) & 0xFF0000u;
  if ( (unsigned int)v40 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v142 = (unsigned __int16)v39;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v39,
                                  1)
           + 13) == WORD1(v40) )
        v40 = v142;
    }
    else
    {
      v40 = (unsigned __int16)v39;
    }
  }
  v41 = *((_QWORD *)v33 + 2);
  v42 = *(_DWORD *)(v41 + 2056);
  if ( (unsigned int)v40 < v42 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v40 >= v42 )
      v43 = (((unsigned int)v40 - v42) >> 16) + 1;
    else
      v43 = 0;
    v44 = *(_QWORD *)(v41 + 8LL * v43 + 8);
    if ( v43 )
      v40 = ((1 - v43) << 16) - v42 + (unsigned int)v40;
    *(_DWORD *)(*(_QWORD *)v44 + 24 * v40 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * ((unsigned __int64)(unsigned int)v40 >> 8))
    + 16LL * (unsigned __int8)v40,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
LABEL_65:
  v45 = *((_QWORD *)*this + 39);
  if ( v45 && (DC *)v45 != (DC *)((char *)*this + 276) )
  {
    Win32FreePool(v45);
    *((_QWORD *)*this + 39) = 0LL;
  }
  v46 = &dclevelDefault;
  v47 = 3LL;
  v48 = (__int64)*this + 88;
  v49 = 3LL;
  do
  {
    v48 += 128LL;
    v50 = *v46;
    v46 += 8;
    *(_OWORD *)(v48 - 128) = v50;
    *(_OWORD *)(v48 - 112) = *(v46 - 7);
    *(_OWORD *)(v48 - 96) = *(v46 - 6);
    *(_OWORD *)(v48 - 80) = *(v46 - 5);
    *(_OWORD *)(v48 - 64) = *(v46 - 4);
    *(_OWORD *)(v48 - 48) = *(v46 - 3);
    *(_OWORD *)(v48 - 32) = *(v46 - 2);
    *(_OWORD *)(v48 - 16) = *(v46 - 1);
    --v49;
  }
  while ( v49 );
  *(_OWORD *)v48 = *v46;
  *(_OWORD *)(v48 + 16) = v46[1];
  *(_QWORD *)(v48 + 32) = *((_QWORD *)v46 + 4);
  v51 = (__int128 *)*((_QWORD *)*this + 10);
  v52 = (__int128 *)&DcAttrDefault;
  do
  {
    v51 += 8;
    v53 = *v52;
    v52 += 8;
    *(v51 - 8) = v53;
    *(v51 - 7) = *(v52 - 7);
    *(v51 - 6) = *(v52 - 6);
    *(v51 - 5) = *(v52 - 5);
    *(v51 - 4) = *(v52 - 4);
    *(v51 - 3) = *(v52 - 3);
    *(v51 - 2) = *(v52 - 2);
    *(v51 - 1) = *(v52 - 1);
    --v47;
  }
  while ( v47 );
  *v51 = *v52;
  v51[1] = v52[1];
  *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x12001Fu;
  v54 = *((_QWORD *)*this + 18);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v151, (struct OBJECT *)v54, 0, 0, 0);
  if ( v152 )
  {
    v55 = v151;
    if ( *((_BYTE *)v151 + 14) == 5 )
      RECALTLOCK(
        (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v54 | (unsigned __int64)((*(_DWORD *)v54 >> 8) & 0xFF0000)),
        (struct _BASEOBJECT *)v54);
    v56 = *((_BYTE *)v55 + 14);
    if ( v56 == 5 )
    {
      TrackObjectReferenceIncrement(
        0,
        *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v54 + 616));
    }
    else if ( v56 == 16 )
    {
      v57 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v54 + 152);
      if ( v57 )
      {
        if ( qword_1C018DF88 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C018DF88,
            v57,
            1);
      }
    }
    ++*(_DWORD *)(v54 + 8);
    v58 = *(_DWORD *)v55 & 0xFFFFFF;
    if ( v58 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v143 = *v55;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v58,
                                    1)
             + 13) == HIWORD(v58) )
          v58 = v143;
      }
      else
      {
        v58 = *v55;
      }
    }
    v59 = gpHandleManager;
    v60 = *((_QWORD *)gpHandleManager + 2);
    v61 = *(_DWORD *)(v60 + 2056);
    if ( v58 >= v61 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16) )
      goto LABEL_238;
    if ( v58 >= v61 )
      v62 = ((v58 - v61) >> 16) + 1;
    else
      v62 = 0;
    v63 = *(_QWORD *)(v60 + 8LL * v62 + 8);
    if ( v62 )
      v58 += ((1 - v62) << 16) - v61;
    if ( v58 >= *(_DWORD *)(v63 + 20) )
LABEL_238:
      v64 = 0LL;
    else
      v64 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v63 + 24) + 8 * ((unsigned __int64)v58 >> 8))
                       + 16LL * (unsigned __int8)v58
                       + 8);
    v65 = (unsigned __int16)*v64;
    v66 = v65 | (*v64 >> 8) & 0xFF0000u;
    if ( (unsigned int)v66 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v144 = (unsigned __int16)v65;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v65,
                                    1)
             + 13) == WORD1(v66) )
          v66 = v144;
      }
      else
      {
        v66 = (unsigned __int16)v65;
      }
    }
    v67 = *((_QWORD *)v59 + 2);
    v68 = *(_DWORD *)(v67 + 2056);
    if ( (unsigned int)v66 < v68 + ((*(unsigned __int16 *)(v67 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v66 >= v68 )
        v69 = (((unsigned int)v66 - v68) >> 16) + 1;
      else
        v69 = 0;
      v70 = *(_QWORD *)(v67 + 8LL * v69 + 8);
      if ( v69 )
        v66 = ((1 - v69) << 16) - v68 + (unsigned int)v66;
      *(_DWORD *)(*(_QWORD *)v70 + 24 * v66 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v70 + 24) + 8 * ((unsigned __int64)(unsigned int)v66 >> 8))
      + 16LL * (unsigned __int8)v66,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v71 = *((_QWORD *)*this + 19);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v151, (struct OBJECT *)v71, 0, 0, 0);
  if ( v152 )
  {
    v72 = v151;
    if ( *((_BYTE *)v151 + 14) == 5 )
      RECALTLOCK(
        (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v71 | (unsigned __int64)((*(_DWORD *)v71 >> 8) & 0xFF0000)),
        (struct _BASEOBJECT *)v71);
    v73 = *((_BYTE *)v72 + 14);
    if ( v73 == 5 )
    {
      TrackObjectReferenceIncrement(
        0,
        *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v71 + 616));
    }
    else if ( v73 == 16 )
    {
      v74 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v71 + 152);
      if ( v74 )
      {
        if ( qword_1C018DF88 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C018DF88,
            v74,
            1);
      }
    }
    ++*(_DWORD *)(v71 + 8);
    v75 = *(_DWORD *)v72 & 0xFFFFFF;
    if ( v75 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v75,
                                    1)
             + 13) == HIWORD(v75) )
          v75 = (unsigned __int16)v75;
      }
      else
      {
        v75 = (unsigned __int16)v75;
      }
    }
    v76 = gpHandleManager;
    v77 = *((_QWORD *)gpHandleManager + 2);
    v78 = *(_DWORD *)(v77 + 2056);
    if ( v75 >= v78 + ((*(unsigned __int16 *)(v77 + 2) + 0xFFFF) << 16) )
      goto LABEL_254;
    if ( v75 >= v78 )
      v79 = ((v75 - v78) >> 16) + 1;
    else
      v79 = 0;
    v80 = *(_QWORD *)(v77 + 8LL * v79 + 8);
    if ( v79 )
      v75 += ((1 - v79) << 16) - v78;
    if ( v75 >= *(_DWORD *)(v80 + 20) )
LABEL_254:
      v81 = 0LL;
    else
      v81 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v80 + 24) + 8 * ((unsigned __int64)v75 >> 8))
                       + 16LL * (unsigned __int8)v75
                       + 8);
    v82 = (unsigned __int16)*v81;
    v83 = v82 | (*v81 >> 8) & 0xFF0000u;
    if ( (unsigned int)v83 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v145 = (unsigned __int16)v82;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v82,
                                    1)
             + 13) == WORD1(v83) )
          v83 = v145;
      }
      else
      {
        v83 = (unsigned __int16)v82;
      }
    }
    v84 = *((_QWORD *)v76 + 2);
    v85 = *(_DWORD *)(v84 + 2056);
    if ( (unsigned int)v83 < v85 + ((*(unsigned __int16 *)(v84 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v83 >= v85 )
        v86 = (((unsigned int)v83 - v85) >> 16) + 1;
      else
        v86 = 0;
      v87 = *(_QWORD *)(v84 + 8LL * v86 + 8);
      if ( v86 )
        v83 = ((1 - v86) << 16) - v85 + (unsigned int)v83;
      *(_DWORD *)(*(_QWORD *)v87 + 24 * v83 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v87 + 24) + 8 * ((unsigned __int64)(unsigned int)v83 >> 8))
      + 16LL * (unsigned __int8)v83,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v88 = *((_QWORD *)*this + 6);
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, *(_DWORD *)(v88 + 32) & 1);
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)(gpDispInfo + 32) )
    *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x10000u;
  v89 = *this;
  if ( v7 )
    *((_DWORD *)v89 + 66) |= 1u;
  else
    *((_DWORD *)v89 + 66) &= ~1u;
  v90 = *((_QWORD *)*this + 13);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v151, (struct OBJECT *)v90, 0, 0, 0);
  if ( v152 )
  {
    v91 = v151;
    if ( *((_BYTE *)v151 + 14) == 5 )
      RECALTLOCK(
        (struct HOBJ__ *)((unsigned __int16)*(_DWORD *)v90 | (unsigned __int64)((*(_DWORD *)v90 >> 8) & 0xFF0000)),
        (struct _BASEOBJECT *)v90);
    v92 = *((_BYTE *)v91 + 14);
    if ( v92 == 5 )
    {
      v146 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v90 + 616);
      v147 = 0;
    }
    else
    {
      if ( v92 != 16 )
      {
LABEL_125:
        ++*(_DWORD *)(v90 + 8);
        v93 = *(_DWORD *)v91 & 0xFFFFFF;
        if ( v93 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v148 = *v91;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v93,
                                        1)
                 + 13) == HIWORD(v93) )
              v93 = v148;
          }
          else
          {
            v93 = *v91;
          }
        }
        v94 = gpHandleManager;
        v95 = *((_QWORD *)gpHandleManager + 2);
        v96 = *(_DWORD *)(v95 + 2056);
        if ( v93 >= v96 + ((*(unsigned __int16 *)(v95 + 2) + 0xFFFF) << 16) )
          goto LABEL_270;
        if ( v93 >= v96 )
          v97 = ((v93 - v96) >> 16) + 1;
        else
          v97 = 0;
        v98 = *(_QWORD *)(v95 + 8LL * v97 + 8);
        if ( v97 )
          v93 += ((1 - v97) << 16) - v96;
        if ( v93 >= *(_DWORD *)(v98 + 20) )
LABEL_270:
          v99 = 0LL;
        else
          v99 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v98 + 24) + 8 * ((unsigned __int64)v93 >> 8))
                           + 16LL * (unsigned __int8)v93
                           + 8);
        v100 = (unsigned __int16)*v99;
        v101 = v100 | (*v99 >> 8) & 0xFF0000u;
        if ( (unsigned int)v101 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v149 = (unsigned __int16)v100;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v100,
                                        1)
                 + 13) == WORD1(v101) )
              v101 = v149;
          }
          else
          {
            v101 = (unsigned __int16)v100;
          }
        }
        v102 = *((_QWORD *)v94 + 2);
        v103 = *(_DWORD *)(v102 + 2056);
        if ( (unsigned int)v101 < v103 + ((*(unsigned __int16 *)(v102 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v101 >= v103 )
            v104 = (((unsigned int)v101 - v103) >> 16) + 1;
          else
            v104 = 0;
          v105 = *(_QWORD *)(v102 + 8LL * v104 + 8);
          if ( v104 )
            v101 = ((1 - v104) << 16) - v103 + (unsigned int)v101;
          *(_DWORD *)(*(_QWORD *)v105 + 24 * v101 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v105 + 24) + 8 * ((unsigned __int64)(unsigned int)v101 >> 8))
          + 16LL * (unsigned __int8)v101,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_141;
      }
      v146 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v90 + 152);
      v147 = 2;
    }
    TrackObjectReferenceIncrement(v147, v146);
    goto LABEL_125;
  }
LABEL_141:
  v106 = *((_QWORD *)*this + 274);
  v155 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap(&v155, v106);
  *((_QWORD *)*this + 274) = 0LL;
  v107 = *this;
  if ( (*((_DWORD *)*this + 10) & 1) != 0 )
  {
    v108 = 1444LL;
    v109 = 1440LL;
  }
  else
  {
    v108 = 1436LL;
    v109 = 1432LL;
  }
  v110 = *(_DWORD *)((char *)v107 + v108);
  *((_DWORD *)v107 + 398) = *(_DWORD *)((char *)v107 + v109);
  *((_DWORD *)v107 + 399) = v110;
  v111 = *this;
  v112 = *(_DWORD *)*this;
  *((_DWORD *)*this + 9) |= 0x10u;
  v113 = (unsigned __int16)v112 | (v112 >> 8) & 0xFF0000;
  if ( v113 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v112,
                                  1)
           + 13) == ((unsigned __int16)v112 | (v112 >> 8) & 0xFF0000) >> 16 )
        v113 = (unsigned __int16)v113;
    }
    else
    {
      v113 = (unsigned __int16)v112;
    }
  }
  v114 = *((_QWORD *)gpHandleManager + 2);
  v115 = *(_DWORD *)(v114 + 2056);
  if ( v113 < v115 + ((*(unsigned __int16 *)(v114 + 2) + 0xFFFF) << 16) )
  {
    v116 = v113 >= v115 ? ((v113 - v115) >> 16) + 1 : 0;
    v117 = *(_QWORD *)(v114 + 8LL * v116 + 8);
    v118 = v116 ? v113 + ((1 - v116) << 16) - v115 : v113;
    if ( v118 < *(_DWORD *)(v117 + 20) )
    {
      v109 = v118;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v117 + 24) + 8 * ((unsigned __int64)v118 >> 8))
                     + 16LL * (unsigned __int8)v118
                     + 8) )
        v6 = *(_QWORD *)v117 + 24LL * v118;
    }
  }
  if ( v113 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v113,
                                  1)
           + 13) == HIWORD(v113) )
        v113 = (unsigned __int16)v113;
    }
    else
    {
      v113 = (unsigned __int16)v113;
    }
  }
  v119 = 0LL;
  v120 = *(_DWORD *)(v114 + 2056);
  if ( v113 >= v120 + ((*(unsigned __int16 *)(v114 + 2) + 0xFFFF) << 16) )
    goto LABEL_288;
  if ( v113 >= v120 )
    v121 = ((v113 - v120) >> 16) + 1;
  else
    v121 = 0;
  v109 = *(_QWORD *)(v114 + 8LL * v121 + 8);
  if ( v121 )
    v113 += ((1 - v121) << 16) - v120;
  if ( v113 >= *(_DWORD *)(v109 + 20) )
LABEL_288:
    v122 = 0LL;
  else
    v122 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v109 + 24) + 8 * ((unsigned __int64)v113 >> 8))
                  + 16LL * (unsigned __int8)v113
                  + 8);
  if ( v122 != v111 )
    v6 = 0LL;
  *(_BYTE *)(v6 + 15) |= 4u;
  v123 = *((_DWORD *)*this + 134);
  if ( (v123 & 1) != 0 && (v123 & 2) == 0 )
    DC::vClearDpiScaling(*this);
  if ( v155 )
  {
    v150 = *(unsigned int *)(v155 + 720);
    if ( (v150 & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported(v150, v122, v109, v119) >= 0 )
      RFONTOBJ_dtHelperWrap(&v155, 1LL);
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v155);
  }
  return 1LL;
}
