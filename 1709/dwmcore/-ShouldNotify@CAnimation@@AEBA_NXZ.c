/*
 * XREFs of ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x18002CD18
 * Callers:
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18002CB70 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18002CDB0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAnimation::ShouldNotify(CAnimation *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 75) )
  {
    if ( *((_DWORD *)this + 74) )
      return 1;
  }
  return result;
}
