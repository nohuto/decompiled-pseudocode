/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180038544
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000D1F8 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000AD4C (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000AD8C (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000AE00 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000AEB8 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x18000CC88 (--0CAnimationClock@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x180038464 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  struct _GUID v4; // xmm0
  __int64 v5; // rax
  bool v6; // di
  int v7; // ebx
  CBaseObject *v8; // rax
  unsigned int v9; // ebx
  CAnimationClock *v10; // rax
  struct _GUID v12; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v13[40]; // [rsp+40h] [rbp-168h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"CreateAnimationClock");
  v4 = *a1;
  v13[0] = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  v12 = v4;
  AnimationClockLoggingTelemetry::CreateAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::CreateAnimationClock *)v13,
    &v12);
  *a2 = 0LL;
  v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  v6 = v5 == 0;
  v7 = -(v5 == 0);
  v8 = 0LL;
  v9 = v7 & 0x80070057;
  if ( v6 )
    goto LABEL_9;
  v10 = (CAnimationClock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             152LL);
  if ( v10 )
    v10 = CAnimationClock::CAnimationClock(v10);
  *a2 = v10;
  if ( !v10 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2A0u);
    v8 = *a2;
LABEL_9:
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *a2 = 0LL;
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (AnimationClockLoggingTelemetry::AnimationClockStateChange *)v13,
    v9);
  v13[0] = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((AnimationClockLoggingTelemetry::AnimationClockStateChange *)v13);
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return v9;
}
