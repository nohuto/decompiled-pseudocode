/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Do_call @ 0x18001FC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7ec12844dd892c2137a8dee196d89f16__void_::_Do_call(__int64 a1)
{
  struct IProcessSubmixProxy *v1; // rdx
  __int64 (__fastcall *v2)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *); // rax

  v1 = *(struct IProcessSubmixProxy **)(a1 + 8);
  v2 = *(__int64 (__fastcall **)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)g_ProcessSubmixManager
                                                                                               + 64LL);
  if ( v2 == CProcessSubmixManager::OnNewProcessSubmix )
    return CProcessSubmixManager::OnNewProcessSubmix(g_ProcessSubmixManager, v1);
  else
    return v2(g_ProcessSubmixManager, v1);
}
