/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_541a0aba8a0dd1ccbfde03220634244f___ @ 0x180064420
 * Callers:
 *     std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)_::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)___lambda_541a0aba8a0dd1ccbfde03220634244f__void_ @ 0x180063A5C (std--function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr6.c)
 *     std::_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Copy @ 0x180064CB0 (std--_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffectDescriptor__.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

unsigned __int64 __fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_541a0aba8a0dd1ccbfde03220634244f___(
        _OWORD *a1)
{
  unsigned __int64 result; // rax
  _OWORD *v3; // rbx

  result = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0xC0uLL);
  try
  {
    *(_QWORD *)result = off_180122FB8;
    *(_OWORD *)(result + 8) = *a1;
    *(_OWORD *)(result + 24) = a1[1];
    *(_OWORD *)(result + 40) = a1[2];
    *(_OWORD *)(result + 56) = a1[3];
    *(_OWORD *)(result + 72) = a1[4];
    *(_OWORD *)(result + 88) = a1[5];
    *(_OWORD *)(result + 104) = a1[6];
    *(_OWORD *)(result + 120) = a1[7];
    v3 = a1 + 8;
    *(_OWORD *)(result + 136) = *v3;
    *(_OWORD *)(result + 152) = v3[1];
    *(_OWORD *)(result + 168) = v3[2];
    *(_QWORD *)(result + 184) = *((_QWORD *)v3 + 6);
  }
  catch ( ... )
  {
    std::_Deallocate((_QWORD *)result, 1uLL, 0xC0uLL);
    throw;
  }
  return result;
}
