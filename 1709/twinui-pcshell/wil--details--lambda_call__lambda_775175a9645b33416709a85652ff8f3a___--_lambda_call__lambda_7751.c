/*
 * XREFs of wil::details::lambda_call__lambda_775175a9645b33416709a85652ff8f3a___::_lambda_call__lambda_775175a9645b33416709a85652ff8f3a___ @ 0x180115AA4
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$8 @ 0x1801EDB04 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$8.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___::Run_::_1_::dtor$1 @ 0x1801EE104 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f7_ea_1801EE104.c)
 * Callees:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801130CC (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_775175a9645b33416709a85652ff8f3a___::_lambda_call__lambda_775175a9645b33416709a85652ff8f3a___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(*(RTL_SRWLOCK **)a1, **(char ***)(a1 + 8));
  }
}
