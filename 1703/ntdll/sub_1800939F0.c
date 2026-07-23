/*
 * XREFs of sub_1800939F0 @ 0x1800939F0
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlResetRtlTranslations @ 0x18008A620 (RtlResetRtlTranslations.c)
 *     RtlInitNlsTables @ 0x18008AE20 (RtlInitNlsTables.c)
 */

void __fastcall sub_1800939F0(PUSHORT *a1)
{
  _NLSTABLEINFO TableInfo; // [rsp+20h] [rbp-98h] BYREF

  RtlInitNlsTables(a1[20], a1[21], a1[22], &TableInfo);
  RtlResetRtlTranslations(&TableInfo);
}
