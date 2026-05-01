/*
 * XREFs of ?get_GameModeConfiguration@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x18002B370
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036800 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180036800.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_GameModeConfiguration(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v5; // rax
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 4;
  EnterCriticalSection(this + 4);
  v5 = 0LL;
  v7 = 0LL;
  if ( this[6].SpinCount && this[7].DebugInfo )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
      this[6].SpinCount,
      &GUID_78e591af_b142_4ef0_8830_55bc2be4f5ea,
      &v7);
    v5 = v7;
  }
  v7 = 0LL;
  *a2 = v5;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
