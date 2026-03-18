/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C006586C (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C0067D1C (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C0099E18 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C003CD08 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C003E0D0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0041424 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0042CE0 (GreReleaseSemaphoreInternal.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0060708 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvEnableMDEV @ 0x1C0060B04 (DrvEnableMDEV.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0063F4C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C006755C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C00675E8 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0067684 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0069AC0 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C006A150 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C006CC80 (bDynamicProcessAllDriverRealizations.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0079C2C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     GreUpdateSharedDevCaps @ 0x1C00893FC (GreUpdateSharedDevCaps.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C008A7EC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvDestroyMDEV @ 0x1C008C00C (DrvDestroyMDEV.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C008C7A0 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C008C88C (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C008C934 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C008CA10 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z @ 0x1C00962F4 (-DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C00A27D0 (DrvDisableMDEV.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F5DD8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00F8204 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00F8284 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F8360 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F8460 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
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
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int PruneFlag; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _devicemodeW *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  DWORD dmFields; // edi
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  struct _devicemodeW *v37; // r13
  int updated; // eax
  struct _MDEV *MDEV; // rdi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  struct D3DKMT_GETPATHSMODALITY *v44; // r15
  __int64 *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r13d
  struct _MDEV *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // r12d
  int v55; // ecx
  unsigned int v56; // r15d
  __int64 v57; // rcx
  __int64 v58; // rax
  HDEV v59; // rbx
  int v60; // r13d
  HDEV v61; // r15
  MULTIDEVLOCKOBJ *v62; // rax
  MULTIDEVLOCKOBJ *v63; // rax
  __int64 i; // rdx
  __int64 v65; // r8
  MULTIDEVLOCKOBJ *v66; // r12
  __int64 v67; // rcx
  HSEMAPHORE v68; // rax
  int v69; // eax
  unsigned int v70; // edx
  unsigned int v71; // ecx
  __int64 v72; // r12
  HDEV CloneHDEV; // rax
  __int64 v74; // r12
  HSEMAPHORE v75; // r12
  int v76; // edx
  int v77; // ecx
  int v78; // r8d
  HDEV v79; // rax
  int v80; // r10d
  int v81; // eax
  HDEV v82; // rdx
  unsigned int v83; // ebx
  unsigned int v84; // eax
  __int64 v85; // r12
  PDEV **v86; // r9
  PDEV **v87; // rax
  struct _ERESOURCE *v88; // r12
  int v89; // edx
  int v90; // ecx
  int v91; // r8d
  HDEV v92; // rdx
  __int64 v93; // rdx
  HDEV v94; // rcx
  int v95; // r8d
  __int64 v96; // rax
  signed __int32 v97; // ett
  signed __int32 v98; // ett
  struct _MDEV *v99; // rcx
  struct _ERESOURCE *v100; // rbx
  PDEV *v101; // rbx
  HDEV v102; // rax
  HDEV v103; // r15
  struct _ERESOURCE *v104; // rbx
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
  HDEV *v133; // [rsp+A8h] [rbp-58h]
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
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, a2);
  v19[4] = a6;
  v19[5] = a5;
  v19[3] = a1;
  v19[6] = a9;
  v19[7] = a10;
  WdLogEvent5_WdEvent(v19);
  v23 = 0LL;
  if ( a2 )
  {
    if ( !a1 )
    {
      v24 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v24);
      v23 = 0LL;
    }
    if ( hsem )
    {
      v25 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v25);
      v23 = 0LL;
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
    v23 = 0LL;
    p_DestinationString = &DestinationString;
    v133 = (HDEV *)&DestinationString;
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
        v29 = v123;
        if ( v123 )
          Win32FreePool((__int64)v123);
        v30 = WdLogNewEntry5_WdTrace(v29);
        WdLogEvent5_WdTrace(v30);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_228;
      }
      dmFields = a2->dmFields;
      v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, v27);
      v33[3] = PsGetCurrentProcess(v35, v34);
      v33[4] = a2->dmPelsWidth;
      v33[5] = a2->dmPelsHeight;
      v33[6] = a2->dmBitsPerPel;
      v33[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v33);
      p_DestinationString = (struct _UNICODE_STRING *)v133;
      v23 = 0LL;
      v36 = 1;
      if ( dmFields )
        v36 = a10;
      v15 = v36;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( a5 && a1 && a2 )
  {
    v37 = v123;
    if ( gProtocolType != -1 )
    {
      updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v123, v131, Src);
      v23 = 0LL;
      if ( updated < 0 )
      {
        v18 = -2;
        if ( updated == -1073741582 )
          v18 = -5;
        v23 = 0LL;
      }
    }
  }
  else
  {
    v37 = v123;
  }
  if ( !a6 || v18 )
    goto LABEL_217;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    v122 = v15;
    v54 = 0;
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             v37,
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
    v59 = 0LL;
    v129 = 0LL;
    v60 = 0;
    v126[0] = 0;
    v61 = 0LL;
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
      goto LABEL_202;
    }
    v133 = 0LL;
    v134 = 0LL;
    hsem = 0LL;
    v130 = 0LL;
    v62 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v128 = v62;
    if ( v62 )
    {
      *(_QWORD *)v62 = 1LL;
      *((_QWORD *)v62 + 1) = 0LL;
      *((_QWORD *)v62 + 2) = 0LL;
    }
    else
    {
      v62 = 0LL;
      v128 = 0LL;
    }
    if ( !v62 )
    {
LABEL_217:
      v45 = a8;
      goto LABEL_218;
    }
    v63 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v132 = v63;
    if ( v63 )
    {
      *(_QWORD *)v63 = 1LL;
      *((_QWORD *)v63 + 1) = 0LL;
      *((_QWORD *)v63 + 2) = 0LL;
    }
    else
    {
      v63 = 0LL;
      v132 = 0LL;
    }
    if ( !v63 )
    {
LABEL_215:
      if ( v128 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v128, i);
      goto LABEL_217;
    }
    if ( *((_DWORD *)MDEV + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 5 * v54++ + 4));
      while ( v54 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
      goto LABEL_135;
    v133 = DrvDisableDirectDrawForModeChange(a7, MDEV, v141);
    if ( !v133 )
    {
LABEL_138:
      v60 = 1;
      goto LABEL_148;
    }
    v66 = v132;
    MULTIDEVLOCKOBJ::vInit(v132, a7);
    MULTIDEVLOCKOBJ::vInit(v128, MDEV);
    LODWORD(v67) = (_DWORD)v128;
    if ( (*(_DWORD *)v128 & 1) == 0 || (*(_DWORD *)v66 & 1) == 0 )
    {
      v60 = 1;
      goto LABEL_104;
    }
    v68 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 40LL);
    v130 = v68;
    EngAcquireSemaphore(v68);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v130, 4LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v66);
    MULTIDEVLOCKOBJ::vLock(v128);
    v69 = IsGreHideSpritesSupported();
    v65 = 0LL;
    if ( v69 >= 0 )
    {
      GreHideSprites(*(_QWORD *)a7, 1LL);
      v65 = 0LL;
    }
    i = *((unsigned int *)MDEV + 5);
    if ( (_DWORD)i == 1 )
    {
      v70 = *((_DWORD *)a7 + 5);
      if ( v70 == 1 )
        goto LABEL_99;
      v71 = 0;
      if ( !v70 )
        goto LABEL_99;
      while ( 1 )
      {
        v72 = v71;
        if ( *((_QWORD *)a7 + 5 * v71 + 4) == *((_QWORD *)MDEV + 4) )
          break;
        if ( ++v71 >= v70 )
          goto LABEL_99;
      }
      CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 4), v70);
      v129 = CloneHDEV;
      v59 = CloneHDEV;
      if ( CloneHDEV )
      {
        i = 5 * v72;
        *((_QWORD *)a7 + i + 4) = CloneHDEV;
        v67 = *((_QWORD *)MDEV + 4);
        *((_QWORD *)a7 + i + 5) = v67;
        v61 = (HDEV)*((_QWORD *)MDEV + 4);
      }
      else
      {
        v60 = 1;
      }
    }
    else
    {
      if ( *((_DWORD *)a7 + 5) != 1 )
        goto LABEL_99;
      LODWORD(v67) = 0;
      if ( (_DWORD)i )
      {
        v65 = *((_QWORD *)a7 + 4);
        while ( 1 )
        {
          v74 = (unsigned int)v67;
          if ( *((_QWORD *)MDEV + 5 * (unsigned int)v67 + 4) == v65 )
            break;
          LODWORD(v67) = v67 + 1;
          if ( (unsigned int)v67 >= (unsigned int)i )
            goto LABEL_95;
        }
        v79 = DrvCreateCloneHDEV(*((HDEV *)a7 + 4), i);
        v129 = v79;
        v59 = v79;
        if ( !v79 )
        {
          v60 = 1;
          goto LABEL_148;
        }
        v67 = 5 * v74;
        *((_QWORD *)MDEV + v67 + 4) = v79;
        *((_QWORD *)MDEV + v67 + 5) = *((_QWORD *)a7 + 4);
        v61 = (HDEV)*((_QWORD *)a7 + 4);
        v125[0] = 1;
      }
LABEL_95:
      v126[0] = 1;
    }
    if ( v59 )
    {
      v134 = (struct _ERESOURCE *)*((_QWORD *)v59 + 5);
      v75 = (HSEMAPHORE)v134;
      EngAcquireSemaphore((HSEMAPHORE)v134);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v75, 11LL);
    }
    if ( v60 )
    {
LABEL_104:
      if ( v61 )
      {
        v135 = v61;
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v135) )
        {
          if ( (v80 & (_DWORD)v61[536]) == 0 )
          {
            LODWORD(v67) = -((unsigned int)bDynamicProcessAllDriverRealizations(v61, 0LL, 1LL) != 0);
            v60 &= v67;
          }
        }
      }
      if ( v60 )
      {
LABEL_148:
        if ( a7 )
        {
          if ( !v60 && v59 && v61 )
          {
            v129 = v59;
            v127 = (__int64)v61;
            if ( v125[0] )
            {
              v96 = *((_QWORD *)v61 + 321);
              *((_QWORD *)v59 + 321) = v96;
              if ( v96 )
                *(_QWORD *)(v96 + 48) = v59;
              *((_QWORD *)v59 + 227) = *((_QWORD *)v61 + 227);
              DrvTransferGdiObjects(v59, v61, v65);
              *((_QWORD *)v61 + 321) = 0LL;
              *((_QWORD *)v61 + 227) = 0LL;
              _m_prefetchw(v61 + 8);
              do
                v97 = *((_DWORD *)v61 + 8);
              while ( v97 != _InterlockedCompareExchange((volatile signed __int32 *)v61 + 8, v97 | 0x80000, v97) );
              _m_prefetchw(v59 + 8);
              do
                v98 = *((_DWORD *)v59 + 8);
              while ( v98 != _InterlockedCompareExchange((volatile signed __int32 *)v59 + 8, v98 & 0xFFF7FFFF, v98) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v127, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)&v129, *((struct DHPDEV__ **)v59 + 227), v59);
            }
            else
            {
              *((_QWORD *)v59 + 321) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)&v129, 1);
            }
          }
          *(_QWORD *)v126 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(*(_QWORD *)v126 + 32LL) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)v126, 1);
          if ( (int)IsGreHideSpritesSupported() >= 0 )
          {
            v99 = a7;
            if ( !v60 )
              v99 = MDEV;
            GreHideSprites(*(_QWORD *)v99, 0LL);
          }
          v100 = v134;
          if ( v134 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v134);
            GreReleaseSemaphoreInternal(v100);
          }
          MULTIDEVLOCKOBJ::vUnlock(v128);
          MULTIDEVLOCKOBJ::vUnlock(v132);
        }
        if ( v60 )
          goto LABEL_179;
        goto LABEL_171;
      }
      v81 = *((_DWORD *)MDEV + 5);
      if ( v81 != 1 )
      {
        if ( *((_DWORD *)a7 + 5) != 1 && v81 )
        {
          v83 = 0;
          do
          {
            LODWORD(v65) = *((_DWORD *)a7 + 5);
            i = *((_QWORD *)MDEV + 5 * v83 + 4);
            v127 = 5LL * v83;
            v84 = 0;
            if ( (_DWORD)v65 )
            {
              while ( 1 )
              {
                v67 = *((_QWORD *)a7 + 5 * v84 + 4);
                if ( *(_QWORD *)(i + 2592) == *(_QWORD *)(v67 + 2592) )
                  break;
                if ( ++v84 >= (unsigned int)v65 )
                  goto LABEL_130;
              }
              LODWORD(v65) = 1;
              if ( (*(_DWORD *)(i + 2144) & 0x10000) != 0 )
                LODWORD(v65) = (*(_DWORD *)(v67 + 2144) & 0x10000) == 0;
              v85 = 5LL * v84;
              if ( i != *((_QWORD *)a7 + 5 * v84 + 4) )
              {
                if ( (unsigned int)bDynamicModeChange((HDEV)v67, (HDEV)i) == 1 )
                {
                  i = v127;
                  v67 = *((_QWORD *)a7 + v85 + 4);
                  *((_QWORD *)a7 + v85 + 4) = *((_QWORD *)MDEV + v127 + 4);
                  *((_QWORD *)MDEV + i + 4) = v67;
                }
                else
                {
                  v60 = 1;
                }
              }
            }
LABEL_130:
            ++v83;
          }
          while ( v83 < *((_DWORD *)MDEV + 5) );
          v59 = v129;
        }
        goto LABEL_132;
      }
      v82 = (HDEV)*((_QWORD *)MDEV + 4);
      if ( *((_DWORD *)a7 + 5) == 1 )
      {
        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v82) == 1 )
        {
          v67 = *((_QWORD *)a7 + 4);
          *((_QWORD *)a7 + 4) = *((_QWORD *)MDEV + 4);
          *((_QWORD *)MDEV + 4) = v67;
LABEL_132:
          GreReleaseHmgrSemaphore(v67, i, v65);
          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
          GreReleaseSemaphoreInternal(ghsemPalette);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          if ( v60 )
            goto LABEL_148;
          if ( *((_DWORD *)a7 + 5) == 1 )
          {
            *(_QWORD *)a7 = *((_QWORD *)a7 + 4);
            *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 5);
          }
LABEL_135:
          if ( *((_DWORD *)MDEV + 5) == 1 )
          {
            *(_QWORD *)MDEV = *((_QWORD *)MDEV + 4);
            *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 5);
            goto LABEL_148;
          }
          v86 = (PDEV **)*((_QWORD *)MDEV + 3);
          v140 = MulEnableDriver;
          v138 = 1;
          v139 = 0LL;
          v87 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                  (struct _DRV_NAMES *)&v138,
                  (struct _devicemodeW *)MDEV,
                  v86,
                  0,
                  0,
                  1,
                  0,
                  2u,
                  &v136);
          *(_QWORD *)MDEV = v87;
          if ( !v87 )
            goto LABEL_138;
          if ( !a7 )
          {
LABEL_171:
            v101 = *(PDEV **)MDEV;
            if ( *((_DWORD *)MDEV + 5) == 1 )
            {
              *(_QWORD *)v125 = *((_QWORD *)v101 + 228);
              if ( *((PDEV **)v101 + 2) != v101 )
                *((_QWORD *)v101 + 2) = v101;
              *((_QWORD *)v101 + 223) = *((_QWORD *)v101 + 360);
              XEPALOBJ::apalResetColorTable((struct OBJECT **)v125);
            }
            else
            {
              DrvSetSharedDevLock(MDEV);
              v102 = DrvSetSharedPalette(MDEV);
              v103 = v102;
              if ( (*((_DWORD *)v101 + 547) & 0x100) == 0 && v102 && (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
                DrvRealizeHalftonePaletteWrap(v103, 1LL);
            }
LABEL_179:
            v104 = (struct _ERESOURCE *)hsem;
            if ( hsem )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", hsem);
              GreReleaseSemaphoreInternal(v104);
              EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
              GreReleaseSemaphoreInternal(ghsemSprite);
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", v130);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)v130);
            }
            if ( v133 )
              DrvEnableDirectDrawForModeChange(v133, v133 != v141);
            if ( v60 )
            {
              v112 = WdLogNewEntry5_WdError();
              WdLogEvent5_WdError(v112);
              DrvBackoutMDEV(MDEV, v113);
              Win32FreePool((__int64)MDEV);
              *a8 = 0LL;
              if ( a7 )
                DrvEnableMDEV((__int64 *)a7, 0LL, 0);
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
                  v106 = *(_QWORD *)(*((_QWORD *)a7 + 5 * v105 + 4) + 2592LL);
                }
              }
              for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
                *((_DWORD *)j + 40) &= ~4u;
              for ( k = 0LL; (unsigned int)k < *((_DWORD *)MDEV + 5); k = (unsigned int)(k + 1) )
              {
                v65 = 5LL * (unsigned int)k;
                v109 = *((_QWORD *)MDEV + 5 * (unsigned int)k + 4);
                i = *(_QWORD *)(v109 + 2608);
                *(_DWORD *)(*(_QWORD *)(v109 + 2592) + 160LL) |= 1u;
                v110 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 12);
                *(_DWORD *)(i + 76) = v110;
                v111 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 13);
                *(_DWORD *)(i + 80) = v111;
                if ( !v110 && !v111 )
                  *(_DWORD *)(*(_QWORD *)(v109 + 2592) + 160LL) |= 4u;
              }
              GreUpdateSharedDevCaps(*(_QWORD *)MDEV, i, v65, k);
            }
LABEL_202:
            if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
            {
              DrvEnableMDEV((__int64 *)MDEV, 0LL, 0);
              if ( !v18 )
              {
                for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
                {
                  v117 = *((_DWORD *)MDEV + 5);
                  for ( n = 0; n < v117; ++n )
                  {
                    if ( *(_QWORD *)(*((_QWORD *)a7 + 5 * m + 4) + 2592LL) == *(_QWORD *)(*((_QWORD *)MDEV + 5 * n + 4)
                                                                                        + 2592LL) )
                      break;
                  }
                  if ( n == v117 )
                    DrvDisableDisplay(*((HSEMAPHORE **)a7 + 5 * m + 4), 1LL);
                }
              }
              DrvDestroyMDEV(a7);
            }
            DrvReleaseChangeDisplaySettingLocks();
            if ( v132 )
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v132, i);
            goto LABEL_215;
          }
          v88 = (struct _ERESOURCE *)v87[5];
          EngAcquireSemaphore((HSEMAPHORE)v88);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v88, 11LL);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
          EngAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
          EngAcquireSemaphore(ghsemRFONTList);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
          GreAcquireHmgrSemaphore(v90, v89, v91);
          v92 = *(HDEV *)MDEV;
          if ( v126[0] )
          {
            if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v92) == 1 )
            {
              v94 = *(HDEV *)MDEV;
              *(_QWORD *)MDEV = *((_QWORD *)a7 + 4);
              *(_QWORD *)a7 = v94;
              *((_QWORD *)a7 + 4) = v94;
              if ( v59 )
                v61 = v94;
              goto LABEL_147;
            }
          }
          else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v92) == 1 )
          {
            v94 = *(HDEV *)a7;
            *(_QWORD *)a7 = *(_QWORD *)MDEV;
            *(_QWORD *)MDEV = v94;
LABEL_147:
            GreReleaseHmgrSemaphore((int)v94, v93, v95);
            EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
            EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
            EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
            GreReleaseSemaphoreInternal(ghsemPalette);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            GreReleaseSemaphoreInternal(ghsemDriverMgmt);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
            GreReleaseSemaphoreInternal(ghsemDwmState);
            EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v88);
            GreReleaseSemaphoreInternal(v88);
            goto LABEL_148;
          }
          v60 = 1;
          goto LABEL_147;
        }
      }
      else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v82) == 1 )
      {
        v67 = *(_QWORD *)a7;
        *(_QWORD *)a7 = *((_QWORD *)MDEV + 4);
        *((_QWORD *)MDEV + 4) = v67;
        if ( v59 )
          v61 = (HDEV)v67;
        goto LABEL_132;
      }
      v60 = 1;
      goto LABEL_132;
    }
LABEL_99:
    EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 12LL);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
    GreAcquireHmgrSemaphore(v77, v76, v78);
    goto LABEL_104;
  }
  v40 = CheckAndNotifyDualView(p_DestinationString, a7);
  if ( v40 )
  {
    v41 = v40 - 1;
    if ( v41 )
    {
      if ( v41 != 1 )
      {
        DrvReleaseChangeDisplaySettingLocks();
        if ( v37 )
          Win32FreePool((__int64)v37);
        v43 = WdLogNewEntry5_WdTrace(v42);
        WdLogEvent5_WdTrace(v43);
        v18 = -6;
        goto LABEL_228;
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
  v44 = (struct D3DKMT_GETPATHSMODALITY *)hsem;
  if ( (a13 & 1) == 0 || !DrvUpdateDisplayModeInMdev(a7, (struct D3DKMT_GETPATHSMODALITY *)hsem) )
  {
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      v49 = gdmLogPixels;
      v50 = DrvCreateMDEV(p_DestinationString, v123, v130, a11 != 0 ? 4 : 0, a7, v126[0], v15, v125[0], v44);
      v54 = 0;
      MDEV = v50;
      if ( v50 )
      {
        v55 = *((_DWORD *)v50 + 5);
        v18 = 2;
        if ( v55 == *((_DWORD *)a7 + 5) && v49 == gdmLogPixels )
        {
          v56 = 0;
          if ( v55 )
          {
            do
            {
              v57 = *(unsigned int *)(*((_QWORD *)MDEV + 5 * v56 + 4) + 2480LL);
              if ( *((_DWORD *)MDEV + 10 * v56 + 16) != (_DWORD)v57 )
              {
                v58 = WdLogNewEntry5_WdAssertion(v57, v51, v52, v53);
                WdLogEvent5_WdAssertion(v58);
              }
              if ( *((_QWORD *)MDEV + 5 * v56 + 4) != *((_QWORD *)a7 + 5 * v56 + 4)
                || *((_DWORD *)MDEV + 10 * v56 + 16) != *((_DWORD *)a7 + 10 * v56 + 16)
                || *((_QWORD *)MDEV + 5 * v56 + 6) != *((_QWORD *)a7 + 5 * v56 + 6)
                || *((_QWORD *)MDEV + 5 * v56 + 7) != *((_QWORD *)a7 + 5 * v56 + 7) )
              {
                v18 = 0;
              }
              ++v56;
            }
            while ( v56 < *((_DWORD *)MDEV + 5) );
          }
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        DrvEnableMDEV((__int64 *)a7, 0LL, 0);
      }
    }
    else
    {
      v54 = 0;
    }
    goto LABEL_64;
  }
  v45 = a8;
  *a8 = (__int64)a7;
  DrvReleaseChangeDisplaySettingLocks();
  v18 = 3;
  v48 = WdLogNewEntry5_WdEvent(v47, v46);
  WdLogEvent5_WdEvent(v48);
LABEL_218:
  if ( v123 )
    Win32FreePool((__int64)v123);
  if ( !a6 || v18 )
  {
    if ( v18 == 2 )
    {
      v23 = *v45;
      if ( *v45 )
      {
        Win32FreePool(v23);
        *v45 = 0LL;
      }
    }
  }
  else if ( a7 )
  {
    Win32FreePool((__int64)a7);
  }
  v119 = WdLogNewEntry5_WdTrace(v23);
  *(_QWORD *)(v119 + 24) = v18;
  WdLogEvent5_WdTrace(v119);
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_228:
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0(v31, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}
