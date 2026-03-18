/*
 * XREFs of RtlAreAnyAccessesGranted @ 0x140583BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreAnyAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (GrantedAccess & DesiredAccess) != 0;
}
