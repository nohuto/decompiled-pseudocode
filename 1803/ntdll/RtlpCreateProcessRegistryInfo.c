/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x180034D10
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x1800311A0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     sub_180034B2C @ 0x180034B2C (sub_180034B2C.c)
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006EA40 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180087CA0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180089300 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FA3F0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(_QWORD *a1)
{
  PVOID v1; // rax
  PVOID v2; // rbx
  int v4; // edi

  v1 = qword_18015D000;
  v2 = 0LL;
  v4 = 0;
  if ( !qword_18015D000 )
  {
    sub_180031FD4();
    RtlEnterCriticalSection(&stru_18015ABE0);
    if ( !qword_18015D000 )
      v4 = sub_18006ECB4(&qword_18015D000);
    RtlLeaveCriticalSection(&stru_18015ABE0);
    v1 = qword_18015D000;
  }
  if ( a1 )
  {
    if ( v4 >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)v4;
}
