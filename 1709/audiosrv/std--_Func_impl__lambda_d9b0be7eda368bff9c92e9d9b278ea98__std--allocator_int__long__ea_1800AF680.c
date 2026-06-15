/*
 * XREFs of std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Clone_void_ @ 0x1800AF680
 * Callers:
 *     std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Copy @ 0x1800B8970 (std--_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std--allocator_int__long__ea_1800B8970.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

_QWORD *__fastcall std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Clone_void_(
        __int64 a1)
{
  _QWORD *v2; // rdx

  v2 = std::_Allocate(1uLL, 0xC0uLL);
  try
  {
    if ( v2 )
    {
      *v2 = off_1800F4578;
      *(_OWORD *)(v2 + 1) = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v2 + 3) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v2 + 5) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v2 + 7) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v2 + 9) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v2 + 11) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v2 + 13) = *(_OWORD *)(a1 + 104);
      *(_OWORD *)(v2 + 15) = *(_OWORD *)(a1 + 120);
      *(_OWORD *)(v2 + 17) = *(_OWORD *)(a1 + 136);
      *(_OWORD *)(v2 + 19) = *(_OWORD *)(a1 + 152);
      *(_OWORD *)(v2 + 21) = *(_OWORD *)(a1 + 168);
      v2[23] = *(_QWORD *)(a1 + 184);
    }
  }
  catch ( ... )
  {
    std::_Deallocate(v2, 1uLL, 0xC0uLL);
    throw;
  }
  return v2;
}
