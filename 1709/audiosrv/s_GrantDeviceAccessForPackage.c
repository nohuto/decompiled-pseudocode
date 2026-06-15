/*
 * XREFs of s_GrantDeviceAccessForPackage @ 0x18007C4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_GrantDeviceAccessForPackage(void *a1, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  return HandleDeviceAccess(a1, a2, a3, 1);
}
