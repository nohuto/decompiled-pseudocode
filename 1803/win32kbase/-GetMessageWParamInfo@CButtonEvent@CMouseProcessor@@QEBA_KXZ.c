/*
 * XREFs of ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006554C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CMouseProcessor::CButtonEvent::GetMessageWParamInfo(
        CMouseProcessor::CButtonEvent *this,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v2 = *((_QWORD *)this + 3);
  }
  return *(_QWORD *)(v2 + 16);
}
