/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C007CCE0 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B35D4 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00B461C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00B46B8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00B6A20 (DxgkGetDisplayModeList.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00B7D40 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B8DA0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C00B9050 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00B9400 (DxgkGetPostCompositionCaps.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00B99F0 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BBEF4 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00BC110 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkGetPresentHistory @ 0x1C00EB0A0 (DxgkGetPresentHistory.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00F45D4 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00F65D0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00F6BC0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00F6EE0 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00F82B0 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00F8840 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetScanLine @ 0x1C00FDDF0 (DxgkGetScanLine.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C017FF70 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C0180C70 (DxgkQueryClockCalibration.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01839B0 (DxgkChangeVideoMemoryReservation.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01875D0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C01A3C30 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C01BB230 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rax
  DXGADAPTER **v11; // rdi
  __int64 v13; // rcx
  volatile signed __int64 *v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]

  v6 = a2;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v16 + 24) = 6305LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = *((_QWORD *)a1 + 288);
  if ( !v10 )
  {
    v11 = a5;
    if ( a5 )
      return 3221225659LL;
LABEL_7:
    if ( !a3 )
      return 0LL;
    if ( *((_QWORD *)a1 + 289) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
      *a4 = -1LL;
      *a3 = a1;
      return 0LL;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v19);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v14 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 76);
    if ( v14 )
    {
      _InterlockedIncrement64(v14 + 3);
      v15 = v20 == 0;
      *a4 = -1LL;
      *a3 = (struct DXGADAPTER *)v14;
      if ( !v15 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
      return 0LL;
    }
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = a1;
    *(_QWORD *)(v18 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v18);
    if ( v11 && *v11 )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(*v11);
      *v11 = 0LL;
    }
    if ( v20 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    return 3221225659LL;
  }
  if ( (unsigned int)v6 < *(_DWORD *)(v10 + 80) )
  {
    v11 = a5;
    if ( a5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
      *a6 = -1LL;
      *a5 = a1;
    }
    goto LABEL_7;
  }
  v17 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v17 + 24) = v6;
  *(_QWORD *)(v17 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v17);
  return 3221225485LL;
}
