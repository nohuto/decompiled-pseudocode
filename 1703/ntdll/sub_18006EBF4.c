/*
 * XREFs of sub_18006EBF4 @ 0x18006EBF4
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x18006BFE0 (RtlCleanUpTEBLangLists.c)
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006EA40 @ 0x18006EA40 (sub_18006EA40.c)
 *     sub_1800FBD34 @ 0x1800FBD34 (sub_1800FBD34.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18006EBF4(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
