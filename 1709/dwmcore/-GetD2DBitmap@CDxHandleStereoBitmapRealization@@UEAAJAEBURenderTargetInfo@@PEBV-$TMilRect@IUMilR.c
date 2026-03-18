/*
 * XREFs of ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801D2E70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008A8A0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801D2DC0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801D3270 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        char a4,
        _QWORD *a5)
{
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // r8
  CD2DBitmap **v12; // r10
  signed int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // r8
  struct _LUID v17; // rdx
  signed int Bitmap; // eax
  signed int v19; // eax

  v9 = CDxHandleStereoBitmapRealization::UseLeftBitmap(a1 - 144, *(unsigned int *)(a2 + 12));
  *a5 = 0LL;
  v13 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v12, v10, v11);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x3Du);
  }
  else
  {
    LOBYTE(v14) = *(_BYTE *)(a2 + 16);
    v16 = *(unsigned int *)(a2 + 8);
    v17 = *(struct _LUID *)a2;
    if ( v9 )
    {
      Bitmap = CD2DBitmapCache::GetBitmap(a1 - 128, v17, v16, v14, a3, a4, a5);
      v15 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bitmap, 0x46u);
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(__int64, struct _LUID, __int64, __int64))(*(_QWORD *)(a1 + 288) + 48LL))(
              a1 + 288,
              v17,
              v16,
              v14);
      v15 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x4Fu);
    }
  }
  return v15;
}
