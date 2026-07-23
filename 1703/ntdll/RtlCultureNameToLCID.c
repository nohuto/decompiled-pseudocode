/*
 * XREFs of RtlCultureNameToLCID @ 0x180045FF0
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_180044B58 @ 0x180044B58 (sub_180044B58.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_180045AEC @ 0x180045AEC (sub_180045AEC.c)
 *     sub_180045D9C @ 0x180045D9C (sub_180045D9C.c)
 *     sub_180046AF0 @ 0x180046AF0 (sub_180046AF0.c)
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 *     sub_18005C0F4 @ 0x18005C0F4 (sub_18005C0F4.c)
 *     sub_18006DB48 @ 0x18006DB48 (sub_18006DB48.c)
 *     sub_18006E860 @ 0x18006E860 (sub_18006E860.c)
 *     LdrLoadAlternateResourceModule @ 0x180084380 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180086010 (RtlpGetLCIDFromLangInfoNode.c)
 *     LdrResRelease @ 0x18008C450 (LdrResRelease.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     sub_1800946FC @ 0x1800946FC (sub_1800946FC.c)
 *     sub_180094A20 @ 0x180094A20 (sub_180094A20.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800ECBD0 (RtlpConvertCultureNamesToLCIDs.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 *     sub_1800FAF00 @ 0x1800FAF00 (sub_1800FAF00.c)
 *     sub_1800FB6A4 @ 0x1800FB6A4 (sub_1800FB6A4.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FBE40 (RtlpRefreshCachedUILanguage.c)
 *     sub_1800FBF74 @ 0x1800FBF74 (sub_1800FBF74.c)
 *     sub_1800FC4A0 @ 0x1800FC4A0 (sub_1800FC4A0.c)
 *     sub_18010BE1C @ 0x18010BE1C (sub_18010BE1C.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x180046220 (RtlLocaleNameToLcid.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // bl
  PWCH Buffer; // rdx
  size_t Length; // rdi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int16 v10; // si
  int v11; // edi
  __int64 v12; // r15
  wchar_t *v13; // rcx
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // dx
  __int64 v16; // r8
  __int64 v18; // rax
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
  v6 = Length >> 1;
  if ( v6 >= 85 )
    _report_rangecheckfailure();
  v7 = qword_18015BF90;
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
      v13 = (wchar_t *)(*(_QWORD *)(v9 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v9 + 16) + v12));
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
  if ( v11 < 0 )
  {
    if ( v9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( String2[v18] );
    }
  }
  else
  {
    v10 = v11;
  }
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
  *Lcid = *(unsigned __int16 *)(28LL * v15 + v16 + 4);
  return 1;
}
