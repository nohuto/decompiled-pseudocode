/*
 * XREFs of ?GetTextureOffset@CHolographicInteropTexture@@UEAAXPEAH0@Z @ 0x1800CC8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::GetTextureOffset(CHolographicInteropTexture *this, int *a2, int *a3)
{
  *a2 = *((_DWORD *)this + 17);
  *a3 = *((_DWORD *)this + 18);
}
