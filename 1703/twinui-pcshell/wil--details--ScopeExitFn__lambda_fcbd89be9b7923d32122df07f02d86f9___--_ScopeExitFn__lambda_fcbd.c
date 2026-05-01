/*
 * XREFs of wil::details::ScopeExitFn__lambda_fcbd89be9b7923d32122df07f02d86f9___::_ScopeExitFn__lambda_fcbd89be9b7923d32122df07f02d86f9___ @ 0x1800EBBA0
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$4 @ 0x18019DA66 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$4.c)
 *     __lambda_f748ab983864a1d9251a0884a7c17331_::operator()_::_1_::dtor$1 @ 0x18019DAAE (__lambda_f748ab983864a1d9251a0884a7c17331_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1800E9BF8 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_fcbd89be9b7923d32122df07f02d86f9___::_ScopeExitFn__lambda_fcbd89be9b7923d32122df07f02d86f9___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(*(RTL_SRWLOCK **)a1, **(const unsigned __int16 ***)(a1 + 8));
  }
}
