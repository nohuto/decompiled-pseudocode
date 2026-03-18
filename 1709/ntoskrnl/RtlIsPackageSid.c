/*
 * XREFs of RtlIsPackageSid @ 0x140549BD8
 * Callers:
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405499E0 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
