/*
 * XREFs of TraceLoggingRegister @ 0x180001078
 * Callers:
 *     DllMain @ 0x180004D64 (DllMain.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAQEBU_TlgProvider_t@@XZ @ 0x18005E3C0 (-Provider@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180078464 (-Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800859BC (-Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18008D8A4 (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180098068 (-Provider@CortanaProactiveLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009F4C4 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A087C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A810C (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B55DC (-Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ @ 0x1800CF074 (-Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ.c)
 *     ??$PoliciesFeaturesState@AEA_N_N@TaskFlowDataEngineTelemetry@@SAXAEA_N$$QEA_N@Z @ 0x1800D5034 (--$PoliciesFeaturesState@AEA_N_N@TaskFlowDataEngineTelemetry@@SAXAEA_N$$QEA_N@Z.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800D578C (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@XamlSwitcherLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18012B3A8 (-Provider@XamlSwitcherLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180133084 (-Provider@WindowManagementLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180177644 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180177EC8 (-Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18017D164 (-Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  GUID v2; // xmm0
  signed int v3; // eax
  TLG_STATUS v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  ProviderId = v2;
  v3 = EventRegister(&ProviderId, TlgEnableCallback, hProvider, (PREGHANDLE)hProvider + 4);
  v4 = v3;
  if ( v3 )
  {
    v4 = (unsigned __int16)v3 | 0x80070000;
    if ( v3 <= 0 )
      return v3;
  }
  else
  {
    EventSetInformation(
      *((_QWORD *)hProvider + 4),
      2LL,
      *((_QWORD *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v4;
}
