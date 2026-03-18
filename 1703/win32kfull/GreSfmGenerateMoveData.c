/*
 * XREFs of GreSfmGenerateMoveData @ 0x1C027F910
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00BC2B0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSfmGenerateMoveData(int a1)
{
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  g_bUseMoveHints = a1;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return 0LL;
}
