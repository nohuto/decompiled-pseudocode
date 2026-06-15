/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::dtor$2 @ 0x18003732D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::RpcGetProcess_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 192));
}
