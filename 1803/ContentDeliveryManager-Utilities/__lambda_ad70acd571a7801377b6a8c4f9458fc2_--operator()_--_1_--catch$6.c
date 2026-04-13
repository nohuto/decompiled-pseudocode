/*
 * XREFs of __lambda_ad70acd571a7801377b6a8c4f9458fc2_::operator()_::_1_::catch$6 @ 0x1800C48AF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003224 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_ad70acd571a7801377b6a8c4f9458fc2_::operator()_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 520),
                           (void *)0xC8,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
                           a4);
  return &loc_180054550;
}
