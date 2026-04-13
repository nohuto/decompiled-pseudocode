/*
 * XREFs of _Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting_::_1_::catch$10 @ 0x1800C5E5B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003224 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 216) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 200),
                            (void *)0x1A2,
                            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                            a4);
  return &loc_18006E8C0;
}
