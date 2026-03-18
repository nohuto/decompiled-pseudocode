/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x140085300
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x1404ED594 (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1406D294C (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
