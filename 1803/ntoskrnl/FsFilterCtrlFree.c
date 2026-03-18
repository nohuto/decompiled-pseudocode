/*
 * XREFs of FsFilterCtrlFree @ 0x14005BD38
 * Callers:
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404C1720 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x140714EFC (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x140225D98 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
