/*
 * XREFs of ??1?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@QEAA@XZ @ 0x18007F994
 * Callers:
 *     _DWMInputRouter::BindDevicesOfTypeToMonitor_::_1_::dtor$2 @ 0x1800E7CE8 (_DWMInputRouter--BindDevicesOfTypeToMonitor_--_1_--dtor$2.c)
 *     _MPCMouseProcessor::AttachMouse_::_1_::dtor$2 @ 0x1800E88EF (_MPCMouseProcessor--AttachMouse_--_1_--dtor$2.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$3 @ 0x1800E9395 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$3.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$3 @ 0x1800E93B9 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$3.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1800E93C5 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>::~pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
