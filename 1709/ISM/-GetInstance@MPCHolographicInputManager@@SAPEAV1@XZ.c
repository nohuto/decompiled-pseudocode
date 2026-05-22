/*
 * XREFs of ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800379E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180037D24 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x180038DF0 (-OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800390E0 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004A9F0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004AB4C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x18004AF88 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004B2C0 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x18004BF50 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x180050738 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052A90 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180053A9C (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800544B0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1800546A8 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call @ 0x180059B90 (std--_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std--allocator_int__void_--_Do_call.c)
 *     std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x180059CA0 (std--_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std--allocator_int__void_--_Do_call.c)
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18005A9FC (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?ConnectionCreated@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z @ 0x18005D880 (-ConnectionCreated@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z.c)
 *     ?Thunk_SetOnlyMixedWorldRouting_8@?$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z @ 0x18005E680 (-Thunk_SetOnlyMixedWorldRouting_8@-$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z.c)
 *     ?Thunk_ResendGamepadIsSupportedForProcess_5@?$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z @ 0x18005E6A0 (-Thunk_ResendGamepadIsSupportedForProcess_5@-$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?OnTargetWithFocusChanged@MPCInputProviderBase@@UEAAJPEAUIInputTarget@@0@Z @ 0x18005FFD0 (-OnTargetWithFocusChanged@MPCInputProviderBase@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800600C0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180060330 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800611E4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x1800652C0 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18006566C (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180065ADC (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8F3C (-HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPE.c)
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A9048 (-HitTestInternal@MPCInputRouter@@AEAAJPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9AA4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180007784 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800077A8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void MPCHolographicInputManager::GetInstance(void)
{
  const char *v0; // r9
  std::exception_ptr *v1; // rax
  _BYTE v2[16]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v3[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v4[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  char v6; // [rsp+70h] [rbp+10h] BYREF

  v6 = 0;
  __ExceptionPtrCreate(v2);
  v3[0] = v2;
  v3[1] = &v6;
  if ( std::_Execute_once(
         (struct std::once_flag *)&MPCHolographicInputManager::s_singletonCreated,
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_a6dafc035b20d634b29ec3c0443d964a_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
         v3) )
  {
    __ExceptionPtrDestroy(v2);
    if ( MPCHolographicInputManager::s_instance )
      return;
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v0);
  }
  if ( __ExceptionPtrToBool(v2) )
  {
    v1 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)v2);
    std::rethrow_exception(v1);
  }
  std::_XGetLastError();
}
