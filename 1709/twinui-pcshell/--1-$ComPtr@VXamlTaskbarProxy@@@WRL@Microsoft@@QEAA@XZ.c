/*
 * XREFs of ??1?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180148C78
 * Callers:
 *     _XamlExplorerHost::CreateTaskbar_::_1_::dtor$8 @ 0x1801EFB06 (_XamlExplorerHost--CreateTaskbar_--_1_--dtor$8.c)
 *     _XamlExplorerHost::CreateTaskbar_::_1_::dtor$9 @ 0x1801EFB38 (_XamlExplorerHost--CreateTaskbar_--_1_--dtor$9.c)
 *     _XamlTaskbarProxy::UpdateWindowPositionInternal_::_1_::dtor$0 @ 0x1801F090C (_XamlTaskbarProxy--UpdateWindowPositionInternal_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::AsyncDestroy_::_1_::dtor$1 @ 0x1801F094D (_XamlTaskbarProxy--AsyncDestroy_--_1_--dtor$1.c)
 *     _XamlTaskbarProxy::SetTaskbarData_::_1_::dtor$1 @ 0x1801F098E (_XamlTaskbarProxy--SetTaskbarData_--_1_--dtor$1.c)
 *     _Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke_::_1_::dtor$0 @ 0x1801F0BD2 (_Platform--Details--__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_--Invoke.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlTaskbarProxy>::~ComPtr<XamlTaskbarProxy>(volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 13, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
