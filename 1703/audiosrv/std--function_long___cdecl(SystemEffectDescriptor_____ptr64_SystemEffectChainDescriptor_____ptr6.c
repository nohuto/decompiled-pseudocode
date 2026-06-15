/*
 * XREFs of std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)_::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)___lambda_104fe0bd16c4203916a8d385bc72c031__void_ @ 0x18004B908
 * Callers:
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180043230 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_long___cdecl_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__::function_long___cdecl_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64____lambda_104fe0bd16c4203916a8d385bc72c031__void_(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_1800DE380;
  result = a1;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
