/*
 * XREFs of ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C0055610
 * Callers:
 *     ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x1C0060F7C (-SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z.c)
 *     ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXE@Z @ 0x1C0060FB8 (-ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXE@Z.c)
 *     ?Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z @ 0x1C0072C50 (-Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00920D8 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ?TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C00555C0 (-TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(__int64 a1, int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 32, 0LL);
  *(_QWORD *)(a1 + 40) = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 24) != 5 || a3 || (_DWORD)v4 == 3 )
  {
    if ( *(_DWORD *)(a1 + 28) != (_DWORD)v4 )
      VIDMM_WORKER_THREAD::TransitionToState(a1, v4);
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = v4;
    WdLogEvent5_WdAssertion(v8);
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 32, 0LL);
  KeLeaveCriticalRegion();
}
