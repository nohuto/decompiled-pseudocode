/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18004151C
 * Callers:
 *     __lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()_::_1_::catch$8 @ 0x1800C372E (__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator()_--_1_--catch$8.c)
 *     __lambda_4d8c3aefd165ae46a39c8fe585e6dd35_::operator()_::_1_::catch$4 @ 0x1800C6114 (__lambda_4d8c3aefd165ae46a39c8fe585e6dd35_--operator()_--_1_--catch$4.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$19 @ 0x1800C6543 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--catch$19.c)
 *     __lambda_d740ccd9d37e805433cbe5cb5e47d6b6_::operator()_::_1_::catch$1 @ 0x1800C6831 (__lambda_d740ccd9d37e805433cbe5cb5e47d6b6_--operator()_--_1_--catch$1.c)
 *     _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$18 @ 0x1800C6B40 (_CreativeFramework--Actions--IsMsaConnected_--_1_--catch$18.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch$12 @ 0x1800C72F1 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--catch$12.c)
 *     _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch$8 @ 0x1800C868E (_CreativeFramework--Actions--LaunchCortanaService--LaunchCortana_--_1_--catch$8.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::catch$15 @ 0x1800C9230 (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--catch$15.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$7 @ 0x1800C9574 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ActivateSubscription_--_1_--ca.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$28 @ 0x1800C989D (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800C989D.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800030D4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
