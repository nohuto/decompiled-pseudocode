/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B54B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18000B470 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B51BC (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        bool a4,
        struct ID2D1Bitmap1 **a5)
{
  struct ID2D1Bitmap1 **v5; // r14
  CDxHandleAdvancedDirectFlipBitmapRealization *v7; // rcx
  int D2DBitmap; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int D2DBitmapFromBitmapSource; // eax
  _DWORD v16[4]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]
  struct IBitmapSource *v22; // [rsp+80h] [rbp+20h] BYREF

  v5 = a5;
  v22 = 0LL;
  v7 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(a1 - 104);
  *a5 = 0LL;
  if ( *((_QWORD *)v7 + 54) || *((_QWORD *)v7 + 55) )
  {
    v11 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v7, a2);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x58u);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**(_QWORD **)(a1 + 328) + 184LL))(
              *(_QWORD *)(a1 + 328),
              &v22);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x5Au);
      }
      else
      {
        v13 = *(_QWORD *)a2;
        v16[2] = 0;
        v19 = 0;
        v21 = 0LL;
        v17 = v13;
        v18 = *(_DWORD *)(a2 + 8);
        v16[0] = 87;
        v16[1] = 3;
        v20 = 1;
        D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                      v22,
                                      (const struct PixelFormatInfo *)v16,
                                      (const struct BitmapSourceInfo *)&v17,
                                      (const struct _GUID *)(a1 - 72),
                                      v5);
        v10 = D2DBitmapFromBitmapSource;
        if ( D2DBitmapFromBitmapSource < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0x6Du);
      }
    }
  }
  else
  {
    D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap(a1, a2, a3, a4, v5);
    v10 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x74u);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v22);
  return v10;
}
