/*
 * XREFs of ??_U@YAPEAX_K@Z @ 0x1800E212C
 * Callers:
 *     ??0Win32kInterop@@QEAA@XZ @ 0x18000F304 (--0Win32kInterop@@QEAA@XZ.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x180013CB8 (-ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z.c)
 *     ?OnPointerInfoFrame@Win32kInterop@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x1800150C0 (-OnPointerInfoFrame@Win32kInterop@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800151E0 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180061518 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1800618E0 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x1800621A8 (-SetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNIO.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800623CC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x180062468 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18006DFF0 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180072970 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073330 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074450 (-OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x18007B310 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18007B6E8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x18007D410 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18007D530 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18007E21C (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x180080AF0 (-RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800817FC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180086670 (-ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z.c)
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18008977C (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UDWMPointerMapping@@UCursorId@@$00@@QEAAJAEBUDWMPointerMapping@@AEBUCursorId@@@Z @ 0x18008A9F8 (-SetValueForKey@-$DynamicSizeMap@UDWMPointerMapping@@UCursorId@@$00@@QEAAJAEBUDWMPointerMapping@.c)
 *     std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const_____ptr64_::_Do_call @ 0x180090CE0 (std--_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT__ea_180090CE0.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x18009A8A4 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z @ 0x18009AA28 (-GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z.c)
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800AE65C (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800AE8F4 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800AFE60 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1)
{
  return operator new(a1);
}
