/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18003D554
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18003D13C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18003A870 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003B470 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?IsWaiting@CKeyframeAnimation@@QEBA_NXZ @ 0x18003CE1C (-IsWaiting@CKeyframeAnimation@@QEBA_NXZ.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x18003D1D0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 508) & 0x20) != 0 )
    return 0;
  v2 = a2 - 1;
  if ( !v2 )
  {
    v9 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)a1);
    v5 = v9;
    if ( v9 >= 0 )
      return 0;
    v13 = 1806;
    goto LABEL_22;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 268) == 4 && (*(_BYTE *)(a1 + 208) & 2) != 0 )
    {
      *(_DWORD *)(a1 + 268) = 2;
      if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
      {
        v11 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 240LL), 2, (int *)v10);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x4BCu);
      }
    }
    if ( v5 >= 0 )
      return 0;
    v13 = 1810;
    goto LABEL_21;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 268) = 4;
    if ( CKeyframeAnimation::IsWaiting((CKeyframeAnimation *)a1) )
      return 0;
    v9 = CKeyframeAnimation::SampleExpressionsAndStartingValue(v7, v8);
    v5 = v9;
    if ( v9 >= 0 )
      return 0;
    v13 = 1820;
LABEL_22:
    v12 = v9;
    goto LABEL_23;
  }
  if ( v4 != 28 )
  {
    v5 = -2147024809;
    v13 = 1830;
LABEL_21:
    v12 = v5;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v13);
    return (unsigned int)v5;
  }
  return 0;
}
