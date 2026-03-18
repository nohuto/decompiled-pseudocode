/*
 * XREFs of ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x18003F04C
 * Callers:
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18003CF88 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18013CE5C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x180197C68 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18003EE90 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 */

void __fastcall KeyframeSequence::ResetTime(KeyframeSequence *this, int a2, bool a3)
{
  KeyframeSequence::ConfigureTimer(this);
  *((_DWORD *)this + 20) = a2;
  Timer::Update((KeyframeSequence *)((char *)this + 80), 0, a3);
}
