/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18007D150
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$7 @ 0x180059AB4 (_BuildDeviceGraphForStream_--_1_--dtor$7.c)
 * Callees:
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800AD800 (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  return result;
}
