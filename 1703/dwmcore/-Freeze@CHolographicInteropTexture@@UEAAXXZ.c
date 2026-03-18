/*
 * XREFs of ?Freeze@CHolographicInteropTexture@@UEAAXXZ @ 0x1800CC8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::Freeze(CHolographicInteropTexture *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 13);
}
