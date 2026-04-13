/*
 * XREFs of _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_DisplayInfo_::_1_::catch$0 @ 0x1800C8FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003224 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_DisplayInfo_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x2C,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificatio"
                                    "nextension\\lib\\contentdeliverymanagerappinfo.cpp",
                           a4);
  return &loc_180095271;
}
