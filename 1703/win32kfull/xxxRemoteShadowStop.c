/*
 * XREFs of xxxRemoteShadowStop @ 0x1C01EF050
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00FE41C (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowStop(__int64 a1)
{
  if ( PsGetCurrentProcess(a1) != gpepCSRSS )
    return 3221225506LL;
  xxxRemoteStopScreenUpdates();
  return 0LL;
}
