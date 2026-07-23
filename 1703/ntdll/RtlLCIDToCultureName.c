/*
 * XREFs of RtlLCIDToCultureName @ 0x1800452F0
 * Callers:
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180045B5C @ 0x180045B5C (sub_180045B5C.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     sub_180078B20 @ 0x180078B20 (sub_180078B20.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180084E00 (RtlpGetNameFromLangInfoNode.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800946FC @ 0x1800946FC (sub_1800946FC.c)
 *     sub_180094A20 @ 0x180094A20 (sub_180094A20.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     sub_1800EC1D8 @ 0x1800EC1D8 (sub_1800EC1D8.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800ED164 @ 0x1800ED164 (sub_1800ED164.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800FAD34 @ 0x1800FAD34 (sub_1800FAD34.c)
 *     sub_1800FB1B0 @ 0x1800FB1B0 (sub_1800FB1B0.c)
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 *     sub_1800FCF8C @ 0x1800FCF8C (sub_1800FCF8C.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180045488 @ 0x180045488 (sub_180045488.c)
 *     RtlLcidToLocaleName @ 0x1800454D0 (RtlLcidToLocaleName.c)
 *     sub_1800456F0 @ 0x1800456F0 (sub_1800456F0.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rdx
  void *v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  USHORT Length; // di
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  if ( !Lcid || !String || Lcid == 4096 )
    return v2;
  if ( qword_18015BF90 && (_WORD)Lcid && (_WORD)Lcid != 4096 )
  {
    v5 = *((_QWORD *)qword_18015BF90 + 3);
    v6 = 0LL;
    if ( *(_WORD *)(v5 + 6) )
    {
      v7 = *(_QWORD *)(v5 + 16);
      while ( 1 )
      {
        v8 = 28LL * (int)v6;
        if ( *(_WORD *)(v8 + v7 + 4) == (_WORD)Lcid && (*(_WORD *)(v8 + v7) & 0x1020) == 0x20 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (int)v6 >= *(unsigned __int16 *)(v5 + 6) )
          goto LABEL_11;
      }
      v11 = 28LL * (__int16)v6;
      v12 = *(_QWORD *)(*((_QWORD *)qword_18015BF90 + 3) + 16LL);
      if ( *(__int16 *)(v12 + v11 + 6) > 0 )
      {
        RtlInitUnicodeString(
          &DestinationString,
          (PCWSTR)(*(_QWORD *)(*((_QWORD *)qword_18015BF90 + 4) + 24LL)
                 + 2LL
                 * *(__int16 *)(*(_QWORD *)(*((_QWORD *)qword_18015BF90 + 4) + 16LL) + 2LL * *(__int16 *)(v12 + v11 + 6))));
        Length = DestinationString.Length;
        if ( DestinationString.Length <= String->MaximumLength
          && (int)sub_1800456F0(String->Buffer, String->MaximumLength) >= 0 )
        {
          String->Length = Length;
          return 1;
        }
        return v2;
      }
    }
    else
    {
LABEL_11:
      v9 = (void *)sub_180045488(v6, 85LL);
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
  }
  if ( RtlLcidToLocaleName(Lcid, String, 2u, 0) >= 0 )
    return 1;
  return v2;
}
