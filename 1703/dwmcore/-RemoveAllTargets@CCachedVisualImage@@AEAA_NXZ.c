/*
 * XREFs of ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180047F90
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18004827C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801658E0 (-NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180046654 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800C7D50 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 */

char __fastcall CCachedVisualImage::RemoveAllTargets(CCachedVisualImage *this)
{
  int v1; // esi
  char v2; // di
  _QWORD *v3; // rbp
  __int64 v4; // rbx

  v1 = *((_DWORD *)this + 52);
  v2 = 0;
  if ( v1 > 0 )
  {
    v3 = (_QWORD *)((char *)this + 184);
    v2 = 1;
    do
    {
      v4 = (unsigned int)(v1 - 1);
      CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)(*v3 + 48 * v4));
      DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v3, (unsigned int)v4);
      --v1;
    }
    while ( v1 > 0 );
  }
  return v2;
}
