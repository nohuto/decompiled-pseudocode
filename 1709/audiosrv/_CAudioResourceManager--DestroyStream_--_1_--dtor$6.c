/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x1800384A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 112));
}
