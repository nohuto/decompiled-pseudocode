/*
 * XREFs of ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C01341B8
 * Callers:
 *     NtMITDisableMouseIntercept @ 0x1C00B3D80 (NtMITDisableMouseIntercept.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C0134EA0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::Disable(__int64 a1)
{
  CInputThread *v2; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  bool v7; // zf
  bool v8; // bl

  RIMLockExclusive(a1);
  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v6 = *(_BYTE *)(a1 + 16);
  v7 = v6 == 0;
  if ( v6 )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v7 = 1;
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v8 = v7;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
