/*
 * XREFs of xxxRemoteShadowStop @ 0x1C01F94D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00D6744 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowStop(__int64 a1, __int64 a2)
{
  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    return 3221225506LL;
  xxxRemoteStopScreenUpdates();
  return 0LL;
}
