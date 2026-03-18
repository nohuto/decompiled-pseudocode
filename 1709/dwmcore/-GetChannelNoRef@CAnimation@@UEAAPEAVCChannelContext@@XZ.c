/*
 * XREFs of ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x18002CD30
 * Callers:
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18002CDB0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CChannelContext *__fastcall CAnimation::GetChannelNoRef(CAnimation *this)
{
  return (struct CChannelContext *)*((_QWORD *)this - 1);
}
