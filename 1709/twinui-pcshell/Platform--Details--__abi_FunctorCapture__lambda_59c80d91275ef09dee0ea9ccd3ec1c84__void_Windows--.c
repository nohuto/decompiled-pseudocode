/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke @ 0x180149140
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x180148DB0 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180152994 (-UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ.c)
 *     ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180152D30 (-SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1801536F4 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ @ 0x180153828 (-get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801E5664 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 Instance; // rdi
  RTL_SRWLOCK *v9; // rsi
  LONG WindowLongW; // eax
  __int64 v11; // r14
  __int64 v12; // rax
  void *v13; // rbx
  PVOID Ptr; // rcx
  _DWORD v15[6]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+58h]

  v16 = a2;
  SetWindowPos(a3, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u);
  v5 = *(_QWORD *)(a1 + 16);
  v15[0] = -245849636;
  v15[1] = 881117897;
  v15[2] = -2024272200;
  v15[3] = 297109948;
  v16 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Desktop.TaskbarHelpers",
                                v15,
                                (struct Platform::Guid *)&v16,
                                v6);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
               v16,
               v5);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = Instance;
  XamlTaskbarProxy::SetTaskbarData(*(_QWORD *)(a1 + 8), Instance);
  v9 = *(RTL_SRWLOCK **)(a1 + 8);
  AcquireSRWLockExclusive(v9 + 13);
  WindowLongW = GetWindowLongW(a3, -20);
  SetWindowLongW(a3, -20, WindowLongW | 0x80);
  v11 = Windows::UI::Core::CoreWindow::GetForCurrentThread();
  v12 = Windows::UI::Core::ICoreWindow::Dispatcher::get(v11);
  v13 = (void *)v12;
  if ( (PVOID)v12 != v9[11].Ptr )
  {
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    Ptr = v9[11].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v9[11].Ptr = v13;
  }
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v9[10].Ptr = a3;
  XamlTaskbarProxy::UpdateWindowPositionInternal((XamlTaskbarProxy *)v9);
  if ( v9 != (RTL_SRWLOCK *)-104LL )
    ReleaseSRWLockExclusive(v9 + 13);
  if ( Instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
}
