/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180037818
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId_::_1_::dtor$0 @ 0x18004476D (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeTitleId_--_1_--dtor.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName_::_1_::dtor$0 @ 0x180044785 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializePackageFamilyName_-.c)
 *     __lambda_53b45f8c27a1c8e4a22a66c2d530677f_::operator()_::_1_::dtor$4 @ 0x180044851 (__lambda_53b45f8c27a1c8e4a22a66c2d530677f_--operator()_--_1_--dtor$4.c)
 *     __lambda_4724f0c1a94bf07b6b72cce17a0d0b5c_::operator()_::_1_::dtor$2 @ 0x180044965 (__lambda_4724f0c1a94bf07b6b72cce17a0d0b5c_--operator()_--_1_--dtor$2.c)
 *     __lambda_ca4fa94277cd73a625c05d148e00fab1_::operator()_::_1_::dtor$1 @ 0x18004497D (__lambda_ca4fa94277cd73a625c05d148e00fab1_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x180044B4D (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     __lambda_014091731fcf32ee18f36372b9accb6d_::operator()_::_1_::dtor$0 @ 0x180044BC8 (__lambda_014091731fcf32ee18f36372b9accb6d_--operator()_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x180044BF8 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
