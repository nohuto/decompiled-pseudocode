/*
 * XREFs of _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x14003762C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpuManager::RegisterDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 72));
}
