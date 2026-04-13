/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003DAFC
 * Callers:
 *     __lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()_::_1_::catch$3 @ 0x1800B6BA0 (__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator()_--_1_--catch$3.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$15 @ 0x1800B94CC (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--catch$15.c)
 *     __lambda_d740ccd9d37e805433cbe5cb5e47d6b6_::operator()_::_1_::catch$1 @ 0x1800B9730 (__lambda_d740ccd9d37e805433cbe5cb5e47d6b6_--operator()_--_1_--catch$1.c)
 *     _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$18 @ 0x1800B9AAA (_CreativeFramework--Actions--IsMsaConnected_--_1_--catch$18.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch$10 @ 0x1800BA211 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--catch$10.c)
 *     _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch$8 @ 0x1800BB557 (_CreativeFramework--Actions--LaunchCortanaService--LaunchCortana_--_1_--catch$8.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::catch$13 @ 0x1800BBDB2 (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--catch$13.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$7 @ 0x1800BC0F6 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ActivateSubscription_--_1_--ca.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$18 @ 0x1800BC43C (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800BC43C.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800220FC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
