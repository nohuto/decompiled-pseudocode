/*
 * XREFs of ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01349BC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CWheelEvent::GetWheelMessage(CMouseProcessor::CWheelEvent *this, __int64 a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 3);
  if ( !v2 )
    return 522LL;
  if ( v2 != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  return 526LL;
}
