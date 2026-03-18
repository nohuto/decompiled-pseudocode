/*
 * XREFs of ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BB200
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A7440 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 */

KeyframeSequence **__fastcall std::unique_ptr<KeyframeSequence>::operator=(
        KeyframeSequence **a1,
        KeyframeSequence **a2)
{
  KeyframeSequence *v3; // rsi
  KeyframeSequence *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != *a1 )
    {
      if ( v4 )
      {
        KeyframeSequence::RemoveAllKeyFrames(*a1);
        WPF::ProcessHeapImpl::Free(v4);
      }
      *a1 = v3;
    }
  }
  return a1;
}
