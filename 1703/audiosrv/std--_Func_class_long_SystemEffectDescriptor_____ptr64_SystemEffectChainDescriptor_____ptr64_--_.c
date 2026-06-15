/*
 * XREFs of std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______ @ 0x18004C338
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

_QWORD *__fastcall std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  __int64 (__fastcall **v5)(); // rcx

  result = std::_Allocate(1uLL, 0x60uLL);
  try
  {
    if ( result )
    {
      v5 = off_1800DE350;
      *result = off_1800DE350;
      *(_OWORD *)(result + 1) = *(_OWORD *)a2;
      *(_OWORD *)(result + 3) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(result + 5) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(result + 7) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(result + 9) = *(_OWORD *)(a2 + 64);
      result[11] = *(_QWORD *)(a2 + 80);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_____::deallocate(
      v5,
      result);
    throw;
  }
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
