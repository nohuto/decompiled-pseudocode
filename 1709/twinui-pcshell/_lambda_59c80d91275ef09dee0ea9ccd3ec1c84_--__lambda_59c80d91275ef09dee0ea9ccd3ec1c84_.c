/*
 * XREFs of _lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_ @ 0x1801482CC
 * Callers:
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147F1C (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___ @ 0x180148E98 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ??_E?$__abi_FunctorCapture@V_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_@@XPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Details@Platform@@UEAAPEAXI@Z @ 0x180149370 (--_E-$__abi_FunctorCapture@V_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_@@XPE$AAVWindow@Xaml@UI@Win.c)
 *     _XamlExplorerHost::CreateTaskbar_::_1_::dtor$4 @ 0x1801EFB44 (_XamlExplorerHost--CreateTaskbar_--_1_--dtor$4.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_59c80d91275ef09dee0ea9ccd3ec1c84____::_1_::dtor$0 @ 0x1801EFC97 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = *(volatile signed __int32 **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 13, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
