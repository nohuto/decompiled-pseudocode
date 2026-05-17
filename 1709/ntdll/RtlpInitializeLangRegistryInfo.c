/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x1800043B0
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EB810 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800054C4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo(a1);
  return result;
}
