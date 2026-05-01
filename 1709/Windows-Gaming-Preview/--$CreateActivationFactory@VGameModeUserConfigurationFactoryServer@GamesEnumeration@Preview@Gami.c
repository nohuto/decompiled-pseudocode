/*
 * XREFs of ??$CreateActivationFactory@VGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800398C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180039504 (--0GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@VNil@Details@23@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameModeUserConfigurationStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@V4523@V4523@V4523@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180039E98 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@VNil@Det_ea_180039E98.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v8; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v9; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v10; // rdi
  signed __int32 v11; // eax
  signed __int32 v12; // eax
  int v13; // ebx
  int CanCastTo; // esi
  signed __int32 v15; // r8d
  int v16; // ebx
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *v18; // [rsp+20h] [rbp-28h]

  v18 = 0LL;
  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *)operator new(
                                                                                               0xA0uLL,
                                                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    CanCastTo = -2147024882;
    goto LABEL_19;
  }
  v9 = Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GameModeUserConfigurationFactoryServer(v8);
  v10 = v9;
  if ( v9 )
  {
    v11 = _InterlockedIncrement((volatile signed __int32 *)v9 + 19);
    if ( (*((_BYTE *)v10 + 96) & 4) == 0 && v11 == 2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  v18 = v10;
  if ( v10 )
  {
    v12 = _InterlockedDecrement((volatile signed __int32 *)v10 + 19);
    if ( v12 )
    {
      if ( (*((_BYTE *)v10 + 96) & 4) == 0 && v12 == 1 )
        goto LABEL_13;
    }
    else
    {
      v13 = *((_DWORD *)v10 + 24) >> 2;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *, __int64))(*(_QWORD *)v10 + 56LL))(
        v10,
        1LL);
      if ( (v13 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_13:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,Microsoft::WRL::Details::Nil,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v10,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    if ( (*a1 & 4) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 19);
    v18 = 0LL;
    *((_DWORD *)v10 + 24) = *(_DWORD *)a1;
    CanCastTo = 0;
    *((_QWORD *)v10 + 11) = a2;
  }
LABEL_19:
  if ( v18 )
  {
    v15 = _InterlockedDecrement((volatile signed __int32 *)v18 + 19);
    if ( v15 )
    {
      if ( (*((_BYTE *)v18 + 96) & 4) == 0 && v15 == 1 )
        goto LABEL_26;
    }
    else
    {
      v16 = *((_DWORD *)v18 + 24) >> 2;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *, __int64))(*(_QWORD *)v18 + 56LL))(
        v18,
        1LL);
      if ( (v16 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_26:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (unsigned int)CanCastTo;
}
