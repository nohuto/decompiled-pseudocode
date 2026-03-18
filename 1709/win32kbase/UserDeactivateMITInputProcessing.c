/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C0091E24
 * Callers:
 *     NtMITDeactivateInputProcessing @ 0x1C0091D40 (NtMITDeactivateInputProcessing.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0007640 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     RIMFreePointerDevice @ 0x1C000B580 (RIMFreePointerDevice.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C001A300 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z.c)
 *     ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0095FC8 (-ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ.c)
 */

void __fastcall UserDeactivateMITInputProcessing(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 (__fastcall **v3)(); // rbx
  _QWORD *DeviceContext; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x11u,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  if ( !a1 )
  {
    v2 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
    if ( (unsigned int)(*(_DWORD *)(v2 + 16) - 1) <= 1 )
      *(_DWORD *)(v2 + 16) = 3;
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v3 = s_rgSensorMap;
    do
    {
      CBaseInput::HandleInputThreadStateChange((CBaseInput *)v3[3], 1);
      v3 += 6;
    }
    while ( v3 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x46u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionDeactivateMitInputSupported() >= 0 )
    EditionDeactivateMitInput(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x47u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( !a1 )
  {
    if ( TouchExtensibility::ghInjectionDevice )
    {
      if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, (PVOID *)&v10) >= 0 )
      {
        LOBYTE(v5) = 19;
        v8 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, v5, v6, v7);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 472);
          if ( v9 )
            RIMFreePointerDevice(v10, v9);
        }
      }
      TouchExtensibility::ghInjectionDevice = 0LL;
    }
    DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters((InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    *DeviceContext = 0LL;
    CInpLockGuard::LeaveGuardOnThreadTermination((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                                                              + 224LL));
    CSpatialProcessor::_spfnDitCallback = 0LL;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x12u,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
}
