/*
 * XREFs of ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BCF10
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXXZ @ 0x1801C0E90 (-RemoveHolographicComposition@CHolographicManager@@QEAAXXZ.c)
 */

void __fastcall CHolographicComposition::DetachFromChannel(CHolographicComposition *this, struct CChannelContext *a2)
{
  CHolographicManager *v3; // rcx

  v3 = (CHolographicManager *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 68) )
      CHolographicManager::RemoveHolographicComposition(v3);
  }
}
