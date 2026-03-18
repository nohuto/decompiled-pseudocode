/*
 * XREFs of ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C00655B8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::GetButtonMessage(CMouseProcessor::CButtonEvent *this)
{
  unsigned int *v1; // rdx
  __int64 v4; // rcx

  v1 = (unsigned int *)*((_QWORD *)this + 3);
  if ( !v1 )
    return 0LL;
  v4 = *((unsigned int *)this + 4);
  if ( (*((_BYTE *)this + 20) & 1) != 0 )
  {
    if ( (_DWORD)v4 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v1);
      v1 = (unsigned int *)*((_QWORD *)this + 3);
    }
    return v1[2];
  }
  else if ( (_DWORD)v4 == 1 )
  {
    return *v1;
  }
  else
  {
    return v1[1];
  }
}
