/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180213FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180213A40 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180213DF0 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        char a4,
        struct ID2D1Bitmap1 **a5)
{
  struct ID2D1Bitmap1 **v5; // r14
  CDxHandleAdvancedDirectFlipBitmapRealization *v7; // rcx
  int D2DBitmapFromBitmapSource; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-40h]
  _DWORD v14[4]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]
  int v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+58h] [rbp-8h]
  struct IBitmapSource *v20; // [rsp+80h] [rbp+20h] BYREF

  v5 = a5;
  v20 = 0LL;
  v7 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 144);
  *a5 = 0LL;
  if ( *((_QWORD *)v7 + 52) || *((_QWORD *)v7 + 53) )
  {
    D2DBitmapFromBitmapSource = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v7, a2);
    v10 = D2DBitmapFromBitmapSource;
    if ( D2DBitmapFromBitmapSource < 0 )
    {
      v13 = 86;
      goto LABEL_13;
    }
    D2DBitmapFromBitmapSource = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**(_QWORD **)(a1 + 272)
                                                                                           + 232LL))(
                                  *(_QWORD *)(a1 + 272),
                                  &v20);
    v10 = D2DBitmapFromBitmapSource;
    if ( D2DBitmapFromBitmapSource < 0 )
    {
      v13 = 88;
      goto LABEL_13;
    }
    if ( v20 )
    {
      v11 = *(_QWORD *)a2;
      v14[2] = 0;
      v17 = 0;
      v19 = 0LL;
      v15 = v11;
      v16 = *(_DWORD *)(a2 + 8);
      v14[0] = 87;
      v14[1] = 3;
      v18 = 1;
      D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                    v20,
                                    (const struct PixelFormatInfo *)v14,
                                    (const struct BitmapSourceInfo *)&v15,
                                    v5);
      v10 = D2DBitmapFromBitmapSource;
      if ( D2DBitmapFromBitmapSource < 0 )
      {
        v13 = 110;
        goto LABEL_13;
      }
    }
    else
    {
      v10 = -2003292287;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292287, 0x5Bu);
    }
  }
  else
  {
    D2DBitmapFromBitmapSource = CDxHandleBitmapRealization::GetD2DBitmap(a1, a2, a3, a4, v5);
    v10 = D2DBitmapFromBitmapSource;
    if ( D2DBitmapFromBitmapSource < 0 )
    {
      v13 = 117;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, v13);
    }
  }
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v20);
  return v10;
}
