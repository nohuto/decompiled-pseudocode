/*
 * XREFs of std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______ @ 0x1800AF760
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800B21B4 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

_QWORD *__fastcall std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______(
        __int64 a1,
        _OWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // r8
  _OWORD *v6; // rbx
  _QWORD *v7; // [rsp+58h] [rbp+20h]

  result = std::_Allocate(1uLL, 0xC0uLL);
  v5 = result;
  v7 = result;
  try
  {
    if ( result )
    {
      *result = off_1800F4578;
      *(_OWORD *)(result + 1) = *a2;
      *(_OWORD *)(result + 3) = a2[1];
      *(_OWORD *)(result + 5) = a2[2];
      *(_OWORD *)(result + 7) = a2[3];
      *(_OWORD *)(result + 9) = a2[4];
      *(_OWORD *)(result + 11) = a2[5];
      *(_OWORD *)(result + 13) = a2[6];
      *(_OWORD *)(result + 15) = a2[7];
      v6 = a2 + 8;
      *(_OWORD *)(result + 17) = *v6;
      *(_OWORD *)(result + 19) = v6[1];
      *(_OWORD *)(result + 21) = v6[2];
      result = (_QWORD *)*((_QWORD *)v6 + 6);
      v5[23] = result;
    }
  }
  catch ( ... )
  {
    std::_Deallocate(v7, 1uLL, 0xC0uLL);
    throw;
  }
  *(_QWORD *)(a1 + 56) = v5;
  return result;
}
