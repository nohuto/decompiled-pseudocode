/*
 * XREFs of _CAudioDGProcess::LockADGProcess_::_1_::dtor$1 @ 0x18005A6AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioDGProcess::LockADGProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
