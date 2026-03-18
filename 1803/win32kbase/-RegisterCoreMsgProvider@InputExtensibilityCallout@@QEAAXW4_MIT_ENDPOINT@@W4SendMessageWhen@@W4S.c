/*
 * XREFs of ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0120EB0
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0131CA8 (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C01331F0 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::RegisterCoreMsgProvider(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  InputExtensibilityCallout *v6; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  _BOOL8 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h]

  v6 = gpInputExtensibilityCallout;
  v9 = 5LL * (int)a2;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 5 * (int)a2 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  RIMLockExclusive((__int64)v6 + 24);
  *((_DWORD *)v6 + 2 * v9 + 14) = a3;
  v11 = a4 != 0;
  if ( v11 != (a6 != 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  LODWORD(v12) = a4;
  *((_QWORD *)&v12 + 1) = a6;
  *(_OWORD *)((char *)v6 + 8 * v9 + 64) = v12;
  *((_QWORD *)v6 + v9 + 10) = a5;
  *((_QWORD *)v6 + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 24, 0LL);
  KeLeaveCriticalRegion();
}
