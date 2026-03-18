/*
 * XREFs of ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x18019AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

void __fastcall CD2DBitmap::ReadTexture(CD2DBitmap *this)
{
  struct ID3D11Texture2D *v1; // rdx

  v1 = (struct ID3D11Texture2D *)*((_QWORD *)this + 3);
  if ( v1 )
    CD3DDeviceLevel1::ReadTexture(*(CD3DDeviceLevel1 **)(*((_QWORD *)this - 10) + 24LL), v1);
}
