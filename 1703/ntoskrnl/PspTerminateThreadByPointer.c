/*
 * XREFs of PspTerminateThreadByPointer @ 0x14054F0D0
 * Callers:
 *     PspSystemThreadStartup @ 0x14011FEF0 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     PspUserThreadStartup @ 0x1404F8330 (PspUserThreadStartup.c)
 *     PsTerminateSystemThread @ 0x14054E950 (PsTerminateSystemThread.c)
 *     NtTerminateProcess @ 0x14054E9C0 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x14054ECF4 (NtTerminateThread.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x14012008C (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x1406E2BD8 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1736) & 0x20) != 0 && (*(_DWORD *)(v4 + 772) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v4 + 1104));
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1736), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1740) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1736), 0) )
    *(_DWORD *)(a1 + 1784) = a2;
  KeRequestTerminationThread(a1);
  return 0LL;
}
