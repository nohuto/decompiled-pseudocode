/*
 * XREFs of ?Find@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEBAPEAU__POSITION@@KPEAU3@@Z @ 0x180096670
 * Callers:
 *     ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180030CC0 (-OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     std::_Func_impl__lambda_03ccc7c6494132c92b0b9b9254fb08d1__std::allocator_int__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64_::_Do_call @ 0x180097BC0 (std--_Func_impl__lambda_03ccc7c6494132c92b0b9b9254fb08d1__std--allocator_int__bool__ea_180097BC0.c)
 *     ?OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18009FDD0 (-OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::Find(__int64 **a1, int a2)
{
  __int64 *result; // rax

  for ( result = *a1; result && *((_DWORD *)result + 4) != a2; result = (__int64 *)*result )
    ;
  return result;
}
