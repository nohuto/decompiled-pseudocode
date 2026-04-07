/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18000C598 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18000C97C (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18000CB48 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A7D14 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000AD4C (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000AD8C (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000AE00 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000AEB8 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18000C598 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000C69C (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000C8B0 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18000CA20 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x18000CE14 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18000D0A0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x1800A81F4 (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     McTemplateU0jdd @ 0x1800A828C (McTemplateU0jdd.c)
 */

__int64 __fastcall CAnimationClock::_SetState(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  signed int v4; // ebx
  int v5; // ebx
  struct _GUID v6; // xmm0
  int v7; // edx
  int v8; // ecx
  bool v9; // zf
  unsigned int v10; // ecx
  unsigned int v11; // eax
  void (__fastcall ***v12)(_QWORD, struct _GUID *, _QWORD); // rcx
  void (__fastcall *v13)(_QWORD, struct _GUID *, _QWORD); // rax
  signed int v14; // eax
  unsigned int v15; // ecx
  __int64 v17; // rax
  signed __int64 v18; // rdi
  __int64 ElapsedMillsecondsFromTime; // rax
  signed int v21; // [rsp+34h] [rbp-CCh]
  struct _GUID v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[40]; // [rsp+50h] [rbp-B0h] BYREF

  v21 = 0;
  v3 = -1;
  if ( a2 == 1 )
  {
    v3 = *(_DWORD *)(a1 + 136);
    v4 = 0;
    goto LABEL_9;
  }
  if ( a2 == 2 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      ElapsedMillsecondsFromTime = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
      if ( ElapsedMillsecondsFromTime > 0 )
        v3 = ElapsedMillsecondsFromTime;
    }
    else
    {
      v3 = 0;
    }
  }
  else if ( a2 != 3 )
  {
    if ( a2 != 4 )
    {
      if ( a2 == 5 || a2 == 6 )
      {
        v3 = 1000;
      }
      else if ( a2 != 7 )
      {
        return (unsigned int)-2147418113;
      }
      goto LABEL_10;
    }
    v3 = *(_DWORD *)(a1 + 140);
    v21 = CAnimationClock::_TriggerAnimation((CAnimationClock *)a1);
    v4 = v21;
    if ( *(_QWORD *)(a1 + 88) )
    {
      v17 = CAnimationClock::s_GetElapsedMillsecondsFromTime((const union _LARGE_INTEGER *)(a1 + 88));
      v18 = *(unsigned int *)(a1 + 140);
      if ( (__int64)abs64(v17) >= v18 )
        v3 = 0;
      else
        v3 = v18 - v17;
    }
LABEL_9:
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
LABEL_10:
  v5 = *(_DWORD *)(a1 + 80);
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v23,
    (__int64)"AnimationClockStateChange");
  v6 = *(struct _GUID *)(a1 + 120);
  v23[0] = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  v22 = v6;
  AnimationClockLoggingTelemetry::AnimationClockStateChange::StartActivity(
    (AnimationClockLoggingTelemetry::AnimationClockStateChange *)v23,
    &v22,
    v5,
    a2);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0jdd(v8, v7, a1 + 120, *(_DWORD *)(a1 + 80), a2);
  v9 = *(_QWORD *)(a1 + 72) == 0LL;
  v10 = a2;
  v11 = a2;
  *(_DWORD *)(a1 + 80) = a2;
  if ( !v9 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    v12 = *(void (__fastcall ****)(_QWORD, struct _GUID *, _QWORD))(a1 + 72);
    v22 = *(struct _GUID *)(a1 + 120);
    v13 = **v12;
    if ( (char *)v13 == (char *)CAnimationClockCoordinator::OnAnimationClockChanged )
      CAnimationClockCoordinator::OnAnimationClockChanged(v12, &v22, a2);
    else
      v13(v12, &v22, a2);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    v11 = *(_DWORD *)(a1 + 80);
    v10 = a2;
  }
  if ( v10 == v11 )
  {
    if ( v3 == -1 )
    {
      v4 = v21;
    }
    else
    {
      v14 = CAnimationClock::_SetTimer((CAnimationClock *)a1, v3);
      v10 = a2;
      v4 = v14;
    }
    if ( v4 >= 0 )
    {
      v15 = v10 - 2;
      if ( v15 )
      {
        if ( v15 == 1 )
          v4 = CAnimationClock::_SetTime((union _LARGE_INTEGER *)a1, 0, 0LL);
      }
      else if ( v3 == -1 )
      {
        CAnimationClock::_SetState(a1, 4LL);
      }
    }
  }
  else
  {
    v4 = v21;
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (AnimationClockLoggingTelemetry::AnimationClockStateChange *)v23,
    v4);
  v23[0] = &AnimationClockLoggingTelemetry::AnimationClockStateChange::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((AnimationClockLoggingTelemetry::AnimationClockStateChange *)v23);
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
  return (unsigned int)v4;
}
