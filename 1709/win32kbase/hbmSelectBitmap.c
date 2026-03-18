/*
 * XREFs of hbmSelectBitmap @ 0x1C004F3A0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 *     GreSelectBitmap @ 0x1C0081520 (GreSelectBitmap.c)
 * Callees:
 *     GreMakeBitmapNonStock @ 0x1C001EBA0 (GreMakeBitmapNonStock.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C001F458 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C001FE4C (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C004C150 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004E630 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E7B0 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C004E9D0 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C0053030 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C00A2100 (GreGetScaledLogPixels.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00ED900 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EFAD0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

struct HOBJ__ *__fastcall hbmSelectBitmap(struct HOBJ__ *a1, struct HOBJ__ *a2, int a3, int a4)
{
  struct HOBJ__ *v4; // r14
  int v5; // r12d
  __int16 v6; // edi^2
  struct HOBJ__ *v7; // r13
  __int64 v8; // rbx
  DC *v9; // r15
  _DWORD *v10; // r14
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // edx
  __int64 v16; // r8
  __int16 v17; // ax
  unsigned int v18; // esi
  GdiHandleManager *v19; // r14
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // r9
  _DWORD *v24; // rdx
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned int v28; // r8d
  unsigned int v29; // edx
  __int64 v30; // r10
  int v31; // r8d
  int v32; // ecx
  int v33; // edx
  const wchar_t *v34; // rcx
  struct OBJECT *v35; // r8
  _DWORD *v36; // rsi
  unsigned int v37; // edi
  __int64 v38; // rcx
  unsigned int v39; // r9d
  unsigned int v40; // edx
  __int64 v41; // r8
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v42; // rdx
  unsigned int v43; // esi
  GdiHandleManager *v44; // r14
  __int64 v45; // rcx
  unsigned int v46; // r9d
  unsigned int v47; // edx
  __int64 v48; // r8
  _DWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // rsi
  __int64 v52; // rcx
  unsigned int v53; // r8d
  unsigned int v54; // edx
  __int64 v55; // r10
  struct _ERESOURCE *v56; // rsi
  struct _ERESOURCE *v57; // rdi
  __int16 v58; // r9d^2
  int v59; // edi
  DC *v60; // r12
  unsigned int v61; // r13d
  unsigned int v62; // r15d
  struct OBJECT *v63; // r11
  __int64 v64; // r10
  unsigned __int64 v65; // rdx
  __int64 v66; // r10
  __int64 v67; // r8
  struct OBJECT *v68; // r15
  struct OBJECT *v69; // r14
  void *v70; // rcx
  int v71; // eax
  unsigned __int16 *v72; // rdi
  unsigned int v73; // edx
  char v74; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v75; // rdx
  unsigned int v76; // r15d
  GdiHandleManager *v77; // r12
  __int64 v78; // rcx
  unsigned int v79; // r9d
  unsigned int v80; // edx
  __int64 v81; // r8
  _DWORD *v82; // rdx
  int v83; // eax
  __int64 v84; // r15
  __int64 v85; // rcx
  unsigned int v86; // r8d
  unsigned int v87; // edx
  __int64 v88; // r10
  int v90; // eax
  int v91; // ecx
  unsigned int v92; // ecx
  int *v93; // rdi
  unsigned int v94; // edx
  char v95; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v96; // rdx
  int v97; // edx
  GdiHandleEntryDirectory **v98; // rdi
  unsigned int v99; // eax
  struct OBJECT *EntryObject; // rax
  unsigned int v101; // eax
  GdiHandleEntryDirectory *v102; // rdx
  unsigned __int64 v103; // r8
  unsigned int v104; // r9d
  unsigned int v105; // ecx
  __int64 v106; // rdx
  int v107; // ecx
  int v108; // r8d
  __int64 v109; // rdi
  unsigned int v110; // edx
  char v111; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v112; // rdx
  unsigned int v113; // edi
  GdiHandleManager *v114; // r14
  __int64 v115; // rcx
  unsigned int v116; // r9d
  unsigned int v117; // edx
  __int64 v118; // r8
  _DWORD *v119; // rdx
  int v120; // eax
  __int64 v121; // rdi
  __int64 v122; // rcx
  unsigned int v123; // r8d
  unsigned int v124; // edx
  __int64 v125; // r10
  unsigned int v126; // r15d
  __int64 v127; // r13
  unsigned int v128; // edx
  __int64 v129; // r10
  unsigned int v130; // eax
  __int64 v131; // r9
  unsigned int v132; // edx
  __int64 v133; // r10
  __m128i v134; // xmm1
  int v135; // eax
  __m128i v136; // xmm0
  int v137; // eax
  unsigned int v138; // r15d
  __int64 v139; // r13
  unsigned int v140; // edx
  __int64 v141; // r10
  unsigned int v142; // eax
  unsigned int v143; // edx
  __int64 v144; // r9
  void *v146; // rcx
  int v147; // eax
  __int64 v148; // rdi
  unsigned int v149; // edx
  char v150; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v151; // rdx
  unsigned int v152; // ecx
  GdiHandleEntryDirectory **v153; // rbx
  unsigned int v154; // eax
  struct OBJECT *v155; // rax
  unsigned int v156; // eax
  GdiHandleEntryDirectory *v157; // rcx
  unsigned int v158; // edi
  unsigned int v159; // edi
  unsigned int v160; // edi
  int v161; // edi
  unsigned int v162; // ebx
  unsigned int v163; // edi
  struct _ENTRY *Entry; // rax
  int HwndDpi; // eax
  __m128 v166; // xmm0
  unsigned __int64 v167; // rdx
  int v168; // eax
  __m128 v169; // xmm0
  unsigned int v170; // edi
  unsigned int v171; // edi
  __int16 v172; // ax
  struct HOBJ__ *v173; // rcx
  unsigned int v174; // ebx
  struct _ENTRY *v175; // rax
  struct _ENTRY *v176; // rax
  unsigned int v177; // r14d
  struct _ENTRY *v178; // rax
  struct OBJECT *v179; // [rsp+30h] [rbp-D0h] BYREF
  DC *v180; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v181; // [rsp+40h] [rbp-C0h]
  unsigned int v182; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v183; // [rsp+4Ch] [rbp-B4h]
  __int64 v184; // [rsp+50h] [rbp-B0h]
  unsigned int v185; // [rsp+58h] [rbp-A8h]
  __m128i v186; // [rsp+60h] [rbp-A0h] BYREF
  struct HOBJ__ *v187; // [rsp+70h] [rbp-90h]
  struct HOBJ__ *v188; // [rsp+78h] [rbp-88h]
  struct GdiHandleEntryTable *v189; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v190; // [rsp+88h] [rbp-78h] BYREF
  int v191; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v192; // [rsp+A0h] [rbp-60h] BYREF
  int v193; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v194; // [rsp+B8h] [rbp-48h] BYREF
  int v195; // [rsp+C0h] [rbp-40h]
  int *v196; // [rsp+D0h] [rbp-30h] BYREF
  int v197; // [rsp+D8h] [rbp-28h]
  __int64 v198; // [rsp+E8h] [rbp-18h] BYREF
  int v199; // [rsp+F0h] [rbp-10h]
  __int64 v200; // [rsp+100h] [rbp+0h] BYREF
  int v201; // [rsp+108h] [rbp+8h]
  unsigned int v202; // [rsp+170h] [rbp+70h]

  v202 = (unsigned int)a1;
  v4 = a2;
  v5 = a4;
  v188 = 0LL;
  v6 = WORD1(a1);
  v187 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v190, a1, 1, 0, 0);
  if ( v191 )
  {
    v10 = v190;
    if ( *((_BYTE *)v190 + 14) == 1 && v190[6] == v6 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = v190;
      v12 = *(_DWORD *)v190 & 0xFFFFFF;
      if ( v12 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v158 = *v190;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v158,
                                      1)
               + 13) == HIWORD(v12) )
            v12 = v158;
        }
        else
        {
          v12 = *v190;
        }
      }
      v13 = *((_QWORD *)gpHandleManager + 2);
      v14 = *(_DWORD *)(v13 + 2056);
      if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
        goto LABEL_333;
      if ( v12 >= v14 )
        v15 = ((v12 - v14) >> 16) + 1;
      else
        v15 = 0;
      v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
      if ( v15 )
        v12 += ((1 - v15) << 16) - v14;
      if ( v12 >= *(_DWORD *)(v16 + 20) )
LABEL_333:
        v9 = 0LL;
      else
        v9 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                    + 16LL * (unsigned __int8)v12
                    + 8);
      v17 = *((_WORD *)v9 + 6);
      if ( !v17 || *((struct _KTHREAD **)v9 + 2) == CurrentThread )
      {
        *((_QWORD *)v9 + 2) = CurrentThread;
        v5 = a4;
        *((_WORD *)v9 + 6) = v17 + 1;
      }
      else
      {
        v5 = a4;
        v9 = 0LL;
      }
    }
    v18 = *v10 & 0xFFFFFF;
    if ( v18 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v159 = *(unsigned __int16 *)v10;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v159,
                                    1)
             + 13) == HIWORD(v18) )
          v18 = v159;
      }
      else
      {
        v18 = *(unsigned __int16 *)v10;
      }
    }
    v19 = gpHandleManager;
    v20 = *((_QWORD *)gpHandleManager + 2);
    v21 = *(_DWORD *)(v20 + 2056);
    if ( v18 >= v21 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
      goto LABEL_339;
    if ( v18 >= v21 )
      v22 = ((v18 - v21) >> 16) + 1;
    else
      v22 = 0;
    v23 = *(_QWORD *)(v20 + 8LL * v22 + 8);
    if ( v22 )
      v18 += ((1 - v22) << 16) - v21;
    if ( v18 >= *(_DWORD *)(v23 + 20) )
LABEL_339:
      v24 = 0LL;
    else
      v24 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v18 >> 8))
                       + 16LL * (unsigned __int8)v18
                       + 8);
    v25 = (unsigned __int16)*v24;
    v26 = v25 | (*v24 >> 8) & 0xFF0000u;
    if ( (unsigned int)v26 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v160 = (unsigned __int16)v25;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v25,
                                    1)
             + 13) == WORD1(v26) )
          v26 = v160;
      }
      else
      {
        v26 = (unsigned __int16)v25;
      }
    }
    v27 = *((_QWORD *)v19 + 2);
    v28 = *(_DWORD *)(v27 + 2056);
    if ( (unsigned int)v26 < v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v26 >= v28 )
        v29 = (((unsigned int)v26 - v28) >> 16) + 1;
      else
        v29 = 0;
      v30 = *(_QWORD *)(v27 + 8LL * v29 + 8);
      if ( v29 )
        v26 = ((1 - v29) << 16) - v28 + (unsigned int)v26;
      *(_DWORD *)(*(_QWORD *)v30 + 24 * v26 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)(unsigned int)v26 >> 8))
      + 16LL * (unsigned __int8)v26,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
    v4 = a2;
  }
  v180 = v9;
  if ( !v9 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_41;
  }
  if ( HIDWORD(v181) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 6) + 32LL) & 0x8000) != 0 )
    {
      v161 = *((_DWORD *)v9 + 636);
      if ( v161 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_38;
      v9 = v180;
    }
    _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
    v180 = 0LL;
    goto LABEL_270;
  }
LABEL_38:
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v180) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v180 + 3);
    v180 = 0LL;
    goto LABEL_270;
  }
  if ( (*((_DWORD *)v180 + 134) & 4) != 0 )
    DC::vMarkTransformDirty(v180);
LABEL_41:
  if ( !v180 )
    goto LABEL_270;
  v32 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ((void (*)(void))ExEnterPriorityRegionAndAcquireResourceShared)();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      v32,
      (unsigned int)&LockAcquireShared,
      v31,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v8 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v192, v4, 1, 0, 0);
  if ( v193 )
  {
    v36 = v192;
    if ( *((_BYTE *)v192 + 14) == 5 && v192[6] == WORD1(v4) )
    {
      v37 = *(_DWORD *)v192 & 0xFFFFFF;
      if ( v37 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v162 = *v192;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      v162,
                                      1)
               + 13) == HIWORD(v37) )
            v37 = v162;
        }
        else
        {
          v37 = *v192;
        }
      }
      v38 = *((_QWORD *)gpHandleManager + 2);
      v39 = *(_DWORD *)(v38 + 2056);
      if ( v37 >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
        goto LABEL_358;
      if ( v37 >= v39 )
        v40 = ((v37 - v39) >> 16) + 1;
      else
        v40 = 0;
      v41 = *(_QWORD *)(v38 + 8LL * v40 + 8);
      if ( v40 )
        v37 += ((1 - v40) << 16) - v39;
      if ( v37 >= *(_DWORD *)(v41 + 20) )
LABEL_358:
        v8 = 0LL;
      else
        v8 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)v37 >> 8))
                       + 16LL * (unsigned __int8)v37
                       + 8);
      ++*(_DWORD *)(v8 + 8);
      v42 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 616);
      if ( v42 && qword_1C018DF68 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C018DF68, v42, 1);
    }
    v43 = *v36 & 0xFFFFFF;
    if ( v43 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v43,
                                    1)
             + 13) == HIWORD(v43) )
          v43 = (unsigned __int16)v43;
      }
      else
      {
        v43 = (unsigned __int16)v43;
      }
    }
    v44 = gpHandleManager;
    v45 = *((_QWORD *)gpHandleManager + 2);
    v46 = *(_DWORD *)(v45 + 2056);
    if ( v43 >= v46 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
      goto LABEL_366;
    if ( v43 >= v46 )
      v47 = ((v43 - v46) >> 16) + 1;
    else
      v47 = 0;
    v48 = *(_QWORD *)(v45 + 8LL * v47 + 8);
    if ( v47 )
      v43 += ((1 - v47) << 16) - v46;
    if ( v43 >= *(_DWORD *)(v48 + 20) )
LABEL_366:
      v49 = 0LL;
    else
      v49 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                       + 16LL * (unsigned __int8)v43
                       + 8);
    v50 = (unsigned __int16)*v49;
    v51 = v50 | (*v49 >> 8) & 0xFF0000u;
    if ( (unsigned int)v51 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v163 = (unsigned __int16)v50;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v50,
                                    1)
             + 13) == WORD1(v51) )
          v51 = v163;
      }
      else
      {
        v51 = (unsigned __int16)v50;
      }
    }
    v52 = *((_QWORD *)v44 + 2);
    v53 = *(_DWORD *)(v52 + 2056);
    if ( (unsigned int)v51 < v53 + ((*(unsigned __int16 *)(v52 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v51 >= v53 )
        v54 = (((unsigned int)v51 - v53) >> 16) + 1;
      else
        v54 = 0;
      v55 = *(_QWORD *)(v52 + 8LL * v54 + 8);
      if ( v54 )
        v51 = ((1 - v54) << 16) - v53 + (unsigned int)v51;
      *(_DWORD *)(*(_QWORD *)v55 + 24 * v51 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * ((unsigned __int64)(unsigned int)v51 >> 8))
      + 16LL * (unsigned __int8)v51,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    v56 = (struct _ERESOURCE *)ghsemGreLock;
    if ( v5 == 1 )
    {
      if ( ghsemGreLock )
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v56);
    }
    else if ( ghsemGreLock )
    {
      PsEnterPriorityRegion(v34);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v56);
    }
    v57 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(v34);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v57);
    }
    v34 = L"ghsemHmgr";
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz((unsigned int)L"ghsemHmgr", v33, (_DWORD)v35, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
    v58 = HIWORD(v202);
    v59 = 1;
    v60 = v180;
    v61 = -2147483614;
    v62 = (unsigned __int16)v202 | (v202 >> 8) & 0xFF0000;
    v35 = (struct OBJECT *)*((_QWORD *)v180 + 6);
    v179 = v35;
    if ( v62 >= 0x10000 )
    {
      LODWORD(v34) = (_DWORD)gpHandleManager;
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        Entry = GdiHandleEntryDirectory::GetEntry(
                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                  (unsigned __int16)v202,
                  1);
        v58 = HIWORD(v202);
        v35 = v179;
        LODWORD(v34) = *((unsigned __int8 *)Entry + 13);
        if ( (_DWORD)v34 == HIWORD(v62) )
          v62 = (unsigned __int16)v202;
      }
      else
      {
        v62 = (unsigned __int16)v202;
      }
    }
    v63 = 0LL;
    v64 = *((_QWORD *)gpHandleManager + 2);
    v65 = *(unsigned int *)(v64 + 2056);
    if ( v62 < (unsigned int)v65 + ((*(unsigned __int16 *)(v64 + 2) + 0xFFFF) << 16) )
    {
      if ( v62 >= (unsigned int)v65 )
        LODWORD(v34) = ((v62 - (unsigned int)v65) >> 16) + 1;
      else
        LODWORD(v34) = 0;
      v66 = *(_QWORD *)(v64 + 8LL * (unsigned int)v34 + 8);
      if ( (_DWORD)v34 )
        v62 += ((1 - (_DWORD)v34) << 16) - v65;
      v67 = 0LL;
      if ( v62 < *(_DWORD *)(v66 + 20) )
      {
        v65 = (unsigned __int64)v62 >> 8;
        v34 = *(const wchar_t **)(*(_QWORD *)(**(_QWORD **)(v66 + 24) + 8 * v65) + 16LL * (unsigned __int8)v62 + 8);
        if ( v34 )
        {
          LODWORD(v34) = 3 * v62;
          v67 = *(_QWORD *)v66 + 24LL * v62;
        }
        v58 = HIWORD(v202);
      }
      if ( v67 && *(_BYTE *)(v67 + 14) == 1 && *(_WORD *)(v67 + 12) == v58 )
        v61 = *(_DWORD *)(v67 + 8) & 0xFFFFFFFE;
      v35 = v179;
    }
    if ( *((_DWORD *)v60 + 8) != 1
      || *(_DWORD *)(v8 + 168) && !SURFACE::bStockSurface((SURFACE *)v8) && *(_QWORD *)(v8 + 160) != *(_QWORD *)v60 )
    {
      goto LABEL_307;
    }
    v68 = *(struct OBJECT **)(v8 + 128);
    if ( (*(_WORD *)(v8 + 100) || *(_QWORD *)(v8 + 24)) && *(struct OBJECT **)(v8 + 48) != v35 )
      goto LABEL_307;
    if ( !v68 )
    {
      if ( *(_DWORD *)(v8 + 96) != *((_DWORD *)v35 + 531) )
      {
LABEL_307:
        GreReleaseHmgrSemaphore((int)v34, v65, (int)v35);
LABEL_263:
        if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz((_DWORD)v34, (unsigned int)&LockRelease, (_DWORD)v35, (_DWORD)v56, (__int64)L"hsem");
        if ( v56 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v56);
          PsLeavePriorityRegion();
        }
        v7 = v188;
        goto LABEL_267;
      }
      if ( (*((_DWORD *)v35 + 547) & 0x100) != 0 )
        v68 = v63;
      else
        v68 = (struct OBJECT *)*((_QWORD *)v35 + 228);
    }
    if ( v61 && (*(_DWORD *)(v8 + 112) & 0x800) != 0 )
      goto LABEL_307;
    v69 = (struct OBJECT *)*((_QWORD *)v60 + 64);
    if ( !v69 )
      v69 = SURFACE::pdibDefault;
    if ( ((*((_DWORD *)v69 + 28) & 0x4000000) == 0
       || (*(_DWORD *)(v8 + 112) & 0x4000000) == 0
       || (*((_DWORD *)v69 + 29) & 0x200) != 0)
      && !a4
      && !a3 )
    {
      goto LABEL_307;
    }
    v185 = *(_DWORD *)(*((_QWORD *)v60 + 10) + 312LL);
    v182 = v185 & 7;
    if ( (v185 & 7) != 0 )
    {
      DC::dwSetLayout(v60, -1, 0);
      v60 = v180;
    }
    if ( *(struct OBJECT **)(v8 + 128) != v68 )
    {
      *(_DWORD *)(v8 + 112) |= 0x8000000u;
      *(_QWORD *)(v8 + 128) = v68;
      if ( v68 )
        HmgIncrementShareReferenceCount(v68);
      v60 = v180;
    }
    if ( (*((_DWORD *)v69 + 28) & 0x1000000) != 0 )
      v187 = *(struct HOBJ__ **)v69;
    v188 = (struct HOBJ__ *)*((_QWORD *)v69 + 4);
    if ( a2 == v188 )
    {
LABEL_260:
      if ( v182 )
        DC::dwSetLayout(v60, -1, v185);
      if ( !v59 )
        goto LABEL_263;
      goto LABEL_307;
    }
    if ( (struct OBJECT *)v8 == SURFACE::pdibDefault )
    {
      v70 = (void *)*((_QWORD *)v60 + 60);
      *((_QWORD *)v60 + 64) = 0LL;
      if ( v70
        && (unsigned int)UserIsGDIScalingApplicable(v70)
        && (HwndDpi = UserGetHwndDpi(*((void **)v60 + 60)), HwndDpi && v183 != 96) )
      {
        v166 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
        v166.m128_f32[0] = v166.m128_f32[0] / 96.0;
        DC::vSetDpiScaling(v60, _mm_unpacklo_ps(v166, v166).m128_u64[0]);
      }
      else
      {
        v71 = *((_DWORD *)v60 + 134);
        if ( (v71 & 1) != 0 )
        {
          *(_QWORD *)((char *)v60 + 540) = 0LL;
          *(_QWORD *)((char *)v60 + 548) = 0LL;
          *((_DWORD *)v60 + 9) |= 0x10u;
          *((_DWORD *)v60 + 134) = v71 & 0xFFFFFFF8 | 4;
        }
      }
      goto LABEL_119;
    }
    *((_QWORD *)v60 + 64) = v8;
    if ( (*(_DWORD *)(v8 + 116) & 0x800) != 0 )
    {
      v167 = _mm_unpacklo_ps((__m128)*(unsigned int *)(v8 + 596), (__m128)*(unsigned int *)(v8 + 600)).m128_u64[0];
    }
    else
    {
      v146 = (void *)*((_QWORD *)v60 + 60);
      if ( !v146
        || !(unsigned int)UserIsGDIScalingApplicable(v146)
        || (v168 = UserGetHwndDpi(*((void **)v60 + 60)), !v168 || (_WORD)v184 == 96) )
      {
        v147 = *((_DWORD *)v60 + 134);
        if ( (v147 & 1) != 0 )
        {
          *(_QWORD *)((char *)v60 + 540) = 0LL;
          *((_DWORD *)v60 + 9) |= 0x10u;
          *((_DWORD *)v60 + 134) = v147 & 0xFFFFFFF8 | 4;
          *(_QWORD *)((char *)v60 + 548) = 0LL;
        }
        goto LABEL_282;
      }
      v169 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v169.m128_f32[0] = v169.m128_f32[0] / 96.0;
      v167 = _mm_unpacklo_ps(v169, v169).m128_u64[0];
    }
    DC::vSetDpiScaling(v60, v167);
LABEL_282:
    if ( (*(_DWORD *)v8 & 0x800000) != 0 && (*(_WORD *)(v8 + 102) & 0x200) != 0
      || !*(_WORD *)(v8 + 100) && *(_DWORD *)(v8 + 224) )
    {
      *((_DWORD *)v180 + 9) |= 0x10000u;
    }
    else
    {
      *((_DWORD *)v180 + 9) &= ~0x10000u;
    }
LABEL_119:
    *((_QWORD *)v180 + 66) = *(_QWORD *)(v8 + 56);
    *(_DWORD *)(*((_QWORD *)v180 + 10) + 8LL) |= 0xFu;
    if ( v69 != SURFACE::pdibDefault )
    {
      if ( (*((_DWORD *)v69 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported() >= 0 )
        vMirrorIncludeNotifyWrap(&v180, v69, 0LL);
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v194, v69, 0, 0, 1);
      if ( v195 )
      {
        v72 = v194;
        if ( *((_BYTE *)v194 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
        {
          v73 = (unsigned __int16)*(_DWORD *)v69 | (*(_DWORD *)v69 >> 8) & 0xFF0000;
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v73 | (v73 >> 8) & 0xFF0000);
        }
        v74 = *((_BYTE *)v72 + 14);
        if ( v74 == 5 )
        {
          v75 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v69 + 77);
          if ( v75 && qword_1C018DF68 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              qword_1C018DF68,
              v75,
              0);
        }
        else if ( v74 == 16 )
        {
          TrackObjectReferenceDecrement(
            2u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v69 + 19));
        }
        --*((_DWORD *)v69 + 2);
        v76 = *(_DWORD *)v72 & 0xFFFFFF;
        if ( v76 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v170 = *v72;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v76,
                                        1)
                 + 13) == HIWORD(v76) )
              v76 = v170;
          }
          else
          {
            v76 = *v72;
          }
        }
        v77 = gpHandleManager;
        v78 = *((_QWORD *)gpHandleManager + 2);
        v79 = *(_DWORD *)(v78 + 2056);
        if ( v76 >= v79 + ((*(unsigned __int16 *)(v78 + 2) + 0xFFFF) << 16) )
          goto LABEL_400;
        if ( v76 >= v79 )
          v80 = ((v76 - v79) >> 16) + 1;
        else
          v80 = 0;
        v81 = *(_QWORD *)(v78 + 8LL * v80 + 8);
        if ( v80 )
          v76 += ((1 - v80) << 16) - v79;
        if ( v76 >= *(_DWORD *)(v81 + 20) )
LABEL_400:
          v82 = 0LL;
        else
          v82 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v81 + 24) + 8 * ((unsigned __int64)v76 >> 8))
                           + 16LL * (unsigned __int8)v76
                           + 8);
        v83 = (unsigned __int16)*v82;
        v84 = v83 | (*v82 >> 8) & 0xFF0000u;
        if ( (unsigned int)v84 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v171 = (unsigned __int16)v83;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v83,
                                        1)
                 + 13) == WORD1(v84) )
              v84 = v171;
          }
          else
          {
            v84 = (unsigned __int16)v83;
          }
        }
        v85 = *((_QWORD *)v77 + 2);
        v86 = *(_DWORD *)(v85 + 2056);
        if ( (unsigned int)v84 < v86 + ((*(unsigned __int16 *)(v85 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v84 >= v86 )
            v87 = (((unsigned int)v84 - v86) >> 16) + 1;
          else
            v87 = 0;
          v88 = *(_QWORD *)(v85 + 8LL * v87 + 8);
          if ( v87 )
            v84 = ((1 - v87) << 16) - v86 + (unsigned int)v84;
          *(_DWORD *)(*(_QWORD *)v88 + 24 * v84 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v88 + 24) + 8 * ((unsigned __int64)(unsigned int)v84 >> 8))
          + 16LL * (unsigned __int8)v84,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
      }
      if ( (*((_DWORD *)v69 + 42))-- == 1 )
      {
        if ( (*(_DWORD *)v69 & 0x800000) != 0 )
        {
          v172 = *((_WORD *)v69 + 51);
          if ( (v172 & 0x400) != 0 )
          {
            v173 = *(struct HOBJ__ **)v69;
            *((_WORD *)v69 + 51) = v172 & 0xFBFF;
            GreMakeBitmapNonStock(v173);
          }
        }
        *((_QWORD *)v69 + 20) = 0LL;
      }
      if ( !*((_DWORD *)v69 + 42) )
      {
        if ( v187 )
          v187 = *(struct HOBJ__ **)v69;
        if ( (*((_DWORD *)v69 + 28) & 0x8000000) != 0 )
        {
          v186.m128i_i64[0] = *((_QWORD *)v69 + 16);
          *((_QWORD *)v69 + 16) = 0LL;
          XEPALOBJ::vUnrefPalette((struct OBJECT **)&v186);
        }
        *((_DWORD *)v69 + 28) &= ~0x8000000u;
      }
    }
    if ( (int)IsvMirrorIncludeNotifySupported() >= 0 )
      vMirrorIncludeNotifyWrap(&v180, v8, 1LL);
    v90 = *(_DWORD *)(v8 + 112);
    if ( (v90 & 0x4000) != 0 || (v90 & 0x800010) != 0 && (*((_DWORD *)v179 + 8) & 1) != 0 )
      *((_DWORD *)v180 + 9) |= 0x200u;
    else
      *((_DWORD *)v180 + 9) &= ~0x200u;
    v91 = *((_DWORD *)v180 + 9);
    if ( (*(_DWORD *)(v8 + 112) & v91 & 0x200) != 0 )
      v92 = v91 | 0x8000;
    else
      v92 = v91 & 0xFFFF7FFF;
    *((_DWORD *)v180 + 9) = v92;
    if ( (struct OBJECT *)v8 != SURFACE::pdibDefault )
    {
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v196, (struct OBJECT *)v8, 0, 0, 0);
      if ( v197 )
      {
        v93 = v196;
        if ( *((_BYTE *)v196 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
        {
          v94 = (unsigned __int16)*(_DWORD *)v8 | (*(_DWORD *)v8 >> 8) & 0xFF0000;
          RECALTLOCKSTACKBACKTRACE((unsigned __int16)v94 | (v94 >> 8) & 0xFF0000, (struct _BASEOBJECT *)v8);
        }
        v95 = *((_BYTE *)v93 + 14);
        if ( v95 == 5 )
        {
          v96 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 616);
          if ( v96 && qword_1C018DF68 )
            NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
              qword_1C018DF68,
              v96,
              1);
        }
        else if ( v95 == 16 )
        {
          TrackObjectReferenceIncrement(
            2u,
            *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 152));
        }
        ++*(_DWORD *)(v8 + 8);
        v97 = *v93;
        v98 = (GdiHandleEntryDirectory **)gpHandleManager;
        v99 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v97 & 0xFFFFFF);
        EntryObject = GdiHandleEntryDirectory::GetEntryObject(v98[2], v99);
        v101 = GdiHandleManager::DecodeIndex(
                 v98,
                 (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000u);
        v102 = v98[2];
        v103 = v101;
        v104 = *((_DWORD *)v102 + 514);
        if ( v101 < v104 + ((*((unsigned __int16 *)v102 + 1) + 0xFFFF) << 16) )
        {
          if ( v101 >= v104 )
            v105 = ((v101 - v104) >> 16) + 1;
          else
            v105 = 0;
          v106 = *((_QWORD *)v102 + v105 + 1);
          if ( v105 )
            v103 = ((1 - v105) << 16) - v104 + v101;
          *(_DWORD *)(*(_QWORD *)v106 + 24 * v103 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v106 + 24) + 8 * (v103 >> 8)) + 16LL * (unsigned __int8)v103,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
      }
      ++*(_DWORD *)(v8 + 168);
      if ( (*(_DWORD *)v8 & 0x800000) == 0 || (*(_WORD *)(v8 + 102) & 0x200) == 0 )
      {
        *(_QWORD *)(v8 + 160) = *(_QWORD *)v180;
        *(_QWORD *)(v8 + 48) = *((_QWORD *)v180 + 6);
      }
    }
    if ( !*(_WORD *)(v8 + 100) && *(_QWORD *)(v8 + 200) )
      *(_DWORD *)(*((_QWORD *)v180 + 10) + 8LL) |= 0x4000u;
    else
      *(_DWORD *)(*((_QWORD *)v180 + 10) + 8LL) &= ~0x4000u;
    if ( !*(_WORD *)(v8 + 100) && *(_QWORD *)(v8 + 200) )
      *(_QWORD *)(*((_QWORD *)v180 + 10) + 128LL) = *(_QWORD *)(v8 + 216);
    else
      *(_QWORD *)(*((_QWORD *)v180 + 10) + 128LL) = 0LL;
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v198, (struct OBJECT *)v8, 0, 0, 1);
    if ( v199 )
    {
      v109 = v198;
      if ( *(_BYTE *)(v198 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
      {
        v110 = (unsigned __int16)*(_DWORD *)v8 | (*(_DWORD *)v8 >> 8) & 0xFF0000;
        RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v110 | (v110 >> 8) & 0xFF0000);
      }
      v111 = *(_BYTE *)(v109 + 14);
      if ( v111 == 5 )
      {
        v112 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 616);
        if ( v112 && qword_1C018DF68 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C018DF68,
            v112,
            0);
      }
      else if ( v111 == 16 )
      {
        TrackObjectReferenceDecrement(
          2u,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 152));
      }
      --*(_DWORD *)(v8 + 8);
      v113 = *(_DWORD *)v109 & 0xFFFFFF;
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
      v114 = gpHandleManager;
      v115 = *((_QWORD *)gpHandleManager + 2);
      v116 = *(_DWORD *)(v115 + 2056);
      if ( v113 >= v116 + ((*(unsigned __int16 *)(v115 + 2) + 0xFFFF) << 16) )
        goto LABEL_426;
      if ( v113 >= v116 )
        v117 = ((v113 - v116) >> 16) + 1;
      else
        v117 = 0;
      v118 = *(_QWORD *)(v115 + 8LL * v117 + 8);
      if ( v117 )
        v113 += ((1 - v117) << 16) - v116;
      if ( v113 >= *(_DWORD *)(v118 + 20) )
LABEL_426:
        v119 = 0LL;
      else
        v119 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v118 + 24) + 8 * ((unsigned __int64)v113 >> 8))
                          + 16LL * (unsigned __int8)v113
                          + 8);
      v120 = (unsigned __int16)*v119;
      v121 = v120 | (*v119 >> 8) & 0xFF0000u;
      if ( (unsigned int)v121 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v174 = (unsigned __int16)v120;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v120,
                                      1)
               + 13) == WORD1(v121) )
            v121 = v174;
        }
        else
        {
          v121 = (unsigned __int16)v120;
        }
      }
      v122 = *((_QWORD *)v114 + 2);
      v123 = *(_DWORD *)(v122 + 2056);
      if ( (unsigned int)v121 < v123 + ((*(unsigned __int16 *)(v122 + 2) + 0xFFFF) << 16) )
      {
        if ( (unsigned int)v121 >= v123 )
          v124 = (((unsigned int)v121 - v123) >> 16) + 1;
        else
          v124 = 0;
        v125 = *(_QWORD *)(v122 + 8LL * v124 + 8);
        if ( v124 )
          v121 = ((1 - v124) << 16) - v123 + (unsigned int)v121;
        *(_DWORD *)(*(_QWORD *)v125 + 24 * v121 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v125 + 24) + 8 * ((unsigned __int64)(unsigned int)v121 >> 8))
        + 16LL * (unsigned __int8)v121,
          0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
    }
    v8 = 0LL;
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(v107, (unsigned int)&LockRelease, v108, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion();
    }
    v59 = 0;
    DC::bSetDefaultRegion(v180);
    v60 = v180;
    v35 = (struct OBJECT *)*((_QWORD *)v180 + 192);
    v126 = (unsigned __int16)*(_DWORD *)v180 | (*(_DWORD *)v180 >> 8) & 0xFF0000;
    v179 = v35;
    if ( v126 >= 0x10000 )
    {
      LODWORD(v34) = (_DWORD)gpHandleManager;
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v175 = GdiHandleEntryDirectory::GetEntry(
                 *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                 (unsigned __int16)v126,
                 1);
        v35 = v179;
        LODWORD(v34) = *((unsigned __int8 *)v175 + 13);
        if ( (_DWORD)v34 == HIWORD(v126) )
          v126 = (unsigned __int16)v126;
      }
      else
      {
        v126 = (unsigned __int16)v126;
      }
    }
    v127 = *((_QWORD *)gpHandleManager + 2);
    v128 = *(_DWORD *)(v127 + 2056);
    if ( v126 >= v128 + ((*(unsigned __int16 *)(v127 + 2) + 0xFFFF) << 16) )
    {
      v131 = 0LL;
      v184 = 0LL;
    }
    else
    {
      if ( v126 >= v128 )
        LODWORD(v34) = ((v126 - v128) >> 16) + 1;
      else
        LODWORD(v34) = 0;
      v129 = *(_QWORD *)(v127 + 8LL * (unsigned int)v34 + 8);
      if ( (_DWORD)v34 )
        v130 = v126 + ((1 - (_DWORD)v34) << 16) - v128;
      else
        v130 = v126;
      v131 = 0LL;
      v184 = 0LL;
      if ( v130 < *(_DWORD *)(v129 + 20) )
      {
        v34 = *(const wchar_t **)(*(_QWORD *)(**(_QWORD **)(v129 + 24) + 8 * ((unsigned __int64)v130 >> 8))
                                + 16LL * (unsigned __int8)v130
                                + 8);
        if ( v34 )
        {
          LODWORD(v34) = 3 * v130;
          v131 = *(_QWORD *)v129 + 24LL * v130;
          v184 = v131;
        }
        v35 = v179;
      }
    }
    if ( v126 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v176 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v127, (unsigned __int16)v126, 1);
        v35 = v179;
        v131 = v184;
        LODWORD(v34) = *((unsigned __int8 *)v176 + 13);
        if ( (_DWORD)v34 == HIWORD(v126) )
          v126 = (unsigned __int16)v126;
      }
      else
      {
        v126 = (unsigned __int16)v126;
      }
    }
    v132 = *(_DWORD *)(v127 + 2056);
    if ( v126 >= v132 + ((*(unsigned __int16 *)(v127 + 2) + 0xFFFF) << 16) )
      goto LABEL_445;
    if ( v126 >= v132 )
      LODWORD(v34) = ((v126 - v132) >> 16) + 1;
    else
      LODWORD(v34) = 0;
    v133 = *(_QWORD *)(v127 + 8LL * (unsigned int)v34 + 8);
    if ( (_DWORD)v34 )
      v126 += ((1 - (_DWORD)v34) << 16) - v132;
    if ( v126 >= *(_DWORD *)(v133 + 20) )
    {
LABEL_445:
      v65 = 0LL;
    }
    else
    {
      LODWORD(v34) = 2 * (unsigned __int8)v126;
      v65 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v133 + 24) + 8 * ((unsigned __int64)v126 >> 8))
                      + 16LL * (unsigned __int8)v126
                      + 8);
    }
    if ( (DC *)v65 != v60 )
      v131 = 0LL;
    if ( (*(_BYTE *)(v131 + 15) & 4) != 0 )
    {
      if ( !v35 )
        goto LABEL_447;
      if ( *((_DWORD *)v35 + 21) == 1 )
      {
        LODWORD(v34) = 1;
      }
      else
      {
        LODWORD(v34) = 3;
        if ( *((_DWORD *)v35 + 20) <= 0xA0u )
          LODWORD(v34) = 2;
      }
      *(_DWORD *)(*((_QWORD *)v60 + 10) + 392LL) = (_DWORD)v34;
      if ( *((_DWORD *)v35 + 21) == 1 )
      {
LABEL_447:
        v136 = (__m128i)rclEmpty;
      }
      else
      {
        LODWORD(v34) = *((_DWORD *)v60 + 362);
        v186 = *(__m128i *)((char *)v35 + 88);
        v134 = v186;
        v186.m128i_i32[2] -= (int)v34;
        v186.m128i_i32[0] = _mm_cvtsi128_si32(v134) - (_DWORD)v34;
        v135 = *((_DWORD *)v60 + 363);
        v186.m128i_i32[1] -= v135;
        v186.m128i_i32[3] -= v135;
        v136 = v186;
      }
      *(__m128i *)(*((_QWORD *)v60 + 10) + 396LL) = v136;
      v137 = (unsigned __int16)*(_DWORD *)v60;
      v138 = v137 | (*(_DWORD *)v60 >> 8) & 0xFF0000;
      if ( v138 >= 0x10000 )
      {
        LODWORD(v34) = (_DWORD)gpHandleManager;
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v177 = (unsigned __int16)v137;
          LODWORD(v34) = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                                (unsigned __int16)v137,
                                                1)
                         + 13);
          if ( (_DWORD)v34 == HIWORD(v138) )
            v138 = v177;
        }
        else
        {
          v138 = (unsigned __int16)v137;
        }
      }
      v139 = *((_QWORD *)gpHandleManager + 2);
      v140 = *(_DWORD *)(v139 + 2056);
      if ( v138 >= v140 + ((*(unsigned __int16 *)(v139 + 2) + 0xFFFF) << 16) )
      {
        v35 = 0LL;
        v179 = 0LL;
      }
      else
      {
        if ( v138 >= v140 )
          LODWORD(v34) = ((v138 - v140) >> 16) + 1;
        else
          LODWORD(v34) = 0;
        v141 = *(_QWORD *)(v139 + 8LL * (unsigned int)v34 + 8);
        if ( (_DWORD)v34 )
          v142 = v138 + ((1 - (_DWORD)v34) << 16) - v140;
        else
          v142 = v138;
        v35 = 0LL;
        v179 = 0LL;
        if ( v142 < *(_DWORD *)(v141 + 20) )
        {
          v34 = *(const wchar_t **)(*(_QWORD *)(**(_QWORD **)(v141 + 24) + 8 * ((unsigned __int64)v142 >> 8))
                                  + 16LL * (unsigned __int8)v142
                                  + 8);
          if ( v34 )
          {
            LODWORD(v34) = 3 * v142;
            v35 = (struct OBJECT *)(*(_QWORD *)v141 + 24LL * v142);
            v179 = v35;
          }
        }
      }
      if ( v138 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          v178 = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v139, (unsigned __int16)v138, 1);
          v35 = v179;
          LODWORD(v34) = *((unsigned __int8 *)v178 + 13);
          if ( (_DWORD)v34 == HIWORD(v138) )
            v138 = (unsigned __int16)v138;
        }
        else
        {
          v138 = (unsigned __int16)v138;
        }
      }
      v143 = *(_DWORD *)(v139 + 2056);
      if ( v138 >= v143 + ((*(unsigned __int16 *)(v139 + 2) + 0xFFFF) << 16) )
        goto LABEL_460;
      if ( v138 >= v143 )
        LODWORD(v34) = ((v138 - v143) >> 16) + 1;
      else
        LODWORD(v34) = 0;
      v144 = *(_QWORD *)(v139 + 8LL * (unsigned int)v34 + 8);
      if ( (_DWORD)v34 )
        v138 += ((1 - (_DWORD)v34) << 16) - v143;
      if ( v138 >= *(_DWORD *)(v144 + 20) )
      {
LABEL_460:
        v65 = 0LL;
      }
      else
      {
        LODWORD(v34) = 2 * (unsigned __int8)v138;
        v65 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v144 + 24) + 8 * ((unsigned __int64)v138 >> 8))
                        + 16LL * (unsigned __int8)v138
                        + 8);
      }
      if ( (DC *)v65 != v60 )
        v35 = 0LL;
      *((_BYTE *)v35 + 15) &= ~4u;
      v60 = v180;
    }
    if ( v187 )
    {
      v179 = (struct OBJECT *)HmgShareLockCheck(v187, 5);
      SURFREF::bDeleteSurface(&v179, 0LL);
      LODWORD(v34) = (_DWORD)v179;
      v188 = (struct HOBJ__ *)gahStockObjects[21];
      if ( v179 )
        HmgDecrementShareReferenceCountEx(v179, 0LL);
      v60 = v180;
    }
    goto LABEL_260;
  }
LABEL_267:
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      (_DWORD)v34,
      (unsigned int)&LockRelease,
      (_DWORD)v35,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
LABEL_270:
  DCOBJ::~DCOBJ((DCOBJ *)&v180);
  if ( !v8 )
    return v7;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v200, (struct OBJECT *)v8, 0, 0, 1);
  if ( !v201 )
    return v7;
  v148 = v200;
  if ( *(_BYTE *)(v200 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v149 = (unsigned __int16)*(_DWORD *)v8 | (*(_DWORD *)v8 >> 8) & 0xFF0000;
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v149 | (v149 >> 8) & 0xFF0000);
  }
  v150 = *(_BYTE *)(v148 + 14);
  if ( v150 == 5 )
  {
    v151 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 616);
    v152 = 0;
  }
  else
  {
    if ( v150 != 16 )
      goto LABEL_298;
    v151 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v8 + 152);
    v152 = 2;
  }
  TrackObjectReferenceDecrement(v152, v151);
LABEL_298:
  --*(_DWORD *)(v8 + 8);
  v153 = (GdiHandleEntryDirectory **)gpHandleManager;
  v154 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v148 & 0xFFFFFF);
  v155 = GdiHandleEntryDirectory::GetEntryObject(v153[2], v154);
  v156 = GdiHandleManager::DecodeIndex(v153, (unsigned __int16)*(_DWORD *)v155 | (*(_DWORD *)v155 >> 8) & 0xFF0000u);
  v157 = v153[2];
  v189 = 0LL;
  v182 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v157, v156, &v189, &v182) )
    GdiHandleEntryTable::ReleaseEntryLock(v189, v182);
  KeLeaveCriticalRegion();
  return v7;
}
