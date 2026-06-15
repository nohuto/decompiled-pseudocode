/*
 * XREFs of _CProcess::RegisterProcessNotification_::_1_::dtor$1 @ 0x18003707A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::RegisterProcessNotification_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 80));
}
