/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x140051240
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     ExpSetSwappingKernelApc @ 0x14040B540 (ExpSetSwappingKernelApc.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // dl

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0;
  if ( Enable != v2 )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
  }
  return v2;
}
