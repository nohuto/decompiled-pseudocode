/*
 * XREFs of RtlAreAllAccessesGranted @ 0x180080310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreAllAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (~GrantedAccess & DesiredAccess) == 0;
}
