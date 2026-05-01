/*
 * XREFs of ?get_GameModeConfiguration@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x18002C050
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037740 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180037740.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_GameModeConfiguration(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v5; // rax
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v5 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 33) && *((_QWORD *)this + 34) )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
      *((_QWORD *)this + 33),
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
