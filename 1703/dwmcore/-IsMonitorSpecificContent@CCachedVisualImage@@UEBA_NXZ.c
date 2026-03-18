/*
 * XREFs of ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800484D0
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x180164DC0 (-IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180045EA4 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180046CD0 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x180047470 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 */

char __fastcall CCachedVisualImage::IsMonitorSpecificContent(
        CCachedVisualImage *this,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4)
{
  char v4; // bl
  unsigned int v6; // edi
  __int64 v7; // rsi
  CRenderTargetBitmap *v8; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v6 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)this + 22) + 48LL * v6;
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid(
             (CCachedVisualImage::RenderTargetBitmapInfo *)v7,
             a2,
             a3,
             a4)
        && !*(_BYTE *)(v7 + 44) )
      {
        v8 = *(CRenderTargetBitmap **)(v7 + 8);
        v10 = 0;
        if ( (int)CRenderTargetBitmap::GetDeviceInfo(v8, &v11, (struct DisplayId *)&v10, a4) >= 0
          && DisplayId::IsSpecific((DisplayId *)&v10) )
        {
          break;
        }
      }
      if ( ++v6 >= *((_DWORD *)this + 50) )
        return v4;
    }
    return 1;
  }
  return v4;
}
