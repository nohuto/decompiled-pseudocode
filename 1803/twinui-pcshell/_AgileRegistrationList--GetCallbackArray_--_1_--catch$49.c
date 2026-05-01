/*
 * XREFs of _AgileRegistrationList::GetCallbackArray_::_1_::catch$49 @ 0x1800B44BC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AgileRegistrationList::GetCallbackArray_::_1_::catch_49(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3C,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           a4);
  return &loc_18004E82B;
}
