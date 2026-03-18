/*
 * XREFs of ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0120954
 * Callers:
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00B3A90 (NtMITCoreMsgKOpenConnectionTo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     CoreMsgOpenConnection @ 0x1C016555C (CoreMsgOpenConnection.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgOpenDestinationHandle(__int64 a1, __int64 a2, __int64 a3)
{
  InputExtensibilityCallout *v3; // rbp
  __int64 v5; // rsi
  PVOID CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, __int64); // rdi
  __int64 v10; // r15
  __int64 v11; // r14
  int v12; // esi
  __int128 v14; // [rsp+20h] [rbp-38h]

  v3 = gpInputExtensibilityCallout;
  v5 = (int)a2;
  if ( (unsigned int)a2 >= 0xA )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  CurrentProcess = (PVOID)PsGetCurrentProcess(a1);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  v9 = 0LL;
  LOBYTE(v14) = 0;
  v10 = 0LL;
  RIMLockExclusive((__int64)v3 + 24);
  v11 = 5 * v5;
  if ( *((_QWORD *)v3 + 5 * v5 + 6) )
  {
    v12 = -2147020579;
  }
  else
  {
    v12 = CoreMsgOpenConnection(0LL, a3);
    if ( v12 >= 0 )
    {
      v14 = *(_OWORD *)((char *)v3 + 8 * v11 + 64);
      v9 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v3 + v11 + 9);
      v10 = *((_QWORD *)v3 + v11 + 10);
    }
  }
  *((_QWORD *)v3 + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v3 + 24, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 && (v14 & 1) != 0 )
    v9(1LL, v10);
  return (unsigned int)v12;
}
