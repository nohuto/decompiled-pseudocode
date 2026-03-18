/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3D50
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C0044284 (GetDPIMETRICSForDpiUnsafe.c)
 *     GetDPIServerInfoForDpiUnsafe @ 0x1C010352C (GetDPIServerInfoForDpiUnsafe.c)
 * Callees:
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C013DCC8 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01C3CB0 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     CreateScaledFont @ 0x1C01C3F3C (CreateScaledFont.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  __int64 v2; // r15
  HFONT *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rdi
  int CharDimensionsInternal; // eax
  LONG tmExternalLeading; // ecx
  LONG tmAscent; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  struct tagTEXTMETRICW v13; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_WORD *)a1 + 1) )
  {
    v2 = Get96DpiMetrics();
    v3 = (HFONT *)Get96DpiServerInfo();
    EnsureScaledFontAndGetDimensions(
      v3[1],
      (HFONT *)a1 + 3,
      (__int64)a1 + 36,
      *(unsigned __int16 *)a1,
      (int *)a1 + 8,
      (int *)a1 + 9);
    EnsureScaledFontAndGetDimensions(
      v3[3],
      (HFONT *)a1 + 5,
      (__int64)a1 + 48,
      *(unsigned __int16 *)a1,
      (int *)a1 + 12,
      (int *)a1 + 13);
    EnsureScaledFontAndGetDimensions(
      v3[6],
      (HFONT *)a1 + 8,
      v4,
      *(unsigned __int16 *)a1,
      (int *)a1 + 18,
      (int *)a1 + 19);
    EnsureScaledFontAndGetDimensions(
      *(HFONT *)(v2 + 32),
      (HFONT *)a1 + 22,
      v5,
      *(unsigned __int16 *)a1,
      (int *)a1 + 46,
      (int *)a1 + 47);
    if ( !*((_QWORD *)a1 + 18) )
    {
      if ( (unsigned int)CreateScaledFont(*(_QWORD *)v2, (char *)a1 + 144, v6, *(unsigned __int16 *)a1) )
      {
        v7 = GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL), *((_QWORD *)a1 + 18), 1);
        CharDimensionsInternal = GetCharDimensionsInternal(
                                   *(HDC *)(gpDispInfo + 56LL),
                                   &v13,
                                   (int *)a1 + 39,
                                   gbGreTextReady);
        *((_DWORD *)a1 + 40) = v13.tmOverhang;
        tmExternalLeading = v13.tmExternalLeading;
        *((_DWORD *)a1 + 38) = CharDimensionsInternal;
        tmAscent = v13.tmAscent;
        *((_DWORD *)a1 + 41) = tmExternalLeading;
        *((_DWORD *)a1 + 43) = *((_DWORD *)a1 + 39) + tmExternalLeading + 2;
        *((_DWORD *)a1 + 42) = tmAscent + 1;
        GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL), v7, 1);
      }
    }
    EnsureScaledFontAndGetDimensions(*(HFONT *)(v2 + 48), (HFONT *)a1 + 24, v6, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions(*(HFONT *)(v2 + 56), (HFONT *)a1 + 25, v11, *(unsigned __int16 *)a1, 0LL, 0LL);
    EnsureScaledFontAndGetDimensions(*(HFONT *)(v2 + 64), (HFONT *)a1 + 26, v12, *(unsigned __int16 *)a1, 0LL, 0LL);
    *((_WORD *)a1 + 1) = 0;
  }
}
