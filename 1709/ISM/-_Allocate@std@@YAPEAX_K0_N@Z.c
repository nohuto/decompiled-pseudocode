/*
 * XREFs of ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834
 * Callers:
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAXAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x18000868C (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000A7B8 (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtag.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18000A9E4 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$.c)
 *     ??$emplace_back@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@?$vector@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@QEAAX$$QEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@1@@Z @ 0x18001F404 (--$emplace_back@U-$pair@KV-$vector@PEAUIDisplayBindingObserver@@V-$allocator@PEAUIDisplayBinding.c)
 *     ??$emplace_back@AEBQEAUIDisplayBindingObserver@@@?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@QEAAXAEBQEAUIDisplayBindingObserver@@@Z @ 0x18001F5D4 (--$emplace_back@AEBQEAUIDisplayBindingObserver@@@-$vector@PEAUIDisplayBindingObserver@@V-$alloca.c)
 *     ??$_Range_construct_or_tidy@PEBQEAUIDisplayBindingObserver@@@?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@AEAAXPEBQEAUIDisplayBindingObserver@@0Uforward_iterator_tag@1@@Z @ 0x18001F720 (--$_Range_construct_or_tidy@PEBQEAUIDisplayBindingObserver@@@-$vector@PEAUIDisplayBindingObserve.c)
 *     ??$emplace@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@$$QEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@1@@Z @ 0x18001F7CC (--$emplace@U-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@-$vector@U-$pair@KV-$ComP.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18001FAD8 (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x180028F54 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x180029050 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_grow_by__lambd.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_9013ee9e23efe4882b67eff5b0ecf103___ @ 0x18002924C (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_18002924C.c)
 *     ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x1800293BC (--$_Construct@PEAD@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXPEADQEADUin.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18002955C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     ??$emplace_back@AEAVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAXAEAVEdge@@@Z @ 0x18002B70C (--$emplace_back@AEAVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAXAEAVEdge@@@Z.c)
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x18002B8F4 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ??$assign@PEAPEAVPropertyNode@Input@@X@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXPEAPEAVPropertyNode@Input@@0@Z @ 0x180032624 (--$assign@PEAPEAVPropertyNode@Input@@X@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPropert.c)
 *     ??$emplace@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@AEBQEAVPropertyNode@Input@@@Z @ 0x1800327B8 (--$emplace@AEBQEAVPropertyNode@Input@@@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPropert.c)
 *     ??$emplace_back@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXAEBQEAVPropertyNode@Input@@@Z @ 0x180032930 (--$emplace_back@AEBQEAVPropertyNode@Input@@@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPr.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x1800343A4 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_1800343A4.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x180036244 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18003A08C (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180042044 (--$_Range_construct_or_tidy@PEBU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x1800425A0 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 *     ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800599AC (--$emplace_back@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMPCInput.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005BC64 (--$emplace_back@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAX_K@Z @ 0x18005D120 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEA.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x180060638 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_13.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x180060730 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060730.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x180060870 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_g_ea_180060870.c)
 *     ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x1800676AC (--$emplace_back@AEAUInputInfo@@@-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAAXA.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180075E4C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAX$$QEAUSpatialInputButtonCaps@SpatialInteractionDevices@@@Z @ 0x18007AABC (--$emplace_back@USpatialInputButtonCaps@SpatialInteractionDevices@@@-$vector@USpatialInputButton.c)
 *     ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAX$$QEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085980 (--$emplace_back@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@ContextualProcess.c)
 *     ??$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAXAEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x180085AA4 (--$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UContextual.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180090588 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1800973DC (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@IEAAX_K@Z @ 0x180097BA0 (-_Growmap@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAXAEAY0CH@$$CBG$$QEAH11@Z @ 0x18009802C (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     ??$emplace_back@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180098528 (--$emplace_back@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$a.c)
 *     ??$emplace_back@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@@Z @ 0x18009E914 (--$emplace_back@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIController@@@W.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800B9104 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall std::_Allocate(unsigned __int64 a1, unsigned __int64 a2)
{
  size_t v3; // rcx
  void *v4; // rax

  if ( !a1 )
    return 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a1 )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  v3 = a2 * a1;
  if ( v3 < 0x1000 )
    return operator new(v3);
  if ( v3 + 39 < v3 )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL) - 8) = v4;
  return (void *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
}
