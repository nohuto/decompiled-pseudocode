/*
 * XREFs of ?IsHDRContent@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1801D4A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDeviceTextureImageSource::IsHDRContent(CDeviceTextureImageSource *this)
{
  return IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(*((_QWORD *)this + 2) + 180LL));
}
