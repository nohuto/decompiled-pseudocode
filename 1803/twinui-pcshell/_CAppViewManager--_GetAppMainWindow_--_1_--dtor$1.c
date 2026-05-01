/*
 * XREFs of _CAppViewManager::_GetAppMainWindow_::_1_::dtor$1 @ 0x1801261C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_GetAppMainWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::~ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>((void **)(a2 + 88));
}
