/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0015008 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0015224 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     CheckIntegrityAccessToCapture @ 0x1C012DBA0 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     EtwTraceUIPIInputError @ 0x1C000EFC0 (EtwTraceUIPIInputError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 PtiFromInputDest; // rax
  char v6; // di
  __int64 v7; // rsi

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 2);
  v6 = 0;
  v7 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  if ( CheckAccessForIntegrityLevelEx(a1, *(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 400) + 832LL), 0) )
    return 1;
  EtwTraceUIPIInputError(
    gptiCurrent,
    (struct tagTHREADINFO *)v7,
    *(_QWORD *)(v7 + 408),
    *(_QWORD *)(*(_QWORD *)(v7 + 408) + 420LL),
    1);
  WPP_RECORDER_SF_(*a3, 3u, 0xAu, 0xAu, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
  return v6;
}
