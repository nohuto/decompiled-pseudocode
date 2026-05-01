/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveMonitorNotification@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18014C304
 * Callers:
 *     _XamlTaskbarManager_CreateInstance_::_1_::dtor$5 @ 0x1801F0149 (_XamlTaskbarManager_CreateInstance_--_1_--dtor$5.c)
 *     _XamlTaskbarManager::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1801F020C (_XamlTaskbarManager--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlTaskbarManagerInternal,IXamlTaskbarManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveMonitorNotification,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlTaskbarManagerInternal,IXamlTaskbarManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveMonitorNotification,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 60) = -1073741823;
  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
