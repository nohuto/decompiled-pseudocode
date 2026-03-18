/*
 * XREFs of FsFilterCtrlFree @ 0x140067148
 * Callers:
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14049C600 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x1406B0754 (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x1401E8638 (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
