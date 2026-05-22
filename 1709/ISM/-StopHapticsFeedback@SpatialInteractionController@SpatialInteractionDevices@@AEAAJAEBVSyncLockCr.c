/*
 * XREFs of ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800C6B54
 * Callers:
 *     ?SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z @ 0x180095948 (-SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_SpatialInteractionDevices::IHapticsTimerCallback::_)(void)___ptr64_::DelegateInvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_ab827356b06de2d9aedb82e4c0edf731__1_::Invoke @ 0x1800C7B10 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_SpatialInteractionDevices--IHapticsTime.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?StopHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800C35D4 (-StopHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ??1DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ @ 0x1800C6CAC (--1DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAV23@@Z @ 0x1800C6CFC (-EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::StopHapticsFeedback(
        SpatialInteractionDevices::SpatialInteractionController *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  _DWORD *v3; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v4; // rcx
  unsigned int v5; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v3 && *v3 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::StopHapticsFeedback_(
      v4,
      *((_DWORD *)this + 86),
      *((_DWORD *)this + 87));
  }
  if ( *((_BYTE *)this + 944) )
  {
    if ( !*((_BYTE *)this + 1064) )
    {
      v5 = -2147020579;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x598,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)0x800710DDLL);
      return v5;
    }
    *((_QWORD *)this + 117) = 0LL;
    *((_BYTE *)this + 944) = 0;
    v9 = 0LL;
    if ( (int)SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::EnsureDevice(
                (SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *)&v9,
                this) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 106) + 88LL))(*((_QWORD *)this + 106));
      v5 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x59E,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
          (const char *)(unsigned int)v7);
        SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::~DeviceHandleScope((SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *)&v9);
        return v5;
      }
    }
    SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::~DeviceHandleScope((SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *)&v9);
  }
  return 0LL;
}
