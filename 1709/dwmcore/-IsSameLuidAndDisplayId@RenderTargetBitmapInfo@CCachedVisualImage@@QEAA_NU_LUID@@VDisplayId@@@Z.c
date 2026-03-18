/*
 * XREFs of ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18008ADA0
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18008E438 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 * Callees:
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008B120 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 */

char __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  CRenderTargetBitmap *v3; // rcx
  int v5; // ebx
  char v6; // si
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h]
  struct _LUID v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a2;
  v3 = *(CRenderTargetBitmap **)(a1 + 8);
  v5 = a2;
  v6 = 0;
  v8 = 0;
  if ( (int)CRenderTargetBitmap::GetDeviceInfo(v3, &v10, (struct DisplayId *)&v8) >= 0
    && v5 == v10.LowPart
    && HIDWORD(v9) == v10.HighPart
    && (v8 == DisplayId::None || a3 == v8) )
  {
    return 1;
  }
  return v6;
}
