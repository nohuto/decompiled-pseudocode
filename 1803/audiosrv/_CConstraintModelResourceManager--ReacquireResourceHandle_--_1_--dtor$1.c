/*
 * XREFs of _CConstraintModelResourceManager::ReacquireResourceHandle_::_1_::dtor$1 @ 0x1800DA2D3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CConstraintModelResourceManager::ReacquireResourceHandle_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 56);
}
