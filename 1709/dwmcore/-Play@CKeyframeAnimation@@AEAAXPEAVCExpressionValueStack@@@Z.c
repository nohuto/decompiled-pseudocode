/*
 * XREFs of ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3B34
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800A3848 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A3E58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800A6C8C (-Play@KeyframeSequence@@QEAAXXZ.c)
 */

void __fastcall CKeyframeAnimation::Play(CKeyframeAnimation *this, struct CExpressionValueStack *a2)
{
  char v2; // al
  __int64 v5; // rcx

  v2 = *((_BYTE *)this + 456);
  if ( (v2 & 0x40) != 0 )
  {
    if ( (v2 & 0x20) == 0 && v2 >= 0 )
    {
      *((_BYTE *)this + 456) = v2 | 0x20;
      KeyframeSequence::Play(*((KeyframeSequence **)this + 39));
    }
  }
  else
  {
    *((_DWORD *)this + 104) = 0;
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::Play(*(KeyframeSequence **)(v5 + 312));
    *((_BYTE *)this + 456) = *((_BYTE *)this + 456) & 0x1F | 0x60;
    *((_DWORD *)this + 106) = *((_DWORD *)this + 105);
    CKeyframeAnimation::OnAnimationEvent(this, 4LL, a2);
    *((_BYTE *)this + 457) |= 1u;
  }
}
