/*
 * XREFs of sub_1800CDEB8 @ 0x1800CDEB8
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlInitNlsTables @ 0x1800DEF30 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1800DEFA0 (RtlResetRtlTranslations.c)
 */

__int64 __fastcall sub_1800CDEB8(_QWORD *a1)
{
  _BYTE v2[152]; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], v2);
  return RtlResetRtlTranslations(v2);
}
