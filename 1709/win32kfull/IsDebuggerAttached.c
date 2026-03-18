/*
 * XREFs of IsDebuggerAttached @ 0x1C00CBEDC
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006BF8 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C000BEC4 (SlowAppThreadInShellFrame.c)
 *     InForegroundQueue @ 0x1C00CB420 (InForegroundQueue.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDebuggerAttached(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *a1;
  if ( v3 && PsGetProcessDebugPort(v3) && (!*((_DWORD *)a1 + 209) || (unsigned __int8)ExQueryFastCacheDevLicense()) )
    return 1;
  return v2;
}
