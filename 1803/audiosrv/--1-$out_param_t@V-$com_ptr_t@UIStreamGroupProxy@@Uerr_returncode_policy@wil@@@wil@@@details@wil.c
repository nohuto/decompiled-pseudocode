/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UIStreamGroupProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180099D60
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$5 @ 0x1800690EC (_BuildDeviceGraphForStream_--_1_--dtor$5.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$2 @ 0x1800CFF08 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = **a1;
    result = (__int64)a1[1];
    **a1 = result;
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
