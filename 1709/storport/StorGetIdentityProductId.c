/*
 * XREFs of StorGetIdentityProductId @ 0x1C0013258
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0013384 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0061648 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C00615F4 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityProductId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 17LL, *a1 + 16LL, 16LL);
  return 0LL;
}
