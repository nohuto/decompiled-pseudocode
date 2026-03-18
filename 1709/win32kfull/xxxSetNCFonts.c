/*
 * XREFs of xxxSetNCFonts @ 0x1C0081880
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C0083240 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0081D38 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     UserSetFont @ 0x1C008218C (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C00821F4 (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C00822BC (GreMarkDeletableFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00824D0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0082EEC (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     GreCreateFontIndirectW @ 0x1C00B1984 (GreCreateFontIndirectW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0108B7C (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  __int64 SessionDpiServerInfo; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r13
  __int64 SessionDpiMetrics; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *DPIMetrics; // rax
  int CharDimensionsInternal; // eax
  LONG lfWeight; // ecx
  LONG lfWidth; // eax
  int v20; // ecx
  int v21; // eax
  LONG v22; // ecx
  LONG v23; // eax
  int v24; // ecx
  struct HLFONT__ *v25; // rcx
  LONG v26; // eax
  struct HLFONT__ *v27; // rcx
  LONG v28; // eax
  __int64 v29; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v31; // edx
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int128 v34; // xmm5
  __int128 v35; // xmm6
  __int64 v36; // xmm0_8
  __int64 v38; // [rsp+28h] [rbp-69h]
  __int64 v39; // [rsp+28h] [rbp-69h]
  __int64 v40; // [rsp+30h] [rbp-61h]
  struct tagLOGFONTW v41; // [rsp+38h] [rbp-59h] BYREF

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v8 = Get96DpiServerInfo(v6, v5, v7);
  SessionDpiMetrics = GetSessionDpiMetrics();
  v10 = Get96DpiMetrics();
  v11 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v11, 139LL, SessionDpiServerInfo + 8)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiServerInfo + 8), v8 + 8) )
  {
    return 0LL;
  }
  v40 = GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), *(_QWORD *)(SessionDpiServerInfo + 8));
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensionsInternal(
                                             *(HDC *)(gpDispInfo + 56LL),
                                             0LL,
                                             (int *)(SessionDpiServerInfo + 20),
                                             gbGreTextReady);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), *(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 16) = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, (int *)(v8 + 20), gbGreTextReady);
  v12 = a2 + 124;
  if ( !a2 )
    v12 = v11;
  v38 = v12;
  if ( !(unsigned int)UserSetFont(a1, v12, 142LL, SessionDpiMetrics + 32)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 32), v10 + 32) )
  {
    return 0LL;
  }
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), *(_QWORD *)(SessionDpiMetrics + 32));
  *(_DWORD *)(SessionDpiMetrics + 40) = GetCharDimensionsInternal(
                                          *(HDC *)(gpDispInfo + 56LL),
                                          0LL,
                                          (int *)(SessionDpiMetrics + 44),
                                          gbGreTextReady);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), *(_QWORD *)(v10 + 32));
  *(_DWORD *)(v10 + 40) = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, (int *)(v10 + 44), gbGreTextReady);
  v13 = a2 + 224;
  if ( !a2 )
    v13 = v38;
  v39 = v13;
  if ( !(unsigned int)UserSetFont(a1, v13, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionDpiMetrics, v10) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    DPIMetrics = (__int64 *)GetDPIMetrics(v15, v14);
    GreSelectFont(gMenuState[17], *DPIMetrics);
  }
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), *(_QWORD *)SessionDpiMetrics);
  CharDimensionsInternal = GetCharDimensionsInternal(
                             *(HDC *)(gpDispInfo + 56LL),
                             (struct tagTEXTMETRICW *)&v41,
                             (int *)(SessionDpiMetrics + 12),
                             gbGreTextReady);
  lfWeight = v41.lfWeight;
  *(_DWORD *)(SessionDpiMetrics + 8) = CharDimensionsInternal;
  *(_DWORD *)(SessionDpiMetrics + 16) = *(_DWORD *)&v41.lfFaceName[2];
  lfWidth = v41.lfWidth;
  *(_DWORD *)(SessionDpiMetrics + 20) = lfWeight;
  v20 = *(_DWORD *)(SessionDpiMetrics + 12) + lfWeight + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = lfWidth;
  *(_DWORD *)(SessionDpiMetrics + 28) = v20;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), *(_QWORD *)v10);
  v21 = GetCharDimensionsInternal(
          *(HDC *)(gpDispInfo + 56LL),
          (struct tagTEXTMETRICW *)&v41,
          (int *)(v10 + 12),
          gbGreTextReady);
  v22 = v41.lfWeight;
  *(_DWORD *)(v10 + 8) = v21;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)&v41.lfFaceName[2];
  v23 = v41.lfWidth;
  *(_DWORD *)(v10 + 20) = v22;
  v24 = *(_DWORD *)(v10 + 12) + v22 + 2;
  *(_DWORD *)(v10 + 24) = v23;
  *(_DWORD *)(v10 + 28) = v24;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), v40);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v10 + 24);
  v25 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v25 && v25 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v25);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)SessionDpiMetrics, 92LL, (char *)&v41) )
    return 0LL;
  v26 = v41.lfWeight;
  if ( v41.lfWeight <= 700 )
    v26 = 700;
  v41.lfWeight = v26;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW(&v41, 136LL);
  v27 = *(struct HLFONT__ **)(v10 + 48);
  if ( v27 && v27 != *(struct HLFONT__ **)(v8 + 24) )
  {
    GreMarkDeletableFont(v27);
    GreDeleteObject(*(_QWORD *)(v10 + 48));
    *(_QWORD *)(v10 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)v10, 92LL, (char *)&v41) )
    return 0LL;
  v28 = v41.lfWeight;
  if ( v41.lfWeight <= 700 )
    v28 = 700;
  v41.lfWeight = v28;
  *(_QWORD *)(v10 + 48) = GreCreateFontIndirectW(&v41, 136LL);
  v29 = a2 + 316;
  if ( !a2 )
    v29 = v39;
  if ( !(unsigned int)UserSetFont(a1, v29, 156LL, SessionDpiMetrics + 56)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 56), v10 + 56) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    *(_OWORD *)(gpsi + 5000LL) = *(_OWORD *)(a2 + 408);
    *(_OWORD *)(gpsi + 5016LL) = *(_OWORD *)(a2 + 424);
    *(_OWORD *)(gpsi + 5032LL) = *(_OWORD *)(a2 + 440);
    *(_OWORD *)(gpsi + 5048LL) = *(_OWORD *)(a2 + 456);
    *(_OWORD *)(gpsi + 5064LL) = *(_OWORD *)(a2 + 472);
    *(_QWORD *)(gpsi + 5080LL) = *(_QWORD *)(a2 + 488);
    *(_DWORD *)(gpsi + 5088LL) = *(_DWORD *)(a2 + 496);
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v41, a1, 0x9Du);
    v31 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v32 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v33 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v34 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v35 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v36 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5000LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5016LL) = v32;
    *(_OWORD *)(gpsi + 5032LL) = v33;
    *(_OWORD *)(gpsi + 5048LL) = v34;
    *(_OWORD *)(gpsi + 5064LL) = v35;
    *(_QWORD *)(gpsi + 5080LL) = v36;
    *(_DWORD *)(gpsi + 5088LL) = v31;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
