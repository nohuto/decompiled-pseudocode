/*
 * XREFs of ?IsStereoSupported@CHwndRenderTarget@@IEBA_NXZ @ 0x1800602B8
 * Callers:
 *     ?NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z @ 0x180044050 (-NeedsStereoChange@CDesktopRenderTarget@@UEAA_N_N@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsStereoSupported(CHwndRenderTarget *this)
{
  char v1; // dl
  __int64 v2; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 860) )
  {
    v2 = *((_QWORD *)this + 21);
    if ( v2 )
      return *(_BYTE *)(v2 + 316) != 0;
  }
  return v1;
}
