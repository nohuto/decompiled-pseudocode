/*
 * XREFs of RtlCultureNameToLCID @ 0x1800524A0
 * Callers:
 *     GetLCIDFromLangListNode @ 0x18000615C (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180006450 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     LdrResFallbackLangList @ 0x18001FCD4 (LdrResFallbackLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800200E4 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002B4CC (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18002D0FC (RtlpMuiRegTryToAppendLangId.c)
 *     RtlGetNeutralFallback @ 0x180050E04 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180051984 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180051C6C (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     LdrpLangFallbackListFindNode @ 0x180052268 (LdrpLangFallbackListFindNode.c)
 *     LdrLoadAlternateResourceModule @ 0x180081AB0 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180085790 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x180089B50 (LdrResRelease.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008CB30 (RtlpLoadInstallLanguageFallback.c)
 *     RtlGetUILanguageInfo @ 0x1800EB810 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EC800 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCC0 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FB8E4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FBE88 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FC6DC (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800FCE98 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800FD0CC (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FDA20 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800FDB54 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800FE080 (_RtlpMuiRegInitAnyLanguage.c)
 *     ResCultureNameToLCID @ 0x18010EE14 (ResCultureNameToLCID.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x1800526D0 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180090E18 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // bl
  wchar_t *Buffer; // rdx
  size_t Length; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  __int16 v14; // si
  int v15; // edi
  __int64 v16; // r15
  wchar_t *v17; // rcx
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // cx
  __int64 v20; // r8
  BOOLEAN result; // al
  __int64 v22; // rax
  wchar_t String2[88]; // [rsp+30h] [rbp-F8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  if ( !String->Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || (unsigned int)String->Length + 2 > 0x55 )
    return v2;
  Length = String->Length;
  memmove(String2, Buffer, Length);
  v10 = Length >> 1;
  if ( v10 >= 85 )
    _report_rangecheckfailure(v7, v6, v8, v9);
  v11 = g_RegInfo;
  String2[v10] = 0;
  if ( !v11 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v12 = v11[3];
  if ( !v12 || !*(_QWORD *)(v12 + 16) || !String2[0] )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v13 = v11[4];
  v14 = -1;
  if ( v13 && (v15 = 0, *(_WORD *)(v13 + 6)) )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v17 = (wchar_t *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + v16));
      if ( v17 == String2 || !wcsicmp(v17, String2) )
        break;
      ++v15;
      v16 += 2LL;
      if ( v15 >= *(unsigned __int16 *)(v13 + 6) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v15 = -1;
  }
  if ( v15 < 0 )
  {
    if ( v13 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( String2[v22] );
    }
  }
  else
  {
    v14 = v15;
  }
  if ( v14 < 0 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v18 = *(_WORD *)(v12 + 6);
  v19 = 0;
  if ( !v18 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v20 = *(_QWORD *)(v12 + 16);
  while ( *(_WORD *)(28LL * v19 + v20 + 6) != v14 )
  {
    if ( ++v19 >= v18 )
      return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  }
  result = 1;
  *Lcid = *(unsigned __int16 *)(28LL * v19 + v20 + 4);
  return result;
}
