/*
 * XREFs of _AgileRegistrationList::Unregister_::_1_::catch$40 @ 0x1801E76BF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027758 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AgileRegistrationList::Unregister_::_1_::catch_40(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x31,
                            (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                            a4);
  return &loc_180025895;
}
