/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C00461DC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     CheckIntegrityAccessToCapture @ 0x1C012E620 (CheckIntegrityAccessToCapture.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceUIPIInputError @ 0x1C008B6E0 (EtwTraceUIPIInputError.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 PtiFromInputDest; // rax
  char v6; // di
  __int64 v7; // rsi
  int v9; // edx

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 2);
  v6 = 0;
  v7 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  if ( CheckAccessForIntegrityLevelEx(a1, *(_QWORD *)(*(_QWORD *)(PtiFromInputDest + 376) + 824LL), 0) )
    return 1;
  EtwTraceUIPIInputError(
    gptiCurrent,
    (struct tagTHREADINFO *)v7,
    *(_QWORD *)(v7 + 384),
    *(_QWORD *)(*(_QWORD *)(v7 + 384) + 380LL),
    1);
  LOBYTE(v9) = 3;
  WPP_RECORDER_SF_(*a3, v9, 10, 10, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
  return v6;
}
