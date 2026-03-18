/*
 * XREFs of ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801F9590
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x1801F8F54 (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 */

void __fastcall CHolographicComposition::DetachFromChannel(CHolographicManager **this, struct CChannelContext *a2)
{
  if ( this[10] )
  {
    if ( *((_BYTE *)this + 108) )
      CHolographicManager::RemoveHolographicComposition(this[10], (struct CHolographicComposition *)this);
  }
}
