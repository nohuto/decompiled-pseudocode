/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C004BCC8 (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C004E238 (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00CCED4 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0031C80 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0033610 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C003E284 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0042578 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0049830 (bDynamicProcessAllDriverRealizations.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C004E990 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C004FF68 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0050C84 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0051760 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C005351C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreUpdateSharedDevCaps @ 0x1C0066DA4 (GreUpdateSharedDevCaps.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0068034 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00690B0 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C006919C (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0069240 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C006931C (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C006934C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0069690 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C0069878 (DrvEnableMDEV.c)
 *     DrvDestroyMDEV @ 0x1C006D1EC (DrvDestroyMDEV.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C006DBF0 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C006DC8C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C006E590 (GreIncrementDisplaySettingsUniqueness.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00CCB9C (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00CD144 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00D0784 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00D0804 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00D09A8 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D0AA8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        HSEMAPHORE a3,
        void *a4,
        int a5,
        int a6,
        struct _MDEV *a7,
        __int64 *a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  __int64 v14; // rcx
  int v15; // r12d
  struct _UNICODE_STRING *p_DestinationString; // rbx
  int v18; // r14d
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  int PruneFlag; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  DWORD dmFields; // edi
  _QWORD *v32; // rbx
  int v33; // eax
  struct _devicemodeW *v34; // r13
  int updated; // eax
  struct _MDEV *MDEV; // rdi
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  struct D3DKMT_GETPATHSMODALITY *v40; // r15
  __int64 *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  int v46; // r13d
  struct _MDEV *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r12d
  int v52; // ecx
  unsigned int v53; // r15d
  __int64 v54; // rcx
  __int64 v55; // rax
  HDEV v56; // rbx
  int v57; // r13d
  HDEV v58; // r15
  MULTIDEVLOCKOBJ *v59; // rax
  MULTIDEVLOCKOBJ *v60; // rax
  __int64 i; // rdx
  __int64 v62; // r8
  unsigned int v63; // r9d
  MULTIDEVLOCKOBJ *v64; // r12
  HSEMAPHORE v65; // rax
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // edx
  __int64 v69; // r12
  HDEV CloneHDEV; // rax
  unsigned int v71; // ecx
  __int64 v72; // r12
  HSEMAPHORE v73; // r12
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  HDEV v77; // rax
  __int64 v78; // rcx
  HDEV v79; // rcx
  int v80; // eax
  HDEV v81; // rdx
  unsigned int v82; // ebx
  unsigned int v83; // eax
  __int64 v84; // r12
  struct PDEV *v85; // r9
  struct PDEV *v86; // rax
  struct _ERESOURCE *v87; // r12
  int v88; // edx
  int v89; // ecx
  int v90; // r8d
  HDEV v91; // rdx
  __int64 v92; // rdx
  HDEV v93; // rcx
  int v94; // r8d
  __int64 v95; // rax
  signed __int32 v96; // ett
  signed __int32 v97; // ett
  struct _MDEV *v98; // rcx
  struct _ERESOURCE *v99; // rbx
  PDEV *v100; // rbx
  HDEV v101; // rax
  HDEV v102; // r15
  struct _ERESOURCE *v103; // rbx
  HDEV *v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rcx
  wchar_t *j; // rax
  __int64 k; // r9
  __int64 v109; // rax
  int v110; // ecx
  int v111; // r10d
  __int64 v112; // rax
  unsigned int v113; // edx
  bool v114; // cc
  PDEV *v115; // rcx
  unsigned int m; // ebx
  unsigned int v117; // r8d
  unsigned int n; // edx
  __int64 v119; // rax
  int Src; // [rsp+20h] [rbp-E0h]
  int v122; // [rsp+30h] [rbp-D0h]
  struct _devicemodeW *v123; // [rsp+58h] [rbp-A8h] BYREF
  HSEMAPHORE hsem; // [rsp+60h] [rbp-A0h]
  int v125[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v126[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v127; // [rsp+78h] [rbp-88h] BYREF
  MULTIDEVLOCKOBJ *v128; // [rsp+80h] [rbp-80h]
  HDEV v129; // [rsp+88h] [rbp-78h] BYREF
  void *v130; // [rsp+90h] [rbp-70h]
  int v131; // [rsp+98h] [rbp-68h] BYREF
  MULTIDEVLOCKOBJ *v132; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING *v133; // [rsp+A8h] [rbp-58h]
  struct _ERESOURCE *v134; // [rsp+B0h] [rbp-50h]
  HDEV v135; // [rsp+B8h] [rbp-48h] BYREF
  HDEV v136; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  int v138; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v139; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v140)(unsigned int, unsigned int, struct tagDRVENABLEDATA *); // [rsp+E8h] [rbp-18h]
  HDEV v141[7]; // [rsp+F0h] [rbp-10h] BYREF

  v14 = 0LL;
  v15 = a10;
  p_DestinationString = 0LL;
  v18 = 0;
  v125[0] = a12;
  v130 = a4;
  LODWORD(v127) = a9 != 0;
  hsem = a3;
  v126[0] = a9;
  v123 = 0LL;
  v131 = 0;
  v128 = 0LL;
  v132 = 0LL;
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, a2, a3);
  v19[4] = a6;
  v19[5] = a5;
  v19[3] = a1;
  v19[6] = a9;
  v19[7] = a10;
  WdLogEvent5_WdEvent(v19);
  if ( a2 )
  {
    if ( !a1 )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v23);
    }
    if ( hsem )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v24);
    }
  }
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
  *a8 = 0LL;
  if ( a1 )
  {
    if ( a9 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    else
      PruneFlag = v127;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    p_DestinationString = &DestinationString;
    v133 = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v123,
                  &v131,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v125[0],
                  0LL) < 0 )
      {
        if ( v123 )
          Win32FreePool((__int64)v123);
        v29 = WdLogNewEntry5_WdTrace();
        WdLogEvent5_WdTrace(v29);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_233;
      }
      dmFields = a2->dmFields;
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, v26, v28);
      v32[3] = PsGetCurrentProcess();
      v32[4] = a2->dmPelsWidth;
      v32[5] = a2->dmPelsHeight;
      v32[6] = a2->dmBitsPerPel;
      v32[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v32);
      p_DestinationString = v133;
      v33 = 1;
      if ( dmFields )
        v33 = a10;
      v15 = v33;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( a5 && a1 && a2 )
  {
    v34 = v123;
    if ( gProtocolType != -1 )
    {
      updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v123, v131, Src);
      if ( updated < 0 )
      {
        v18 = -2;
        if ( updated == -1073741582 )
          v18 = -5;
      }
    }
  }
  else
  {
    v34 = v123;
  }
  if ( !a6 || v18 )
    goto LABEL_222;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    v122 = v15;
    v51 = 0;
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             v34,
             v130,
             a11 != 0 ? 4 : 0,
             0LL,
             v126[0],
             v122,
             v125[0],
             (struct D3DKMT_GETPATHSMODALITY *)hsem);
    if ( MDEV )
      v18 = 0;
LABEL_64:
    v56 = 0LL;
    v129 = 0LL;
    v57 = 0;
    v126[0] = 0;
    v58 = 0LL;
    v125[0] = 0;
    *a8 = (__int64)MDEV;
    if ( v18 )
    {
      if ( v18 == 2 )
      {
        v114 = *((_DWORD *)MDEV + 5) <= 1u;
        *(_QWORD *)MDEV = *(_QWORD *)a7;
        *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
        if ( !v114 )
        {
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v115 = *(PDEV **)MDEV;
          ++*((_DWORD *)v115 + 3);
          PDEV::IncrementClientReferenceCount(v115);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        }
      }
      goto LABEL_207;
    }
    v133 = 0LL;
    v134 = 0LL;
    hsem = 0LL;
    v130 = 0LL;
    v59 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v128 = v59;
    if ( v59 )
    {
      *(_QWORD *)v59 = 1LL;
      *((_QWORD *)v59 + 1) = 0LL;
      *((_QWORD *)v59 + 2) = 0LL;
    }
    else
    {
      v59 = 0LL;
      v128 = 0LL;
    }
    if ( !v59 )
    {
LABEL_222:
      v41 = a8;
      goto LABEL_223;
    }
    v60 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v132 = v60;
    if ( v60 )
    {
      *(_QWORD *)v60 = 1LL;
      *((_QWORD *)v60 + 1) = 0LL;
      *((_QWORD *)v60 + 2) = 0LL;
    }
    else
    {
      v60 = 0LL;
      v132 = 0LL;
    }
    if ( !v60 )
    {
LABEL_220:
      if ( v128 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v128, i);
      goto LABEL_222;
    }
    if ( *((_DWORD *)MDEV + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 5 * v51++ + 4));
      while ( v51 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
    {
LABEL_134:
      if ( v57 )
        goto LABEL_152;
      if ( a7 && *((_DWORD *)a7 + 5) == 1 )
      {
        *(_QWORD *)a7 = *((_QWORD *)a7 + 4);
        *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 5);
      }
      if ( *((_DWORD *)MDEV + 5) == 1 )
      {
        *(_QWORD *)MDEV = *((_QWORD *)MDEV + 4);
        *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 5);
        goto LABEL_152;
      }
      v85 = (struct PDEV *)*((_QWORD *)MDEV + 3);
      v140 = MulEnableDriver;
      v138 = 1;
      v139 = 0LL;
      v86 = hCreateHDEV(
              (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
              (struct _DRV_NAMES *)&v138,
              (struct _devicemodeW *)MDEV,
              v85,
              0,
              0,
              1,
              0,
              2u,
              &v136);
      *(_QWORD *)MDEV = v86;
      if ( !v86 )
        goto LABEL_141;
      if ( !a7 )
      {
LABEL_175:
        v100 = *(PDEV **)MDEV;
        if ( *((_DWORD *)MDEV + 5) == 1 )
        {
          *(_QWORD *)v125 = *((_QWORD *)v100 + 225);
          if ( *((PDEV **)v100 + 3) != v100 )
            *((_QWORD *)v100 + 3) = v100;
          *((_QWORD *)v100 + 220) = *((_QWORD *)v100 + 357);
          XEPALOBJ::apalResetColorTable((XEPALOBJ *)v125);
        }
        else
        {
          DrvSetSharedDevLock(MDEV);
          v101 = DrvSetSharedPalette(MDEV);
          v102 = v101;
          if ( (*((_DWORD *)v100 + 541) & 0x100) == 0 && v101 && (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
            DrvRealizeHalftonePaletteWrap(v102, 1LL);
        }
LABEL_183:
        v103 = (struct _ERESOURCE *)hsem;
        if ( hsem )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", hsem);
          GreReleaseSemaphoreInternal(v103);
          EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
          GreReleaseSemaphoreInternal(ghsemSprite);
          EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", v130);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)v130);
        }
        v104 = (HDEV *)v133;
        if ( v133 )
        {
          GreIncrementDisplaySettingsUniqueness();
          if ( v104 != v141 )
            Win32FreePool((__int64)v104);
        }
        if ( v57 )
        {
          v112 = WdLogNewEntry5_WdError();
          WdLogEvent5_WdError(v112);
          DrvBackoutMDEV(MDEV, v113);
          Win32FreePool((__int64)MDEV);
          *a8 = 0LL;
          if ( a7 )
            DrvEnableMDEV(a7, 0LL, 0LL);
          ++gcFailedModeChanges;
          v18 = -1;
        }
        else
        {
          if ( a7 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)a7 + 5); *(_DWORD *)(v106 + 160) &= ~1u )
            {
              v105 = (unsigned int)i;
              i = (unsigned int)(i + 1);
              v106 = *(_QWORD *)(*((_QWORD *)a7 + 5 * v105 + 4) + 2568LL);
            }
          }
          for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
            *((_DWORD *)j + 40) &= ~4u;
          for ( k = 0LL; (unsigned int)k < *((_DWORD *)MDEV + 5); k = (unsigned int)(k + 1) )
          {
            v62 = 5LL * (unsigned int)k;
            v109 = *((_QWORD *)MDEV + 5 * (unsigned int)k + 4);
            i = *(_QWORD *)(v109 + 2584);
            *(_DWORD *)(*(_QWORD *)(v109 + 2568) + 160LL) |= 1u;
            v110 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 12);
            *(_DWORD *)(i + 76) = v110;
            v111 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 13);
            *(_DWORD *)(i + 80) = v111;
            if ( !v110 && !v111 )
              *(_DWORD *)(*(_QWORD *)(v109 + 2568) + 160LL) |= 4u;
          }
          GreUpdateSharedDevCaps(*(_QWORD *)MDEV, i, v62, k);
        }
LABEL_207:
        if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
        {
          DrvEnableMDEV(MDEV, 0LL, 0LL);
          if ( !v18 )
          {
            for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
            {
              v117 = *((_DWORD *)MDEV + 5);
              for ( n = 0; n < v117; ++n )
              {
                if ( *(_QWORD *)(*((_QWORD *)a7 + 5 * m + 4) + 2568LL) == *(_QWORD *)(*((_QWORD *)MDEV + 5 * n + 4)
                                                                                    + 2568LL) )
                  break;
              }
              if ( n == v117 )
                DrvDisableDisplay(*((HDEV *)a7 + 5 * m + 4), 1);
            }
          }
          DrvDestroyMDEV(a7);
        }
        DrvReleaseChangeDisplaySettingLocks();
        if ( v132 )
          MULTIDEVLOCKOBJ::`scalar deleting destructor'(v132, i);
        goto LABEL_220;
      }
      v87 = (struct _ERESOURCE *)*((_QWORD *)v86 + 6);
      EngAcquireSemaphore((HSEMAPHORE)v87);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v87, 11LL);
      EngAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      EngAcquireSemaphore(ghsemPalette);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
      EngAcquireSemaphore(ghsemRFONTList);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
      GreAcquireHmgrSemaphore(v89, v88, v90);
      v91 = *(HDEV *)MDEV;
      if ( v126[0] )
      {
        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v91, 1u) == 1 )
        {
          v93 = *(HDEV *)MDEV;
          *(_QWORD *)MDEV = *((_QWORD *)a7 + 4);
          *(_QWORD *)a7 = v93;
          *((_QWORD *)a7 + 4) = v93;
          if ( !v56 )
            v93 = v58;
          v58 = v93;
          goto LABEL_151;
        }
      }
      else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v91, 1u) == 1 )
      {
        v93 = *(HDEV *)a7;
        *(_QWORD *)a7 = *(_QWORD *)MDEV;
        *(_QWORD *)MDEV = v93;
LABEL_151:
        GreReleaseHmgrSemaphore((int)v93, v92, v94);
        EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
        EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
        EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
        EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v87);
        GreReleaseSemaphoreInternal(v87);
        goto LABEL_152;
      }
      v57 = 1;
      goto LABEL_151;
    }
    v133 = (struct _UNICODE_STRING *)DrvDisableDirectDrawForModeChange(a7, MDEV, v141, v63);
    if ( !v133 )
    {
LABEL_141:
      v57 = 1;
      goto LABEL_152;
    }
    v64 = v132;
    MULTIDEVLOCKOBJ::vInit(v132, a7);
    MULTIDEVLOCKOBJ::vInit(v128, MDEV);
    if ( (*(_DWORD *)v128 & 1) == 0 || (*(_DWORD *)v64 & 1) == 0 )
    {
      v57 = 1;
      goto LABEL_104;
    }
    v65 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 56LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    v130 = v65;
    EngAcquireSemaphore(v65);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v130, 4LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v64);
    MULTIDEVLOCKOBJ::vLock(v128);
    v66 = IsGreHideSpritesSupported();
    v62 = 0LL;
    if ( v66 >= 0 )
    {
      GreHideSprites(*(_QWORD *)a7, 1LL);
      v62 = 0LL;
    }
    i = *((unsigned int *)MDEV + 5);
    v67 = *((_DWORD *)a7 + 5);
    if ( (_DWORD)i == 1 )
    {
      if ( v67 == 1 )
        goto LABEL_99;
      v68 = 0;
      if ( !v67 )
        goto LABEL_99;
      while ( 1 )
      {
        v69 = v68;
        if ( *((_QWORD *)a7 + 5 * v68 + 4) == *((_QWORD *)MDEV + 4) )
          break;
        if ( ++v68 >= v67 )
          goto LABEL_99;
      }
      CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 4), v68);
      v129 = CloneHDEV;
      v56 = CloneHDEV;
      if ( CloneHDEV )
      {
        i = 5 * v69;
        *((_QWORD *)a7 + i + 4) = CloneHDEV;
        *((_QWORD *)a7 + i + 5) = *((_QWORD *)MDEV + 4);
        v58 = (HDEV)*((_QWORD *)MDEV + 4);
      }
      else
      {
        v57 = 1;
      }
    }
    else
    {
      if ( v67 != 1 )
        goto LABEL_99;
      v71 = 0;
      if ( (_DWORD)i )
      {
        v62 = *((_QWORD *)a7 + 4);
        while ( 1 )
        {
          v72 = v71;
          if ( *((_QWORD *)MDEV + 5 * v71 + 4) == v62 )
            break;
          if ( ++v71 >= (unsigned int)i )
            goto LABEL_95;
        }
        v77 = DrvCreateCloneHDEV(*((HDEV *)a7 + 4), i);
        v129 = v77;
        v56 = v77;
        if ( !v77 )
        {
          v57 = 1;
          goto LABEL_152;
        }
        v78 = 5 * v72;
        *((_QWORD *)MDEV + v78 + 4) = v77;
        *((_QWORD *)MDEV + v78 + 5) = *((_QWORD *)a7 + 4);
        v58 = (HDEV)*((_QWORD *)a7 + 4);
        v125[0] = 1;
      }
LABEL_95:
      v126[0] = 1;
    }
    if ( v56 )
    {
      v134 = (struct _ERESOURCE *)*((_QWORD *)v56 + 6);
      v73 = (HSEMAPHORE)v134;
      EngAcquireSemaphore((HSEMAPHORE)v134);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v73, 11LL);
    }
    if ( v57 )
    {
LABEL_104:
      if ( v58 )
      {
        v135 = v58;
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v135) )
        {
          if ( ((_DWORD)v58[530] & 0x10000) == 0 )
            v57 = (unsigned int)bDynamicProcessAllDriverRealizations((__int64)v58, 0LL, 1) != 0 ? v57 : 0;
        }
      }
      if ( v57 )
      {
LABEL_152:
        if ( a7 )
        {
          if ( !v57 && v56 && v58 )
          {
            v129 = v56;
            v127 = (__int64)v58;
            if ( v125[0] )
            {
              v95 = *((_QWORD *)v58 + 318);
              *((_QWORD *)v56 + 318) = v95;
              if ( v95 )
                *(_QWORD *)(v95 + 48) = v56;
              *((_QWORD *)v56 + 224) = *((_QWORD *)v58 + 224);
              DrvTransferGdiObjects(v56, v58, v62);
              *((_QWORD *)v58 + 318) = 0LL;
              *((_QWORD *)v58 + 224) = 0LL;
              _m_prefetchw(v58 + 10);
              do
                v96 = *((_DWORD *)v58 + 10);
              while ( v96 != _InterlockedCompareExchange((volatile signed __int32 *)v58 + 10, v96 | 0x80000, v96) );
              _m_prefetchw(v56 + 10);
              do
                v97 = *((_DWORD *)v56 + 10);
              while ( v97 != _InterlockedCompareExchange((volatile signed __int32 *)v56 + 10, v97 & 0xFFF7FFFF, v97) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v127, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)&v129, *((struct DHPDEV__ **)v56 + 224), v56);
            }
            else
            {
              *((_QWORD *)v56 + 318) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)&v129, 1);
            }
          }
          *(_QWORD *)v126 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(*(_QWORD *)v126 + 40LL) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)v126, 1);
          if ( (int)IsGreHideSpritesSupported() >= 0 )
          {
            v98 = MDEV;
            if ( v57 )
              v98 = a7;
            GreHideSprites(*(_QWORD *)v98, 0LL);
          }
          v99 = v134;
          if ( v134 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v134);
            GreReleaseSemaphoreInternal(v99);
          }
          MULTIDEVLOCKOBJ::vUnlock(v128);
          MULTIDEVLOCKOBJ::vUnlock(v132);
        }
        if ( v57 )
          goto LABEL_183;
        goto LABEL_175;
      }
      LODWORD(v79) = *((_DWORD *)MDEV + 5);
      v80 = *((_DWORD *)a7 + 5);
      if ( (_DWORD)v79 != 1 )
      {
        if ( v80 != 1 && (_DWORD)v79 )
        {
          v82 = 0;
          do
          {
            LODWORD(v62) = *((_DWORD *)a7 + 5);
            i = *((_QWORD *)MDEV + 5 * v82 + 4);
            v127 = 5LL * v82;
            v83 = 0;
            if ( (_DWORD)v62 )
            {
              while ( 1 )
              {
                v84 = v83;
                v79 = (HDEV)*((_QWORD *)a7 + 5 * v83 + 4);
                if ( *(_QWORD *)(i + 2568) == *((_QWORD *)v79 + 321) )
                  break;
                if ( ++v83 >= (unsigned int)v62 )
                  goto LABEL_131;
              }
              LODWORD(v62) = 1;
              if ( (*(_DWORD *)(i + 2120) & 0x10000) != 0 )
                LODWORD(v62) = ((_DWORD)v79[530] & 0x10000) == 0;
              if ( (HDEV)i != v79 )
              {
                if ( (unsigned int)bDynamicModeChange(v79, (HDEV)i, v62) == 1 )
                {
                  v62 = v127;
                  i = 5 * v84;
                  v79 = (HDEV)*((_QWORD *)a7 + 5 * v84 + 4);
                  *((_QWORD *)a7 + 5 * v84 + 4) = *((_QWORD *)MDEV + v127 + 4);
                  *((_QWORD *)MDEV + v62 + 4) = v79;
                }
                else
                {
                  v57 = 1;
                }
              }
            }
LABEL_131:
            ++v82;
          }
          while ( v82 < *((_DWORD *)MDEV + 5) );
          v56 = v129;
        }
        goto LABEL_133;
      }
      v81 = (HDEV)*((_QWORD *)MDEV + 4);
      if ( v80 == 1 )
      {
        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v81, 1u) == 1 )
        {
          v79 = (HDEV)*((_QWORD *)a7 + 4);
          *((_QWORD *)a7 + 4) = *((_QWORD *)MDEV + 4);
          *((_QWORD *)MDEV + 4) = v79;
LABEL_133:
          GreReleaseHmgrSemaphore((int)v79, i, v62);
          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
          goto LABEL_134;
        }
      }
      else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v81, 1u) == 1 )
      {
        v79 = *(HDEV *)a7;
        *(_QWORD *)a7 = *((_QWORD *)MDEV + 4);
        *((_QWORD *)MDEV + 4) = v79;
        if ( !v56 )
          v79 = v58;
        v58 = v79;
        goto LABEL_133;
      }
      v57 = 1;
      goto LABEL_133;
    }
LABEL_99:
    EngAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    EngAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 12LL);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
    GreAcquireHmgrSemaphore(v75, v74, v76);
    goto LABEL_104;
  }
  v37 = CheckAndNotifyDualView(p_DestinationString, a7);
  if ( v37 )
  {
    v38 = v37 - 1;
    if ( v38 )
    {
      if ( v38 != 1 )
      {
        DrvReleaseChangeDisplaySettingLocks();
        if ( v34 )
          Win32FreePool((__int64)v34);
        v39 = WdLogNewEntry5_WdTrace();
        WdLogEvent5_WdTrace(v39);
        v18 = -6;
        goto LABEL_233;
      }
      v15 = 1;
      gbDeferredOrgMdev = a7;
      gbDeferredInvalidateDualView = 1;
    }
    else
    {
      v15 = 1;
    }
  }
  v40 = (struct D3DKMT_GETPATHSMODALITY *)hsem;
  if ( (a13 & 1) == 0 || !DrvUpdateDisplayModeInMdev(a7, (struct D3DKMT_GETPATHSMODALITY *)hsem) )
  {
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      v46 = gdmLogPixels;
      v47 = DrvCreateMDEV(p_DestinationString, v123, v130, a11 != 0 ? 4 : 0, a7, v126[0], v15, v125[0], v40);
      v51 = 0;
      MDEV = v47;
      if ( v47 )
      {
        v52 = *((_DWORD *)v47 + 5);
        v18 = 2;
        if ( v52 == *((_DWORD *)a7 + 5) && v46 == gdmLogPixels )
        {
          v53 = 0;
          if ( v52 )
          {
            do
            {
              v54 = *((_QWORD *)MDEV + 5 * v53 + 4);
              if ( *((_DWORD *)MDEV + 10 * v53 + 16) != *(_DWORD *)(v54 + 2456) )
              {
                v55 = WdLogNewEntry5_WdAssertion(v54, v48, v49, v50);
                WdLogEvent5_WdAssertion(v55);
                v54 = *((_QWORD *)MDEV + 5 * v53 + 4);
              }
              if ( v54 != *((_QWORD *)a7 + 5 * v53 + 4)
                || *((_DWORD *)MDEV + 10 * v53 + 16) != *((_DWORD *)a7 + 10 * v53 + 16)
                || *((_QWORD *)MDEV + 5 * v53 + 6) != *((_QWORD *)a7 + 5 * v53 + 6)
                || *((_QWORD *)MDEV + 5 * v53 + 7) != *((_QWORD *)a7 + 5 * v53 + 7) )
              {
                v18 = 0;
              }
              ++v53;
            }
            while ( v53 < *((_DWORD *)MDEV + 5) );
          }
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        DrvEnableMDEV(a7, 0LL, 0LL);
      }
    }
    else
    {
      v51 = 0;
    }
    goto LABEL_64;
  }
  v41 = a8;
  *a8 = (__int64)a7;
  DrvReleaseChangeDisplaySettingLocks();
  v18 = 3;
  v45 = WdLogNewEntry5_WdEvent(v43, v42, v44);
  WdLogEvent5_WdEvent(v45);
LABEL_223:
  if ( v123 )
    Win32FreePool((__int64)v123);
  if ( !a6 || v18 )
  {
    if ( v18 == 2 && *v41 )
    {
      Win32FreePool(*v41);
      *v41 = 0LL;
    }
  }
  else if ( a7 )
  {
    Win32FreePool((__int64)a7);
  }
  v119 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v119 + 24) = v18;
  WdLogEvent5_WdTrace(v119);
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_233:
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0(v30, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}
