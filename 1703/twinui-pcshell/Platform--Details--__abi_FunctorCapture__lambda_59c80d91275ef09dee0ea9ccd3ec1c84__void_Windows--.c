/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x18011EE10
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateDesktopTaskbar@__ITaskbarHelpersStatics@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskbarData@234@PE$AAUIDesktopAppHost@234@@Z @ 0x18011E760 (-CreateDesktopTaskbar@__ITaskbarHelpersStatics@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE.c)
 *     ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180128618 (-UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ.c)
 *     ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180128910 (-SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1801292C4 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ @ 0x1801293F8 (-get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18019716C (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        HWND a3)
{
  __int64 v5; // rbx
  void **v6; // r9
  int ActivationFactoryByPCWSTR; // eax
  __int64 DesktopTaskbar; // rdi
  RTL_SRWLOCK *v9; // rsi
  LONG WindowLongW; // eax
  __int64 v11; // r14
  __int64 v12; // rax
  void *v13; // rbx
  PVOID Ptr; // rcx
  _DWORD v15[6]; // [rsp+58h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+48h]

  v17 = a2;
  SetWindowPos(a3, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u);
  v5 = *(_QWORD *)(a1 + 16);
  v15[0] = -245849636;
  v15[1] = 881117897;
  v15[2] = -2024272200;
  v15[3] = 297109948;
  v17 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Desktop.TaskbarHelpers",
                                v15,
                                (struct Platform::Guid *)&v17,
                                v6);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  DesktopTaskbar = WindowsInternal::ComposableShell::Desktop::__ITaskbarHelpersStatics::CreateDesktopTaskbar(v17, v5);
  SRWLock = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = DesktopTaskbar;
  SRWLock = 0LL;
  XamlTaskbarProxy::SetTaskbarData(*(_QWORD *)(a1 + 8), DesktopTaskbar);
  v9 = *(RTL_SRWLOCK **)(a1 + 8);
  wil::srwlock::lock_exclusive(v9 + 11, &SRWLock);
  WindowLongW = GetWindowLongW(a3, -20);
  SetWindowLongW(a3, -20, WindowLongW | 0x80);
  v11 = Windows::UI::Core::CoreWindow::GetForCurrentThread();
  v12 = Windows::UI::Core::ICoreWindow::Dispatcher::get(v11);
  v13 = (void *)v12;
  if ( (PVOID)v12 != v9[9].Ptr )
  {
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    Ptr = v9[9].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v9[9].Ptr = v13;
  }
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v9[8].Ptr = a3;
  XamlTaskbarProxy::UpdateWindowPositionInternal((XamlTaskbarProxy *)v9);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( DesktopTaskbar )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)DesktopTaskbar + 16LL))(DesktopTaskbar);
}
