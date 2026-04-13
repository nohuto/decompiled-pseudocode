/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$7 @ 0x1800BC0F6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003DAFC (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x112,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    a4);
  return &loc_18008BF14;
}
