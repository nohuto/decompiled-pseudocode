/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A3E58
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A3B34 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180084C5C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800A0FA0 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A1CD0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x1800A37D0 (-IsWaiting@CKeyframeAnimation@@QEBA_NXZ.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A3BC4 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // ebx
  CKeyframeAnimation *v7; // rcx
  struct CExpressionValueStack *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  DWORD v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 456) & 0x10) != 0 )
    return 0;
  v2 = a2 - 1;
  if ( !v2 )
  {
    v9 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
    v5 = v9;
    if ( v9 >= 0 )
      return 0;
    v13 = 1539;
    goto LABEL_22;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 252) == 4 && (*(_BYTE *)(a1 + 192) & 2) != 0 )
    {
      *(_DWORD *)(a1 + 252) = 2;
      if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
      {
        v11 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 216LL), 2, (int *)v10);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x4B9u);
      }
    }
    if ( v5 >= 0 )
      return 0;
    v13 = 1543;
    goto LABEL_21;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 252) = 4;
    if ( CKeyframeAnimation::IsWaiting((CKeyframeAnimation *)a1) )
      return 0;
    v9 = CKeyframeAnimation::SampleExpressionsAndStartingValue(v7, v8);
    v5 = v9;
    if ( v9 >= 0 )
      return 0;
    v13 = 1553;
LABEL_22:
    v12 = v9;
    goto LABEL_23;
  }
  if ( v4 != 28 )
  {
    v5 = -2147024809;
    v13 = 1563;
LABEL_21:
    v12 = v5;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v13);
    return (unsigned int)v5;
  }
  return 0;
}
