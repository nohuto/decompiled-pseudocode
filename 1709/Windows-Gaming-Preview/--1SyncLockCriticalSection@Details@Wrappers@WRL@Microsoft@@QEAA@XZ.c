/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180036940
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId_::_1_::dtor$0 @ 0x180043754 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeTitleId_--_1_--dtor.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName_::_1_::dtor$0 @ 0x18004376C (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializePackageFamilyName_-.c)
 *     __lambda_09af48e3e39cecd76313a5728b88f4f6_::operator()_::_1_::dtor$4 @ 0x180043838 (__lambda_09af48e3e39cecd76313a5728b88f4f6_--operator()_--_1_--dtor$4.c)
 *     __lambda_b96116ebcf2e86e11ba2e7ddedf6dff5_::operator()_::_1_::dtor$2 @ 0x180043958 (__lambda_b96116ebcf2e86e11ba2e7ddedf6dff5_--operator()_--_1_--dtor$2.c)
 *     __lambda_2f005c4553e058cc09db3219ad9ea13a_::operator()_::_1_::dtor$1 @ 0x180043970 (__lambda_2f005c4553e058cc09db3219ad9ea13a_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x180043BFD (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     __lambda_9420435491f7262d86e5ad3a94262e3a_::operator()_::_1_::dtor$0 @ 0x180043C78 (__lambda_9420435491f7262d86e5ad3a94262e3a_--operator()_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x180043CA8 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
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
