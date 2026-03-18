/*
 * XREFs of IsDebuggerAttached @ 0x1C00B44C4
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002114 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0006E3C (SlowAppThreadInShellFrame.c)
 *     InForegroundQueue @ 0x1C00B3ED0 (InForegroundQueue.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     TryDetachShellFrame @ 0x1C01BCD5C (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 207) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
