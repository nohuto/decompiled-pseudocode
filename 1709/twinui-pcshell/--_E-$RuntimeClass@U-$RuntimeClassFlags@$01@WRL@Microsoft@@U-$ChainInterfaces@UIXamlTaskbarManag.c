/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveMonitorNotification@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180039870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlTaskbarManagerInternal,IXamlTaskbarManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveMonitorNotification,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  __int64 v3; // rcx

  Block[15] = -1073741823;
  v3 = *((_QWORD *)Block + 6);
  if ( v3 )
  {
    *((_QWORD *)Block + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
