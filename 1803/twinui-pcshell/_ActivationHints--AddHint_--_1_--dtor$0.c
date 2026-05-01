/*
 * XREFs of _ActivationHints::AddHint_::_1_::dtor$0 @ 0x1802B105C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ActivationHints::AddHint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 48));
}
