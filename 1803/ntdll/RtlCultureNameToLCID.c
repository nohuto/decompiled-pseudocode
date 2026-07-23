/*
 * XREFs of RtlCultureNameToLCID @ 0x1800367F0
 * Callers:
 *     sub_180032408 @ 0x180032408 (sub_180032408.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     sub_180035C74 @ 0x180035C74 (sub_180035C74.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     sub_180036174 @ 0x180036174 (sub_180036174.c)
 *     sub_180036554 @ 0x180036554 (sub_180036554.c)
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 *     sub_180053480 @ 0x180053480 (sub_180053480.c)
 *     sub_18006EC30 @ 0x18006EC30 (sub_18006EC30.c)
 *     sub_18006FD80 @ 0x18006FD80 (sub_18006FD80.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D9F0 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x1800809C0 (RtlpGetLCIDFromLangInfoNode.c)
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     LdrResRelease @ 0x180088510 (LdrResRelease.c)
 *     sub_18008A9A4 @ 0x18008A9A4 (sub_18008A9A4.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E8C70 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 *     sub_1800F891C @ 0x1800F891C (sub_1800F891C.c)
 *     sub_1800F9170 @ 0x1800F9170 (sub_1800F9170.c)
 *     sub_1800F985C @ 0x1800F985C (sub_1800F985C.c)
 *     sub_1800F9A98 @ 0x1800F9A98 (sub_1800F9A98.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FA3F0 (RtlpRefreshCachedUILanguage.c)
 *     sub_1800FA524 @ 0x1800FA524 (sub_1800FA524.c)
 *     sub_1800FAA50 @ 0x1800FAA50 (sub_1800FAA50.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x180037850 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  PWCH Buffer; // rdx
  size_t Length; // rbx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  __int16 v10; // si
  int v11; // ebx
  __int64 v12; // r12
  wchar_t *v13; // rcx
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // cx
  __int64 v16; // r8
  BOOLEAN result; // al
  wchar_t String2[88]; // [rsp+20h] [rbp-F8h] BYREF

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
  v6 = Length >> 1;
  if ( v6 >= 85 )
    _report_rangecheckfailure();
  v7 = qword_18015D000;
  String2[v6] = 0;
  if ( !v7 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v8 = v7[3];
  if ( !v8 || !*(_QWORD *)(v8 + 16) || !String2[0] )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v9 = v7[4];
  v10 = -1;
  if ( v9 && (v11 = 0, *(_WORD *)(v9 + 6)) )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (wchar_t *)(*(_QWORD *)(v9 + 24) + 2LL * *(__int16 *)(v12 + *(_QWORD *)(v9 + 16)));
      if ( v13 == String2 || !wcsicmp(v13, String2) )
        break;
      ++v11;
      v12 += 2LL;
      if ( v11 >= *(unsigned __int16 *)(v9 + 6) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v11 = -1;
  }
  if ( v11 >= 0 )
    v10 = v11;
  if ( v10 < 0 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v14 = *(_WORD *)(v8 + 6);
  v15 = 0;
  if ( !v14 )
    return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  v16 = *(_QWORD *)(v8 + 16);
  while ( *(_WORD *)(28LL * v15 + v16 + 6) != v10 )
  {
    if ( ++v15 >= v14 )
      return RtlLocaleNameToLcid(String2, Lcid, 3u) >= 0;
  }
  result = 1;
  *Lcid = *(unsigned __int16 *)(28LL * v15 + v16 + 4);
  return result;
}
