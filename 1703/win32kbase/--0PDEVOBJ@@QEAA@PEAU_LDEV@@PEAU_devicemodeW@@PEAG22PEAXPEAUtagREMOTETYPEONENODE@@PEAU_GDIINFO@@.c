/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C002CDB0 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037B10 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0038618 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00386A4 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00386C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreCreateSemaphore @ 0x1C00546C0 (GreCreateSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C0054980 (GreDeleteSemaphore.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0058420 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C00628F8 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0076DBC (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 *     GreSetPaletteOwner @ 0x1C008C910 (GreSetPaletteOwner.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C008CA98 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C0090D70 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00FD7E0 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
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
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _GDIINFO *v22; // rcx
  _OWORD *v23; // rax
  __int64 v24; // rdx
  __int128 v25; // xmm1
  __int64 v26; // rdx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  void *v30; // r15
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  __int64 v34; // r8
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // r8
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  unsigned __int16 *v44; // rbx
  unsigned int *v45; // rdx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  bool v48; // cc
  unsigned int v49; // r8d
  __int64 v50; // rax
  unsigned int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rcx
  __int64 v55; // rcx
  int v56; // edx
  int HalftoneBrushesWrap; // eax
  int v58; // ecx
  __int64 v59; // rdx
  signed __int32 v60; // ett
  __int64 v61; // rdi
  unsigned int v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  struct _ERESOURCE *v69; // rcx
  unsigned int v71; // [rsp+28h] [rbp-D8h]
  unsigned int v72; // [rsp+38h] [rbp-C8h]
  void *v73; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v74; // [rsp+68h] [rbp-98h] BYREF
  __int64 v75; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v76; // [rsp+78h] [rbp-88h] BYREF
  struct _DRVFN *v77; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v78; // [rsp+88h] [rbp-78h]
  _BYTE v79[432]; // [rsp+90h] [rbp-70h] BYREF

  v76 = a6;
  v73 = a7;
  if ( gdwDirectDrawContext + 3580 <= gdwDirectDrawContext )
    return this;
  v17 = PDEV::Allocate(gdwDirectDrawContext + 3580LL, a11);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 2) = v17;
  *(_QWORD *)(*(_QWORD *)this + 1808LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1800LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2624LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2628LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3544LL) = 0;
  v18 = *(_QWORD *)this;
  v19 = v18;
  v75 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1808) + 24LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 40LL) = GreCreateSemaphore();
    v18 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 40LL) )
      goto LABEL_127;
  }
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(v18 + 2628) = 5;
  v20 = *(_QWORD *)this;
  v21 = *(_QWORD *)(*(_QWORD *)this + 1808LL);
  if ( *(_DWORD *)(v21 + 24) == 1 && *(_DWORD *)(v20 + 2628) == 5 )
  {
    if ( (int)IsPanningGetFunctionTableSupported() >= 0 )
    {
      PanningGetFunctionTable(&v77, &v74);
      bFillFunctionTable(v77, v74, (__int64 (**)(void))(*(_QWORD *)this + 2704LL));
    }
  }
  else
  {
    memmove((void *)(v20 + 2704), (const void *)(v21 + 64), 0x340uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1728LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1512LL) = a5;
  v22 = a9;
  if ( a9 )
  {
    v23 = (_OWORD *)(*(_QWORD *)this + 2152LL);
    v24 = 2LL;
    do
    {
      *v23 = *(_OWORD *)&v22->ulVersion;
      v23[1] = *(_OWORD *)&v22->ulHorzRes;
      v23[2] = *(_OWORD *)&v22->ulNumColors;
      v23[3] = *(_OWORD *)&v22->flTextCaps;
      v23[4] = *(_OWORD *)&v22->ulAspectX;
      v23[5] = *(_OWORD *)&v22->yStyleStep;
      v23[6] = *(_OWORD *)&v22->szlPhysSize.cx;
      v23 += 8;
      v25 = *(_OWORD *)&v22->ciDevice.Red.y;
      v22 = (struct _GDIINFO *)((char *)v22 + 128);
      *(v23 - 1) = v25;
      --v24;
    }
    while ( v24 );
    v26 = 2LL;
    *v23 = *(_OWORD *)&v22->ulVersion;
    v23[1] = *(_OWORD *)&v22->ulHorzRes;
    v23[2] = *(_OWORD *)&v22->ulNumColors;
    v23[3] = *(_OWORD *)&v22->flTextCaps;
    v28 = (_OWORD *)(*(_QWORD *)this + 1840LL);
    do
    {
      *v28 = *(_OWORD *)a10;
      v28[1] = *((_OWORD *)a10 + 1);
      v28[2] = *((_OWORD *)a10 + 2);
      v28[3] = *((_OWORD *)a10 + 3);
      v28[4] = *((_OWORD *)a10 + 4);
      v28[5] = *((_OWORD *)a10 + 5);
      v28[6] = *((_OWORD *)a10 + 6);
      v28 += 8;
      v29 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v28 - 1) = v29;
      --v26;
    }
    while ( v26 );
    *v28 = *(_OWORD *)a10;
    v28[1] = *((_OWORD *)a10 + 1);
    v28[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v28 + 6) = *((_QWORD *)a10 + 6);
  }
  v78 = (_DWORD *)(v19 + 32);
  SETFLAG(a11, (volatile unsigned int *)(v19 + 32), 0x8000);
  if ( a11 )
    *(_QWORD *)(*(_QWORD *)this + 1816LL) = *((_QWORD *)a2 + 5);
  v30 = v73;
  *(_QWORD *)(*(_QWORD *)this + 1816LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v75,
                                            a3,
                                            a4,
                                            *(_QWORD *)this + 2152LL,
                                            (HSURF *)(*(_QWORD *)this + 1464LL),
                                            v71,
                                            (struct _GDIINFO *)(*(_QWORD *)this + 2152LL),
                                            v72,
                                            (struct tagDEVINFO *)(*(_QWORD *)this + 1840LL),
                                            *(HDEV *)this,
                                            v76,
                                            v73);
  v31 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1816LL) )
    goto LABEL_127;
  if ( *(_DWORD *)(*(_QWORD *)(v31 + 1808) + 24LL) != 6 )
  {
    v32 = *(_DWORD *)(v31 + 2160);
    if ( v32 > 0 )
    {
      v33 = 1000 * v32;
    }
    else
    {
      if ( !v32 )
      {
        *(_DWORD *)(v31 + 2160) = 25400 * (unsigned __int64)*(unsigned int *)(v31 + 2168) / 0x60;
        goto LABEL_28;
      }
      v33 = -v32;
    }
    *(_DWORD *)(v31 + 2160) = v33;
LABEL_28:
    v34 = *(_QWORD *)this;
    v35 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
    if ( v35 > 0 )
    {
      v36 = 1000 * v35;
    }
    else
    {
      if ( !v35 )
      {
        *(_DWORD *)(v34 + 2164) = 25400 * (unsigned __int64)*(unsigned int *)(v34 + 2172) / 0x60;
LABEL_34:
        if ( !a11 )
        {
          v37 = *(_QWORD *)this;
          v38 = *(_DWORD *)(*(_QWORD *)this + 2196LL);
          if ( *(_DWORD *)(*(_QWORD *)this + 2192LL) != v38 )
          {
            if ( (unsigned int)*(unsigned __int16 *)(v37 + 2198) - 100 <= 0x190 )
            {
              *(_DWORD *)(v37 + 3544) = v38;
              *(_DWORD *)(*(_QWORD *)this + 2196LL) = *(_DWORD *)(*(_QWORD *)this + 2192LL);
            }
            else
            {
              *(_DWORD *)(v37 + 2196) = 0;
              *(_DWORD *)(*(_QWORD *)this + 2192LL) = 0;
            }
          }
        }
        if ( !*(_DWORD *)(*(_QWORD *)this + 2192LL) )
          *(_DWORD *)(*(_QWORD *)this + 2192LL) = 96;
        if ( !*(_DWORD *)(*(_QWORD *)this + 2196LL) )
          *(_DWORD *)(*(_QWORD *)this + 2196LL) = 96;
        if ( *(_DWORD *)(*(_QWORD *)this + 2156LL) == 1 )
        {
          *(_DWORD *)(*(_QWORD *)this + 2228LL) = 1;
          *(_DWORD *)(*(_QWORD *)this + 2232LL) = 1;
          *(_DWORD *)(*(_QWORD *)this + 2236LL) = 3;
        }
        v39 = *(_QWORD *)this;
        v40 = 17424;
        v41 = *(_DWORD *)(*(_QWORD *)this + 2156LL);
        if ( (v41 & 0xFFFFFFFB) != 0 )
          v40 = 28313;
        v42 = v40 | 0x1000;
        if ( v41 != 1 )
          v42 = v40;
        v43 = v42 | 0x100;
        if ( (*(_DWORD *)(v39 + 1840) & 0x80000) == 0 )
          v43 = v42;
        *(_DWORD *)(v39 + 2188) = v43;
        EPALOBJ::EPALOBJ((EPALOBJ *)&v76, *(HPALETTE *)(*(_QWORD *)this + 2136LL));
        v44 = v76;
        if ( !v76 )
          goto LABEL_127;
        if ( (*((_DWORD *)v76 + 6) & 0x1000000) == 0 )
          goto LABEL_53;
        if ( !*((_DWORD *)v76 + 7) )
        {
          v45 = (unsigned int *)*((_QWORD *)v76 + 15);
          v46 = *v45;
          v47 = v45[1];
          v48 = v47 <= *v45;
          if ( v47 < *v45 )
          {
            v49 = v45[2];
            if ( v46 > v49 )
            {
              v48 = v47 <= v49;
              v50 = *(_QWORD *)this;
              *(_DWORD *)(v50 + 2384) = v48;
              goto LABEL_69;
            }
            v48 = v47 <= v46;
          }
          if ( v48 || (v51 = v45[2], v47 <= v51) )
          {
            v48 = v46 <= v47;
            v53 = *(_QWORD *)this;
            if ( v48 )
              *(_DWORD *)(v53 + 2384) = 4;
            else
              *(_DWORD *)(v53 + 2384) = 5;
          }
          else
          {
            v52 = *(_QWORD *)this;
            if ( v46 <= v51 )
              *(_DWORD *)(v52 + 2384) = 3;
            else
              *(_DWORD *)(v52 + 2384) = 2;
          }
        }
LABEL_69:
        v54 = *(_DWORD **)this;
        if ( (*(_DWORD *)(*(_QWORD *)this + 2188LL) & 0x100) != 0 )
        {
          if ( !a11 || *((_DWORD *)v44 + 7) == 256 )
          {
            if ( !(unsigned int)CreateSurfacePal(v44, 256LL, (unsigned int)v54[546], (unsigned int)v54[564]) )
              goto LABEL_53;
          }
          else
          {
            v54[460] &= ~0x80000u;
            *(_DWORD *)(*(_QWORD *)this + 2188LL) &= ~0x100u;
          }
        }
        if ( !a11 || (unsigned int)GreSetPaletteOwner(*(void **)v44, 0) )
        {
          *(_QWORD *)(*(_QWORD *)this + 1824LL) = v44;
          v55 = *(_QWORD *)this;
          if ( !*(_QWORD *)(*(_QWORD *)this + 1464LL)
            || (v56 = *(_DWORD *)(*(_QWORD *)(v55 + 1808) + 24LL), v56 == 1)
            || v56 == 4 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v55 + 1808) + 24LL) == 2 )
            {
              if ( (int)IsPDEVOBJ_bCreateHalftoneBrushesSupported() < 0 )
                goto LABEL_85;
              HalftoneBrushesWrap = PDEVOBJ_bCreateHalftoneBrushesWrap(this);
            }
            else
            {
              if ( (int)IsPDEVOBJ_bCreateDefaultBrushesSupported() < 0 )
                goto LABEL_85;
              HalftoneBrushesWrap = PDEVOBJ_bCreateDefaultBrushesWrap(this);
            }
            if ( !HalftoneBrushesWrap )
              goto LABEL_127;
          }
LABEL_85:
          *(_QWORD *)(*(_QWORD *)this + 2576LL) = v30;
          v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1808LL) + 24LL);
          if ( ((v58 - 1) & 0xFFFFFFFC) == 0 && v58 != 2 )
          {
            *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v19 + 2944);
            *(_QWORD *)(*(_QWORD *)this + 1744LL) = *(_QWORD *)(v19 + 2936);
            v73 = ghsemDriverMgmt;
            EngAcquireSemaphore(ghsemDriverMgmt);
            *(_QWORD *)(*(_QWORD *)this + 48LL) = GreCreateSemaphore();
            if ( !*(_QWORD *)(*(_QWORD *)this + 48LL) )
            {
              SEMOBJ::vUnlock((PERESOURCE *)&v73);
              goto LABEL_127;
            }
            *(_DWORD *)(*(_QWORD *)this + 32LL) |= 1u;
            SEMOBJ::vUnlock((PERESOURCE *)&v73);
          }
          *(_QWORD *)(*(_QWORD *)this + 1784LL) = *(_QWORD *)(v19 + 2880);
          *(_QWORD *)(*(_QWORD *)this + 1768LL) = *(_QWORD *)(v19 + 3008);
          *(_QWORD *)(*(_QWORD *)this + 1776LL) = *(_QWORD *)(v19 + 3408);
          *(_QWORD *)(*(_QWORD *)this + 1792LL) = *(_QWORD *)(v19 + 3400);
          if ( (int)IsGetgbFinishDefGUIFontInitSupported() >= 0 )
          {
            pgbFinishDefGUIFontInit = (int *)GetgbFinishDefGUIFontInit();
            if ( *pgbFinishDefGUIFontInit )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1808LL) + 24LL) == 1 )
              {
                if ( (int)IsFinishStockFontInitSupported() >= 0 )
                  FinishStockFontInit(*(unsigned int *)(*(_QWORD *)this + 2196LL));
                *pgbFinishDefGUIFontInit = 0;
              }
            }
          }
          v59 = *(_QWORD *)this;
          _m_prefetchw((const void *)(*(_QWORD *)this + 32LL));
          do
            v60 = *(_DWORD *)(v59 + 32);
          while ( v60 != _InterlockedCompareExchange((volatile signed __int32 *)(v59 + 32), v60 & 0xFFFFFFBF, v60) );
          v61 = *(_QWORD *)this;
          v62 = 12 * *(_DWORD *)(*(_QWORD *)this + 2196LL) / 0x48u;
          memset(v79, 0, 0x1A4uLL);
          if ( !*(_DWORD *)(v61 + 1844) )
            *(_DWORD *)(v61 + 1844) = v62;
          if ( !*(_DWORD *)(*(_QWORD *)this + 1936LL) )
            *(_DWORD *)(*(_QWORD *)this + 1936LL) = v62;
          if ( !*(_DWORD *)(*(_QWORD *)this + 2028LL) )
            *(_DWORD *)(*(_QWORD *)this + 2028LL) = v62;
          if ( (int)IsvConvertLogFontWSupported() >= 0 )
            vConvertLogFontW(v79, *(_QWORD *)this + 1844LL);
          v63 = *(_QWORD *)this;
          if ( *(_DWORD *)(*(_QWORD *)this + 2156LL) != 1 )
          {
            if ( (int)IshfontCreateSupported() < 0
              || (v64 = hfontCreate(v79, 4LL, 2LL), (*(_QWORD *)(*(_QWORD *)this + 1440LL) = v64) != 0LL) )
            {
              if ( (int)IsGreSetLFONTOwnerSupported() < 0
                || (unsigned int)GreSetLFONTOwner(*(_QWORD *)(*(_QWORD *)this + 1440LL), 0LL) )
              {
                goto LABEL_114;
              }
              bDeleteFont(*(_QWORD *)(*(_QWORD *)this + 1440LL), 1LL);
            }
            v63 = *(_QWORD *)this;
          }
          *(_QWORD *)(v63 + 1440) = gahStockObjects[13];
LABEL_114:
          if ( (int)IsvConvertLogFontWSupported() >= 0 )
            vConvertLogFontW(v79, *(_QWORD *)this + 1936LL);
          v65 = hfontCreate(v79, 5LL, 2LL);
          *(_QWORD *)(*(_QWORD *)this + 1448LL) = v65;
          if ( v65 )
          {
            if ( !(unsigned int)GreSetLFONTOwner(*(_QWORD *)(*(_QWORD *)this + 1448LL), 0LL) )
            {
              bDeleteFont(*(_QWORD *)(*(_QWORD *)this + 1448LL), 1LL);
              *(_QWORD *)(*(_QWORD *)this + 1448LL) = gahStockObjects[13];
            }
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)this + 1448LL) = gahStockObjects[13];
          }
          vConvertLogFontW(v79, *(_QWORD *)this + 2028LL);
          v66 = hfontCreate(v79, 6LL, 2LL);
          *(_QWORD *)(*(_QWORD *)this + 1456LL) = v66;
          if ( v66 )
          {
            if ( !(unsigned int)GreSetLFONTOwner(*(_QWORD *)(*(_QWORD *)this + 1456LL), 0LL) )
            {
              bDeleteFont(*(_QWORD *)(*(_QWORD *)this + 1456LL), 1LL);
              *(_QWORD *)(*(_QWORD *)this + 1456LL) = gahStockObjects[16];
            }
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)this + 1456LL) = gahStockObjects[16];
          }
          goto LABEL_124;
        }
LABEL_53:
        DEC_SHARE_REF_CNT((int *)v44);
LABEL_127:
        v69 = *(struct _ERESOURCE **)(*(_QWORD *)this + 40LL);
        if ( v69 )
          GreDeleteSemaphore(v69);
        if ( *(_QWORD *)(*(_QWORD *)this + 1520LL) && (int)IsPDEVOBJ_bDisableHalftoneSupported(v69) >= 0 )
          PDEVOBJ_bDisableHalftoneWrap(this);
        PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(this);
        if ( *(_QWORD *)(*(_QWORD *)this + 1816LL) )
        {
          (*(void (**)(void))(v19 + 2720))();
          *(_QWORD *)(*(_QWORD *)this + 1816LL) = 0LL;
        }
        PDEV::Free(*(struct PDEV **)this, a11);
        *(_QWORD *)this = 0LL;
        return this;
      }
      v36 = -v35;
    }
    *(_DWORD *)(v34 + 2164) = v36;
    goto LABEL_34;
  }
LABEL_124:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*v78 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v75, 1);
    vResetSurfacePalette(*(_QWORD **)this);
  }
  v67 = (_QWORD *)(*(_QWORD *)this + 2640LL);
  v67[1] = v67;
  *v67 = v67;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  **(_QWORD **)this = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = *(_QWORD *)this;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v75, *(struct DHPDEV__ **)(*(_QWORD *)this + 1816LL), *(HDEV *)this);
  v68 = (_QWORD *)(*(_QWORD *)this + 3552LL);
  v68[1] = v68;
  *v68 = v68;
  return this;
}
