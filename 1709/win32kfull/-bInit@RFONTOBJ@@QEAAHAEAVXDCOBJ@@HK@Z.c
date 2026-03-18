/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00384F8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextCharsetInfo @ 0x1C00B0A64 (GreGetTextCharsetInfo.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 *     GreFontIsLinked @ 0x1C00C1844 (GreFontIsLinked.c)
 *     GreGetCharABCWidthsW @ 0x1C00F4284 (GreGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00F4990 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00F5BF4 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetUFI @ 0x1C010006C (GreGetUFI.c)
 *     GreGetCharWidthW @ 0x1C0103D64 (GreGetCharWidthW.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0107720 (NtGdiGetLinkedUFIs.c)
 *     GreGetGlyphIndicesW @ 0x1C0107B3C (GreGetGlyphIndicesW.c)
 *     GreGetTextMetricsW @ 0x1C0108CF4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C0109FA0 (NtGdiQueryFontAssocInfo.c)
 *     GreGetFontUnicodeRanges @ 0x1C0110D38 (GreGetFontUnicodeRanges.c)
 *     GreGetCharWidthInfo @ 0x1C0111118 (GreGetCharWidthInfo.c)
 *     GreGetKerningPairs @ 0x1C01301D8 (GreGetKerningPairs.c)
 *     NtGdiGetETM @ 0x1C013A2A0 (NtGdiGetETM.c)
 *     GreGetRealizationInfo @ 0x1C0144A44 (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C0145118 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025669C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0274058 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0033AB0 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0035590 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C003903C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C003BCB0 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C003C960 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE70 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C003E690 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0041A18 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00AE5DC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01454EC (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01A0AD0 (--1SEMOBJ@@QEAA@XZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0283ED0 (vRemoveAllInactiveRFONTs.c)
 */

__int64 __fastcall RFONTOBJ::bInit(struct _FD_XFORM **this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  int SessionTextStackStatus; // eax
  __int64 v7; // rdx
  int v8; // r14d
  bool v9; // bl
  __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // edi
  FLOATL eXY; // eax
  struct PDEV *v14; // rdi
  int v15; // eax
  __int64 v16; // rbx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // ebx
  __int64 v25; // rdx
  int v26; // ebx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // r8
  struct XDCOBJ *v30; // rsi
  int v31; // r12d
  __int64 v32; // rcx
  int v33; // r9d
  struct _FD_XFORM *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  __int64 v40; // rdx
  unsigned int v41; // esi
  struct _FD_XFORM *v42; // rax
  unsigned int eXX_low; // ecx
  struct RFONT **v44; // rsi
  int InactiveHelper; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  struct RFONT *v48; // rcx
  int v49; // r15d
  __int64 v50; // rbx
  __int64 v51; // r15
  bool v52; // cf
  int v53; // ecx
  int v54; // eax
  struct PFE *v55; // rax
  struct PFE *v56; // r12
  struct tagLOGFONTW *v57; // r10
  __int64 v58; // rdx
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  int v62; // r8d
  __int64 v63; // rax
  unsigned int v64; // esi
  __int64 v65; // rcx
  __int64 v66; // rax
  struct _FD_XFORM *v67; // rdx
  struct _FD_XFORM *v68; // rdx
  FLOATL v69; // ecx
  int v70; // eax
  struct _FD_XFORM *v71; // rax
  struct _FD_XFORM *v72; // rcx
  struct _FD_XFORM *v73; // rax
  struct RFONT *v74; // rax
  struct _FD_XFORM *v75; // rdx
  FLOATL v76; // ecx
  int v77; // eax
  struct _FD_XFORM *v78; // rdx
  struct _FD_XFORM *v79; // rcx
  struct XDCOBJ *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // r10
  __int64 v84; // r11
  __int64 v85; // r9
  _QWORD *v86; // rcx
  int v87; // r8d
  int v88; // r8d
  __int64 v89; // rax
  struct _FD_XFORM *v90; // rdx
  struct _FD_XFORM **v91; // r8
  _QWORD *p_eXX; // rcx
  struct XDCOBJ *v93; // rdx
  size_t v94; // rsi
  unsigned int v95; // eax
  struct tagLOGFONTW *v96; // rax
  struct tagLOGFONTW *v97; // rbx
  struct XDCOBJ *v98; // rdx
  unsigned int v99; // eax
  PFEOBJ *v100; // rcx
  struct _FD_XFORM *v101; // rax
  int v102; // edx
  __int64 v103; // rcx
  unsigned int v104; // [rsp+28h] [rbp-D8h]
  __int64 v105; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v106; // [rsp+68h] [rbp-98h]
  int v107; // [rsp+6Ch] [rbp-94h]
  unsigned int v108; // [rsp+70h] [rbp-90h] BYREF
  struct RFONT *v109; // [rsp+78h] [rbp-88h] BYREF
  struct XDCOBJ *v110; // [rsp+80h] [rbp-80h]
  unsigned int v111[2]; // [rsp+88h] [rbp-78h] BYREF
  int v112[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v113; // [rsp+98h] [rbp-68h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-60h] BYREF
  int v115; // [rsp+A8h] [rbp-58h]
  int v116; // [rsp+ACh] [rbp-54h]
  __int64 v117; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v119; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v120; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v121; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v122; // [rsp+D8h] [rbp-28h] BYREF
  int v123; // [rsp+E0h] [rbp-20h]
  int v124; // [rsp+E4h] [rbp-1Ch]
  _QWORD v125[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v126; // [rsp+F8h] [rbp-8h] BYREF
  int v127; // [rsp+108h] [rbp+8h]
  __int64 v128; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v129[24]; // [rsp+120h] [rbp+20h] BYREF
  struct _FD_XFORM v130; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v131[112]; // [rsp+150h] [rbp+50h] BYREF

  v106 = a4;
  v107 = a3;
  v110 = a2;
  SessionTextStackStatus = UmfdHostLifeTimeManager::GetSessionTextStackStatus();
  v8 = 0;
  if ( SessionTextStackStatus == 259 )
  {
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    v9 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess();
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    if ( !v9 && UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
    {
      if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
        && UmfdHostLifeTimeManager::s_InitialFontsAddedEvent
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        goto LABEL_9;
      }
      return 0LL;
    }
    KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
  }
  else if ( SessionTextStackStatus < 0 )
  {
    return 0LL;
  }
LABEL_9:
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 2192LL);
  *this = (struct _FD_XFORM *)v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 528);
    v12 = 0;
    if ( v11 )
    {
      GreAcquireSemaphore(v11);
      eXY = (*this)[4].eXY;
      if ( (LOBYTE(eXY) & 8) != 0 )
      {
        v12 = 1;
        LODWORD((*this)[4].eXY) = LODWORD(eXY) & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v11);
      GreReleaseSemaphoreInternal(v11);
      if ( v12 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v14 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v15 = *((_DWORD *)v14 + 8);
            if ( (v15 & 0x2000) == 0 )
            {
              if ( (v15 & 0x8000) == 0 )
                break;
              v16 = *(_QWORD *)(*((_QWORD *)v14 + 226) + 48LL);
              if ( v16 == PsGetCurrentProcessWin32Process() )
                break;
            }
            v14 = *(struct PDEV **)v14;
            if ( !v14 )
              goto LABEL_24;
          }
          PDEV::IncrementClientReferenceCount(v14);
        }
LABEL_24:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v14 )
        {
          *(_QWORD *)v112 = v14;
          vRemoveAllInactiveRFONTs(v14);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v14 = *(struct PDEV **)v14;
          if ( v14 )
          {
            while ( 1 )
            {
              v18 = *((_DWORD *)v14 + 8);
              if ( (v18 & 0x2000) == 0 )
              {
                if ( (v18 & 0x8000) == 0 )
                  break;
                v19 = *(_QWORD *)(*((_QWORD *)v14 + 226) + 48LL);
                if ( v19 == PsGetCurrentProcessWin32Process() )
                  break;
              }
              v14 = *(struct PDEV **)v14;
              if ( !v14 )
                goto LABEL_32;
            }
            PDEV::IncrementClientReferenceCount(v14);
          }
LABEL_32:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(v112, 0LL);
        }
      }
    }
  }
  v20 = *(_QWORD *)a2;
  LOBYTE(v7) = 10;
  v105 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 80) + 176LL);
  v22 = HmgShareLock(v21, v7);
  v117 = v22;
  v23 = v22;
  if ( !v22 )
    goto LABEL_240;
  if ( (*(_DWORD *)(v22 + 28) & 1) != 0 )
  {
    UserGetHDEV();
    v24 = *(_DWORD *)(v23 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
    v23 = 0LL;
    if ( !v105 )
    {
LABEL_240:
      RFONTOBJ::vMakeInactive((RFONTOBJ *)this);
      *this = 0LL;
      v41 = 0;
      *(_QWORD *)(*(_QWORD *)a2 + 2192LL) = 0LL;
      goto LABEL_241;
    }
    v26 = v24 - 4;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 == 1 )
          v21 = *(_QWORD *)(v105 + 1456);
      }
      else
      {
        v21 = *(_QWORD *)(v105 + 1448);
      }
    }
    else
    {
      v21 = *(_QWORD *)(v105 + 1440);
    }
    LOBYTE(v25) = 10;
    v23 = HmgShareLock(v21, v25);
    v117 = v23;
  }
  if ( !v23 )
    goto LABEL_240;
  v28 = lNormAngle((unsigned int)-*(_DWORD *)(v23 + 284));
  v29 = *(_QWORD *)a2;
  v30 = a2;
  v31 = v28;
  LODWORD(v109) = v28;
  v115 = *(_DWORD *)(*(_QWORD *)(v29 + 80) + 68LL);
  v116 = *(_DWORD *)(*(_QWORD *)(v29 + 80) + 312LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v29 + 80) + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v114, a2, 0x204u, 0);
    v32 = v114;
  }
  else
  {
    v32 = v29 + 336;
    v114 = v29 + 336;
  }
  if ( v31 || (*(_DWORD *)(v32 + 32) & 1) == 0 || *(float *)(v32 + 12) < 0.0 || (v33 = 1, *(float *)v32 < 0.0) )
    v33 = 0;
  v34 = *this;
  v112[0] = v33;
  if ( !v34
    || (v35 = *(_QWORD *)a2,
        v36 = *(_QWORD *)(*(_QWORD *)a2 + 80LL),
        *(_QWORD *)(v36 + 176) != *(_QWORD *)(*(_QWORD *)a2 + 2176LL))
    || v33 != 1 && LODWORD(v34[40].eYY) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 2176LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 176LL);
    goto LABEL_78;
  }
  if ( LODWORD(v34[12].eYX) != *(_DWORD *)(v36 + 68)
    || v107 != LODWORD(v34[42].eYX)
    || v106 != (LODWORD(v34[4].eXY) & 6) )
  {
    goto LABEL_78;
  }
  if ( (*(_DWORD *)(v35 + 36) & 1) != 0 || *(_DWORD *)(v35 + 32) == 1 )
  {
    v37 = *(unsigned int *)(*(_QWORD *)(v35 + 2192) + 12LL);
    if ( (v37 & 0x200004) != 0 )
    {
      v38 = 0LL;
      if ( (gulFontInformation & 2) != 0 )
      {
        v38 = 0x10000LL;
        if ( (gulFontInformation & 0x10) != 0 )
          v38 = 268500992LL;
      }
      if ( (v37 & 4) != 0 )
      {
        v39 = (_DWORD)v38 == (v37 & 0x10010000);
      }
      else
      {
        v38 = (unsigned int)v37 ^ (unsigned int)v38;
        v39 = (v38 & 0x10000) == 0;
      }
      if ( !v39
        || (v37 & 0x10010000) != 0 && (unsigned int)UserIsRemoteConnection(v38, v37, gulFontInformation, 268500992LL) )
      {
        goto LABEL_78;
      }
    }
  }
  v40 = *(_QWORD *)a2;
  if ( *(float *)(*(_QWORD *)a2 + 468LL) != 0.0 && !(unsigned int)EFLOAT::bIsZero((EFLOAT *)(v40 + 472)) )
  {
LABEL_78:
    if ( (*(_DWORD *)(v105 + 32) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v105);
    v42 = *this;
    if ( *this && LODWORD(v42[30].eYY) )
    {
      eXX_low = LODWORD(v42[53].eXX);
      if ( eXX_low <= 0xA )
      {
        memset(v131, 0, sizeof(v131));
        v44 = (struct RFONT **)v131;
      }
      else
      {
        v44 = (struct RFONT **)PALLOCMEM2(8 * eXX_low + 32);
        if ( !v44 )
        {
          v30 = a2;
          goto LABEL_96;
        }
        v8 = 1;
      }
      InactiveHelper = RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)this, v44);
      v48 = *v44;
      v49 = InactiveHelper;
      if ( *v44 )
      {
        v50 = 0LL;
        do
        {
          *(_QWORD *)v111 = v48;
          RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v111, 0LL);
          *(_QWORD *)v111 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v111);
          v48 = v44[++v50];
        }
        while ( v48 );
        v31 = (int)v109;
      }
      if ( v8 )
        Win32FreePool(v44, v46, v47);
      if ( v49 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        --gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
      }
      v30 = v110;
      v8 = 0;
    }
LABEL_96:
    v51 = 0LL;
    v52 = *(_BYTE *)(v23 + 297) != 0;
    v126 = 0LL;
    v53 = (v52 ? 0x20 : 0) | 0x80;
    if ( !*(_BYTE *)(v23 + 298) )
      v53 = v52 ? 0x20 : 0;
    *(_DWORD *)(*(_QWORD *)v30 + 2184LL) = v53;
    *(_DWORD *)(*(_QWORD *)v30 + 2188LL) = v31;
    if ( (*(_DWORD *)(v105 + 32) & 1) != 0 || (v54 = *(_DWORD *)(v23 + 28), v111[0] = 2, (v54 & 2) == 0) )
      v111[0] = 0;
    v121 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v55 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v117, v30, &v108, &v113, &v119, v106 & 4);
    v56 = v55;
    if ( !v55 )
      goto LABEL_225;
    v57 = (struct tagLOGFONTW *)(v23 + 276);
    v58 = *(_QWORD *)v30;
    v125[0] = *((_QWORD *)v55 + 4);
    v123 = *(_DWORD *)(*(_QWORD *)(v58 + 80) + 68LL);
    v124 = *(_DWORD *)(*(_QWORD *)(v58 + 80) + 312LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v58 + 80) + 352LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v122, v30, 0x204u, 0);
      v57 = (struct tagLOGFONTW *)(v23 + 276);
    }
    else
    {
      v122 = v58 + 336;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 80LL) + 68LL) == 1
       ? bGetNtoD_Win31(&v130, v57, (struct IFIOBJ *)v125, v30, v111[0], &v113, 0)
       : bGetNtoD(&v130, v57, (struct IFIOBJ *)v125, v30, &v113) )
    {
      eYX = v130.eYX;
      if ( LODWORD(v130.eYX) )
      {
        LODWORD(eYX) = LODWORD(v130.eYX) ^ 0x80000000;
        LODWORD(v130.eYX) ^= 0x80000000;
      }
      eYY = v130.eYY;
      if ( LODWORD(v130.eYY) )
      {
        LODWORD(eYY) = LODWORD(v130.eYY) ^ 0x80000000;
        LODWORD(v130.eYY) ^= 0x80000000;
      }
      v62 = *(_DWORD *)(v125[0] + 48LL);
      if ( (v62 & 0x1000000) != 0 )
      {
        v130.eXX = eYY;
        v130.eXY = eYX;
        if ( eYX != 0.0 )
          LODWORD(v130.eXY) = LODWORD(eYX) ^ 0x80000000;
      }
      if ( (v62 & 1) != 0 && *(int *)(v23 + 276) <= 0 )
        v108 |= 0x8000u;
      v51 = *(_QWORD *)v56;
      v126 = v51;
      v127 = 0;
      ++*(_DWORD *)(v51 + 68);
      if ( ghsemPublicPFT )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
        GreReleaseSemaphoreInternal(ghsemPublicPFT);
      }
      v63 = *(_QWORD *)v30;
      v64 = v108;
      v65 = *(_QWORD *)(v63 + 80);
      v118 = ghsemRFONTList;
      LODWORD(v109) = *(_DWORD *)(v65 + 68);
      GreAcquireSemaphore(ghsemRFONTList);
      v66 = v105;
      if ( (*(_DWORD *)(v105 + 32) & 0x800000) != 0 )
        v67 = *(struct _FD_XFORM **)(*(_QWORD *)(v105 + 3536) + 1528LL);
      else
        v67 = *(struct _FD_XFORM **)(v105 + 1528);
      *this = v67;
      if ( v67 )
      {
        while ( 1 )
        {
          v68 = *this;
          if ( *(struct PFE **)&(*this)[7].eXX == v56 && v106 == (LODWORD(v68[4].eXY) & 6) )
          {
            v69 = v68->eYY;
            if ( ((LODWORD(v69) ^ v64) & 0xE000) == 0 )
            {
              v70 = (LODWORD(v69) ^ v64) & 0x50010000;
              if ( !v70 )
                goto LABEL_246;
              if ( (v64 & 0x10000) != 0 && (LODWORD(v69) & 0x20000) != 0 )
                v70 = (LODWORD(v69) ^ v64) & 0x50000000;
              if ( (v64 & 0x10000000) != 0 && (LODWORD(v69) & 0x10000000) == 0 && (LODWORD(v69) & 0x2000000) != 0
                || !v70 )
              {
LABEL_246:
                if ( !LODWORD(v68[2].eYX)
                  && *(_QWORD *)&v130.eXX == *(_QWORD *)&v68[8].eXX
                  && *(_QWORD *)&v130.eYX == *(_QWORD *)&v68[8].eYX
                  && v107 == LODWORD(v68[42].eYX) )
                {
                  if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v114, (struct MATRIX *)&v68[10].eXY) )
                  {
                    v71 = *this;
                    if ( LODWORD((*this)[12].eYX) == (_DWORD)v109 && (v112[0] || !LODWORD(v71[40].eYY)) )
                      break;
                  }
                }
              }
            }
          }
          v72 = *(struct _FD_XFORM **)&(*this)[31].eYX;
          *this = v72;
          if ( !v72 )
          {
            v66 = v105;
            goto LABEL_146;
          }
        }
        ++LODWORD(v71[30].eYY);
        if ( (*(_DWORD *)(v105 + 32) & 0x800000) != 0 )
          v74 = *(struct RFONT **)(*(_QWORD *)(v105 + 3536) + 1528LL);
        else
          v74 = *(struct RFONT **)(v105 + 1528);
        v109 = v74;
        if ( v74 != (struct RFONT *)*this )
        {
          RFONTOBJ::vRemove(this, &v109, 1LL);
          RFONTOBJ::vInsert(this, &v109, 1LL);
          PDEVOBJ::prfntActive((PDEVOBJ *)&v105, v109);
        }
        goto LABEL_214;
      }
LABEL_146:
      if ( (*(_DWORD *)(v66 + 32) & 0x800000) != 0 )
        v73 = *(struct _FD_XFORM **)(*(_QWORD *)(v66 + 3536) + 1536LL);
      else
        v73 = *(struct _FD_XFORM **)(v66 + 1536);
      *this = v73;
      if ( v73 )
      {
        while ( 1 )
        {
          v75 = *this;
          if ( *(struct PFE **)&(*this)[7].eXX == v56 && v106 == (LODWORD(v75[4].eXY) & 6) )
          {
            v76 = v75->eYY;
            if ( ((LODWORD(v76) ^ v64) & 0xE000) == 0 )
            {
              v77 = (LODWORD(v76) ^ v64) & 0x50010000;
              if ( !v77 )
                goto LABEL_247;
              if ( (v64 & 0x10000) != 0 && (LODWORD(v76) & 0x20000) != 0 )
                v77 = (LODWORD(v76) ^ v64) & 0x50000000;
              if ( (v64 & 0x10000000) != 0 && (LODWORD(v76) & 0x10000000) == 0 && (LODWORD(v76) & 0x2000000) != 0
                || !v77 )
              {
LABEL_247:
                if ( !LODWORD(v75[2].eYX)
                  && *(_QWORD *)&v130.eXX == *(_QWORD *)&v75[8].eXX
                  && *(_QWORD *)&v130.eYX == *(_QWORD *)&v75[8].eYX
                  && v107 == LODWORD(v75[42].eYX) )
                {
                  if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v114, (struct MATRIX *)&v75[10].eXY) )
                  {
                    v78 = *this;
                    if ( LODWORD((*this)[12].eYX) == (_DWORD)v109 && (v112[0] || !LODWORD(v78[40].eYY)) )
                      break;
                  }
                }
              }
            }
          }
          v79 = *(struct _FD_XFORM **)&(*this)[31].eYX;
          *this = v79;
          if ( !v79 )
            goto LABEL_175;
        }
        v81 = v105;
        if ( (*(_DWORD *)(v105 + 32) & 0x800000) != 0 )
          v82 = *(_QWORD *)(*(_QWORD *)(v105 + 3536) + 1536LL);
        else
          v82 = *(_QWORD *)(v105 + 1536);
        v83 = *(_QWORD *)&v78[31].eXX;
        v84 = v83 + 504;
        if ( !v83 )
          v84 = 8LL;
        v85 = *(_QWORD *)&v78[31].eYX;
        v86 = (_QWORD *)(v85 + 496);
        if ( !v85 )
          v86 = 0LL;
        if ( v83 )
        {
          *(_QWORD *)v84 = v85;
          if ( v86 )
            *v86 = *(_QWORD *)&v78[31].eXX;
        }
        else
        {
          v82 = *(_QWORD *)&v78[31].eYX;
          if ( !v86 )
          {
LABEL_192:
            if ( (*(_DWORD *)(v81 + 32) & 0x800000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v81 + 3536) + 1536LL) = v82;
            else
              *(_QWORD *)(v81 + 1536) = v82;
            if ( (*(_DWORD *)(v105 + 32) & 0x800000) != 0 )
              v87 = *(_DWORD *)(*(_QWORD *)(v105 + 3536) + 1544LL);
            else
              v87 = *(_DWORD *)(v105 + 1544);
            v88 = v87 - 1;
            if ( (*(_DWORD *)(v105 + 32) & 0x800000) != 0 )
              *(_DWORD *)(*(_QWORD *)(v105 + 3536) + 1544LL) = v88;
            else
              *(_DWORD *)(v105 + 1544) = v88;
            v89 = v105;
            if ( (*(_DWORD *)(v105 + 32) & 0x800000) != 0 )
              v90 = *(struct _FD_XFORM **)(*(_QWORD *)(v105 + 3536) + 1528LL);
            else
              v90 = *(struct _FD_XFORM **)(v105 + 1528);
            v91 = (struct _FD_XFORM **)&v90[31];
            if ( !v90 )
              v91 = 0LL;
            p_eXX = (_QWORD *)&(*this)[31].eXX;
            if ( *this != (struct _FD_XFORM *)-496LL )
            {
              *p_eXX = 0LL;
              p_eXX[1] = v90;
              if ( v91 )
                *v91 = *this;
              v90 = *this;
              v89 = v105;
            }
            if ( (*(_DWORD *)(v89 + 32) & 0x800000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v89 + 3536) + 1528LL) = v90;
            else
              *(_QWORD *)(v89 + 1528) = v90;
            LODWORD((*this)[30].eYY) = 1;
LABEL_214:
            SEMOBJ::~SEMOBJ((SEMOBJ *)&v118);
            v41 = 1;
            v93 = v110;
            *(_QWORD *)(*(_QWORD *)v110 + 2192LL) = *this;
            *(_DWORD *)(*(_QWORD *)v93 + 264LL) &= ~1u;
LABEL_227:
            v102 = v127;
LABEL_228:
            if ( v51 && !v102 )
            {
              GreAcquireSemaphore(ghsemPublicPFT);
              --*(_DWORD *)(v51 + 68);
              if ( !*(_DWORD *)(v51 + 56)
                && !*(_DWORD *)(v51 + 60)
                && !*(_QWORD *)(v51 + 160)
                && !*(_DWORD *)(v51 + 68)
                && !*(_DWORD *)(v51 + 64) )
              {
                PFFOBJ::vPFFC_Delete((PFFOBJ *)&v126, (struct PFFCLEANUP *)v129);
                v8 = 1;
              }
              if ( ghsemPublicPFT )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
                GreReleaseSemaphoreInternal(ghsemPublicPFT);
              }
              if ( v8 )
                vCleanupFontFile((struct PFFCLEANUP *)v129);
            }
            goto LABEL_241;
          }
          *v86 = 0LL;
        }
        v81 = v105;
        goto LABEL_192;
      }
LABEL_175:
      *this = 0LL;
      if ( ghsemRFONTList )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
        GreReleaseSemaphoreInternal(ghsemRFONTList);
      }
      v80 = v110;
      if ( (unsigned int)RFONTOBJ::bRealizeFont(
                           (RFONTOBJ *)this,
                           v110,
                           (struct PDEVOBJ *)&v105,
                           (struct tagENUMLOGFONTEXDVW *)(v23 + 276),
                           v56,
                           &v130,
                           &v113,
                           v108,
                           0,
                           v107,
                           v112[0],
                           v106) )
      {
        if ( *(_DWORD *)(v23 + 280) )
        {
          v120 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v94 = 420LL;
          v128 = *((_QWORD *)v56 + 4);
          v95 = *(_DWORD *)(v23 + 272);
          if ( v95 < 0x1A4 )
            v94 = v95;
          v96 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v94);
          v97 = v96;
          if ( v96 )
          {
            memmove(v96, (const void *)(v23 + 276), v94);
            v98 = v110;
            v99 = v111[0];
            v97->lfWidth = 0;
            if ( !PFEOBJ::bSetFontXform(v100, v98, v97, *this + 9, v99, v104, &v113, (struct IFIOBJ *)&v128, 0) )
              (*this)[9] = v130;
            FreeTmpBuffer(v97);
          }
          else
          {
            (*this)[9] = v130;
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v120);
          v80 = v110;
        }
        v101 = *this;
        v102 = 1;
        v103 = *(_QWORD *)v80;
        v41 = 1;
        v127 = 1;
        *(_QWORD *)(v103 + 2192) = v101;
        *(_DWORD *)(*(_QWORD *)v80 + 264LL) &= ~1u;
        goto LABEL_228;
      }
      *this = 0LL;
      *(_QWORD *)(*(_QWORD *)v80 + 2192LL) = 0LL;
    }
    else
    {
LABEL_225:
      *this = 0LL;
      *(_QWORD *)(*(_QWORD *)v30 + 2192LL) = 0LL;
      SEMOBJ::vUnlock((SEMOBJ *)&v121);
    }
    v41 = 0;
    goto LABEL_227;
  }
  if ( (*(_DWORD *)(v40 + 264) & 1) != 0 )
  {
    if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v114, (struct MATRIX *)&(*this)[10].eXY) )
    {
      *(_DWORD *)(*(_QWORD *)a2 + 264LL) &= ~1u;
      goto LABEL_76;
    }
    goto LABEL_78;
  }
LABEL_76:
  v41 = 1;
LABEL_241:
  if ( v23 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v23);
  return v41;
}
