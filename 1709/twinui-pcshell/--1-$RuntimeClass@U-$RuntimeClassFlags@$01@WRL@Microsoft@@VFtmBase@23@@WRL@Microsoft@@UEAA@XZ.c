/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18001C28C
 * Callers:
 *     _MonitorFrame::MonitorFrame_::_1_::dtor$0 @ 0x1801F0CFF (_MonitorFrame--MonitorFrame_--_1_--dtor$0.c)
 *     _MonitorFrame::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1801F103C (_MonitorFrame--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 44) = -1073741823;
  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
