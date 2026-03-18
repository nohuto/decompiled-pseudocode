/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164A80
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800201CC (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180164784 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetD2DBitmapRealizationForContextOwner(
        struct CComposition **this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  struct CComposition *v13; // rcx
  int BitmapSource; // eax
  struct IBitmapSource *v15; // rcx
  int v16; // eax
  const struct _GUID *v17; // r9
  int D2DBitmapFromBitmapSource; // eax
  _BYTE v20[4]; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+34h] [rbp-2Ch]
  int v22; // [rsp+38h] [rbp-28h]
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+48h] [rbp-18h]
  int v25; // [rsp+4Ch] [rbp-14h]
  int v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+58h] [rbp-8h]
  char v28; // [rsp+90h] [rbp+30h] BYREF
  struct IBitmapSource *v29; // [rsp+A0h] [rbp+40h] BYREF

  v29 = 0LL;
  *a3 = 0LL;
  v6 = -2147467259;
  if ( !CHwndBitmap::IsValidVisual((CHwndBitmap *)(this - 11)) )
    goto LABEL_9;
  v24 = 0;
  v7 = CHwndBitmap::EnsureCachedVisualImage(this - 11);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xD7u);
    goto LABEL_9;
  }
  v8 = *(_QWORD *)(*(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(*(_QWORD *)a2 + 48LL))(a2, &v28);
  v9 = *(_QWORD *)a2;
  v23 = v8;
  v10 = *(_DWORD *)(*(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(v9 + 56))(a2, &v28);
  v11 = *(_QWORD *)a2;
  v24 = v10;
  v12 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(v11 + 64))(a2);
  v13 = this[51];
  v26 = 0;
  v27 = 0LL;
  v25 = v12;
  BitmapSource = CCachedVisualImage::GetBitmapSource(
                   (struct CComposition *)((char *)v13 + 8),
                   &v29,
                   (const struct BitmapSourceInfo *)&v23);
  v6 = BitmapSource;
  if ( BitmapSource < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0xE0u);
LABEL_9:
    v15 = v29;
    goto LABEL_10;
  }
  v15 = v29;
  if ( v29 )
  {
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v29 + 40LL))(v29);
    v21 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v29 + 32LL))(v29);
    v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v29 + 40LL))(v29);
    v17 = (const struct _GUID *)((char *)*(this - 7) + 324);
    v22 = v16;
    D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                  v29,
                                  (const struct PixelFormatInfo *)v20,
                                  (const struct BitmapSourceInfo *)&v23,
                                  v17,
                                  a3);
    v6 = D2DBitmapFromBitmapSource;
    if ( D2DBitmapFromBitmapSource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0xEFu);
    goto LABEL_9;
  }
LABEL_10:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v15);
  return v6;
}
