/*
 * XREFs of ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x1800BC4F8
 * Callers:
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180021760 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BC5A0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::ShouldNotify(CAnimation *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 75) )
  {
    if ( *((_DWORD *)this + 74) )
      return 1LL;
  }
  return result;
}
