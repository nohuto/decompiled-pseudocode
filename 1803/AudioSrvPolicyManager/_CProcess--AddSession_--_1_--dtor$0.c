/*
 * XREFs of _CProcess::AddSession_::_1_::dtor$0 @ 0x180036FD6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::AddSession_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
