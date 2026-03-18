/*
 * XREFs of IsLogonConnected @ 0x1C00D6150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsLogonConnected()
{
  return gWinLogonRpcHandle != 0LL;
}
