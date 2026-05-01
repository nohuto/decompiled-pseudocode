/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x180260C50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18026076C (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3,
        bool *a4)
{
  int v7; // eax
  int v8; // ebx
  VirtualDesktopController *v9; // rcx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v15; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationView *v16; // [rsp+78h] [rbp+38h] BYREF

  v13[1] = -2LL;
  *a4 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v7 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))a3)(
         a3,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(v9, a2, (const struct _GUID *)&v16);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, v13);
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, int *))(*(_QWORD *)*v10 + 24LL))(*v10, v16, &v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    if ( v8 >= 0 )
    {
      *a4 = v15 != 0;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)v8;
}
