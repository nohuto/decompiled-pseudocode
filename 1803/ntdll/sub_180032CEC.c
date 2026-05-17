/*
 * XREFs of sub_180032CEC @ 0x180032CEC
 * Callers:
 *     sub_1800316A8 @ 0x1800316A8 (sub_1800316A8.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     RtlCleanUpTEBLangLists @ 0x18006E7E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006EA40 (RtlpQueryDefaultUILanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 *     sub_18007C600 @ 0x18007C600 (sub_18007C600.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180087CA0 (RtlSetProcessPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180032CEC(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 0x40) == 0 )
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
