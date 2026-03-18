/*
 * XREFs of ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0065590
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetVKey(CMouseProcessor::CButtonEvent *this, __int64 a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v2 = *((_QWORD *)this + 3);
  }
  return *(unsigned int *)(v2 + 12);
}
