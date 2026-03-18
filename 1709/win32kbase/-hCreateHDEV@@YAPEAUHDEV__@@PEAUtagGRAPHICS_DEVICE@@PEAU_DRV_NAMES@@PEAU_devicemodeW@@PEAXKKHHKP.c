/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C003D3C0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C003DE40 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C003F6E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00606B4 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0060708 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0061784 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ldevUnloadImage @ 0x1C006DD30 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C006DE40 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C006E760 (ldevLoadInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0094ED4 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A5B48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C00AA900 (memcmp.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

PDEV **__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        PDEV **a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct _DRV_NAMES *v12; // r14
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  HDEV v17; // rcx
  unsigned int v18; // edi
  HDEV v19; // rbx
  BOOL v20; // r15d
  PDEV *v21; // rdi
  struct tagGRAPHICS_DEVICE *v22; // rcx
  int v23; // r8d
  struct _ERESOURCE *v24; // rcx
  PERESOURCE v25; // rcx
  __int64 v26; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v28; // rdx
  HDEV v29; // rsi
  PDEV **v30; // r14
  int v31; // eax
  const struct _devicemodeW *v32; // rdx
  int v33; // ecx
  int v34; // eax
  struct _ERESOURCE *v35; // rcx
  int v36; // r8d
  _QWORD *v37; // rsi
  char *v38; // rbx
  struct _LDEV *Driver; // rax
  __int64 v40; // rcx
  struct _LDEV *v41; // r14
  __int64 v42; // rcx
  int v43; // r8d
  PDEV **v44; // rax
  struct HOBJ__ *v45; // rcx
  struct HOBJ__ **v46; // rbx
  __int64 v47; // rcx
  bool v48; // zf
  PDEV *v49; // rcx
  PDEV *v50; // rax
  PDEV *v51; // rcx
  int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rax
  struct _ERESOURCE *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  PDEV **v59; // [rsp+70h] [rbp-10h] BYREF
  PDEV **v60; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v61; // [rsp+C8h] [rbp+48h]
  PDEV **v62; // [rsp+D8h] [rbp+58h] BYREF

  v62 = a4;
  v61 = a2;
  v12 = a2;
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v15 = a5;
  v16 = a6;
  v14[7] = a9;
  v14[3] = a1;
  v14[4] = a4;
  v14[5] = v15;
  v14[6] = v16;
  WdLogEvent5_WdEvent(v14);
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  *a10 = 0LL;
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_103;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    v21 = gppdevList;
    if ( gppdevList )
    {
      while ( 1 )
      {
        v22 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v21 + 324);
        v60 = (PDEV **)v21;
        if ( (((unsigned __int64)v22 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && a1 == v22 )
          break;
        v21 = *(PDEV **)v21;
LABEL_6:
        if ( !v21 )
        {
          v12 = v61;
          goto LABEL_8;
        }
      }
      v28 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v21 + 446);
      ++*((_DWORD *)v21 + 2);
      TrackObjectReferenceIncrement(1u, v28);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v21 + 5));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v21 + 5), 11LL);
      v29 = 0LL;
      v30 = 0LL;
      v31 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v60);
      v32 = (const struct _devicemodeW *)*((_QWORD *)v21 + 326);
      if ( v31 )
        v33 = DevmodeEqualEx(a3, v32);
      else
        v33 = memcmp(a3, v32, 0xDCuLL) == 0;
      v34 = *((_DWORD *)v21 + 8);
      if ( (v34 & 0x80000) != 0
        || *((PDEV ***)v21 + 323) != v62
        || *((_DWORD *)v21 + 656) != a5
        || *((_DWORD *)v21 + 657) != a6
        || !v33
        || a8 )
      {
        if ( a7 == 1 )
          v20 = 1;
        else
          v29 = (HDEV)v21;
        goto LABEL_36;
      }
      if ( v19 )
      {
        if ( (v34 & 0x400) != 0 )
          goto LABEL_35;
        v29 = v19;
      }
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v60);
      v19 = (HDEV)v21;
LABEL_35:
      v30 = (PDEV **)v29;
LABEL_36:
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v21 + 5));
      v35 = (struct _ERESOURCE *)*((_QWORD *)v21 + 5);
      if ( v35 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v35);
        PsLeavePriorityRegion();
      }
      if ( v29 )
      {
        if ( gbDeferredInvalidateDualView )
        {
          gbDeferredInvalidateDualView = 0;
          v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
        }
        EngAcquireSemaphore(*((HSEMAPHORE *)v29 + 5));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v29 + 5), 11LL);
        if ( ((_DWORD)v29[8] & 0x400) == 0 )
        {
          if ( (unsigned int)DrvDisableDisplay(v29, 0) )
            *a10 = v29;
          else
            v20 = 1;
        }
        EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v29 + 5));
        v55 = (struct _ERESOURCE *)*((_QWORD *)v29 + 5);
        if ( v55 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v55);
          PsLeavePriorityRegion();
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      if ( v30 )
      {
        v59 = v30;
        PDEVOBJ::vUnreferencePdev(&v59, 0, v36);
      }
      v21 = *(PDEV **)v21;
      PDEVOBJ::vUnreferencePdev(&v60, 0, v36);
      goto LABEL_6;
    }
LABEL_8:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v17 = (HDEV)ghsemDriverMgmt;
    v18 = 0;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( v20 )
    {
      if ( v19 )
      {
        v62 = (PDEV **)v19;
        PDEVOBJ::vUnreferencePdev(&v62, 0, v23);
      }
      goto LABEL_103;
    }
    if ( v19 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      *((_QWORD *)v19 + 3) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 5));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v19 + 5), 11LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      ++*((_DWORD *)v19 + 3);
      if ( ((_DWORD)v19[8] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion();
        }
        DrvEnableDisplay(v19);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v19 + 5));
      v24 = (struct _ERESOURCE *)*((_QWORD *)v19 + 5);
      if ( v24 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v24);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v25 = ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      v26 = WdLogNewEntry5_WdTrace(v25);
      *(_QWORD *)(v26 + 24) = v19;
      WdLogEvent5_WdTrace(v26);
      return (PDEV **)v19;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      if ( v20 )
        goto LABEL_101;
    }
  }
  v37 = PALLOCMEM2(0xA00uLL, 1886221383LL, 1);
  if ( !v37 )
    goto LABEL_101;
  if ( !*(_DWORD *)v12 )
    goto LABEL_100;
  while ( 1 )
  {
    if ( a9 == 1 )
    {
LABEL_48:
      v38 = (char *)v12 + 16 * v18;
      Driver = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v38 + 2));
      goto LABEL_49;
    }
    if ( a9 == 2 )
      break;
    v40 = a9 - 3;
    if ( a9 == 4 )
      goto LABEL_48;
LABEL_92:
    v56 = WdLogNewEntry5_WdTrace(v40);
    WdLogEvent5_WdTrace(v56);
LABEL_96:
    if ( ++v18 >= *(_DWORD *)v12 )
      goto LABEL_100;
  }
  v38 = (char *)v12 + 16 * v18;
  Driver = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v38 + 2), 3LL);
LABEL_49:
  v40 = 0LL;
  v41 = Driver;
  if ( !Driver )
  {
    v12 = v61;
    goto LABEL_92;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v60,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v38 + 2),
    *((void **)v38 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v60 )
  {
    v57 = WdLogNewEntry5_WdTrace(v42);
    WdLogEvent5_WdTrace(v57);
    ldevUnloadImage(v41);
LABEL_95:
    v12 = v61;
    goto LABEL_96;
  }
  v60[324] = a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v60, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v60, 0, v43);
    goto LABEL_95;
  }
  v44 = v60;
  v45 = (struct HOBJ__ *)ghbrGrayPattern;
  v60[198] = 0LL;
  v44[195] = 0LL;
  *((_DWORD *)v44 + 392) = 0;
  v46 = (struct HOBJ__ **)HmgShareLockCheck(v45, 16);
  v37[10] = v37 + 70;
  *((_DWORD *)v37 + 150) = 0;
  *(_DWORD *)(v37[10] + 32LL) = 0xFFFFFF;
  v47 = v37[10];
  *((_DWORD *)v37 + 28) = 0;
  *(_QWORD *)(v47 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (unsigned int *)v60 + 388,
    (__int64)v37,
    (__int64)v46,
    (__int64)ppalDefault,
    *((_QWORD *)v60[321] + 16),
    (__int64)v60[321],
    1u);
  DEC_SHARE_REF_CNT_LAZY0(v46);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v60;
  v48 = a9 == 2;
  v49 = (PDEV *)v62;
  v60[324] = a1;
  v60[323] = v49;
  if ( !v48 )
  {
    v50 = (PDEV *)PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 1986356295LL, 0);
    v60[326] = v50;
    v51 = v60[326];
    if ( v51 )
    {
      memmove(v51, a3, a3->dmSize + (unsigned int)a3->dmDriverExtra);
      *((_DWORD *)v60[326] + 18) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1u);
    }
    else
    {
      v20 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v60, 0);
  if ( ((_DWORD)v60[4] & 0x20000) == 0 )
  {
    if ( (*((_DWORD *)v60[324] + 40) & 0x800000) != 0 )
    {
      *((_DWORD *)v60 + 9) |= 4u;
    }
    else if ( (int)IsPDEVOBJ_vProfileDriverSupported() >= 0 )
    {
      PDEVOBJ_vProfileDriverWrap(&v60);
    }
  }
  if ( !v20 )
  {
    Win32FreePool((__int64)v37);
    v54 = WdLogNewEntry5_WdTrace(v53);
    *(_QWORD *)(v54 + 24) = v60;
    WdLogEvent5_WdTrace(v54);
    return v60;
  }
  PDEVOBJ::vUnreferencePdev(&v60, 0, v52);
LABEL_100:
  Win32FreePool((__int64)v37);
LABEL_101:
  v17 = *a10;
  if ( *a10 )
    DrvEnableDisplay(v17);
LABEL_103:
  v58 = WdLogNewEntry5_WdTrace(v17);
  WdLogEvent5_WdTrace(v58);
  return 0LL;
}
