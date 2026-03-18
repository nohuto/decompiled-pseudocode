/*
 * XREFs of W32kGenerateMoveData @ 0x1C0252E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 W32kGenerateMoveData()
{
  int IsRemoteAndNotDisconnectConnection; // eax
  unsigned int v1; // ecx

  IsRemoteAndNotDisconnectConnection = UserIsRemoteAndNotDisconnectConnection();
  v1 = 0;
  if ( IsRemoteAndNotDisconnectConnection || g_bUseMoveHints )
    return 1;
  return v1;
}
