/*
 * XREFs of ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0016974
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C00864E4 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     SetThreadBasePriority @ 0x1C009BC00 (SetThreadBasePriority.c)
 */

bool __fastcall CInputThread::DeclareThreadAsInput(CInputThread *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  bool v6; // di
  _QWORD *ThreadWin32Thread; // rax
  unsigned int CurrentThreadId; // eax

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement);
  v5 = *(_QWORD *)(v1 + 24);
  v6 = v5 == 0;
  if ( !v5 )
  {
    ThreadWin32Thread = (_QWORD *)W32GetThreadWin32Thread(KeGetCurrentThread(), v2, v3, v4);
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
  return v6;
}
