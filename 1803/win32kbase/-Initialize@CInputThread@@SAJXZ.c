/*
 * XREFs of ?Initialize@CInputThread@@SAJXZ @ 0x1C013359C
 * Callers:
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputThread::Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( gpInputThread )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v2 = Win32AllocPool(48LL, 0x7054494Du);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 16) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)(v2 + 40) = 0;
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
  }
  gpInputThread = (CInputThread *)v2;
  return v2 == 0 ? 0xC0000017 : 0;
}
