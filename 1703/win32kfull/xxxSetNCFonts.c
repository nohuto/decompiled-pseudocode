/*
 * XREFs of xxxSetNCFonts @ 0x1C000BBE4
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C000B8E0 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetFont @ 0x1C000C590 (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C000C71C (UserSetAltScaleFont.c)
 *     GreSetLFONTOwner @ 0x1C000C7F0 (GreSetLFONTOwner.c)
 *     GreMarkDeletableFont @ 0x1C000C828 (GreMarkDeletableFont.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C000CAC4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     GreCreateFontIndirectW @ 0x1C002B45C (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C013DCC8 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B98 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

__int64 __fastcall xxxSetNCFonts(__int64 a1, __int64 a2)
{
  __int64 SessionSystemDpiServerInfo; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 SessionSystemDpiMetrics; // r14
  __int64 v11; // r15
  _OWORD *v12; // rdi
  int CharDimensionsInternal; // eax
  LONG tmExternalLeading; // ecx
  LONG tmAscent; // eax
  int v17; // ecx
  int v18; // eax
  LONG v19; // ecx
  int v20; // ecx
  struct HLFONT__ *v21; // rcx
  LONG v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  struct HLFONT__ *v25; // rcx
  LONG v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  unsigned int LongestString; // ebx
  int v31; // eax
  unsigned int v32; // ebx
  __int64 i; // rbx
  __int64 v35; // [rsp+20h] [rbp-59h]
  tagTEXTMETRICW v36; // [rsp+30h] [rbp-49h] BYREF

  SessionSystemDpiServerInfo = GetSessionSystemDpiServerInfo();
  v5 = Get96DpiServerInfo();
  SessionSystemDpiMetrics = GetSessionSystemDpiMetrics(v7, v6, v8, v9, a1);
  v11 = Get96DpiMetrics();
  v12 = (_OWORD *)((a2 + 24) & -(__int64)(a2 != 0));
  if ( !(unsigned int)UserSetFont(a1, v12, 139LL, SessionSystemDpiServerInfo + 8)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionSystemDpiServerInfo + 8), v5 + 8) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  *(_DWORD *)(SessionSystemDpiServerInfo + 16) = GetCharDimensionsInternal(
                                                   *(HDC *)(gpDispInfo + 56LL),
                                                   0LL,
                                                   (int *)(SessionSystemDpiServerInfo + 20),
                                                   gbGreTextReady);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  *(_DWORD *)(v5 + 16) = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, (int *)(v5 + 20), gbGreTextReady);
  if ( v12 )
  {
    *v12 = *(_OWORD *)(a2 + 124);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x10) = *(_OWORD *)(a2 + 140);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x20) = *(_OWORD *)(a2 + 156);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x30) = *(_OWORD *)(a2 + 172);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x40) = *(_OWORD *)(a2 + 188);
    *(_QWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x50) = *(_QWORD *)(a2 + 204);
    *(_DWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x58) = *(_DWORD *)(a2 + 212);
  }
  if ( !(unsigned int)UserSetFont(a1, (a2 + 24) & -(__int64)(a2 != 0), 142LL, SessionSystemDpiMetrics + 32)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionSystemDpiMetrics + 32), v11 + 32) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  *(_DWORD *)(SessionSystemDpiMetrics + 40) = GetCharDimensionsInternal(
                                                *(HDC *)(gpDispInfo + 56LL),
                                                0LL,
                                                (int *)(SessionSystemDpiMetrics + 44),
                                                gbGreTextReady);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  *(_DWORD *)(v11 + 40) = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, (int *)(v11 + 44), gbGreTextReady);
  if ( v12 )
  {
    *v12 = *(_OWORD *)(a2 + 224);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x10) = *(_OWORD *)(a2 + 240);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x20) = *(_OWORD *)(a2 + 256);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x30) = *(_OWORD *)(a2 + 272);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x40) = *(_OWORD *)(a2 + 288);
    *(_QWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x50) = *(_QWORD *)(a2 + 304);
    *(_DWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x58) = *(_DWORD *)(a2 + 312);
  }
  if ( !(unsigned int)UserSetFont(a1, (a2 + 24) & -(__int64)(a2 != 0), 145LL, SessionSystemDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionSystemDpiMetrics, v11) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    GetDPIMetrics();
    GreSelectFontInternal(gMenuState[17]);
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  CharDimensionsInternal = GetCharDimensionsInternal(
                             *(HDC *)(gpDispInfo + 56LL),
                             &v36,
                             (int *)(SessionSystemDpiMetrics + 12),
                             gbGreTextReady);
  tmExternalLeading = v36.tmExternalLeading;
  *(_DWORD *)(SessionSystemDpiMetrics + 8) = CharDimensionsInternal;
  *(_DWORD *)(SessionSystemDpiMetrics + 16) = v36.tmOverhang;
  tmAscent = v36.tmAscent;
  *(_DWORD *)(SessionSystemDpiMetrics + 20) = tmExternalLeading;
  v17 = *(_DWORD *)(SessionSystemDpiMetrics + 12) + tmExternalLeading + 2;
  *(_DWORD *)(SessionSystemDpiMetrics + 24) = tmAscent;
  *(_DWORD *)(SessionSystemDpiMetrics + 28) = v17;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  v18 = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), &v36, (int *)(v11 + 12), gbGreTextReady);
  v19 = v36.tmExternalLeading;
  *(_DWORD *)(v11 + 20) = v36.tmExternalLeading;
  v20 = *(_DWORD *)(v11 + 12) + v19 + 2;
  *(_DWORD *)(v11 + 8) = v18;
  *(_DWORD *)(v11 + 16) = v36.tmOverhang;
  *(_DWORD *)(v11 + 24) = v36.tmAscent;
  *(_DWORD *)(v11 + 28) = v20;
  ++*(_DWORD *)(SessionSystemDpiMetrics + 24);
  ++*(_DWORD *)(v11 + 24);
  v21 = *(struct HLFONT__ **)(SessionSystemDpiMetrics + 48);
  if ( v21 && v21 != *(struct HLFONT__ **)(SessionSystemDpiServerInfo + 48) )
  {
    GreMarkDeletableFont(v21);
    GreDeleteObject(*(_QWORD *)(SessionSystemDpiMetrics + 48));
    *(_QWORD *)(SessionSystemDpiMetrics + 48) = 0LL;
  }
  GreExtGetObjectW(*(_QWORD *)SessionSystemDpiMetrics);
  v22 = v36.tmExternalLeading;
  if ( v36.tmExternalLeading <= 700 )
    v22 = 700;
  v36.tmExternalLeading = v22;
  v23 = GreCreateFontIndirectW(&v36);
  *(_QWORD *)(SessionSystemDpiMetrics + 48) = v23;
  if ( v23 )
  {
    LOBYTE(v24) = 10;
    HmgMarkUndeletable(v23, v24);
    GreSetLFONTOwner(*(_QWORD *)(SessionSystemDpiMetrics + 48), 0LL);
  }
  v25 = *(struct HLFONT__ **)(v11 + 48);
  if ( v25 && v25 != *(struct HLFONT__ **)(v5 + 48) )
  {
    GreMarkDeletableFont(v25);
    GreDeleteObject(*(_QWORD *)(v11 + 48));
    *(_QWORD *)(v11 + 48) = 0LL;
  }
  GreExtGetObjectW(*(_QWORD *)v11);
  v26 = v36.tmExternalLeading;
  if ( v36.tmExternalLeading <= 700 )
    v26 = 700;
  v36.tmExternalLeading = v26;
  v27 = GreCreateFontIndirectW(&v36);
  *(_QWORD *)(v11 + 48) = v27;
  if ( v27 )
  {
    LOBYTE(v28) = 10;
    HmgMarkUndeletable(v27, v28);
    GreSetLFONTOwner(*(_QWORD *)(v11 + 48), 0LL);
  }
  if ( v12 )
  {
    *v12 = *(_OWORD *)(a2 + 316);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x10) = *(_OWORD *)(a2 + 332);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x20) = *(_OWORD *)(a2 + 348);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x30) = *(_OWORD *)(a2 + 364);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x40) = *(_OWORD *)(a2 + 380);
    *(_QWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x50) = *(_QWORD *)(a2 + 396);
    *(_DWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x58) = *(_DWORD *)(a2 + 404);
  }
  if ( !(unsigned int)UserSetFont(v35, (a2 + 24) & -(__int64)(a2 != 0), 156LL, SessionSystemDpiMetrics + 56)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionSystemDpiMetrics + 56), v11 + 56) )
  {
    return 0LL;
  }
  if ( v12 )
  {
    *v12 = *(_OWORD *)(a2 + 408);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x10) = *(_OWORD *)(a2 + 424);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x20) = *(_OWORD *)(a2 + 440);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x30) = *(_OWORD *)(a2 + 456);
    *(_OWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x40) = *(_OWORD *)(a2 + 472);
    *(_QWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x50) = *(_QWORD *)(a2 + 488);
    *(_DWORD *)(((a2 + 24) & -(__int64)(a2 != 0)) + 0x58) = *(_DWORD *)(a2 + 496);
  }
  if ( !(unsigned int)UserSetFont(v35, v12, 157LL, SessionSystemDpiServerInfo + 24)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionSystemDpiServerInfo + 24), v5 + 24) )
  {
    return 0LL;
  }
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  v29 = GetCharDimensionsInternal(
          *(HDC *)(gpDispInfo + 56LL),
          0LL,
          (int *)(SessionSystemDpiServerInfo + 36),
          gbGreTextReady);
  *(_DWORD *)(SessionSystemDpiServerInfo + 32) = v29;
  LongestString = (50 * v29 + 2) / 4;
  if ( LongestString <= xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 56LL)) )
    LongestString = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 56LL));
  *(_DWORD *)(SessionSystemDpiServerInfo + 40) = LongestString;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  v31 = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, (int *)(v5 + 36), gbGreTextReady);
  *(_DWORD *)(v5 + 32) = v31;
  v32 = (50 * v31 + 2) / 4;
  if ( v32 <= xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 56LL)) )
    v32 = xxxMB_FindLongestString(*(HDC *)(gpDispInfo + 56LL));
  *(_DWORD *)(v5 + 40) = v32;
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  for ( i = gpDpiKernelModeMetricsCache; i; i = *(_QWORD *)(i + 8) )
    ClearKMDpiMetricsCacheNodeDPISERVERINFO((struct tagDpiKMMetricsCacheNode *)i);
  return 1LL;
}
