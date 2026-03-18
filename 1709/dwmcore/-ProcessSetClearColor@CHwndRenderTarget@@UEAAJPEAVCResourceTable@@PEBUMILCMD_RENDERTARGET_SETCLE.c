/*
 * XREFs of ?ProcessSetClearColor@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETCLEARCOLOR@@@Z @ 0x180136290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ProcessSetClearColor(
        CHwndRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 800) == 0;
  *(_OWORD *)((char *)this + 396) = *(_OWORD *)((char *)a3 + 8);
  if ( !v3 )
    *((_BYTE *)this + 802) = 1;
  return 0LL;
}
