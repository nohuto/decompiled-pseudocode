/*
 * XREFs of _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$1 @ 0x180069A35
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CAudioResourceManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(*(_QWORD *)(a2 + 64) + 48LL));
}
