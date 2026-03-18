/*
 * XREFs of ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C01334F0
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C013147C (UserSetMITInputCallbacks.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     SetThreadBasePriority @ 0x1C00A0F70 (SetThreadBasePriority.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C01335FC (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThread::DeclareThreadAsInput(CInputThread *this)
{
  CInputThread *v1; // rbx
  __int64 v2; // rax
  bool v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *ThreadWin32Thread; // rax
  unsigned int CurrentThreadId; // eax

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  v2 = *((_QWORD *)v1 + 3);
  v3 = v2 == 0;
  if ( !v2 )
  {
    if ( !CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    ThreadWin32Thread = (_QWORD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *((_QWORD *)v1 + 3) = ThreadWin32Thread;
    *((_QWORD *)v1 + 4) = *ThreadWin32Thread;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)v1 + 4) = 1;
    *((_DWORD *)v1 + 10) = CurrentThreadId;
    SetThreadBasePriority(KeGetCurrentThread(), 16);
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
