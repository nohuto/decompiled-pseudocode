/*
 * XREFs of _MPCManager::MPCManager_::_1_::dtor$1 @ 0x1800E64CA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManager::MPCManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 56LL));
}
