/*
 * XREFs of RtlLCIDToCultureName @ 0x1800361F0
 * Callers:
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     sub_180035DEC @ 0x180035DEC (sub_180035DEC.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     sub_180070B90 @ 0x180070B90 (sub_180070B90.c)
 *     RtlpGetNameFromLangInfoNode @ 0x18007F9D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     sub_1800E78E0 @ 0x1800E78E0 (sub_1800E78E0.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     sub_1800E81C8 @ 0x1800E81C8 (sub_1800E81C8.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E8E80 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800E91E0 @ 0x1800E91E0 (sub_1800E91E0.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 *     sub_1800F8FB0 @ 0x1800F8FB0 (sub_1800F8FB0.c)
 *     sub_1800F9414 @ 0x1800F9414 (sub_1800F9414.c)
 *     sub_1800F985C @ 0x1800F985C (sub_1800F985C.c)
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 *     sub_1800FB548 @ 0x1800FB548 (sub_1800FB548.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 * Callees:
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  USHORT Length; // si
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( Lcid && String && Lcid != 4096 )
  {
    if ( qword_18015D000
      && (int)sub_1800362CC(qword_18015D000, (unsigned __int16)Lcid, 0LL, &v10) >= 0
      && (v6 = 28LL * v10, v7 = *(_QWORD *)(*((_QWORD *)qword_18015D000 + 3) + 16LL), *(__int16 *)(v7 + v6 + 6) > 0) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*((_QWORD *)qword_18015D000 + 4) + 24LL)
               + 2LL
               * *(__int16 *)(*(_QWORD *)(*((_QWORD *)qword_18015D000 + 4) + 16LL) + 2LL * *(__int16 *)(v7 + v6 + 6))));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= String->MaximumLength
        && (int)sub_1800377C0(String->Buffer, String->MaximumLength) >= 0 )
      {
        String->Length = Length;
        return 1;
      }
    }
    else if ( RtlLcidToLocaleName(Lcid, String, 2u, 0) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
