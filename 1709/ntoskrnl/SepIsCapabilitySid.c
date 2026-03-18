/*
 * XREFs of SepIsCapabilitySid @ 0x14011B8D0
 * Callers:
 *     SepMaximumAccessCheck @ 0x14007D5C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14007DC40 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140142AD0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140142BF0 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SeCapabilityPrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SeCapabilityPrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
