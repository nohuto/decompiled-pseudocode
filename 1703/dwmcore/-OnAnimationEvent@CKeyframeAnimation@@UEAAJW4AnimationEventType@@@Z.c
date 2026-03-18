/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x18002C724 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?IsWaiting@Animation@Animations@Components@@QEBA_NXZ @ 0x18002CCC0 (-IsWaiting@Animation@Animations@Components@@QEBA_NXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18002D4D0 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x18002F068 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ @ 0x18002FFB8 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // r8
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 168) & 0x10) != 0 )
    return 0;
  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        *(_DWORD *)(a1 - 12) = 4;
        if ( Components::Animations::Animation::IsWaiting(*(Components::Animations::Animation **)(a1 + 96)) )
          return 0;
        v5 = CKeyframeAnimation::SampleExpressionsAndStartingValue((CKeyframeAnimation *)(v4 - 224));
        v6 = v5;
        if ( v5 >= 0 )
          return 0;
        v12 = 1825;
        goto LABEL_22;
      }
      v6 = -2147024809;
      v12 = 1830;
    }
    else
    {
      v7 = a1 - 224;
      v6 = 0;
      if ( *(_DWORD *)(v7 + 212) == 4 && (*(_BYTE *)(v7 + 208) & 2) != 0 )
      {
        *(_DWORD *)(v7 + 212) = 2;
        if ( CNotificationResource::ShouldNotify((CNotificationResource *)v7) )
        {
          v10 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 240LL), 2, (int *)v9);
          v6 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x42Au);
        }
      }
      if ( v6 >= 0 )
        return 0;
      v12 = 1815;
    }
    v11 = v6;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
    return (unsigned int)v6;
  }
  v5 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)(a1 - 224));
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 1811;
LABEL_22:
    v11 = v5;
    goto LABEL_23;
  }
  return 0;
}
