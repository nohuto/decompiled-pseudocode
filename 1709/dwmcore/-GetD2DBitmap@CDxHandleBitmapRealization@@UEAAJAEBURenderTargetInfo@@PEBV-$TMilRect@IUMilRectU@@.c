/*
 * XREFs of ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18004D740
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801D2100 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008A8A0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  int v5; // esi
  int v9; // eax
  int v10; // r9d
  unsigned int v11; // ebx
  int Bitmap; // eax

  v5 = a1;
  *a5 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 144) + 80LL))(a1 - 144);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC4u);
  }
  else
  {
    LOBYTE(v10) = *(_BYTE *)(a2 + 16);
    Bitmap = CD2DBitmapCache::GetBitmap(v5 - 128, *(_QWORD *)a2, *(_DWORD *)(a2 + 8), v10, a3, a4, (__int64)a5);
    v11 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bitmap, 0xCBu);
  }
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(0LL);
  return v11;
}
