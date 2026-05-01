/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180010DB0
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::catch$22 @ 0x180043CD5 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--catch$22.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch$75 @ 0x180043D4A (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterGameConfig_--_1_--catch$75.c)
 *     _DoWorkOnGameConfigStore_::_1_::catch$256 @ 0x180043FE8 (_DoWorkOnGameConfigStore_--_1_--catch$256.c)
 *     _GetStringPropertyFromGameConfigStore_::_1_::catch$155 @ 0x180044039 (_GetStringPropertyFromGameConfigStore_--_1_--catch$155.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180010C98 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr);
}
