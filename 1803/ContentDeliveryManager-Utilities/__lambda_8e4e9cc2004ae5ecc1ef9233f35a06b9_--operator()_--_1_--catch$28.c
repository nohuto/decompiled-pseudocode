/*
 * XREFs of __lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator()_::_1_::catch$28 @ 0x1800C4134
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180048EBC (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator()_::_1_::catch_28(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+18h] [rbp-30h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 712),
    (void *)0x8F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    "Failed to handle an Activity Toast Notification",
    v3);
  return &loc_18004BD76;
}
