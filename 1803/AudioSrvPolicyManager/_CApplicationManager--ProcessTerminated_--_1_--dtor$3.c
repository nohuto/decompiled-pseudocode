/*
 * XREFs of _CApplicationManager::ProcessTerminated_::_1_::dtor$3 @ 0x1800374E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ProcessTerminated_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
