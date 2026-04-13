/*
 * XREFs of _Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded_::_1_::catch$8 @ 0x1800C60C6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003224 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 168),
                           (void *)0x24B,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                           a4);
  return &loc_18006FEA1;
}
