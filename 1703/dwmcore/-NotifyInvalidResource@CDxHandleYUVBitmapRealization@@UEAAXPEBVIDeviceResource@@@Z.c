/*
 * XREFs of ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B72B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1801B72E0 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::NotifyInvalidResource(
        CDxHandleYUVBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  CDxHandleYUVBitmapRealization::ReleaseVidMemOnlyTexture((CDxHandleYUVBitmapRealization *)((char *)this - 24));
  CBitmapRealization::NotifyInvalidResource(this, a2);
}
