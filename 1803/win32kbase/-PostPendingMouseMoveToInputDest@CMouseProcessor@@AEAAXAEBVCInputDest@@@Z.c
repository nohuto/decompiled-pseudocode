/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0037ABC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0037B44 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C006A8DC (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C0071904 (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 PendingMouseMovePoint; // rax
  __int64 v7; // xmm0_8
  const struct CInputDest *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  _BYTE v13[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( *((_DWORD *)this + 4) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint(v13, a2);
    v7 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v11 = v7;
    v12 = PendingMouseMovePoint;
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, 0LL, &v11, 1);
    if ( QHelper::HasPendingMouseMove(a2, v8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  }
}
