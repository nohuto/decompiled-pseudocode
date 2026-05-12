/*
 * XREFs of StorGetIdentityVendorId @ 0x1C001322C
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0013384 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0061648 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C00615F4 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityVendorId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 9LL, *a1 + 8LL, 8LL);
  return 0LL;
}
