/*
 * XREFs of IsLogonConnected @ 0x1C00DC560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsLogonConnected()
{
  return gWinLogonRpcHandle != 0LL;
}
