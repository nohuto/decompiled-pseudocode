/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A5060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A5118 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x1800A3818 (-GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800A3848 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A3E58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x1800A6AC4 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x1800A6C58 (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6D00 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A96CC (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  int v5; // eax
  signed int v6; // eax
  int v7; // edi
  KeyframeSequence *v8; // rcx
  int v10; // ecx
  int v11; // edx
  KeyframeSequence *v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // edx
  __int64 v15; // rcx

  if ( (*((_BYTE *)this + 456) & 0x40) == 0 )
  {
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  if ( !a2 )
  {
LABEL_6:
    v8 = (KeyframeSequence *)*((_QWORD *)this + 39);
    if ( (*((_BYTE *)v8 + 132) & 1) != 0 )
      KeyframeSequence::Stop(v8);
    goto LABEL_8;
  }
  v5 = *((_DWORD *)this + 113);
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 95) = *((_DWORD *)this + 94);
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    v12 = *(KeyframeSequence **)(v15 + 312);
  }
  else
  {
    if ( v5 != 2 )
      goto LABEL_5;
    *((_DWORD *)this + 95) = *((_DWORD *)this + 94);
    CKeyframeAnimation::GetAnimationTimeLength(this);
    v10 = *((_DWORD *)this + 105);
    v11 = 0;
    if ( v10 >= 1 )
      v11 = v10 - 1;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v11);
    v12 = (KeyframeSequence *)*((_QWORD *)this + 39);
    v14 = v13;
  }
  KeyframeSequence::ResetTime(v12, v14, 1);
LABEL_5:
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 39), a3);
  v6 = CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 39));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_6;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x820u);
LABEL_9:
  *((_BYTE *)this + 456) &= 0x1Fu;
  *((_BYTE *)this + 457) &= ~1u;
  *((_DWORD *)this + 95) = 0;
  if ( v7 >= 0 )
    CKeyframeAnimation::OnAnimationEvent(this, 2LL, a3);
  return (unsigned int)v7;
}
