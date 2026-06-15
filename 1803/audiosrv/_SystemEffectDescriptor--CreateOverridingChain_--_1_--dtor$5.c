/*
 * XREFs of _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$5 @ 0x1800684A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(a2 + 48);
}
