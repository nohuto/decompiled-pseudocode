/*
 * XREFs of RtlIsPackageSid @ 0x14046A0F8
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x140469F00 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
