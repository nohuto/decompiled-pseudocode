/*
 * XREFs of std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_847b9aa654f320ccd951dc5ecb721dd8___ @ 0x1800AEBA0
 * Callers:
 *     ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002DD50 (-OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifySubmixArrival@CAppSubmixClient@@QEAAX_K@Z @ 0x1800AF6F0 (-NotifySubmixArrival@CAppSubmixClient@@QEAAX_K@Z.c)
 */

_QWORD *__fastcall std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_847b9aa654f320ccd951dc5ecb721dd8___(
        _QWORD *a1,
        CAppSubmixClient **a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  CAppSubmixClient **v6; // r15
  unsigned __int64 v7; // rsi
  CAppSubmixClient *v9; // rdi
  unsigned __int64 v10; // rax
  _QWORD *result; // rax

  v4 = 0LL;
  v6 = a2;
  v7 = (a3 - (unsigned __int64)a2 + 7) >> 3;
  if ( (unsigned __int64)a2 > a3 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v9 = *v6;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 168LL))(*a4);
      CAppSubmixClient::NotifySubmixArrival(v9, v10);
      ++v4;
      ++v6;
    }
    while ( v4 != v7 );
  }
  result = a1;
  *a1 = a4;
  return result;
}
