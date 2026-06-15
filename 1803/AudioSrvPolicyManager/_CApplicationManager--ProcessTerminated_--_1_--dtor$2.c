/*
 * XREFs of _CApplicationManager::ProcessTerminated_::_1_::dtor$2 @ 0x1800374D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ProcessTerminated_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
