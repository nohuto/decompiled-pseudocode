/*
 * XREFs of ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000D0A0
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000B790 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18000D148 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnAnimationClockChanged(__int64 a1, struct _GUID *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 (__fastcall ***v7)(__int64, struct _GUID *, int); // r14
  __int64 (__fastcall *v8)(__int64, struct _GUID *, int); // rax
  __int64 result; // rax
  struct _GUID v10[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v7 = *(__int64 (__fastcall ****)(__int64, struct _GUID *, int))(a1 + 48);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  v8 = **v7;
  v10[0] = *a2;
  if ( v8 == CAnimationScheduler::OnAnimationClockChanged )
    result = CAnimationScheduler::OnAnimationClockChanged((__int64)v7, v10, a3);
  else
    result = v8((__int64)v7, v10, a3);
  if ( a3 == 7 )
  {
    v11 = v3;
    EnterCriticalSection(v3);
    CAnimationClockCoordinator::_ClearExpiredAnimationClocks((CAnimationClockCoordinator *)a1);
    return CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  }
  return result;
}
