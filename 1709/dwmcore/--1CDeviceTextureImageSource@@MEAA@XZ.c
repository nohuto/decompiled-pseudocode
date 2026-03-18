/*
 * XREFs of ??1CDeviceTextureImageSource@@MEAA@XZ @ 0x1801D4628
 * Callers:
 *     ??_ECDeviceTextureImageSource@@MEAAPEAXI@Z @ 0x1801D4660 (--_ECDeviceTextureImageSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDeviceTextureImageSource::~CDeviceTextureImageSource(CDeviceTextureImageSource *this)
{
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease((CD3DLockableTexture **)this + 4);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
