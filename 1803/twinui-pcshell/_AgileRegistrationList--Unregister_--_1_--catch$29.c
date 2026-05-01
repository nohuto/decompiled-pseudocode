/*
 * XREFs of _AgileRegistrationList::Unregister_::_1_::catch$29 @ 0x18010E780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AgileRegistrationList::Unregister_::_1_::catch_29(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 88) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x31,
                           (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           a4);
  return &loc_18010E75B;
}
