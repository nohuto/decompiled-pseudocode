/*
 * XREFs of UserIsRemoteConnection @ 0x1C003C720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsRemoteConnection()
{
  return gProtocolType != 0;
}
