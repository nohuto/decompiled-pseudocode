/*
 * XREFs of ??$_Uninitialized_move_al_unchecked1@PEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800A8050
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800A835C (--$emplace_back@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked1<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy> *,wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v5; // [rsp+50h] [rbp+18h]
  __int64 *v6; // [rsp+58h] [rbp+20h]

  v5 = a3;
  v6 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
      {
        v3 = *a1;
        *a1 = 0LL;
        *a3 = v3;
      }
      v5 = ++a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy> *>(
      v6,
      v5);
    throw;
  }
  return a3;
}
