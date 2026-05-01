/*
 * XREFs of _CAppViewManager::_ProcessNextOperation_::_1_::dtor$1 @ 0x1801E88E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAppViewManager::_ProcessNextOperation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return CAutoHandle<void *>::~CAutoHandle<void *>((void **)(a2 + 40));
}
