/*
 * XREFs of ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0048E9C
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C0069CA0 (UserSetMITInputCallbacks.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     SetThreadBasePriority @ 0x1C0091A10 (SetThreadBasePriority.c)
 */

bool __fastcall CInputThread::DeclareThreadAsInput(CInputThread *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  bool v3; // di
  _QWORD *ThreadWin32Thread; // rax
  unsigned int CurrentThreadId; // eax

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement);
  v2 = *(_QWORD *)(v1 + 24);
  v3 = v2 == 0;
  if ( !v2 )
  {
    ThreadWin32Thread = (_QWORD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v1 + 24) = ThreadWin32Thread;
    *(_QWORD *)(v1 + 32) = *ThreadWin32Thread;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)(v1 + 16) = 1;
    *(_DWORD *)(v1 + 40) = CurrentThreadId;
    SetThreadBasePriority(KeGetCurrentThread());
  }
  *(_QWORD *)(v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
