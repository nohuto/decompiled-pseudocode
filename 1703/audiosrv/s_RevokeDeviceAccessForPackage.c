/*
 * XREFs of s_RevokeDeviceAccessForPackage @ 0x180095860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_RevokeDeviceAccessForPackage(void *a1, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  return HandleDeviceAccess(a1, a2, a3, 0);
}
