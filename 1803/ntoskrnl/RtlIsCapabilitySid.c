/*
 * XREFs of RtlIsCapabilitySid @ 0x1405414D8
 * Callers:
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
