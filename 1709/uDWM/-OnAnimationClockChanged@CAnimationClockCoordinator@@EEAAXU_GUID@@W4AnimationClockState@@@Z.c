/*
 * XREFs of ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800034A0
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180003548 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800039A0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnAnimationClockChanged(__int64 a1, _OWORD *a2, unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 (__fastcall ***v7)(_QWORD, _OWORD *, _QWORD); // r14
  __int64 (__fastcall *v8)(_QWORD, _OWORD *, _QWORD); // rax
  __int64 result; // rax
  _OWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v7 = *(__int64 (__fastcall ****)(_QWORD, _OWORD *, _QWORD))(a1 + 48);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  v8 = **v7;
  v10[0] = *a2;
  if ( (char *)v8 == (char *)CAnimationScheduler::OnAnimationClockChanged )
    result = CAnimationScheduler::OnAnimationClockChanged(v7, v10, a3);
  else
    result = v8(v7, v10, a3);
  if ( a3 == 7 )
  {
    v11 = v3;
    EnterCriticalSection(v3);
    CAnimationClockCoordinator::_ClearExpiredAnimationClocks((CAnimationClockCoordinator *)a1);
    return CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  }
  return result;
}
