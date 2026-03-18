/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0
 * Callers:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     GreGetTextMetricsW @ 0x1C000C4B4 (GreGetTextMetricsW.c)
 *     GreGetUFI @ 0x1C00287F0 (GreGetUFI.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C00E08F4 (GreGetTextCharsetInfo.c)
 *     GreGetCharABCWidthsW @ 0x1C00E1F64 (GreGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00E2570 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00E517C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 *     GreGetCharWidthW @ 0x1C00F5BE4 (GreGetCharWidthW.c)
 *     NtGdiGetLinkedUFIs @ 0x1C00F9130 (NtGdiGetLinkedUFIs.c)
 *     GreGetGlyphIndicesW @ 0x1C00FA32C (GreGetGlyphIndicesW.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FBA88 (GreGetFontUnicodeRanges.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00FEFC0 (NtGdiQueryFontAssocInfo.c)
 *     GreFontIsLinked @ 0x1C0102D2C (GreFontIsLinked.c)
 *     GreGetCharWidthInfo @ 0x1C0106EF8 (GreGetCharWidthInfo.c)
 *     GreGetKerningPairs @ 0x1C01283C8 (GreGetKerningPairs.c)
 *     NtGdiGetETM @ 0x1C012A0D0 (NtGdiGetETM.c)
 *     GreGetRealizationInfo @ 0x1C013EABC (GreGetRealizationInfo.c)
 *     GreGetTextExtentExW @ 0x1C013F8F0 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0254BCC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027768C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C002C808 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C002FEF4 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0030AC0 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032DEC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C007EF14 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0089D10 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C008DC0C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F5E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F678 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C010C850 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C013FEE4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0195894 (--1SEMOBJ@@QEAA@XZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02873A0 (vRemoveAllInactiveRFONTs.c)
 */

__int64 __fastcall RFONTOBJ::bInit(struct _FD_XFORM **this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  struct XDCOBJ *v4; // r15
  __int64 v6; // rdx
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rbx
  int v11; // edi
  FLOATL eXY; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct PDEV *v15; // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // ebx
  __int64 v28; // rdx
  int v29; // ebx
  int v30; // eax
  __int64 v31; // r8
  int v32; // r12d
  __int64 v33; // rcx
  int v34; // r9d
  struct _FD_XFORM *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  bool v40; // zf
  __int64 v41; // rdx
  unsigned int v42; // esi
  struct _FD_XFORM *v43; // rax
  unsigned int eXX_low; // ecx
  struct RFONT **v45; // rsi
  int InactiveHelper; // eax
  struct RFONT *v47; // rcx
  int v48; // r15d
  __int64 v49; // rbx
  bool v50; // cf
  int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // r15
  int v54; // esi
  struct PFE *v55; // rax
  struct PFE *v56; // r12
  struct DCOBJ *v57; // rax
  __int64 v58; // rax
  int v59; // r8d
  struct DCOBJ *v60; // rsi
  struct tagLOGFONTW *v61; // r10
  __int64 v62; // rdx
  int NtoD_Win31; // eax
  FLOATL eYX; // ecx
  FLOATL eYY; // edx
  int v66; // eax
  __int64 v67; // rax
  unsigned int v68; // esi
  __int64 v69; // rcx
  __int64 v70; // rax
  struct _FD_XFORM *v71; // rdx
  struct _FD_XFORM *v72; // rdx
  FLOATL v73; // ecx
  int v74; // eax
  struct _FD_XFORM *v75; // rax
  struct _FD_XFORM *v76; // rcx
  struct _FD_XFORM *v77; // rax
  struct RFONT *v78; // rax
  struct _FD_XFORM *v79; // rdx
  FLOATL v80; // ecx
  int v81; // eax
  struct _FD_XFORM *v82; // rdx
  struct _FD_XFORM *v83; // rcx
  struct DCOBJ *v84; // rbx
  __int64 v85; // rax
  __int64 v86; // r9
  __int64 v87; // r10
  __int64 v88; // r11
  __int64 v89; // r8
  _QWORD *v90; // rcx
  int v91; // r8d
  int v92; // r8d
  __int64 v93; // rax
  struct _FD_XFORM *v94; // rdx
  struct _FD_XFORM **v95; // r8
  _QWORD *p_eXX; // rcx
  struct DCOBJ *v97; // rdx
  size_t v98; // rsi
  unsigned int v99; // eax
  struct tagLOGFONTW *v100; // rax
  struct tagLOGFONTW *v101; // rbx
  struct XDCOBJ *v102; // rdx
  unsigned int v103; // eax
  PFEOBJ *v104; // rcx
  struct _FD_XFORM *v105; // rax
  int v106; // edx
  __int64 v107; // rcx
  unsigned int v108; // [rsp+28h] [rbp-D8h]
  __int64 v109; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v110; // [rsp+68h] [rbp-98h]
  int v111; // [rsp+6Ch] [rbp-94h]
  int v112; // [rsp+70h] [rbp-90h]
  unsigned int v113; // [rsp+74h] [rbp-8Ch] BYREF
  struct RFONT *v114; // [rsp+78h] [rbp-88h] BYREF
  struct DCOBJ *v115; // [rsp+80h] [rbp-80h]
  struct RFONT *v116; // [rsp+88h] [rbp-78h] BYREF
  __int64 v117; // [rsp+90h] [rbp-70h] BYREF
  int v118; // [rsp+98h] [rbp-68h]
  int v119; // [rsp+9Ch] [rbp-64h]
  struct _POINTL v120; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-58h] BYREF
  int v122; // [rsp+B0h] [rbp-50h]
  int v123; // [rsp+B4h] [rbp-4Ch]
  _QWORD v124[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v125; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v126; // [rsp+D8h] [rbp-28h] BYREF
  int v127; // [rsp+E8h] [rbp-18h]
  struct _FD_XFORM v128; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v129[112]; // [rsp+100h] [rbp+0h] BYREF

  v110 = a4;
  v4 = a2;
  v112 = a3;
  v115 = a2;
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)v4 + 2192LL);
  v9 = 0;
  *this = (struct _FD_XFORM *)v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 528);
    v11 = 0;
    if ( v10 )
    {
      GreAcquireSemaphore(v10);
      eXY = (*this)[4].eXY;
      if ( (LOBYTE(eXY) & 8) != 0 )
      {
        v11 = 1;
        LODWORD((*this)[4].eXY) = LODWORD(eXY) & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
      GreReleaseSemaphoreInternal(v10);
      if ( v11 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v15 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v16 = *((_DWORD *)v15 + 8);
            if ( (v16 & 0x2000) == 0 )
            {
              if ( (v16 & 0x8000) == 0 )
                break;
              v17 = *(_QWORD *)(*((_QWORD *)v15 + 226) + 48LL);
              if ( v17 == PsGetCurrentProcessWin32Process(v14, v13) )
                break;
            }
            v15 = *(struct PDEV **)v15;
            if ( !v15 )
              goto LABEL_15;
          }
          PDEV::IncrementClientReferenceCount(v15);
        }
LABEL_15:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v15 )
        {
          v117 = (__int64)v15;
          vRemoveAllInactiveRFONTs(v15);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v15 = *(struct PDEV **)v15;
          if ( v15 )
          {
            while ( 1 )
            {
              v20 = *((_DWORD *)v15 + 8);
              if ( (v20 & 0x2000) == 0 )
              {
                if ( (v20 & 0x8000) == 0 )
                  break;
                v21 = *(_QWORD *)(*((_QWORD *)v15 + 226) + 48LL);
                if ( v21 == PsGetCurrentProcessWin32Process(v19, v18) )
                  break;
              }
              v15 = *(struct PDEV **)v15;
              if ( !v15 )
                goto LABEL_23;
            }
            PDEV::IncrementClientReferenceCount(v15);
          }
LABEL_23:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v117, 0LL);
        }
      }
    }
  }
  v22 = *(_QWORD *)v4;
  LOBYTE(v6) = 10;
  v109 = *(_QWORD *)(*(_QWORD *)v4 + 48LL);
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 80) + 176LL);
  v24 = HmgShareLock(v23, v6);
  v117 = v24;
  v26 = v24;
  if ( !v24 )
    goto LABEL_233;
  if ( (*(_DWORD *)(v24 + 28) & 1) != 0 )
  {
    UserGetHDEV(v25);
    v27 = *(_DWORD *)(v26 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v26);
    v26 = 0LL;
    if ( !v109 )
    {
LABEL_233:
      RFONTOBJ::vMakeInactive((RFONTOBJ *)this);
      *this = 0LL;
      v42 = 0;
      *(_QWORD *)(*(_QWORD *)v4 + 2192LL) = 0LL;
      goto LABEL_234;
    }
    if ( v27 == 6 )
    {
      v23 = *(_QWORD *)(v109 + 1456);
    }
    else
    {
      v29 = v27 - 4;
      if ( v29 )
      {
        if ( v29 == 1 )
          v23 = *(_QWORD *)(v109 + 1448);
      }
      else
      {
        v23 = *(_QWORD *)(v109 + 1440);
      }
    }
    LOBYTE(v28) = 10;
    v26 = HmgShareLock(v23, v28);
    v117 = v26;
  }
  if ( !v26 )
    goto LABEL_233;
  v30 = lNormAngle((unsigned int)-*(_DWORD *)(v26 + 284));
  v31 = *(_QWORD *)v4;
  v32 = v30;
  LODWORD(v114) = v30;
  v122 = *(_DWORD *)(*(_QWORD *)(v31 + 80) + 68LL);
  v123 = *(_DWORD *)(*(_QWORD *)(v31 + 80) + 312LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v31 + 80) + 352LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v121, v4, 0x204u, 0);
    v33 = v121;
  }
  else
  {
    v33 = v31 + 336;
    v121 = v31 + 336;
  }
  if ( v32 || (*(_DWORD *)(v33 + 32) & 1) == 0 || *(float *)(v33 + 12) < 0.0 || (v34 = 1, *(float *)v33 < 0.0) )
    v34 = 0;
  v35 = *this;
  v111 = v34;
  if ( !v35
    || (v36 = *(_QWORD *)v4,
        v37 = *(_QWORD *)(*(_QWORD *)v4 + 80LL),
        *(_QWORD *)(v37 + 176) != *(_QWORD *)(*(_QWORD *)v4 + 2176LL))
    || v34 != 1 && LODWORD(v35[40].eYY) )
  {
    *(_QWORD *)(*(_QWORD *)v4 + 2176LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 176LL);
    goto LABEL_69;
  }
  if ( LODWORD(v35[12].eYX) != *(_DWORD *)(v37 + 68)
    || v112 != LODWORD(v35[42].eYX)
    || v110 != (LODWORD(v35[4].eXY) & 6) )
  {
    goto LABEL_69;
  }
  if ( (*(_DWORD *)(v36 + 36) & 1) != 0 || *(_DWORD *)(v36 + 32) == 1 )
  {
    v38 = *(unsigned int *)(*(_QWORD *)(v36 + 2192) + 12LL);
    if ( (v38 & 0x200004) != 0 )
    {
      v39 = 0LL;
      if ( (gulFontInformation & 2) != 0 )
      {
        v39 = 0x10000LL;
        if ( (gulFontInformation & 0x10) != 0 )
          v39 = 268500992LL;
      }
      v40 = (v38 & 4) != 0
          ? (_DWORD)v39 == (v38 & 0x10010000)
          : (((unsigned int)v39 ^ (unsigned int)v38) & 0x10000) == 0;
      if ( !v40
        || (v38 & 0x10010000) != 0 && (unsigned int)UserIsRemoteConnection(v38, v39, gulFontInformation, 268500992LL) )
      {
        goto LABEL_69;
      }
    }
  }
  v41 = *(_QWORD *)v4;
  if ( *(float *)(*(_QWORD *)v4 + 468LL) != 0.0 && !EFLOAT::bIsZero((EFLOAT *)(v41 + 472)) )
  {
LABEL_69:
    if ( (*(_DWORD *)(v109 + 32) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v109);
    v43 = *this;
    if ( *this && LODWORD(v43[30].eYY) )
    {
      eXX_low = LODWORD(v43[53].eXX);
      if ( eXX_low <= 0xA )
      {
        memset(v129, 0, sizeof(v129));
        v45 = (struct RFONT **)v129;
      }
      else
      {
        v45 = (struct RFONT **)PALLOCMEM2(8 * eXX_low + 32, 1718382187LL, 1);
        if ( !v45 )
          goto LABEL_86;
        v9 = 1;
      }
      InactiveHelper = RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)this, v45);
      v47 = *v45;
      v48 = InactiveHelper;
      if ( *v45 )
      {
        v49 = 0LL;
        do
        {
          v116 = v47;
          RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v116, 0LL);
          v116 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v116);
          v47 = v45[++v49];
        }
        while ( v47 );
        v32 = (int)v114;
      }
      if ( v9 )
        Win32FreePool(v45);
      if ( v48 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        --gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
      }
      v4 = v115;
      v9 = 0;
    }
LABEL_86:
    v50 = *(_BYTE *)(v26 + 297) != 0;
    v126 = 0LL;
    v51 = (v50 ? 0x20 : 0) | 0x80;
    if ( !*(_BYTE *)(v26 + 298) )
      v51 = v50 ? 0x20 : 0;
    *(_DWORD *)(*(_QWORD *)v4 + 2184LL) = v51;
    v52 = *(_QWORD *)v4;
    v53 = 0LL;
    *(_DWORD *)(v52 + 2188) = v32;
    if ( (*(_DWORD *)(v109 + 32) & 1) != 0 || (v54 = 1, (*(_DWORD *)(v26 + 28) & 2) == 0) )
      v54 = 0;
    v116 = (struct RFONT *)ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v55 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v117, v115, &v113, (__int64)&v120, &v125, v110 & 4);
    v56 = v55;
    if ( !v55 )
    {
      v57 = v115;
      *this = 0LL;
      v58 = *(_QWORD *)v57;
LABEL_218:
      *(_QWORD *)(v58 + 2192) = 0LL;
      SEMOBJ::vUnlock((SEMOBJ *)&v116);
LABEL_219:
      v42 = 0;
      goto LABEL_220;
    }
    v59 = 2 * v54;
    v60 = v115;
    v61 = (struct tagLOGFONTW *)(v26 + 276);
    v124[0] = *((_QWORD *)v55 + 4);
    LODWORD(v114) = v59;
    v62 = *(_QWORD *)v115;
    v118 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v115 + 80LL) + 68LL);
    v119 = *(_DWORD *)(*(_QWORD *)(v62 + 80) + 312LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v62 + 80) + 352LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v117, v115, 0x204u, 0);
      LOBYTE(v59) = (_BYTE)v114;
      v61 = (struct tagLOGFONTW *)(v26 + 276);
    }
    else
    {
      v117 = v62 + 336;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v60 + 80LL) + 68LL) == 1 )
      NtoD_Win31 = bGetNtoD_Win31(&v128, v61, (struct IFIOBJ *)v124, v60, v59, &v120, 0);
    else
      NtoD_Win31 = bGetNtoD(&v128, v61, (struct IFIOBJ *)v124, v60, &v120);
    if ( !NtoD_Win31 )
    {
      *this = 0LL;
      v58 = *(_QWORD *)v60;
      goto LABEL_218;
    }
    eYX = v128.eYX;
    if ( LODWORD(v128.eYX) )
    {
      LODWORD(eYX) = LODWORD(v128.eYX) ^ 0x80000000;
      LODWORD(v128.eYX) ^= 0x80000000;
    }
    eYY = v128.eYY;
    if ( LODWORD(v128.eYY) )
    {
      LODWORD(eYY) = LODWORD(v128.eYY) ^ 0x80000000;
      LODWORD(v128.eYY) ^= 0x80000000;
    }
    v66 = *(_DWORD *)(v124[0] + 48LL);
    if ( (v66 & 0x1000000) != 0 )
    {
      v128.eXX = eYY;
      v128.eXY = eYX;
      if ( eYX != 0.0 )
        LODWORD(v128.eXY) = LODWORD(eYX) ^ 0x80000000;
    }
    if ( (v66 & 1) != 0 && *(int *)(v26 + 276) <= 0 )
      v113 |= 0x8000u;
    v53 = *(_QWORD *)v56;
    v126 = v53;
    v127 = 0;
    ++*(_DWORD *)(v53 + 68);
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    v67 = *(_QWORD *)v60;
    v68 = v113;
    v69 = *(_QWORD *)(v67 + 80);
    v117 = ghsemRFONTList;
    LODWORD(v116) = *(_DWORD *)(v69 + 68);
    GreAcquireSemaphore(ghsemRFONTList);
    v70 = v109;
    if ( (*(_DWORD *)(v109 + 32) & 0x800000) != 0 )
      v71 = *(struct _FD_XFORM **)(*(_QWORD *)(v109 + 3536) + 1528LL);
    else
      v71 = *(struct _FD_XFORM **)(v109 + 1528);
    *this = v71;
    if ( v71 )
    {
      while ( 1 )
      {
        v72 = *this;
        if ( *(struct PFE **)&(*this)[7].eXX == v56 && v110 == (LODWORD(v72[4].eXY) & 6) )
        {
          v73 = v72->eYY;
          if ( ((LODWORD(v73) ^ v68) & 0xE000) == 0 )
          {
            v74 = (LODWORD(v73) ^ v68) & 0x50010000;
            if ( !v74 )
              goto LABEL_239;
            if ( (v68 & 0x10000) != 0 && (LODWORD(v73) & 0x20000) != 0 )
              v74 = (LODWORD(v73) ^ v68) & 0x50000000;
            if ( (v68 & 0x10000000) != 0 && (LODWORD(v73) & 0x10000000) == 0 && (LODWORD(v73) & 0x2000000) != 0 || !v74 )
            {
LABEL_239:
              if ( !LODWORD(v72[2].eYX)
                && *(_QWORD *)&v128.eXX == *(_QWORD *)&v72[8].eXX
                && *(_QWORD *)&v128.eYX == *(_QWORD *)&v72[8].eYX
                && v112 == LODWORD(v72[42].eYX) )
              {
                if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v121, (struct MATRIX *)&v72[10].eXY) )
                {
                  v75 = *this;
                  if ( LODWORD((*this)[12].eYX) == (_DWORD)v116 && (v111 || !LODWORD(v75[40].eYY)) )
                    break;
                }
              }
            }
          }
        }
        v76 = *(struct _FD_XFORM **)&(*this)[31].eYX;
        *this = v76;
        if ( !v76 )
        {
          v70 = v109;
          goto LABEL_137;
        }
      }
      ++LODWORD(v75[30].eYY);
      if ( (*(_DWORD *)(v109 + 32) & 0x800000) != 0 )
        v78 = *(struct RFONT **)(*(_QWORD *)(v109 + 3536) + 1528LL);
      else
        v78 = *(struct RFONT **)(v109 + 1528);
      v114 = v78;
      if ( v78 != (struct RFONT *)*this )
      {
        RFONTOBJ::vRemove(this, &v114, 1LL);
        RFONTOBJ::vInsert(this, &v114, 1LL);
        PDEVOBJ::prfntActive((PDEVOBJ *)&v109, v114);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v117);
      goto LABEL_206;
    }
LABEL_137:
    if ( (*(_DWORD *)(v70 + 32) & 0x800000) != 0 )
      v77 = *(struct _FD_XFORM **)(*(_QWORD *)(v70 + 3536) + 1536LL);
    else
      v77 = *(struct _FD_XFORM **)(v70 + 1536);
    *this = v77;
    if ( !v77 )
    {
LABEL_167:
      *this = 0LL;
      if ( ghsemRFONTList )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
        GreReleaseSemaphoreInternal(ghsemRFONTList);
      }
      v84 = v115;
      if ( (unsigned int)RFONTOBJ::bRealizeFont(
                           (RFONTOBJ *)this,
                           v115,
                           (struct PDEVOBJ *)&v109,
                           (struct tagENUMLOGFONTEXDVW *)(v26 + 276),
                           v56,
                           &v128,
                           &v120,
                           v113,
                           0,
                           v112,
                           v111,
                           v110) )
      {
        if ( *(_DWORD *)(v26 + 280) )
        {
          v117 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v98 = 420LL;
          v124[0] = *((_QWORD *)v56 + 4);
          v99 = *(_DWORD *)(v26 + 272);
          if ( v99 < 0x1A4 )
            v98 = v99;
          v100 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v98);
          v101 = v100;
          if ( v100 )
          {
            memmove(v100, (const void *)(v26 + 276), v98);
            v102 = v115;
            v103 = (unsigned int)v114;
            v101->lfWidth = 0;
            if ( !(unsigned int)PFEOBJ::bSetFontXform(
                                  v104,
                                  v102,
                                  v101,
                                  *this + 9,
                                  v103,
                                  v108,
                                  &v120,
                                  (struct IFIOBJ *)v124,
                                  0) )
              (*this)[9] = v128;
            FreeTmpBuffer(v101);
          }
          else
          {
            (*this)[9] = v128;
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v117);
          v84 = v115;
        }
        v105 = *this;
        v106 = 1;
        v107 = *(_QWORD *)v84;
        v42 = 1;
        v127 = 1;
        *(_QWORD *)(v107 + 2192) = v105;
        *(_DWORD *)(*(_QWORD *)v84 + 264LL) &= ~1u;
        goto LABEL_221;
      }
      *this = 0LL;
      *(_QWORD *)(*(_QWORD *)v84 + 2192LL) = 0LL;
      goto LABEL_219;
    }
    while ( 1 )
    {
      v79 = *this;
      if ( *(struct PFE **)&(*this)[7].eXX == v56 && v110 == (LODWORD(v79[4].eXY) & 6) )
      {
        v80 = v79->eYY;
        if ( ((LODWORD(v80) ^ v68) & 0xE000) == 0 )
        {
          v81 = (LODWORD(v80) ^ v68) & 0x50010000;
          if ( !v81 )
            goto LABEL_240;
          if ( (v68 & 0x10000) != 0 && (LODWORD(v80) & 0x20000) != 0 )
            v81 = (LODWORD(v80) ^ v68) & 0x50000000;
          if ( (v68 & 0x10000000) != 0 && (LODWORD(v80) & 0x10000000) == 0 && (LODWORD(v80) & 0x2000000) != 0 || !v81 )
          {
LABEL_240:
            if ( !LODWORD(v79[2].eYX)
              && *(_QWORD *)&v128.eXX == *(_QWORD *)&v79[8].eXX
              && *(_QWORD *)&v128.eYX == *(_QWORD *)&v79[8].eYX
              && v112 == LODWORD(v79[42].eYX) )
            {
              if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v121, (struct MATRIX *)&v79[10].eXY) )
              {
                v82 = *this;
                if ( LODWORD((*this)[12].eYX) == (_DWORD)v116 && (v111 || !LODWORD(v82[40].eYY)) )
                  break;
              }
            }
          }
        }
      }
      v83 = *(struct _FD_XFORM **)&(*this)[31].eYX;
      *this = v83;
      if ( !v83 )
        goto LABEL_167;
    }
    v85 = v109;
    if ( (*(_DWORD *)(v109 + 32) & 0x800000) != 0 )
      v86 = *(_QWORD *)(*(_QWORD *)(v109 + 3536) + 1536LL);
    else
      v86 = *(_QWORD *)(v109 + 1536);
    v87 = *(_QWORD *)&v82[31].eXX;
    v88 = v87 + 496;
    if ( !v87 )
      v88 = 0LL;
    v89 = *(_QWORD *)&v82[31].eYX;
    v90 = (_QWORD *)(v89 + 496);
    if ( !v89 )
      v90 = 0LL;
    if ( v87 )
    {
      *(_QWORD *)(v88 + 8) = v89;
      if ( v90 )
        *v90 = *(_QWORD *)&v82[31].eXX;
    }
    else
    {
      v86 = *(_QWORD *)&v82[31].eYX;
      if ( !v90 )
      {
LABEL_184:
        if ( (*(_DWORD *)(v85 + 32) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v85 + 3536) + 1536LL) = v86;
        else
          *(_QWORD *)(v85 + 1536) = v86;
        if ( (*(_DWORD *)(v109 + 32) & 0x800000) != 0 )
          v91 = *(_DWORD *)(*(_QWORD *)(v109 + 3536) + 1544LL);
        else
          v91 = *(_DWORD *)(v109 + 1544);
        v92 = v91 - 1;
        if ( (*(_DWORD *)(v109 + 32) & 0x800000) != 0 )
          *(_DWORD *)(*(_QWORD *)(v109 + 3536) + 1544LL) = v92;
        else
          *(_DWORD *)(v109 + 1544) = v92;
        v93 = v109;
        if ( (*(_DWORD *)(v109 + 32) & 0x800000) != 0 )
          v94 = *(struct _FD_XFORM **)(*(_QWORD *)(v109 + 3536) + 1528LL);
        else
          v94 = *(struct _FD_XFORM **)(v109 + 1528);
        v95 = (struct _FD_XFORM **)&v94[31];
        if ( !v94 )
          v95 = 0LL;
        p_eXX = (_QWORD *)&(*this)[31].eXX;
        if ( *this != (struct _FD_XFORM *)-496LL )
        {
          *p_eXX = 0LL;
          p_eXX[1] = v94;
          if ( v95 )
            *v95 = *this;
          v94 = *this;
          v93 = v109;
        }
        if ( (*(_DWORD *)(v93 + 32) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v93 + 3536) + 1528LL) = v94;
        else
          *(_QWORD *)(v93 + 1528) = v94;
        LODWORD((*this)[30].eYY) = 1;
        SEMOBJ::~SEMOBJ((SEMOBJ *)&v117);
LABEL_206:
        v42 = 1;
        v97 = v115;
        *(_QWORD *)(*(_QWORD *)v115 + 2192LL) = *this;
        *(_DWORD *)(*(_QWORD *)v97 + 264LL) &= ~1u;
LABEL_220:
        v106 = v127;
LABEL_221:
        if ( v53 && !v106 )
        {
          GreAcquireSemaphore(ghsemPublicPFT);
          --*(_DWORD *)(v53 + 68);
          if ( !*(_DWORD *)(v53 + 56)
            && !*(_DWORD *)(v53 + 60)
            && !*(_QWORD *)(v53 + 160)
            && !*(_DWORD *)(v53 + 68)
            && !*(_DWORD *)(v53 + 64) )
          {
            PFFOBJ::vPFFC_Delete((PFFOBJ *)&v126, (struct PFFCLEANUP *)v124);
            v9 = 1;
          }
          if ( ghsemPublicPFT )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
            GreReleaseSemaphoreInternal(ghsemPublicPFT);
          }
          if ( v9 )
            vCleanupFontFile((struct PFFCLEANUP *)v124);
        }
        goto LABEL_234;
      }
      *v90 = 0LL;
    }
    v85 = v109;
    goto LABEL_184;
  }
  if ( (*(_DWORD *)(v41 + 264) & 1) != 0 )
  {
    if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v121, (struct MATRIX *)&(*this)[10].eXY) )
    {
      *(_DWORD *)(*(_QWORD *)v4 + 264LL) &= ~1u;
      goto LABEL_67;
    }
    goto LABEL_69;
  }
LABEL_67:
  v42 = 1;
LABEL_234:
  if ( v26 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v26);
  return v42;
}
