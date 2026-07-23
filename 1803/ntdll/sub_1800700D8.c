/*
 * XREFs of sub_1800700D8 @ 0x1800700D8
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x18006E7E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_18007C600 @ 0x18007C600 (sub_18007C600.c)
 *     sub_1800FA128 @ 0x1800FA128 (sub_1800FA128.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_1800700D8(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
