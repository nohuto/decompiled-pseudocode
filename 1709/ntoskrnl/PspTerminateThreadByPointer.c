/*
 * XREFs of PspTerminateThreadByPointer @ 0x1404D6B90
 * Callers:
 *     PspSystemThreadStartup @ 0x140128180 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     PspTerminateAllThreads @ 0x1404D6C7C (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x1404D94C0 (NtTerminateThread.c)
 *     NtTerminateProcess @ 0x1404D9A54 (NtTerminateProcess.c)
 *     PspUserThreadStartup @ 0x14053F9C0 (PspUserThreadStartup.c)
 *     PsTerminateSystemThread @ 0x140599300 (PsTerminateSystemThread.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x1400AB560 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1744) & 0x20) != 0 && (*(_DWORD *)(v4 + 772) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1104));
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1744), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1740) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1744), 0) )
    *(_DWORD *)(a1 + 1792) = a2;
  KeRequestTerminationThread(a1);
  return 0LL;
}
