/*
 * XREFs of ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C
 * Callers:
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180006F94 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18001B510 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x180057CEC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180059198 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ??0InputAttemptedTargetManager@@QEAA@W4TestMode@0@@Z @ 0x1800829D4 (--0InputAttemptedTargetManager@@QEAA@W4TestMode@0@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     _lambda_39145382b85a56bf0c3f442b4c54cd44_::_lambda_invoker_cdecl_ @ 0x1800A98A0 (_lambda_39145382b85a56bf0c3f442b4c54cd44_--_lambda_invoker_cdecl_.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800AA0A0 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ??0MPCExclusiveInputTarget@@IEAA@PEAUIInputTarget@@I_K@Z @ 0x1800AB120 (--0MPCExclusiveInputTarget@@IEAA@PEAUIInputTarget@@I_K@Z.c)
 * Callees:
 *     ??0ISMStatics@@AEAA@XZ @ 0x180030C8C (--0ISMStatics@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct IViewHierarchy *ISMStatics::GetViewHierarchy(void)
{
  struct ISMStatics *v0; // rax
  ISMStatics *v2; // [rsp+40h] [rbp+8h]

  v0 = ISMStatics::s_instance;
  if ( !ISMStatics::s_instance )
  {
    v2 = (ISMStatics *)operator new(8uLL);
    v0 = ISMStatics::ISMStatics(v2);
    ISMStatics::s_instance = v0;
  }
  return *(struct IViewHierarchy **)v0;
}
