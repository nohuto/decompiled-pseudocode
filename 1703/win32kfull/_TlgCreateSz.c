/*
 * XREFs of _TlgCreateSz @ 0x1C00BA104
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00B9E34 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 *     ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00DA238 (-OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C00DA440 (-EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z.c)
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00DAA84 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00DAAFC (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0108974 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C010F4A0 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C013D7FC (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0197CD0 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217C64 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217F2C (-OnDeviceClosed@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C02180B4 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021823C (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C02183F0 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02184EC (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C0218628 (-ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C021A09C (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C021A1E4 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C021A378 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C021A5AC (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C021A714 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C021A880 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C021AB34 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021B0A8 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C021B2A8 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C021B444 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021B5D0 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C021B7B8 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021B938 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C021BADC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021BF80 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C021C09C (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C021C170 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C021C240 (-EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021C560 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021CB2C (-ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021CC94 (-RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C021CE0C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021D070 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021D314 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021D654 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021E220 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C021EB30 (-TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C021EE78 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0220300 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0220B64 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221680 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C022215C (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C0222320 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0222410 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0222720 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C0222B5C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0222FE0 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C02231A4 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C022345C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0223688 (-SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0223984 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C0223E20 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C0223FF8 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0224954 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0224C88 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0224D74 (-ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREP.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)&unk_1C02E2431;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
