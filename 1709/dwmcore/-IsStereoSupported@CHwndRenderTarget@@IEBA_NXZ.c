/*
 * XREFs of ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x1800C4BA0
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z @ 0x1800C4B30 (-NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsStereoSupported(CHwndRenderTarget *this)
{
  char v1; // dl
  __int64 v2; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 816) )
  {
    v2 = *((_QWORD *)this + 14);
    if ( v2 )
      return *(_BYTE *)(v2 + 296) != 0;
  }
  return v1;
}
