/*
 * XREFs of ?Release@DispBrokerClientHandle@DispBroker@@QEAAXXZ @ 0x1C00A0808
 * Callers:
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00A0378 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DispBroker::DispBrokerClientHandle::Release(PVOID P)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 && P )
  {
    if ( (int)ZwAlpcDisconnectPort(*((_QWORD *)P + 1), 0LL) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    if ( ObCloseHandle(*((HANDLE *)P + 1), 0) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    ExFreePoolWithTag(P, 0x44535042u);
  }
}
