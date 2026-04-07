/*
 * XREFs of ?zInternalStop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000ADC4
 * Callers:
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18000CD00 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180037710 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180038350 (-StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180038690 (-StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800388A0 (-StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180038AB0 (-StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800A7F70 (-StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000ACDC (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v3);
  v2 = v3;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
