/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_SpatialInteractionDevices::IHapticsTimerCallback::_)(void)___ptr64_::DelegateInvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_ab827356b06de2d9aedb82e4c0edf731__1_::Invoke @ 0x1800C7B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800C6B54 (-StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCr.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_SpatialInteractionDevices::IHapticsTimerCallback::___void____ptr64_::DelegateInvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_ab827356b06de2d9aedb82e4c0edf731__1_::Invoke(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v3; // rdx
  SpatialInteractionDevices::SpatialInteractionController *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 16) + 896LL);
  EnterCriticalSection(v2);
  v4 = *(SpatialInteractionDevices::SpatialInteractionController **)(a1 + 16);
  if ( *((_QWORD *)v4 + 117)
    && (v5 = SpatialInteractionDevices::SpatialInteractionController::StopHapticsFeedback(v4, v3), v6 = v5, v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x584,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v5);
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0;
  }
  return v6;
}
