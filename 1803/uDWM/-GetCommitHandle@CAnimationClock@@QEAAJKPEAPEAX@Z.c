/*
 * XREFs of ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A789C
 * Callers:
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A84A0 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000AE00 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000AEB8 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800826E4 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180085DDC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A7874 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800A7E88 (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAnimationClock::GetCommitHandle(CAnimationClock *this, unsigned int a2, void **a3)
{
  unsigned int v4; // ebx
  struct _GUID v7; // xmm0
  __int64 v8; // rcx
  int SynchronizationObject; // eax
  __int64 v10; // rdx
  int v12[2]; // [rsp+20h] [rbp-198h] BYREF
  struct _GUID v13; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v4 = 0;
  *a3 = 0LL;
  *(_QWORD *)v12 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    (__int64)"GetCommitHandle");
  v7 = *(struct _GUID *)((char *)this + 120);
  v14[0] = &AnimationClockLoggingTelemetry::GetCommitHandle::`vftable';
  v13 = v7;
  AnimationClockLoggingTelemetry::GetCommitHandle::StartActivity(
    (AnimationClockLoggingTelemetry::GetCommitHandle *)v14,
    &v13);
  if ( (unsigned int)(*((_DWORD *)this + 20) - 1) > 1 )
    goto LABEL_9;
  v8 = *((_QWORD *)this + 14);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_6:
    SynchronizationObject = NtDCompositionDuplicateHandleToProcess(v8, a2, a3);
    if ( SynchronizationObject < 0 )
    {
      v10 = 626LL;
      goto LABEL_8;
    }
LABEL_9:
    wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (AnimationClockLoggingTelemetry::AnimationClockStateChange *)v14,
      0);
    goto LABEL_10;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 14,
    0LL);
  SynchronizationObject = NtDCompositionCreateSynchronizationObject((char *)this + 112);
  if ( SynchronizationObject >= 0 )
  {
    v8 = *((_QWORD *)this + 14);
    goto LABEL_6;
  }
  v10 = 623LL;
LABEL_8:
  v4 = wil::details::in1diag3::Return_NtStatus(
         retaddr,
         (void *)v10,
         (__int64)"windows\\dwm\\udwm\\animationclock.cpp",
         (const char *)(unsigned int)SynchronizationObject);
LABEL_10:
  AnimationClockLoggingTelemetry::GetCommitHandle::~GetCommitHandle((AnimationClockLoggingTelemetry::GetCommitHandle *)v14);
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v12);
  return v4;
}
