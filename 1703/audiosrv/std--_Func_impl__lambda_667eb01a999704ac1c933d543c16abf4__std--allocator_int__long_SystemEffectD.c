/*
 * XREFs of std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Clone_void_ @ 0x18004C2A8
 * Callers:
 *     std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Copy @ 0x18004CF10 (std--_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std--allocator_int__long__ea_18004CF10.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

_QWORD *__fastcall std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Clone_void_(
        __int64 a1)
{
  _QWORD *result; // rax
  __int64 (__fastcall **v3)(); // rcx

  result = std::_Allocate(1uLL, 0x60uLL);
  try
  {
    if ( result )
    {
      v3 = off_1800DE350;
      *result = off_1800DE350;
      *(_OWORD *)(result + 1) = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(result + 3) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(result + 5) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(result + 7) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(result + 9) = *(_OWORD *)(a1 + 72);
      result[11] = *(_QWORD *)(a1 + 88);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_____::deallocate(
      v3,
      result);
    throw;
  }
  return result;
}
