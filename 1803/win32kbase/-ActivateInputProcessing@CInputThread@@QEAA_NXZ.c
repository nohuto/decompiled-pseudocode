/*
 * XREFs of ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C01333CC
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0130CD4 (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C01335FC (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThread::ActivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  int *v4; // rbx
  int v5; // eax
  bool v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  v4 = (int *)((char *)v1 + 16);
  v5 = *((_DWORD *)v1 + 4);
  if ( v5 == 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    v5 = *v4;
  }
  if ( v5 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    v5 = *v4;
  }
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    v5 = *v4;
  }
  v6 = v5 == 1;
  if ( v5 == 1 )
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
    *v4 = 2;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
