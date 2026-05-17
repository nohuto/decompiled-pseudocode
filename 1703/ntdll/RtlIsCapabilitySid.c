/*
 * XREFs of RtlIsCapabilitySid @ 0x180047BB0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &unk_180114734, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
