/*
 * XREFs of ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C013DCC8
 * Callers:
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     FinalUserInit @ 0x1C000EC20 (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C013DA38 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01C3CB0 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3D50 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     _GetTextMetricsW @ 0x1C000C444 (_GetTextMetricsW.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 */

__int64 __fastcall GetCharDimensionsInternal(HDC a1, struct tagTEXTMETRICW *a2, int *a3, int a4)
{
  int v8; // ecx
  __int64 v9; // xmm3_8
  __int128 v10; // xmm5
  unsigned int v11; // esi
  __int128 v12; // xmm4
  __int64 DPIServerInfo; // rax
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __m128i v16; // xmm1
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __m128i v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+68h] [rbp-8h]
  struct tagSIZE v23; // [rsp+98h] [rbp+28h] BYREF

  if ( a4 && (unsigned int)GetTextMetricsW(a1, (__int64)&v18) )
  {
    v8 = v22;
    v9 = v21;
    v10 = v20;
    v11 = v19.m128i_u32[1];
    v12 = v18;
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo((__int64)a1);
    v8 = *(_DWORD *)(DPIServerInfo + 120);
    v14 = *(_OWORD *)(DPIServerInfo + 64);
    v15 = *(_QWORD *)(DPIServerInfo + 112);
    v10 = *(_OWORD *)(DPIServerInfo + 96);
    v19 = *(__m128i *)(DPIServerInfo + 80);
    v21 = v15;
    v12 = v14;
    v9 = v15;
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
    v18 = v14;
    if ( !v19.m128i_i32[1] )
      v11 = 8;
    v19.m128i_i32[1] = v11;
  }
  if ( a2 )
  {
    v16 = v19;
    *(_OWORD *)&a2->tmHeight = v12;
    *(__m128i *)&a2->tmExternalLeading = v16;
    *(_OWORD *)&a2->tmOverhang = v10;
    *(_QWORD *)&a2->tmDefaultChar = v9;
    *(_DWORD *)&a2->tmCharSet = v8;
  }
  if ( a3 )
    *a3 = v18;
  if ( a4
    && (v21 & 0x100000000000000LL) != 0
    && (unsigned int)GreGetTextExtentW(a1, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v23, 1) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v23.cx) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v23.cx) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v11;
  }
}
