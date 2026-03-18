/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x14006CE70
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x1404F8928 (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x14055A2DC (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
