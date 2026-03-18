/*
 * XREFs of ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180046E80
 * Callers:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180046F60 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNee.c)
 * Callees:
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18001650C (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18007A740 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        bool a6,
        struct ID2D1Bitmap1 **a7)
{
  int Bitmap; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]

  *a7 = 0LL;
  if ( !*(_QWORD *)(a1 + 104) )
  {
    v10 = -2003292404;
    v13 = 154;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 184) )
  {
    if ( a5 || a6 )
    {
      v10 = -2003292287;
      v13 = 170;
    }
    else
    {
      Bitmap = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(a1 - 16, a2, a3);
      v10 = Bitmap;
      if ( Bitmap < 0 )
      {
        v13 = 173;
        goto LABEL_14;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 168LL))(*(_QWORD *)(a1 + 104)) || a4 )
      {
        Bitmap = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**(_QWORD **)(a1 + 104) + 112LL))(
                   *(_QWORD *)(a1 + 104),
                   a7);
        v10 = Bitmap;
        if ( Bitmap >= 0 )
          return v10;
        v13 = 180;
        goto LABEL_14;
      }
      v10 = -2147024891;
      v13 = 177;
    }
LABEL_18:
    v12 = v10;
    goto LABEL_19;
  }
  Bitmap = CD2DBitmapCache::GetBitmap(a1, a2, a3, a4, a5, a6, a7);
  v10 = Bitmap;
  if ( Bitmap < 0 )
  {
    v13 = 164;
LABEL_14:
    v12 = Bitmap;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v13);
  }
  return v10;
}
