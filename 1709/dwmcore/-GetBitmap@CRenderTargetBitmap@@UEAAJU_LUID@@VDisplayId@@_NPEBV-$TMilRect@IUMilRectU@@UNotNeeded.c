/*
 * XREFs of ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008B370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008A8A0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?Validate@CRenderTargetBitmap@@IEAAJXZ @ 0x18008B010 (-Validate@CRenderTargetBitmap@@IEAAJXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18008B048 (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        __m128i *a5,
        char a6,
        _QWORD *a7)
{
  int Bitmap; // eax
  unsigned int v12; // esi
  DWORD v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-38h]

  *a7 = 0LL;
  Bitmap = CRenderTargetBitmap::Validate((CRenderTargetBitmap *)(a1 - 16));
  v12 = Bitmap;
  if ( Bitmap < 0 )
  {
    v15 = 172;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 160) )
  {
    if ( a5 || a6 )
    {
      v12 = -2003292287;
      v15 = 187;
    }
    else
    {
      Bitmap = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(a1 - 16, a2, a3);
      v12 = Bitmap;
      if ( Bitmap < 0 )
      {
        v15 = 190;
        goto LABEL_18;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 152LL))(*(_QWORD *)(a1 + 136)) || a4 )
      {
        Bitmap = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 136) + 96LL))(
                   *(_QWORD *)(a1 + 136),
                   a7);
        v12 = Bitmap;
        if ( Bitmap >= 0 )
          return v12;
        v15 = 197;
        goto LABEL_18;
      }
      v12 = -2147024891;
      v15 = 194;
    }
    v14 = v12;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v15);
    return v12;
  }
  Bitmap = CD2DBitmapCache::GetBitmap(a1, (struct _LUID)a2, a3, a4, a5, a6, a7);
  v12 = Bitmap;
  if ( Bitmap < 0 )
  {
    v15 = 181;
LABEL_18:
    v14 = Bitmap;
    goto LABEL_19;
  }
  return v12;
}
