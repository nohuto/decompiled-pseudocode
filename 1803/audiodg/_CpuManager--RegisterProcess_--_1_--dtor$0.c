/*
 * XREFs of _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x1400363CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpuManager::RegisterProcess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
