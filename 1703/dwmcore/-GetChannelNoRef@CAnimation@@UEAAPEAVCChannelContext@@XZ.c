/*
 * XREFs of ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x1800BC520
 * Callers:
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BC5A0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CChannelContext *__fastcall CAnimation::GetChannelNoRef(CAnimation *this)
{
  return (struct CChannelContext *)*((_QWORD *)this - 1);
}
