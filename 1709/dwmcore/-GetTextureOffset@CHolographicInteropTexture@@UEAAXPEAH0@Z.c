/*
 * XREFs of ?GetTextureOffset@CHolographicInteropTexture@@UEAAXPEAH0@Z @ 0x1800C1770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::GetTextureOffset(CHolographicInteropTexture *this, int *a2, int *a3)
{
  *a2 = *((_DWORD *)this + 19);
  *a3 = *((_DWORD *)this + 20);
}
