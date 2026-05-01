/*
 * XREFs of ??1?$ComPtr@V?$AgileVector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000AC2C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults_::_1_::dtor$0 @ 0x180043BC5 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--GetResults_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$4 @ 0x180043F7C (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFi_ea_180043F7C.c)
 *     __lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator()_::_1_::dtor$8 @ 0x180044505 (__lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator()_--_1_--dtor$8.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$6 @ 0x1800448D5 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800448D5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$12 @ 0x18004491D (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18004491D.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$0 @ 0x180044B05 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0>>::~ComPtr<Windows::Foundation::Collections::Internal::AgileVector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0>>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
