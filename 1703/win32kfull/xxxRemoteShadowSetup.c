/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C01EEFF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00FE41C (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1)
{
  int v2; // ecx

  if ( PsGetCurrentProcess(a1) != gpepCSRSS )
    return 3221225506LL;
  v2 = gnShadowers;
  if ( gnShadowers || gbConnected )
  {
    xxxRemoteStopScreenUpdates();
    v2 = gnShadowers;
  }
  gnShadowers = v2 + 1;
  return 0LL;
}
