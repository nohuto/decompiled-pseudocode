/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C0134EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C01341B8 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  CInputThread *v6; // rdi
  bool v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v6 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v7 = CInputThread::_CalledOnInputThread(v6);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  CMouseProcessor::MouseInterceptState::Disable((__int64)this + 2744);
}
