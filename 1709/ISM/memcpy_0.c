/*
 * XREFs of memcpy_0 @ 0x1800CC377
 * Callers:
 *     memcpy_s @ 0x180001620 (memcpy_s.c)
 *     ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x18000A0A0 (-OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z.c)
 *     memcpy_s_0 @ 0x18000ADE8 (memcpy_s_0.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x180011F94 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAX_KIPEAI@Z @ 0x180013470 (-SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAX_KIPEAI@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18001471C (-SetValueForKey@-$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInput.c)
 *     ?Enqueue@?$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z @ 0x180016114 (-Enqueue@-$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z.c)
 *     ?Enqueue@?$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@GestureTargetingTarget@@@Z @ 0x1800162D8 (-Enqueue@-$DynamicSizeQueue@UChainedTarget@GestureTargetingTarget@@$00@@QEAAJAEBUChainedTarget@G.c)
 *     ?SetValueForKey@?$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z @ 0x180016794 (-SetValueForKey@-$DynamicSizeMap@I_N$09@@QEAAJAEBIAEB_N@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x18001EC18 (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001EF28 (-SetValueForKey@-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector.c)
 *     ?GetBounds@DisplayBinding@@UEAAJPEAJ0@Z @ 0x1800234B0 (-GetBounds@DisplayBinding@@UEAAJPEAJ0@Z.c)
 *     ?GetRotation@DisplayBinding@@UEAA?AW4DISPLAYCONFIG_ROTATION@@XZ @ 0x180023650 (-GetRotation@DisplayBinding@@UEAA-AW4DISPLAYCONFIG_ROTATION@@XZ.c)
 *     ?OnOrientationChanged@DisplayBinding@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x180023A80 (-OnOrientationChanged@DisplayBinding@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     std::_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std::allocator_int__bool_Input::PropertyNode_____ptr64_void_____ptr64_unsigned_long_::_Do_call @ 0x180023FD0 (std--_Func_impl__lambda_d29ab57dd9545fc931c9dab5b1cf9752__std--allocator_int__bool__ea_180023FD0.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UMobilePointerMapping@@UCursorId@@$00@@QEAAJAEBUMobilePointerMapping@@AEBUCursorId@@@Z @ 0x1800261D4 (-SetValueForKey@-$DynamicSizeMap@UMobilePointerMapping@@UCursorId@@$00@@QEAAJAEBUMobilePointerMa.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180028D98 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x180028F54 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x180029050 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_9013ee9e23efe4882b67eff5b0ecf103___ @ 0x18002924C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_18002924C.c)
 *     ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x1800293BC (--$_Construct@PEAD@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXPEADQEADUin.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18002955C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ?Set@Value@Input@@QEAAJPEBXK@Z @ 0x180030D34 (-Set@Value@Input@@QEAAJPEBXK@Z.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800343A4 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800343A4.c)
 *     ?RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z @ 0x1800464D0 (-RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18006047C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18006047C.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180060730 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060730.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x180060870 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060870.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x18007057C (-SetValueForKey@-$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNIO.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z @ 0x18007090C (-SetValueForKey@-$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z.c)
 *     ?OnPointerInfoFrame@TouchProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180073A00 (-OnPointerInfoFrame@TouchProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180075E4C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z @ 0x18007E8B0 (-PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z.c)
 *     ?OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z @ 0x1800824D4 (-OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180090588 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x1800A0FF4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 *     ?SetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviousState@InputInfoSanitizer@@@Z @ 0x1800A3958 (-SetValueForKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviou.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
