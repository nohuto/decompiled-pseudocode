/*
 * XREFs of ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C013327C
 * Callers:
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CDeviceIdentity::IssueIdentityOnDeviceArrival(
        CDeviceIdentity *this,
        struct RawInputManagerDeviceObject *a2)
{
  struct CDeviceIdentity *v3; // rsi
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rcx
  PVOID v8; // rcx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v3 = gpDeviceIdentity;
  if ( *((_DWORD *)a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_DWORD *)a2 + 17) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  RIMLockExclusive((__int64)v3);
  v4 = *((_DWORD *)v3 + 4);
  *((_DWORD *)v3 + 4) = v4 + 1;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 16) = v4;
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  v7 = (char *)*((_QWORD *)a2 + 115);
  if ( v7 && (int)RawInputManagerDeviceObjectResolveHandle(v7, 3u, 0, &Object) >= 0 )
  {
    v8 = Object;
    *((_DWORD *)a2 + 17) = *((_DWORD *)Object + 16);
    ObfDereferenceObject(v8);
  }
  *((_QWORD *)a2 + 9) = lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_;
}
