/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C005B154 (ApplyPathsModality.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00910C4 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C002CDD0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037B10 (GreReleaseSemaphoreInternal.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00386A4 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044514 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C005A3A8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C005A9FC (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C005AA88 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C005AB24 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C005AEB4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C005AFA0 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C005B048 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C005B124 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     DrvEnableMDEV @ 0x1C005B3E4 (DrvEnableMDEV.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C005D670 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C005EFF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0060F4C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0077950 (bDynamicProcessAllDriverRealizations.c)
 *     GreUpdateSharedDevCaps @ 0x1C008257C (GreUpdateSharedDevCaps.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0083428 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvDestroyMDEV @ 0x1C008DC60 (DrvDestroyMDEV.c)
 *     ?DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z @ 0x1C008E354 (-DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0098680 (DrvDisableMDEV.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F4DB8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00F73DC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00F745C (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F7538 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F7638 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
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
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int PruneFlag; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _devicemodeW *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  DWORD dmFields; // edi
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  struct _devicemodeW *v37; // r13
  int updated; // eax
  struct _MDEV *MDEV; // rdi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  struct _D3DKMT_GETPATHSMODALITY *v44; // r15
  __int64 *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r13d
  struct _MDEV *v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // r12d
  int v53; // ecx
  unsigned int v54; // r15d
  __int64 v55; // rcx
  __int64 v56; // rax
  HDEV v57; // rbx
  int v58; // r13d
  HDEV v59; // r15
  MULTIDEVLOCKOBJ *v60; // rax
  MULTIDEVLOCKOBJ *v61; // rax
  __int64 i; // rdx
  __int64 v63; // r8
  MULTIDEVLOCKOBJ *v64; // r12
  HSEMAPHORE v65; // rax
  int v66; // eax
  unsigned int v67; // r8d
  unsigned int v68; // r12d
  __int64 v69; // rdx
  HDEV CloneHDEV; // rax
  unsigned int v71; // r12d
  HSEMAPHORE v72; // r12
  int v73; // edx
  __int64 v74; // rcx
  int v75; // r8d
  HDEV v76; // rax
  int v77; // eax
  HDEV v78; // rdx
  unsigned int v79; // ebx
  unsigned int v80; // r9d
  HDEV v81; // rdx
  __int64 v82; // r12
  __int64 v83; // rdx
  void *v84; // r9
  HDEV v85; // rax
  struct _ERESOURCE *v86; // r12
  int v87; // edx
  __int64 v88; // rcx
  int v89; // r8d
  HDEV v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  signed __int32 v93; // ett
  signed __int32 v94; // ett
  struct _MDEV *v95; // rcx
  struct _ERESOURCE *v96; // rbx
  PDEV *v97; // rbx
  HDEV v98; // rax
  HDEV v99; // r15
  struct _ERESOURCE *v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rcx
  wchar_t *j; // rax
  __int64 k; // r9
  __int64 v105; // rax
  int v106; // ecx
  int v107; // r10d
  __int64 v108; // rax
  unsigned int v109; // edx
  bool v110; // cc
  PDEV *v111; // rcx
  unsigned int m; // ebx
  unsigned int v113; // r8d
  unsigned int n; // edx
  __int64 v115; // rax
  int Src; // [rsp+20h] [rbp-E0h]
  int v118; // [rsp+30h] [rbp-D0h]
  struct _devicemodeW *v119; // [rsp+58h] [rbp-A8h] BYREF
  HSEMAPHORE hsem; // [rsp+60h] [rbp-A0h]
  int v121[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v122[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v123; // [rsp+78h] [rbp-88h] BYREF
  MULTIDEVLOCKOBJ *v124; // [rsp+80h] [rbp-80h]
  HDEV v125; // [rsp+88h] [rbp-78h] BYREF
  void *v126; // [rsp+90h] [rbp-70h]
  int v127; // [rsp+98h] [rbp-68h] BYREF
  MULTIDEVLOCKOBJ *v128; // [rsp+A0h] [rbp-60h]
  HDEV *v129; // [rsp+A8h] [rbp-58h]
  struct _ERESOURCE *v130; // [rsp+B0h] [rbp-50h]
  HDEV v131; // [rsp+B8h] [rbp-48h] BYREF
  HDEV v132; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  int v134; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v135; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v136)(unsigned int, unsigned int, struct tagDRVENABLEDATA *); // [rsp+E8h] [rbp-18h]
  HDEV v137[7]; // [rsp+F0h] [rbp-10h] BYREF

  v14 = 0LL;
  v15 = a10;
  p_DestinationString = 0LL;
  v18 = 0;
  v121[0] = a12;
  v126 = a4;
  LODWORD(v123) = a9 != 0;
  hsem = a3;
  v122[0] = a9;
  v119 = 0LL;
  v127 = 0;
  v124 = 0LL;
  v128 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    TemplateEventDescriptor(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, a2);
  v19[4] = a6;
  v19[5] = a5;
  v19[3] = a1;
  v19[6] = a9;
  v19[7] = a10;
  WdLogEvent5_WdEvent(v19);
  v21 = 0LL;
  if ( a2 )
  {
    if ( !a1 )
    {
      v22 = WdLogNewEntry5_WdAssertion(0LL, v20);
      WdLogEvent5_WdAssertion(v22);
      v21 = 0LL;
    }
    if ( hsem )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL, v20);
      WdLogEvent5_WdAssertion(v23);
      v21 = 0LL;
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
      PruneFlag = v123;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v21 = 0LL;
    p_DestinationString = &DestinationString;
    v129 = (HDEV *)&DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v119,
                  &v127,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v121[0],
                  0LL) < 0 )
      {
        v27 = v119;
        if ( v119 )
          Win32FreePool((__int64)v119);
        v28 = WdLogNewEntry5_WdTrace(v27);
        WdLogEvent5_WdTrace(v28);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_228;
      }
      dmFields = a2->dmFields;
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v26, v25);
      v31[3] = PsGetCurrentProcess(v33, v32, v34, v35);
      v31[4] = a2->dmPelsWidth;
      v31[5] = a2->dmPelsHeight;
      v31[6] = a2->dmBitsPerPel;
      v31[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v31);
      p_DestinationString = (struct _UNICODE_STRING *)v129;
      v21 = 0LL;
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
    v37 = v119;
    if ( gProtocolType != -1 )
    {
      updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v119, v127, Src);
      v21 = 0LL;
      if ( updated < 0 )
      {
        v18 = -2;
        if ( updated == -1073741582 )
          v18 = -5;
        v21 = 0LL;
      }
    }
  }
  else
  {
    v37 = v119;
  }
  if ( !a6 || v18 )
    goto LABEL_217;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    v118 = v15;
    v52 = 0;
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             v37,
             v126,
             a11 != 0 ? 4 : 0,
             0LL,
             v122[0],
             v118,
             v121[0],
             (struct _D3DKMT_GETPATHSMODALITY *)hsem);
    if ( MDEV )
      v18 = 0;
LABEL_64:
    v57 = 0LL;
    v125 = 0LL;
    v58 = 0;
    v122[0] = 0;
    v59 = 0LL;
    v121[0] = 0;
    *a8 = (__int64)MDEV;
    if ( v18 )
    {
      if ( v18 == 2 )
      {
        v110 = *((_DWORD *)MDEV + 5) <= 1u;
        *(_QWORD *)MDEV = *(_QWORD *)a7;
        *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
        if ( !v110 )
        {
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          v111 = *(PDEV **)MDEV;
          ++*((_DWORD *)v111 + 3);
          PDEV::IncrementClientReferenceCount(v111);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        }
      }
      goto LABEL_202;
    }
    v129 = 0LL;
    v130 = 0LL;
    hsem = 0LL;
    v126 = 0LL;
    v60 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v124 = v60;
    if ( v60 )
    {
      *(_QWORD *)v60 = 1LL;
      *((_QWORD *)v60 + 1) = 0LL;
      *((_QWORD *)v60 + 2) = 0LL;
    }
    else
    {
      v60 = 0LL;
      v124 = 0LL;
    }
    if ( !v60 )
    {
LABEL_217:
      v45 = a8;
      goto LABEL_218;
    }
    v61 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v128 = v61;
    if ( v61 )
    {
      *(_QWORD *)v61 = 1LL;
      *((_QWORD *)v61 + 1) = 0LL;
      *((_QWORD *)v61 + 2) = 0LL;
    }
    else
    {
      v61 = 0LL;
      v128 = 0LL;
    }
    if ( !v61 )
    {
LABEL_215:
      if ( v124 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v124);
      goto LABEL_217;
    }
    if ( *((_DWORD *)MDEV + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 5 * v52++ + 4));
      while ( v52 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
      goto LABEL_135;
    v129 = DrvDisableDirectDrawForModeChange(a7, MDEV, v137);
    if ( !v129 )
    {
LABEL_138:
      v58 = 1;
      goto LABEL_148;
    }
    v64 = v128;
    MULTIDEVLOCKOBJ::vInit(v128, a7);
    MULTIDEVLOCKOBJ::vInit(v124, MDEV);
    v21 = (__int64)v124;
    if ( (*(_DWORD *)v124 & 1) == 0 || (*(_DWORD *)v64 & 1) == 0 )
    {
      v58 = 1;
      goto LABEL_106;
    }
    v65 = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    hsem = *(HSEMAPHORE *)(*(_QWORD *)a7 + 40LL);
    v126 = v65;
    EngAcquireSemaphore(v65);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", v126, 4LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    EngAcquireSemaphore(hsem);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsem, 11LL);
    MULTIDEVLOCKOBJ::vLock(v64);
    MULTIDEVLOCKOBJ::vLock(v124);
    v66 = IsGreHideSpritesSupported();
    v21 = 0LL;
    if ( v66 >= 0 )
    {
      GreHideSprites(*(_QWORD *)a7, 1LL);
      v21 = 0LL;
    }
    i = *((unsigned int *)MDEV + 5);
    if ( (_DWORD)i == 1 )
    {
      v67 = *((_DWORD *)a7 + 5);
      if ( v67 == 1 )
        goto LABEL_101;
      v68 = 0;
      if ( !v67 )
        goto LABEL_101;
      v69 = *((_QWORD *)MDEV + 4);
      while ( *((_QWORD *)a7 + 5 * v68 + 4) != v69 )
      {
        if ( ++v68 >= v67 )
          goto LABEL_101;
      }
      CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 4), v69);
      v125 = CloneHDEV;
      v57 = CloneHDEV;
      if ( CloneHDEV )
      {
        i = 5LL * v68;
        *((_QWORD *)a7 + i + 4) = CloneHDEV;
        v21 = *((_QWORD *)MDEV + 4);
        *((_QWORD *)a7 + i + 5) = v21;
        v59 = (HDEV)*((_QWORD *)MDEV + 4);
      }
      else
      {
        v58 = 1;
      }
    }
    else
    {
      if ( *((_DWORD *)a7 + 5) != 1 )
        goto LABEL_101;
      v71 = 0;
      if ( (_DWORD)i )
      {
        v63 = *((_QWORD *)a7 + 4);
        while ( 1 )
        {
          v21 = 5LL * v71;
          if ( *((_QWORD *)MDEV + 5 * v71 + 4) == v63 )
            break;
          if ( ++v71 >= (unsigned int)i )
            goto LABEL_97;
        }
        v76 = DrvCreateCloneHDEV(*((HDEV *)a7 + 4), i);
        v125 = v76;
        v57 = v76;
        if ( !v76 )
        {
          v58 = 1;
          goto LABEL_148;
        }
        v121[0] = 1;
        v21 = 5LL * v71;
        *((_QWORD *)MDEV + v21 + 4) = v76;
        *((_QWORD *)MDEV + v21 + 5) = *((_QWORD *)a7 + 4);
        v59 = (HDEV)*((_QWORD *)a7 + 4);
      }
LABEL_97:
      v122[0] = 1;
    }
    if ( v57 )
    {
      v130 = (struct _ERESOURCE *)*((_QWORD *)v57 + 5);
      v72 = (HSEMAPHORE)v130;
      EngAcquireSemaphore((HSEMAPHORE)v130);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v72, 11LL);
    }
    if ( v58 )
    {
LABEL_106:
      if ( v59 )
      {
        v131 = v59;
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v131) )
        {
          if ( ((_DWORD)v59[536] & 0x10000) == 0 )
          {
            v21 = (unsigned int)-((unsigned int)bDynamicProcessAllDriverRealizations(v59, 0LL, 1LL) != 0);
            v58 &= v21;
          }
        }
      }
      if ( v58 )
      {
LABEL_148:
        if ( a7 )
        {
          if ( !v58 && v57 && v59 )
          {
            v125 = v57;
            v123 = (__int64)v59;
            if ( v121[0] )
            {
              v92 = *((_QWORD *)v59 + 321);
              *((_QWORD *)v57 + 321) = v92;
              if ( v92 )
                *(_QWORD *)(v92 + 48) = v57;
              *((_QWORD *)v57 + 227) = *((_QWORD *)v59 + 227);
              DrvTransferGdiObjects(v57, v59, v63);
              *((_QWORD *)v59 + 321) = 0LL;
              *((_QWORD *)v59 + 227) = 0LL;
              _m_prefetchw(v59 + 8);
              do
                v93 = *((_DWORD *)v59 + 8);
              while ( v93 != _InterlockedCompareExchange((volatile signed __int32 *)v59 + 8, v93 | 0x80000, v93) );
              _m_prefetchw(v57 + 8);
              do
                v94 = *((_DWORD *)v57 + 8);
              while ( v94 != _InterlockedCompareExchange((volatile signed __int32 *)v57 + 8, v94 & 0xFFF7FFFF, v94) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v123, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)&v125, *((struct DHPDEV__ **)v57 + 227), v57);
            }
            else
            {
              *((_QWORD *)v57 + 321) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)&v125, 1);
            }
          }
          *(_QWORD *)v122 = *(_QWORD *)a7;
          if ( (*(_DWORD *)(*(_QWORD *)v122 + 32LL) & 0x20000) != 0 )
            PDEVOBJ::bDisabled((PDEVOBJ *)v122, 1);
          if ( (int)IsGreHideSpritesSupported() >= 0 )
          {
            v95 = a7;
            if ( !v58 )
              v95 = MDEV;
            GreHideSprites(*(_QWORD *)v95, 0LL);
          }
          v96 = v130;
          if ( v130 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v130);
            GreReleaseSemaphoreInternal(v96);
          }
          MULTIDEVLOCKOBJ::vUnlock(v124);
          MULTIDEVLOCKOBJ::vUnlock(v128);
        }
        if ( v58 )
          goto LABEL_179;
        goto LABEL_171;
      }
      v77 = *((_DWORD *)MDEV + 5);
      if ( v77 != 1 )
      {
        if ( *((_DWORD *)a7 + 5) != 1 && v77 )
        {
          v79 = 0;
          do
          {
            v21 = *((unsigned int *)a7 + 5);
            v80 = 0;
            v81 = (HDEV)*((_QWORD *)MDEV + 5 * v79 + 4);
            v123 = 5LL * v79;
            if ( (_DWORD)v21 )
            {
              while ( *((_QWORD *)v81 + 324) != *(_QWORD *)(*((_QWORD *)a7 + 5 * v80 + 4) + 2592LL) )
              {
                if ( ++v80 >= (unsigned int)v21 )
                  goto LABEL_130;
              }
              v82 = 5LL * v80;
              v21 = *((_QWORD *)a7 + 5 * v80 + 4);
              if ( v81 != (HDEV)v21 )
              {
                if ( (unsigned int)bDynamicModeChange((HDEV)v21, v81) == 1 )
                {
                  v83 = v123;
                  v21 = *((_QWORD *)a7 + v82 + 4);
                  *((_QWORD *)a7 + v82 + 4) = *((_QWORD *)MDEV + v123 + 4);
                  *((_QWORD *)MDEV + v83 + 4) = v21;
                }
                else
                {
                  v58 = 1;
                }
              }
            }
LABEL_130:
            ++v79;
          }
          while ( v79 < *((_DWORD *)MDEV + 5) );
          v57 = v125;
        }
        goto LABEL_132;
      }
      v78 = (HDEV)*((_QWORD *)MDEV + 4);
      if ( *((_DWORD *)a7 + 5) == 1 )
      {
        if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v78) == 1 )
        {
          v21 = *((_QWORD *)a7 + 4);
          *((_QWORD *)a7 + 4) = *((_QWORD *)MDEV + 4);
          *((_QWORD *)MDEV + 4) = v21;
LABEL_132:
          GreReleaseHmgrSemaphore(v21);
          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
          if ( v58 )
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
          v84 = (void *)*((_QWORD *)MDEV + 3);
          v136 = MulEnableDriver;
          v134 = 1;
          v135 = 0LL;
          v85 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                  (struct _DRV_NAMES *)&v134,
                  (struct _devicemodeW *)MDEV,
                  v84,
                  0,
                  0,
                  1,
                  0,
                  2u,
                  &v132);
          *(_QWORD *)MDEV = v85;
          if ( !v85 )
            goto LABEL_138;
          if ( !a7 )
          {
LABEL_171:
            v97 = *(PDEV **)MDEV;
            if ( *((_DWORD *)MDEV + 5) == 1 )
            {
              *(_QWORD *)v121 = *((_QWORD *)v97 + 228);
              if ( *((PDEV **)v97 + 2) != v97 )
                *((_QWORD *)v97 + 2) = v97;
              *((_QWORD *)v97 + 223) = *((_QWORD *)v97 + 360);
              XEPALOBJ::apalResetColorTable((XEPALOBJ *)v121);
            }
            else
            {
              DrvSetSharedDevLock(MDEV);
              v98 = DrvSetSharedPalette(MDEV);
              v99 = v98;
              if ( (*((_DWORD *)v97 + 547) & 0x100) == 0 && v98 && (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
                DrvRealizeHalftonePaletteWrap(v99, 1LL);
            }
LABEL_179:
            v100 = (struct _ERESOURCE *)hsem;
            if ( hsem )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", hsem);
              GreReleaseSemaphoreInternal(v100);
              EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemHT);
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
              GreReleaseSemaphoreInternal(ghsemSprite);
              EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", v126);
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)v126);
            }
            if ( v129 )
              DrvEnableDirectDrawForModeChange(v129, v129 != v137);
            if ( v58 )
            {
              v108 = WdLogNewEntry5_WdError(v21, i, v63);
              WdLogEvent5_WdError(v108);
              DrvBackoutMDEV(MDEV, v109);
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
                for ( i = 0LL; (unsigned int)i < *((_DWORD *)a7 + 5); *(_DWORD *)(v102 + 160) &= ~1u )
                {
                  v101 = (unsigned int)i;
                  i = (unsigned int)(i + 1);
                  v102 = *(_QWORD *)(*((_QWORD *)a7 + 5 * v101 + 4) + 2592LL);
                }
              }
              for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
                *((_DWORD *)j + 40) &= ~4u;
              for ( k = 0LL; (unsigned int)k < *((_DWORD *)MDEV + 5); k = (unsigned int)(k + 1) )
              {
                v63 = 5LL * (unsigned int)k;
                v105 = *((_QWORD *)MDEV + 5 * (unsigned int)k + 4);
                i = *(_QWORD *)(v105 + 2608);
                *(_DWORD *)(*(_QWORD *)(v105 + 2592) + 160LL) |= 1u;
                v106 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 12);
                *(_DWORD *)(i + 76) = v106;
                v107 = *((_DWORD *)MDEV + 10 * (unsigned int)k + 13);
                *(_DWORD *)(i + 80) = v107;
                if ( !v106 && !v107 )
                  *(_DWORD *)(*(_QWORD *)(v105 + 2592) + 160LL) |= 4u;
              }
              GreUpdateSharedDevCaps(*(_QWORD *)MDEV, i, v63, k);
            }
LABEL_202:
            if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
            {
              DrvEnableMDEV((__int64 *)MDEV, 0LL, 0);
              if ( !v18 )
              {
                for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
                {
                  v113 = *((_DWORD *)MDEV + 5);
                  for ( n = 0; n < v113; ++n )
                  {
                    if ( *(_QWORD *)(*((_QWORD *)a7 + 5 * m + 4) + 2592LL) == *(_QWORD *)(*((_QWORD *)MDEV + 5 * n + 4)
                                                                                        + 2592LL) )
                      break;
                  }
                  if ( n == v113 )
                    DrvDisableDisplay(*((HDEV *)a7 + 5 * m + 4), 1);
                }
              }
              DrvDestroyMDEV(a7);
            }
            DrvReleaseChangeDisplaySettingLocks();
            if ( v128 )
              MULTIDEVLOCKOBJ::`scalar deleting destructor'(v128);
            goto LABEL_215;
          }
          v86 = (struct _ERESOURCE *)*((_QWORD *)v85 + 5);
          EngAcquireSemaphore((HSEMAPHORE)v86);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v86, 11LL);
          EngAcquireSemaphore(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          EngAcquireSemaphore(ghsemPalette);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
          EngAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
          EngAcquireSemaphore(ghsemRFONTList);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
          GreAcquireHmgrSemaphore(v88, v87, v89);
          v90 = *(HDEV *)MDEV;
          if ( v122[0] )
          {
            if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 4), v90) == 1 )
            {
              v91 = *(_QWORD *)MDEV;
              *(_QWORD *)MDEV = *((_QWORD *)a7 + 4);
              *(_QWORD *)a7 = v91;
              *((_QWORD *)a7 + 4) = v91;
              if ( v57 )
                v59 = (HDEV)v91;
              goto LABEL_147;
            }
          }
          else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v90) == 1 )
          {
            v91 = *(_QWORD *)a7;
            *(_QWORD *)a7 = *(_QWORD *)MDEV;
            *(_QWORD *)MDEV = v91;
LABEL_147:
            GreReleaseHmgrSemaphore(v91);
            EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemRFONTList);
            EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPublicPFT);
            EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemPalette);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
            GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
            EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v86);
            GreReleaseSemaphoreInternal(v86);
            goto LABEL_148;
          }
          v58 = 1;
          goto LABEL_147;
        }
      }
      else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v78) == 1 )
      {
        v21 = *(_QWORD *)a7;
        *(_QWORD *)a7 = *((_QWORD *)MDEV + 4);
        *((_QWORD *)MDEV + 4) = v21;
        if ( v57 )
          v59 = (HDEV)v21;
        goto LABEL_132;
      }
      v58 = 1;
      goto LABEL_132;
    }
LABEL_101:
    EngAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    EngAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 12LL);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
    GreAcquireHmgrSemaphore(v74, v73, v75);
    goto LABEL_106;
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
  v44 = (struct _D3DKMT_GETPATHSMODALITY *)hsem;
  if ( (a13 & 1) == 0 || !DrvUpdateDisplayModeInMdev(a7, (struct _D3DKMT_GETPATHSMODALITY *)hsem) )
  {
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      v49 = gdmLogPixels;
      v50 = DrvCreateMDEV(p_DestinationString, v119, v126, a11 != 0 ? 4 : 0, a7, v122[0], v15, v121[0], v44);
      v52 = 0;
      MDEV = v50;
      if ( v50 )
      {
        v53 = *((_DWORD *)v50 + 5);
        v18 = 2;
        if ( v53 == *((_DWORD *)a7 + 5) && v49 == gdmLogPixels )
        {
          v54 = 0;
          if ( v53 )
          {
            do
            {
              v55 = *(unsigned int *)(*((_QWORD *)MDEV + 5 * v54 + 4) + 2480LL);
              if ( *((_DWORD *)MDEV + 10 * v54 + 16) != (_DWORD)v55 )
              {
                v56 = WdLogNewEntry5_WdAssertion(v55, v51);
                WdLogEvent5_WdAssertion(v56);
              }
              if ( *((_QWORD *)MDEV + 5 * v54 + 4) != *((_QWORD *)a7 + 5 * v54 + 4)
                || *((_DWORD *)MDEV + 10 * v54 + 16) != *((_DWORD *)a7 + 10 * v54 + 16)
                || *((_QWORD *)MDEV + 5 * v54 + 6) != *((_QWORD *)a7 + 5 * v54 + 6)
                || *((_QWORD *)MDEV + 5 * v54 + 7) != *((_QWORD *)a7 + 5 * v54 + 7) )
              {
                v18 = 0;
              }
              ++v54;
            }
            while ( v54 < *((_DWORD *)MDEV + 5) );
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
      v52 = 0;
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
  if ( v119 )
    Win32FreePool((__int64)v119);
  if ( !a6 || v18 )
  {
    if ( v18 == 2 )
    {
      v21 = *v45;
      if ( *v45 )
      {
        Win32FreePool(v21);
        *v45 = 0LL;
      }
    }
  }
  else if ( a7 )
  {
    Win32FreePool((__int64)a7);
  }
  v115 = WdLogNewEntry5_WdTrace(v21);
  *(_QWORD *)(v115 + 24) = v18;
  WdLogEvent5_WdTrace(v115);
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
LABEL_228:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    TemplateEventDescriptor(v29, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}
