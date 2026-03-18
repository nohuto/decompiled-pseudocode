/*
 * XREFs of ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0134258
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1C00B3F50 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x1C0140608 (ApiSetEdtionGetInputDesktopId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::Enable(__int64 a1, int a2)
{
  CInputThread *v4; // rdi
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bl

  RIMLockExclusive(a1);
  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
    *(_BYTE *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 20) = a2;
    *(_QWORD *)(a1 + 24) = ApiSetEdtionGetInputDesktopId();
    *(_DWORD *)(a1 + 32) = (unsigned int)PsGetCurrentThreadId();
  }
  v8 = *(_BYTE *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
