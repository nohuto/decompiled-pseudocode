/*
 * XREFs of ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x180134240
 * Callers:
 *     ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x1801341A0 (-ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ProcessEnableClear(
        CHwndRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 800) != v3 )
  {
    *((_BYTE *)this + 800) = v3;
    *((_BYTE *)this + 802) = 1;
  }
  return 0LL;
}
