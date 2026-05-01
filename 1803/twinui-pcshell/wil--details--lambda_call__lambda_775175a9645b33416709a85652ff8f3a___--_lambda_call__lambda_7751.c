/*
 * XREFs of wil::details::lambda_call__lambda_775175a9645b33416709a85652ff8f3a___::_lambda_call__lambda_775175a9645b33416709a85652ff8f3a___ @ 0x1801C083C
 * Callers:
 *     __lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator()_::_1_::dtor$1 @ 0x1801C0E9E (__lambda_ebd42d67d4ed24c24d65003e6952ebf6_--operator()_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$8 @ 0x1801C3A72 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$8.c)
 * Callees:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801C4300 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_775175a9645b33416709a85652ff8f3a___::_lambda_call__lambda_775175a9645b33416709a85652ff8f3a___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(
      *(PeoplePaneViewManager **)a1,
      **(const unsigned __int16 ***)(a1 + 8));
  }
}
