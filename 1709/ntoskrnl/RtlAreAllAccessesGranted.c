/*
 * XREFs of RtlAreAllAccessesGranted @ 0x140575B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreAllAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (~GrantedAccess & DesiredAccess) == 0;
}
