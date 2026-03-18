/*
 * XREFs of ?ProcessSetClearColor@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETCLEARCOLOR@@@Z @ 0x1801462E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ProcessSetClearColor(
        CHwndRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_TARGET_SETCLEARCOLOR *a3)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 784) == 0;
  *(_OWORD *)((char *)this + 396) = *(_OWORD *)((char *)a3 + 8);
  if ( !v3 )
    *((_BYTE *)this + 787) = 1;
  return 0LL;
}
