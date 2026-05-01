/*
 * XREFs of ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x18000E54C
 * Callers:
 *     _lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator() @ 0x18001BC20 (_lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator().c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002A3F8 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     __lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_::operator()_::_1_::dtor$9 @ 0x18004445D (__lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_--operator()_--_1_--dtor$9.c)
 *     __lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator()_::_1_::dtor$6 @ 0x1800444ED (__lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator()_--_1_--dtor$6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$14 @ 0x180044935 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180044935.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer_::_1_::dtor$1 @ 0x1800449E1 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GameModeC_ea_1800449E1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson_::_1_::dtor$0 @ 0x180044B1D (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetKglDefaultsAsJson_-.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues_::_1_::dtor$0 @ 0x180044C89 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateValues_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile_::_1_::dtor$0 @ 0x180044CA1 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--GetDefaultGameModeProfile_--_1_--dt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
