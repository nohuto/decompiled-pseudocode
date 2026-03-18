/*
 * XREFs of ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0108B7C
 * Callers:
 *     ValidateExternalLogFont @ 0x1C00812F0 (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00BFE44 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     FinalUserInit @ 0x1C00DC870 (FinalUserInit.c)
 *     CreateScaledFont @ 0x1C01A1438 (CreateScaledFont.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C0108CF4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GetCharDimensionsInternal(HDC a1, struct tagTEXTMETRICW *a2, int *a3, int a4)
{
  int TextMetricsW; // eax
  __int64 v9; // xmm4_8
  int v10; // ecx
  __int128 v11; // xmm3
  __m128i v12; // xmm1
  __int128 v13; // xmm5
  unsigned int v14; // esi
  __int64 DPIServerInfo; // rax
  int v17; // [rsp+38h] [rbp-49h]
  __m128i v18; // [rsp+48h] [rbp-39h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  _OWORD v20[5]; // [rsp+78h] [rbp-9h] BYREF
  struct tagSIZE v21; // [rsp+F0h] [rbp+6Fh] BYREF

  if ( !a4 )
    goto LABEL_12;
  memset(v20, 0, 0x44uLL);
  TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v20);
  v9 = *(_QWORD *)&v20[3];
  v10 = DWORD2(v20[3]);
  HIBYTE(v19) = BYTE7(v20[3]);
  v11 = v20[0];
  v12 = (__m128i)v20[1];
  v13 = v20[2];
  v17 = v20[0];
  if ( TextMetricsW )
  {
    v14 = DWORD1(v20[1]);
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo();
    v10 = *(_DWORD *)(DPIServerInfo + 96);
    v13 = *(_OWORD *)(DPIServerInfo + 72);
    v18 = *(__m128i *)(DPIServerInfo + 56);
    v19 = *(_QWORD *)(DPIServerInfo + 88);
    v9 = v19;
    v11 = *(_OWORD *)(DPIServerInfo + 40);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
    v17 = v11;
    if ( !v18.m128i_i32[1] )
      v14 = 8;
    v18.m128i_i32[1] = v14;
    v12 = v18;
  }
  if ( a2 )
  {
    *(_OWORD *)&a2->tmHeight = v11;
    *(__m128i *)&a2->tmExternalLeading = v12;
    *(_OWORD *)&a2->tmOverhang = v13;
    *(_QWORD *)&a2->tmDefaultChar = v9;
    *(_DWORD *)&a2->tmCharSet = v10;
  }
  if ( a3 )
    *a3 = v17;
  if ( a4
    && (v19 & 0x100000000000000LL) != 0
    && (unsigned int)GreGetTextExtentW(a1, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 52, &v21, 1u) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v21.cx) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v21.cx) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v14;
  }
}
