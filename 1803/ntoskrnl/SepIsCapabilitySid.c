/*
 * XREFs of SepIsCapabilitySid @ 0x1400BA5A4
 * Callers:
 *     SepMaximumAccessCheck @ 0x14005EAA0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14005F060 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140149980 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140149AA0 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
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
