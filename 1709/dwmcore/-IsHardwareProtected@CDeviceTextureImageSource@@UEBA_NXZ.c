/*
 * XREFs of ?IsHardwareProtected@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1801D4A10
 * Callers:
 *     ?IsHardwareProtected@CDeviceTextureImageSource@@W7EBA_NXZ @ 0x1800C7250 (-IsHardwareProtected@CDeviceTextureImageSource@@W7EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureImageSource::IsHardwareProtected(CDeviceTextureImageSource *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 2) + 168LL) & 0x80000) != 0;
}
