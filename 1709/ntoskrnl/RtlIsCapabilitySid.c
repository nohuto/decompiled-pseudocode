/*
 * XREFs of RtlIsCapabilitySid @ 0x1405498A0
 * Callers:
 *     RtlCheckTokenCapability @ 0x1402516C0 (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
