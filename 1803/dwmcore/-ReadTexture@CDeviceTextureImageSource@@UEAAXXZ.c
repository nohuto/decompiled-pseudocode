/*
 * XREFs of ?ReadTexture@CDeviceTextureImageSource@@UEAAXXZ @ 0x180216940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureImageSource::ReadTexture(CDeviceTextureImageSource *this)
{
  DebugInspectTexture(*(struct ID3D11Texture2D **)(*((_QWORD *)this + 1) + 120LL), 0);
}
