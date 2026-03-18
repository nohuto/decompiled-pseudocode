/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C002CDD0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C002ED50 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037B10 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0038A40 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038D30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C005EFF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ldevUnloadImage @ 0x1C005F790 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C005F8A0 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C0062730 (ldevLoadInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C008A654 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C008F3E4 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00988E0 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C009BB08 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C00A1480 (memcmp.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 */

PDEV *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        PDEV *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct _DRV_NAMES *v12; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  HSEMAPHORE *v17; // rcx
  PDEV *v18; // r14
  HDEV v19; // rdi
  BOOL v20; // r15d
  HDEV v21; // rbx
  struct tagGRAPHICS_DEVICE *v22; // rcx
  HDEV v23; // rsi
  int v24; // eax
  const struct _devicemodeW *v25; // rdx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rdi
  unsigned int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // r8d
  char *v38; // rbx
  struct _LDEV *Driver; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  PDEV *v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // rax
  struct HOBJ__ **v48; // rbx
  __int64 v49; // rcx
  bool v50; // zf
  PDEV *v51; // rcx
  void *v52; // rax
  void *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  PDEV *v56; // [rsp+70h] [rbp-10h] BYREF
  PDEV *v57; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v58; // [rsp+C8h] [rbp+48h]
  PDEV *v59; // [rsp+D8h] [rbp+58h] BYREF

  v59 = a4;
  v58 = a2;
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
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  *a10 = 0LL;
  if ( a1 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_46;
  if ( !a3 )
    goto LABEL_67;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  v21 = *(HDEV *)&WPP_MAIN_CB.SectorSize;
  while ( v21 )
  {
    v22 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v21 + 324);
    v57 = (PDEV *)v21;
    if ( (((unsigned __int64)v22 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && a1 == v22 )
    {
      PDEV::IncrementClientReferenceCount((PDEV *)v21);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
      EngAcquireSemaphore(*((HSEMAPHORE *)v21 + 5));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v21 + 5), 11);
      v23 = 0LL;
      v24 = PDEVOBJ::bLddmDriver((PDEVOBJ *)&v57);
      v25 = (const struct _devicemodeW *)*((_QWORD *)v21 + 326);
      if ( v24 )
        v26 = DevmodeEqualEx(a3, v25);
      else
        v26 = memcmp(a3, v25, 0xDCuLL) == 0;
      v27 = *((_DWORD *)v21 + 8);
      if ( (v27 & 0x80000) == 0
        && *((PDEV **)v21 + 323) == v59
        && *((_DWORD *)v21 + 656) == a5
        && *((_DWORD *)v21 + 657) == a6
        && v26
        && !a8 )
      {
        if ( !v19 )
          goto LABEL_18;
        if ( (v27 & 0x400) == 0 )
        {
          v23 = v19;
LABEL_18:
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v57);
          v19 = v21;
        }
        v18 = (PDEV *)v23;
        goto LABEL_23;
      }
      if ( a7 == 1 )
        v20 = 1;
      else
        v23 = v21;
LABEL_23:
      EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v21 + 5));
      if ( v23 )
      {
        if ( gbDeferredInvalidateDualView )
        {
          gbDeferredInvalidateDualView = 0;
          v20 = DrvDisableMDEVChildren((HSEMAPHORE **)gbDeferredOrgMdev, 0, 0) == 0;
        }
        EngAcquireSemaphore(*((HSEMAPHORE *)v23 + 5));
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v23 + 5), 11);
        if ( ((_DWORD)v23[8] & 0x400) == 0 )
        {
          if ( (unsigned int)DrvDisableDisplay((HSEMAPHORE *)v23, 0LL) )
            *a10 = v23;
          else
            v20 = 1;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"poDisable.hsemDevLock()");
        GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v23 + 5));
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      if ( v18 )
      {
        v56 = v18;
        PDEVOBJ::vUnreferencePdev(&v56, 0);
      }
      v21 = *(HDEV *)v21;
      PDEVOBJ::vUnreferencePdev(&v57, 0);
      v18 = 0LL;
    }
    else
    {
      v21 = *(HDEV *)v21;
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  if ( v20 )
  {
    if ( v19 )
    {
      v59 = (PDEV *)v19;
      PDEVOBJ::vUnreferencePdev(&v59, 0);
    }
    goto LABEL_67;
  }
  if ( v19 )
  {
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    *((_QWORD *)v19 + 3) = 0LL;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
    EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 5));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v19 + 5), 11);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    ++*((_DWORD *)v19 + 3);
    if ( ((_DWORD)v19[8] & 0x400) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      DrvEnableDisplay((HSEMAPHORE *)v19, v28);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)v19 + 5));
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    v30 = WdLogNewEntry5_WdTrace(v29);
    *(_QWORD *)(v30 + 24) = v19;
    WdLogEvent5_WdTrace(v30);
    return (PDEV *)v19;
  }
  if ( gbDeferredInvalidateDualView )
  {
    gbDeferredInvalidateDualView = 0;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
    v20 = DrvDisableMDEVChildren((HSEMAPHORE **)gbDeferredOrgMdev, 0, 0) == 0;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v20 )
      goto LABEL_65;
  }
  v12 = v58;
LABEL_46:
  v33 = PALLOCMEM2(0xA00uLL, 1886221383LL, 1);
  if ( !v33 )
    goto LABEL_65;
  v34 = 0;
  if ( !*(_DWORD *)v12 )
    goto LABEL_64;
  while ( 2 )
  {
    if ( a9 == 1 )
    {
      v36 = 1LL;
      v37 = (*((_DWORD *)a1 + 40) & 0x4000000 | 0x2000000u) >> 25;
LABEL_54:
      v38 = (char *)v12 + 16 * v34;
      Driver = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v38 + 2), v36, v37);
    }
    else
    {
      if ( a9 != 2 )
      {
        v35 = a9 - 3;
        if ( a9 == 4 )
        {
          v36 = 4LL;
          v37 = 1;
          goto LABEL_54;
        }
LABEL_57:
        v41 = WdLogNewEntry5_WdTrace(v35);
        WdLogEvent5_WdTrace(v41);
LABEL_63:
        if ( ++v34 >= *(_DWORD *)v12 )
          goto LABEL_64;
        continue;
      }
      v38 = (char *)v12 + 16 * v34;
      Driver = (struct _LDEV *)ldevLoadInternal(*((unsigned int (__fastcall **)(__int64, __int64, _BYTE *))v38 + 2), 3);
    }
    break;
  }
  v35 = 0LL;
  v40 = (__int64)Driver;
  if ( !Driver )
  {
    v12 = v58;
    goto LABEL_57;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v57,
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
  if ( !v57 )
  {
    v43 = WdLogNewEntry5_WdTrace(v42);
    WdLogEvent5_WdTrace(v43);
    ldevUnloadImage(v40);
LABEL_62:
    v12 = v58;
    goto LABEL_63;
  }
  *((_QWORD *)v57 + 324) = a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v57, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v57, 0);
    goto LABEL_62;
  }
  v45 = v57;
  v46 = (unsigned int)ghbrGrayPattern;
  *((_QWORD *)v57 + 198) = 0LL;
  *((_QWORD *)v45 + 195) = 0LL;
  *((_DWORD *)v45 + 392) = 0;
  v47 = HmgShareLockCheck(v46, 16);
  v33[10] = v33 + 70;
  v48 = (struct HOBJ__ **)v47;
  *((_DWORD *)v33 + 150) = 0;
  *(_DWORD *)(v33[10] + 32LL) = 0xFFFFFF;
  v49 = v33[10];
  *((_DWORD *)v33 + 28) = 0;
  *(_QWORD *)(v49 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (unsigned int *)v57 + 388,
    (__int64)v33,
    v47,
    (__int64)WPP_MAIN_CB.Reserved,
    *(_QWORD *)(*((_QWORD *)v57 + 321) + 128LL),
    *((_QWORD *)v57 + 321),
    1u);
  DEC_SHARE_REF_CNT_LAZY0(v48);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v57;
  v50 = a9 == 2;
  v51 = v59;
  *((_QWORD *)v57 + 324) = a1;
  *((_QWORD *)v57 + 323) = v51;
  if ( !v50 )
  {
    v52 = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 1986356295LL, 0);
    *((_QWORD *)v57 + 326) = v52;
    v53 = (void *)*((_QWORD *)v57 + 326);
    if ( v53 )
    {
      memmove(v53, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v57 + 326) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1);
    }
    else
    {
      v20 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v57, 0);
  if ( (*((_DWORD *)v57 + 8) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v57 + 324) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v57 + 9) |= 4u;
    }
    else if ( (int)IsPDEVOBJ_vProfileDriverSupported() >= 0 )
    {
      PDEVOBJ_vProfileDriverWrap(&v57);
    }
  }
  if ( v20 )
  {
    PDEVOBJ::vUnreferencePdev(&v57, 0);
LABEL_64:
    Win32FreePool((__int64)v33);
LABEL_65:
    v17 = (HSEMAPHORE *)*a10;
    if ( *a10 )
      DrvEnableDisplay(v17, v32);
LABEL_67:
    v44 = WdLogNewEntry5_WdTrace(v17);
    WdLogEvent5_WdTrace(v44);
    return 0LL;
  }
  else
  {
    Win32FreePool((__int64)v33);
    v55 = WdLogNewEntry5_WdTrace(v54);
    *(_QWORD *)(v55 + 24) = v57;
    WdLogEvent5_WdTrace(v55);
    return v57;
  }
}
