/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180005D98 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180005E88 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18002AD1C (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x18002ADE0 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18002E81C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x18002F018 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x18002F068 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18016E874 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     ?OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ @ 0x180176338 (-OnCapabilitiesChanged@CCompositionCapabilities@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // edx

  v1 = *((_QWORD *)this + 6);
  result = 0LL;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 60);
  else
    v3 = 0;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 14) )
      return 1LL;
  }
  return result;
}
