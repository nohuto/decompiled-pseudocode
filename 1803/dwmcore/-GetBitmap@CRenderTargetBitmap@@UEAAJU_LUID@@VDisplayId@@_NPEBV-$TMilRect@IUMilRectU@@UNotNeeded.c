/*
 * XREFs of ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008A310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Validate@CRenderTargetBitmap@@IEAAJXZ @ 0x18008A884 (-Validate@CRenderTargetBitmap@@IEAAJXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18008A8BC (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180179BD0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  int Bitmap; // eax
  int v12; // r9d
  unsigned int v13; // esi
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-38h]

  *a7 = 0LL;
  Bitmap = CRenderTargetBitmap::Validate((CRenderTargetBitmap *)(a1 - 16));
  v13 = Bitmap;
  if ( Bitmap < 0 )
  {
    v16 = 177;
    goto LABEL_18;
  }
  if ( !*(_BYTE *)(a1 + 160) )
  {
    LOBYTE(v12) = a4;
    Bitmap = CD2DBitmapCache::GetBitmap(a1, a2, a3, v12, a5, a6, (__int64)a7);
    v13 = Bitmap;
    if ( Bitmap >= 0 )
      return v13;
    v16 = 186;
LABEL_18:
    v15 = Bitmap;
    goto LABEL_19;
  }
  if ( a5 || a6 )
  {
    v13 = -2003292287;
    v16 = 192;
    goto LABEL_14;
  }
  Bitmap = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(a1 - 16, a2, a3);
  v13 = Bitmap;
  if ( Bitmap < 0 )
  {
    v16 = 195;
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 160LL))(*(_QWORD *)(a1 + 136)) && !a4 )
  {
    v13 = -2147024891;
    v16 = 199;
LABEL_14:
    v15 = v13;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16);
    return v13;
  }
  Bitmap = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 136) + 88LL))(*(_QWORD *)(a1 + 136), a7);
  v13 = Bitmap;
  if ( Bitmap < 0 )
  {
    v16 = 202;
    goto LABEL_18;
  }
  return v13;
}
