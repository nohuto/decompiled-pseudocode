/*
 * XREFs of ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x180046BE8
 * Callers:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180047D18 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x180047470 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 */

char __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(
        __int64 a1,
        __int64 a2,
        int a3,
        struct _GUID *a4)
{
  CRenderTargetBitmap *v4; // rcx
  int v6; // ebx
  char v7; // si
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]
  struct _LUID v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a2;
  v4 = *(CRenderTargetBitmap **)(a1 + 8);
  v6 = a2;
  v7 = 0;
  v9 = 0;
  if ( (int)CRenderTargetBitmap::GetDeviceInfo(v4, &v11, (struct DisplayId *)&v9, a4) >= 0
    && v6 == v11.LowPart
    && HIDWORD(v10) == v11.HighPart
    && (v9 == DisplayId::None || a3 == v9) )
  {
    return 1;
  }
  return v7;
}
