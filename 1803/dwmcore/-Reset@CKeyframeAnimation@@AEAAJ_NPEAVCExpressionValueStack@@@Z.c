/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18003E4C0 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003E930 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18003E9F8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ @ 0x18003CE68 (-GetAnimationTimeLength@CKeyframeAnimation@@AEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003CE98 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18003D554 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x18003EDD8 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI_N@Z @ 0x18003F04C (-ResetTime@KeyframeSequence@@QEAAXI_N@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180052D08 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  int v5; // eax
  int v6; // eax
  int v7; // edi
  KeyframeSequence *v8; // rcx
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // r10d

  if ( *((char *)this + 508) >= 0 )
  {
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  if ( !a2 )
  {
LABEL_6:
    v8 = (KeyframeSequence *)*((_QWORD *)this + 41);
    if ( (*((_BYTE *)v8 + 140) & 1) != 0 )
      KeyframeSequence::Stop(v8);
    goto LABEL_8;
  }
  v5 = *((_DWORD *)this + 126);
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 105) = *((_DWORD *)this + 104);
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    v10 = 0;
  }
  else
  {
    if ( v5 != 2 )
      goto LABEL_5;
    *((_DWORD *)this + 105) = *((_DWORD *)this + 104);
    CKeyframeAnimation::GetAnimationTimeLength(this);
    v11 = *((_DWORD *)this + 118);
    v12 = 0;
    if ( v11 >= 1 )
      v12 = v11 - 1;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v12);
    v10 = v13;
  }
  KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 41), v10, 1);
LABEL_5:
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 41), a3);
  v6 = CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 41));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_6;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x95Bu);
LABEL_9:
  *((_BYTE *)this + 508) &= 0x3Fu;
  *((_BYTE *)this + 509) &= 0xFCu;
  *((_DWORD *)this + 105) = 0;
  if ( v7 >= 0 )
    CKeyframeAnimation::OnAnimationEvent(this, 2LL, a3);
  return (unsigned int)v7;
}
