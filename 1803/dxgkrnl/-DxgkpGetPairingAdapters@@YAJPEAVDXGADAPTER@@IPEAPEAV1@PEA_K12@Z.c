/*
 * XREFs of ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C009AB00 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00A0434 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00A8B9C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00AC9CC (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ACBF8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkGetDisplayModeList @ 0x1C00AD370 (DxgkGetDisplayModeList.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C00D73A0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00D8A80 (DxgkGetPostCompositionCaps.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D9110 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00D9750 (DxgkFreeGpuVirtualAddress.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00DA480 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C00DB5D0 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00DC300 (DxgkGetPresentHistoryReadyEvent.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00DC430 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00DD2E0 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00DDD20 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z @ 0x1C00DE560 (-DxgkCddGetDriverCaps@@YAJQEAXPEAU_DXGK_DRIVERCAPS@@1@Z.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C00DEAB0 (DxgkQueryModeListCacheLuid.c)
 *     DxgkGetPresentHistory @ 0x1C00DF2D0 (DxgkGetPresentHistory.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkGetScanLine @ 0x1C010BDD0 (DxgkGetScanLine.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0164E84 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0165270 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     DxgkNeedToEnableCddPrimary @ 0x1C0167910 (DxgkNeedToEnableCddPrimary.c)
 *     DxgkQueryClockCalibration @ 0x1C0168630 (DxgkQueryClockCalibration.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0168B08 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C016F530 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0194600 (DxgkGetMultisampleMethodList.c)
 *     DxgkSetStablePowerState @ 0x1C01B9C10 (DxgkSetStablePowerState.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
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
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  volatile signed __int64 *v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]

  v6 = a2;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v13 + 24) = 7046LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v10 = *((_QWORD *)a1 + 307);
  if ( !v10 )
  {
    v11 = a5;
    if ( a5 )
      return 3221225659LL;
LABEL_7:
    if ( !a3 )
      return 0LL;
    if ( *((_QWORD *)a1 + 308) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
      *a4 = -1LL;
      *a3 = a1;
      return 0LL;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v19);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v16 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15) + 77);
    if ( v16 )
    {
      _InterlockedIncrement64(v16 + 3);
      v17 = v20 == 0;
      *a4 = -1LL;
      *a3 = (struct DXGADAPTER *)v16;
      if ( !v17 )
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
  v14 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v14 + 24) = v6;
  *(_QWORD *)(v14 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v14);
  return 3221225485LL;
}
