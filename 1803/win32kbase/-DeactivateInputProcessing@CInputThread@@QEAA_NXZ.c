/*
 * XREFs of ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0133464
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C01335FC (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeactivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  if ( !CInputThread::_CalledOnInputThread(v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  v4 = 1;
  if ( (unsigned int)(*((_DWORD *)v1 + 4) - 1) <= 1 )
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
    *((_DWORD *)v1 + 4) = 3;
  }
  else
  {
    v4 = 0;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
