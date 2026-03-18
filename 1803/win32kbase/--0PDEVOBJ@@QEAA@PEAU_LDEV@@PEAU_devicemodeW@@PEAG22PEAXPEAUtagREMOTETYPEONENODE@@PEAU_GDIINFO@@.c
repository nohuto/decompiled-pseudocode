/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032330
 * Callers:
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0031BF4 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0031C80 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0031CA8 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0033610 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C00348B0 (GreDeleteSemaphore.c)
 *     GreCreateSemaphore @ 0x1C00348F0 (GreCreateSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0048760 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C004E960 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C005ABB4 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C006B0BC (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     GreSetPaletteOwner @ 0x1C006C230 (GreSetPaletteOwner.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C006C818 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C006D2A8 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006E4C4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C00D31B0 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00DAE9C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        void *a7,
        struct tagREMOTETYPEONENODE *a8,
        struct _GDIINFO *a9,
        struct tagDEVINFO *a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  struct PDEV *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _GDIINFO *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int64 v25; // rdx
  _OWORD *v27; // rcx
  __int128 v28; // xmm1
  void *v29; // r15
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  __int64 v33; // r8
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // edx
  _DWORD *v38; // r8
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int16 *v45; // rbx
  unsigned int *v46; // rcx
  unsigned int v47; // eax
  bool v48; // cc
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  int HalftoneBrushesWrap; // eax
  __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // rdx
  signed __int32 v58; // ett
  _DWORD *v59; // rbx
  unsigned int v60; // edi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  struct _ERESOURCE *v68; // rcx
  struct PDEV *v69; // rcx
  unsigned int v71; // [rsp+28h] [rbp-D8h]
  unsigned int v72; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v73; // [rsp+60h] [rbp-A0h] BYREF
  void *v74; // [rsp+68h] [rbp-98h]
  unsigned int v75; // [rsp+70h] [rbp-90h] BYREF
  __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  struct _DRVFN *v77; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v78; // [rsp+88h] [rbp-78h]
  _BYTE v79[432]; // [rsp+90h] [rbp-70h] BYREF

  v73 = a6;
  v74 = a7;
  if ( gdwDirectDrawContext + 3556 <= gdwDirectDrawContext )
    return this;
  v17 = PDEV::Allocate(gdwDirectDrawContext + 3556, a11);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 3) = v17;
  *(_QWORD *)(*(_QWORD *)this + 1784LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1776LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2600LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2604LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3520LL) = 0;
  v18 = *(_QWORD *)this;
  v76 = v18;
  v19 = v18;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1784) + 24LL) != 6 )
    GreCreateSemaphore(v18);
  if ( (a12 & 1) != 0 )
  {
    *(_DWORD *)(v18 + 2604) = 5;
    v19 = *(_QWORD *)this;
  }
  v20 = *(_QWORD *)(v19 + 1784);
  if ( *(_DWORD *)(v20 + 24) == 1 && *(_DWORD *)(v19 + 2604) == 5 )
  {
    if ( (int)IsPanningGetFunctionTableSupported() >= 0 )
    {
      PanningGetFunctionTable(&v77, &v75);
      bFillFunctionTable(v77, v75, (__int64 (**)(void))(*(_QWORD *)this + 2680LL));
    }
  }
  else
  {
    memmove((void *)(v19 + 2680), (const void *)(v20 + 64), 0x340uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1704LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1496LL) = a5;
  v21 = a9;
  if ( a9 )
  {
    v22 = (_OWORD *)(*(_QWORD *)this + 2128LL);
    v23 = 2LL;
    do
    {
      *v22 = *(_OWORD *)&v21->ulVersion;
      v22[1] = *(_OWORD *)&v21->ulHorzRes;
      v22[2] = *(_OWORD *)&v21->ulNumColors;
      v22[3] = *(_OWORD *)&v21->flTextCaps;
      v22[4] = *(_OWORD *)&v21->ulAspectX;
      v22[5] = *(_OWORD *)&v21->yStyleStep;
      v22[6] = *(_OWORD *)&v21->szlPhysSize.cx;
      v22 += 8;
      v24 = *(_OWORD *)&v21->ciDevice.Red.y;
      v21 = (struct _GDIINFO *)((char *)v21 + 128);
      *(v22 - 1) = v24;
      --v23;
    }
    while ( v23 );
    v25 = 2LL;
    *v22 = *(_OWORD *)&v21->ulVersion;
    v22[1] = *(_OWORD *)&v21->ulHorzRes;
    v22[2] = *(_OWORD *)&v21->ulNumColors;
    v22[3] = *(_OWORD *)&v21->flTextCaps;
    v27 = (_OWORD *)(*(_QWORD *)this + 1816LL);
    do
    {
      *v27 = *(_OWORD *)a10;
      v27[1] = *((_OWORD *)a10 + 1);
      v27[2] = *((_OWORD *)a10 + 2);
      v27[3] = *((_OWORD *)a10 + 3);
      v27[4] = *((_OWORD *)a10 + 4);
      v27[5] = *((_OWORD *)a10 + 5);
      v27[6] = *((_OWORD *)a10 + 6);
      v27 += 8;
      v28 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v27 - 1) = v28;
      --v25;
    }
    while ( v25 );
    *v27 = *(_OWORD *)a10;
    v27[1] = *((_OWORD *)a10 + 1);
    v27[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v27 + 6) = *((_QWORD *)a10 + 6);
  }
  v78 = (_DWORD *)(v18 + 40);
  SETFLAG(a11, (volatile unsigned int *)(v18 + 40), 0x8000u);
  if ( a11 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1792LL) = *((_QWORD *)a2 + 5);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = gppdevListUMPDInCreate;
    gppdevListUMPDInCreate = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  }
  v29 = v74;
  *(_QWORD *)(*(_QWORD *)this + 1792LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v76,
                                            a3,
                                            a4,
                                            *(_QWORD *)this + 2128LL,
                                            (HSURF *)(*(_QWORD *)this + 1448LL),
                                            v71,
                                            (struct _GDIINFO *)(*(_QWORD *)this + 2128LL),
                                            v72,
                                            (struct tagDEVINFO *)(*(_QWORD *)this + 1816LL),
                                            *(HDEV *)this,
                                            v73,
                                            v74);
  v30 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1792LL) )
    goto LABEL_116;
  if ( *(_DWORD *)(*(_QWORD *)(v30 + 1784) + 24LL) == 6 )
  {
LABEL_111:
    PDEV::InitializeClientReferenceCount(*(PDEV **)this);
    *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
    if ( (*v78 & 1) != 0 )
    {
      PDEVOBJ::bDisabled((PDEVOBJ *)&v76, 1);
      vResetSurfacePalette(*(HDEV *)this);
    }
    v65 = (_QWORD *)(*(_QWORD *)this + 2616LL);
    v65[1] = v65;
    *v65 = v65;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    if ( a11 )
      RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
    **(_QWORD **)this = gppdevList;
    gppdevList = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    PDEVOBJ::CompletePDEV((PDEVOBJ *)&v76, *(struct DHPDEV__ **)(*(_QWORD *)this + 1792LL), *(HDEV *)this);
    v66 = (_QWORD *)(*(_QWORD *)this + 3528LL);
    v66[1] = v66;
    *v66 = v66;
    return this;
  }
  v31 = *(_DWORD *)(v30 + 2136);
  if ( v31 > 0 )
  {
    v32 = 1000 * v31;
  }
  else
  {
    if ( !v31 )
    {
      *(_DWORD *)(v30 + 2136) = 25400 * (unsigned __int64)*(unsigned int *)(v30 + 2144) / 0x60;
      goto LABEL_28;
    }
    v32 = -v31;
  }
  *(_DWORD *)(v30 + 2136) = v32;
LABEL_28:
  v33 = *(_QWORD *)this;
  v34 = *(_DWORD *)(*(_QWORD *)this + 2140LL);
  if ( v34 > 0 )
  {
    v35 = 1000 * v34;
    goto LABEL_33;
  }
  if ( v34 )
  {
    v35 = -v34;
LABEL_33:
    *(_DWORD *)(v33 + 2140) = v35;
    goto LABEL_34;
  }
  *(_DWORD *)(v33 + 2140) = 25400 * (unsigned __int64)*(unsigned int *)(v33 + 2148) / 0x60;
LABEL_34:
  if ( !a11 )
  {
    v36 = *(_QWORD *)this;
    v37 = *(_DWORD *)(*(_QWORD *)this + 2172LL);
    if ( *(_DWORD *)(*(_QWORD *)this + 2168LL) != v37 )
    {
      if ( HIWORD(v37) - 100 <= 0x190u )
      {
        *(_DWORD *)(v36 + 3520) = v37;
        *(_DWORD *)(*(_QWORD *)this + 2172LL) = *(_DWORD *)(*(_QWORD *)this + 2168LL);
      }
      else
      {
        *(_DWORD *)(v36 + 2172) = 0;
        *(_DWORD *)(*(_QWORD *)this + 2168LL) = 0;
      }
    }
  }
  v38 = *(_DWORD **)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 2168LL) )
  {
    v38[542] = 96;
    v38 = *(_DWORD **)this;
  }
  if ( !v38[543] )
  {
    v38[543] = 96;
    v38 = *(_DWORD **)this;
  }
  if ( v38[533] == 1 )
  {
    v38[551] = 1;
    *(_DWORD *)(*(_QWORD *)this + 2208LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 2212LL) = 3;
    v38 = *(_DWORD **)this;
  }
  v39 = v38[533];
  v40 = 17424;
  if ( (v39 & 0xFFFFFFFB) != 0 )
    v40 = 28313;
  v41 = v40 | 0x1000;
  if ( v39 != 1 )
    v41 = v40;
  v42 = v41 | 0x100;
  if ( (v38[454] & 0x80000) == 0 )
    v42 = v41;
  v38[541] = v42;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v73, *(HPALETTE *)(*(_QWORD *)this + 2112LL));
  v45 = v73;
  if ( !v73 )
    goto LABEL_52;
  if ( (*((_DWORD *)v73 + 6) & 0x1000000) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43);
    if ( (*((_DWORD *)v45 + 6) & 0x1000000) == 0 )
      goto LABEL_52;
  }
  if ( !*((_DWORD *)v45 + 7) )
  {
    v46 = (unsigned int *)*((_QWORD *)v45 + 14);
    v43 = *v46;
    v47 = v46[1];
    v48 = v47 <= (unsigned int)v43;
    if ( v47 < (unsigned int)v43 )
    {
      v49 = v46[2];
      if ( (unsigned int)v43 > v49 )
      {
        v44 = v47 <= v49;
LABEL_63:
        *(_DWORD *)(*(_QWORD *)this + 2360LL) = v44;
        goto LABEL_65;
      }
      v48 = v47 <= (unsigned int)v43;
    }
    if ( !v48 )
    {
      v50 = v46[2];
      if ( v47 > v50 )
      {
        v44 = 3 - (unsigned int)(v50 < (unsigned int)v43);
        goto LABEL_63;
      }
    }
    v44 = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 2360LL) = (v47 < (unsigned int)v43) + 4;
  }
LABEL_65:
  if ( (*(_DWORD *)(*(_QWORD *)this + 2164LL) & 0x100) != 0 )
  {
    if ( !a11 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43), *((_DWORD *)v45 + 7) == 256) )
    {
      if ( !(unsigned int)CreateSurfacePal(
                            v45,
                            v43,
                            *(unsigned int *)(*(_QWORD *)this + 2160LL),
                            *(unsigned int *)(*(_QWORD *)this + 2232LL)) )
      {
LABEL_52:
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v73);
        goto LABEL_116;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)this + 1816LL) &= ~0x80000u;
      *(_DWORD *)(*(_QWORD *)this + 2164LL) &= ~0x100u;
    }
  }
  if ( a11 && !(unsigned int)GreSetPaletteOwner(*(_QWORD *)v45, 0LL) )
    goto LABEL_52;
  v51 = *(_QWORD *)this;
  v73 = 0LL;
  *(_QWORD *)(v51 + 1800) = v45;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v73);
  v52 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 1448LL) )
  {
    v53 = *(_DWORD *)(*(_QWORD *)(v52 + 1784) + 24LL);
    if ( v53 != 1 && v53 != 4 )
      goto LABEL_81;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v52 + 1784) + 24LL) == 2 )
  {
    if ( (int)IsPDEVOBJ_bCreateHalftoneBrushesSupported() >= 0 )
    {
      HalftoneBrushesWrap = PDEVOBJ_bCreateHalftoneBrushesWrap(this);
      goto LABEL_80;
    }
LABEL_81:
    *(_QWORD *)(*(_QWORD *)this + 2552LL) = v29;
    v55 = *(_QWORD *)this;
    v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1784LL) + 24LL);
    if ( ((v56 - 1) & 0xFFFFFFFD) == 0 || v56 == 4 )
    {
      *(_QWORD *)(v55 + 1728) = *(_QWORD *)(v18 + 2920);
      *(_QWORD *)(*(_QWORD *)this + 1720LL) = *(_QWORD *)(v18 + 2912);
      v74 = ghsemDriverMgmt;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      ((void (__noreturn *)(void))GreCreateSemaphore)();
    }
    *(_QWORD *)(v55 + 1760) = *(_QWORD *)(v18 + 2856);
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *(_QWORD *)(v18 + 2984);
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v18 + 3384);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *(_QWORD *)(v18 + 3376);
    if ( (int)IsGetgbFinishDefGUIFontInitSupported() >= 0 )
    {
      pgbFinishDefGUIFontInit = (int *)GetgbFinishDefGUIFontInit();
      if ( *pgbFinishDefGUIFontInit )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1784LL) + 24LL) == 1 )
        {
          if ( (int)IsFinishStockFontInitSupported() >= 0 )
            FinishStockFontInit(*(unsigned int *)(*(_QWORD *)this + 2172LL));
          *pgbFinishDefGUIFontInit = 0;
        }
      }
    }
    v57 = *(_QWORD *)this;
    _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
    do
      v58 = *(_DWORD *)(v57 + 40);
    while ( v58 != _InterlockedCompareExchange((volatile signed __int32 *)(v57 + 40), v58 & 0xFFFFFFBF, v58) );
    v59 = *(_DWORD **)this;
    v60 = 12 * *(_DWORD *)(*(_QWORD *)this + 2172LL) / 0x48u;
    memset(v79, 0, 0x1A4uLL);
    if ( !v59[455] )
    {
      v59[455] = v60;
      v59 = *(_DWORD **)this;
    }
    if ( !v59[478] )
    {
      v59[478] = v60;
      v59 = *(_DWORD **)this;
    }
    if ( !v59[501] )
      v59[501] = v60;
    if ( (int)IsvConvertLogFontWSupported() >= 0 )
      vConvertLogFontW(v79, *(_QWORD *)this + 1820LL);
    v61 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 2132LL) != 1 )
    {
      if ( (int)IshfontCreateSupported() < 0 )
        goto LABEL_105;
      v62 = hfontCreate(v79, 4LL, 2LL, 0LL, 8);
      *(_QWORD *)(*(_QWORD *)this + 1424LL) = v62;
      if ( v62 )
        goto LABEL_105;
      v61 = *(_QWORD *)this;
    }
    *(_QWORD *)(v61 + 1424) = gahStockObjects[13];
LABEL_105:
    if ( (int)IsvConvertLogFontWSupported() >= 0 )
      vConvertLogFontW(v79, *(_QWORD *)this + 1912LL);
    v63 = hfontCreate(v79, 5LL, 2LL, 0LL, 8);
    *(_QWORD *)(*(_QWORD *)this + 1432LL) = v63;
    if ( !v63 )
      *(_QWORD *)(*(_QWORD *)this + 1432LL) = gahStockObjects[13];
    vConvertLogFontW(v79, *(_QWORD *)this + 2004LL);
    v64 = hfontCreate(v79, 6LL, 2LL, 0LL, 8);
    *(_QWORD *)(*(_QWORD *)this + 1440LL) = v64;
    if ( !v64 )
      *(_QWORD *)(*(_QWORD *)this + 1440LL) = gahStockObjects[16];
    goto LABEL_111;
  }
  if ( (int)IsPDEVOBJ_bCreateDefaultBrushesSupported() < 0 )
    goto LABEL_81;
  HalftoneBrushesWrap = PDEVOBJ_bCreateDefaultBrushesWrap(this);
LABEL_80:
  if ( HalftoneBrushesWrap )
    goto LABEL_81;
LABEL_116:
  if ( a11 )
  {
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  }
  v67 = *(_QWORD *)this;
  v68 = *(struct _ERESOURCE **)(*(_QWORD *)this + 48LL);
  if ( v68 )
  {
    GreDeleteSemaphore(v68);
    v67 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v67 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(this);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(this);
  v69 = *(struct PDEV **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 1792LL) )
  {
    (*(void (__fastcall **)(_QWORD))(v18 + 2696))(*(_QWORD *)(*(_QWORD *)this + 1792LL));
    *(_QWORD *)(*(_QWORD *)this + 1792LL) = 0LL;
    v69 = *(struct PDEV **)this;
  }
  PDEV::Free(v69, a11);
  *(_QWORD *)this = 0LL;
  return this;
}
