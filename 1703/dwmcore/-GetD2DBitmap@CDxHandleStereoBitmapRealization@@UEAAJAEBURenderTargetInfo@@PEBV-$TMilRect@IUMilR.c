/*
 * XREFs of ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B6220
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18007A740 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801B60B0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801B6520 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        struct ID2D1Bitmap1 **a5)
{
  char v9; // bp
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // r8
  struct _LUID v14; // rdx
  int Bitmap; // eax
  int v16; // eax

  v9 = CDxHandleStereoBitmapRealization::UseLeftBitmap(a1 - 104, *(unsigned int *)(a2 + 12));
  *a5 = 0LL;
  v10 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap((CD2DBitmap **)(a1 - 104));
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x59u);
  }
  else
  {
    LOBYTE(v11) = *(_BYTE *)(a2 + 16);
    v13 = *(unsigned int *)(a2 + 8);
    v14 = *(struct _LUID *)a2;
    if ( v9 )
    {
      Bitmap = CD2DBitmapCache::GetBitmap(a1 - 88, v14, v13, v11, a3, a4, a5);
      v12 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0x62u);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(__int64, struct _LUID, __int64, __int64))(*(_QWORD *)(a1 + 344) + 56LL))(
              a1 + 344,
              v14,
              v13,
              v11);
      v12 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x6Bu);
    }
  }
  return v12;
}
