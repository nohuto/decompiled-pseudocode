/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x18002CDB0
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x1800033D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180003570 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180004C20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180005240 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180005620 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180005B30 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18002CBD0 (LdrpSetThreadPreferredLangList.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008C290 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800907A0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x1800EB810 (RtlGetUILanguageInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FDA20 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x1800054C4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x1800061E0 (RtlpInitMuiCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(_QWORD *a1)
{
  PVOID v1; // rax
  PVOID v2; // rbx
  int RegistryInfo; // edi

  v1 = g_RegInfo;
  v2 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v1 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( RegistryInfo >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)RegistryInfo;
}
