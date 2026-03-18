/*
 * XREFs of ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x1800A6C58
 * Callers:
 *     ?Seek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A38CC (-Seek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18011AAD0 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A7534 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 */

void __fastcall KeyframeSequence::ResetTime(KeyframeSequence *this, int a2, bool a3)
{
  __int64 v5; // r11

  KeyframeSequence::ConfigureTimer(this);
  *(_DWORD *)(v5 + 72) = a2;
  Timer::Update((Timer *)(v5 + 72), 0, a3);
}
