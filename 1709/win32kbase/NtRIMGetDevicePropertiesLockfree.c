/*
 * XREFs of NtRIMGetDevicePropertiesLockfree @ 0x1C00FFFF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePropertiesLockfree @ 0x1C0101F40 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePropertiesLockfree(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return RIMGetDevicePropertiesLockfree(a1, a2, a3);
}
