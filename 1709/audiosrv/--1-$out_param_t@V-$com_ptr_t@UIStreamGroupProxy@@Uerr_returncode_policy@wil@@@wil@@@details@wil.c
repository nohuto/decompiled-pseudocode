/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UIStreamGroupProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18005C814
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$5 @ 0x180037B60 (_BuildDeviceGraphForStream_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // r8

  if ( *((_BYTE *)a1 + 16) )
  {
    result = (__int64)a1[1];
    v2 = **a1;
    **a1 = result;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
