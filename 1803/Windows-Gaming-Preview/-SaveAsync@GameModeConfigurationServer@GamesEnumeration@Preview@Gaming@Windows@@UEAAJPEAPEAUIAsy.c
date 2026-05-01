/*
 * XREFs of ?SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180039800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C420 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800305C4 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SaveAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r8
  int v6; // edi
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( this )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
  }
  v8[2] = 0;
  v8[0] = 3;
  v8[1] = 128;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *v4 = &off_18004B830;
    v4[1] = this;
    v4[2] = this;
    if ( this )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
  }
  else
  {
    v4 = 0LL;
  }
  v6 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
         (__int64)v8,
         (__int64 *)a2,
         v5,
         (void (__fastcall ***)(_QWORD, __int64))v4);
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this);
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x338,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v6);
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this);
  return (unsigned int)v6;
}
