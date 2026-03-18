/*
 * XREFs of ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x18002F068
 * Callers:
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18012C6CC (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18012CA58 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B9C0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18002D4D0 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationCompleted(CBaseExpression *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax

  v2 = 0;
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v4 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 240LL), 1, (int *)v3);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x407u);
  }
  result = v2;
  *((_DWORD *)this + 53) = 1;
  return result;
}
