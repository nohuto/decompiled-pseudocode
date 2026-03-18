/*
 * XREFs of ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180214D40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180179BD0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180214C90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1802151A0 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        char a4,
        _QWORD *a5)
{
  char v9; // bp
  CD2DBitmap **v10; // r10
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // r8
  struct _LUID v15; // rdx
  int Bitmap; // eax
  int v17; // eax

  v9 = CDxHandleStereoBitmapRealization::UseLeftBitmap(a1 - 144, *(unsigned int *)(a2 + 12));
  *a5 = 0LL;
  v11 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v10);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3Du);
  }
  else
  {
    LOBYTE(v12) = *(_BYTE *)(a2 + 16);
    v14 = *(unsigned int *)(a2 + 8);
    v15 = *(struct _LUID *)a2;
    if ( v9 )
    {
      Bitmap = CD2DBitmapCache::GetBitmap(a1 - 128, v15, v14, v12, a3, a4, a5);
      v13 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bitmap, 0x46u);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64, struct _LUID, __int64, __int64))(*(_QWORD *)(a1 + 288) + 48LL))(
              a1 + 288,
              v15,
              v14,
              v12);
      v13 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x4Fu);
    }
  }
  return v13;
}
