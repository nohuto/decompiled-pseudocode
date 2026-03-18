/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C008BCC0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C008BB90 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     RIMFreePointerDevice @ 0x1C0009450 (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C004F8CC (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C006F7F0 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0090950 (-ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ.c)
 */

void __fastcall UserDeactivateMITInputProcessing(unsigned int a1)
{
  PDEVICE_OBJECT v2; // rcx
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(); // rbx
  _QWORD *DeviceContext; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      17,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( !a1 )
  {
    v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
    if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) <= 1 )
      *(_DWORD *)(v4 + 16) = 3;
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    v5 = s_rgSensorMap;
    do
    {
      CBaseInput::HandleInputThreadStateChange((CBaseInput *)v5[3], 1);
      v5 += 6;
    }
    while ( v5 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
    v2 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v2->DeviceType) )
    WPP_RECORDER_SF_(v2->DeviceExtension, 5, 14, 64, (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( (int)IsEditionDeactivateMitInputSupported() >= 0 )
    EditionDeactivateMitInput(a1);
  v3 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      65,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
    v3 = WPP_GLOBAL_Control;
  }
  if ( !a1 )
  {
    if ( TouchExtensibility::ghInjectionDevice )
    {
      if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, (PVOID *)&v9) >= 0 )
      {
        v7 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 472);
          if ( v8 )
            RIMFreePointerDevice(v9, v8);
        }
      }
      TouchExtensibility::ghInjectionDevice = 0LL;
    }
    DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters((InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    *DeviceContext = 0LL;
    CInpLockGuard::LeaveGuardOnThreadTermination((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                                                              + 200LL));
    v3 = WPP_GLOBAL_Control;
    CSpatialProcessor::_spfnDitCallback = 0LL;
  }
  if ( LOWORD(v3->DeviceType) )
    WPP_RECORDER_SF_(v3->DeviceExtension, 5, 1, 18, (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
}
