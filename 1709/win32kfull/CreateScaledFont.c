/*
 * XREFs of CreateScaledFont @ 0x1C01A1438
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C007810C (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01A11E4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01A12FC (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C00B1984 (GreCreateFontIndirectW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0108B7C (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(
        HBRUSH a1,
        __int64 *a2,
        __int64 a3,
        INT a4,
        _DWORD *a5,
        int *a6,
        struct tagTEXTMETRICW *a7)
{
  unsigned __int8 v9; // di
  __int64 FontIndirectW; // rax
  __int64 v11; // r14
  int CharDimensionsInternal; // eax
  INT a; // [rsp+20h] [rbp-98h] BYREF
  INT v15; // [rsp+24h] [rbp-94h]

  *a2 = 0LL;
  v9 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (char *)&a) )
  {
    a = EngMulDiv(a, a4, 96);
    v15 = EngMulDiv(v15, a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v9 = 1;
      if ( a5 || a6 || a7 )
      {
        v11 = GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), FontIndirectW);
        CharDimensionsInternal = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), a7, a6, gbGreTextReady);
        if ( a5 )
          *a5 = CharDimensionsInternal;
        GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), v11);
      }
    }
  }
  return v9;
}
