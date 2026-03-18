/*
 * XREFs of ?SetTimeReversed@KeyframeSequence@@QEAAX_N@Z @ 0x18003F838
 * Callers:
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003CE98 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x18003CF64 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::SetTimeReversed(KeyframeSequence *this, char a2)
{
  char v2; // al

  v2 = (16 * a2) | *((_BYTE *)this + 140) & 0xEF;
  *((_BYTE *)this + 140) = v2;
  if ( (v2 & 1) != 0 )
    *((_BYTE *)this + 102) = (v2 & 0x10) != 0;
}
