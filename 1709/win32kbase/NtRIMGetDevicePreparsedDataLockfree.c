/*
 * XREFs of NtRIMGetDevicePreparsedDataLockfree @ 0x1C00FFF80
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0101CB0 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedDataLockfree(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 1;
  return RIMGetDevicePreparsedDataLockfree(a1, a2, a3, a4);
}
