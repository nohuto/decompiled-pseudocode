/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x180068CD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(a2 + 176);
}
