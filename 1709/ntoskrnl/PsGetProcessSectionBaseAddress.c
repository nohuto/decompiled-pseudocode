/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1400AE540
 * Callers:
 *     PopEtGetProcessImageInfo @ 0x140459484 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404DC228 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
