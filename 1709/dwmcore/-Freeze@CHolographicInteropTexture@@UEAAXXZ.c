/*
 * XREFs of ?Freeze@CHolographicInteropTexture@@UEAAXXZ @ 0x1800C1760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::Freeze(CHolographicInteropTexture *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 15);
}
