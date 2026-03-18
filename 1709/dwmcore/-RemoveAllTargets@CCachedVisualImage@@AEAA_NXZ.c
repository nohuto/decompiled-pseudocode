/*
 * XREFs of ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18008E6B0
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18008EA8C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x180159530 (-NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18008A910 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800BEB44 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 */

char __fastcall CCachedVisualImage::RemoveAllTargets(CCachedVisualImage *this)
{
  int v1; // esi
  char v2; // di
  _QWORD *v3; // rbp
  __int64 v4; // rbx

  v1 = *((_DWORD *)this + 66);
  v2 = 0;
  if ( v1 > 0 )
  {
    v3 = (_QWORD *)((char *)this + 240);
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
