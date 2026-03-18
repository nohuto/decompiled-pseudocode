/*
 * XREFs of ?EndOfFrame@CHwCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3B70
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     Template_qqqqqqqq @ 0x180144520 (Template_qqqqqqqq.c)
 */

void __fastcall CHwCallbackRendererEvents::EndOfFrame(CHwCallbackRendererEvents *this, struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqqqqqq(
      (_DWORD)this,
      (_DWORD)a2,
      *(_DWORD *)a2,
      *((_DWORD *)a2 + 1),
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *((_DWORD *)a2 + 4),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 5),
      *((_DWORD *)a2 + 20));
}
