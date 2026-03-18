/*
 * XREFs of ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18000B470
 * Callers:
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000A8F8 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B54B0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180079BA0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18007A740 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        bool a4,
        struct ID2D1Bitmap1 **a5)
{
  int v5; // esi
  CDxHandleBitmapRealization *v6; // rcx
  __int64 (*v10)(void); // rax
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // ebx
  int Bitmap; // eax

  v5 = a1;
  v6 = (CDxHandleBitmapRealization *)(a1 - 104);
  *a5 = 0LL;
  v10 = *(__int64 (**)(void))(*(_QWORD *)v6 + 104LL);
  if ( (char *)v10 == (char *)CDxHandleBitmapRealization::EnsureD2DBitmap )
    v11 = CDxHandleBitmapRealization::EnsureD2DBitmap(v6);
  else
    v11 = v10();
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB0u);
  }
  else
  {
    LOBYTE(v12) = *(_BYTE *)(a2 + 16);
    Bitmap = CD2DBitmapCache::GetBitmap(v5 - 88, *(_QWORD *)a2, *(_DWORD *)(a2 + 8), v12, a3, a4, a5);
    v13 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0xB7u);
  }
  return v13;
}
