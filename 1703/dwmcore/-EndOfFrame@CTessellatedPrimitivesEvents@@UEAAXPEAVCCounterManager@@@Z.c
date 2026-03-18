/*
 * XREFs of ?EndOfFrame@CTessellatedPrimitivesEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3BB0
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     Template_qqq @ 0x18013FBE8 (Template_qqq.c)
 */

void __fastcall CTessellatedPrimitivesEvents::EndOfFrame(
        CTessellatedPrimitivesEvents *this,
        struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqq(
      (_DWORD)this,
      (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a2 + 13),
      *((_DWORD *)a2 + 14));
}
