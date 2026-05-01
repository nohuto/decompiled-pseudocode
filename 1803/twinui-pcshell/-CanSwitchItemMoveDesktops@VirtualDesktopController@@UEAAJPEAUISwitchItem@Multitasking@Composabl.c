/*
 * XREFs of ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180260300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18026076C (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::CanSwitchItemMoveDesktops(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        bool *a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // ebx
  VirtualDesktopController *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+8h] BYREF
  struct IApplicationView *v13; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+20h]

  *a3 = 0;
  v6 = this + 13;
  AcquireSRWLockShared(this + 13);
  v14 = v6;
  if ( this[9].Ptr )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(v8, a2, &v13);
    v9 = (*(__int64 (__fastcall **)(PVOID, struct IApplicationView *, int *))(*(_QWORD *)this[9].Ptr + 40LL))(
           this[9].Ptr,
           v13,
           &v12);
    v7 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v12 != 0;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  }
  else
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
