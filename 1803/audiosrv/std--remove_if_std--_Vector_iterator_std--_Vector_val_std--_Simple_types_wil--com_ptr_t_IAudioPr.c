/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_6837dda01e25c664e5779106e9e42f9f___ @ 0x180063540
 * Callers:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x1800478A4 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 * Callees:
 *     _lambda_6837dda01e25c664e5779106e9e42f9f_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800634AC (_lambda_6837dda01e25c664e5779106e9e42f9f_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A8460 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_________lambda_6837dda01e25c664e5779106e9e42f9f___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 **result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a4;
  v9 = a4;
  for ( i = a2; i != a3; ++i )
  {
    if ( lambda_6837dda01e25c664e5779106e9e42f9f_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
           &v9,
           i) )
    {
      break;
    }
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !lambda_6837dda01e25c664e5779106e9e42f9f_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
              &v10,
              j) )
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
