/*
 * XREFs of _CAudioDGProcess::LockADGProcess_::_1_::dtor$0 @ 0x18009780A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioDGProcess::LockADGProcess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
