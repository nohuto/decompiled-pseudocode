/*
 * XREFs of ?ReadTexture@CD2DBitmap@@UEBAXXZ @ 0x1801ABC70
 * Callers:
 *     <none>
 * Callees:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18018E758 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CD2DBitmap::ReadTexture(CD2DBitmap *this)
{
  struct ID3D11Texture2D *v1; // rcx

  v1 = (struct ID3D11Texture2D *)*((_QWORD *)this + 3);
  if ( v1 )
    DebugInspectTexture(v1, 0);
}
