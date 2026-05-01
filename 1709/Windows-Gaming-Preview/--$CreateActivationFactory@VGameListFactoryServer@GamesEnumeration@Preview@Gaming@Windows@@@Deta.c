/*
 * XREFs of ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18001884C (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x1800189D0 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@VNil@Details@23@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@V4523@V4523@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800254F8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@VNil@Details@23@UIAct.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v8; // rax
  int CanCastTo; // esi
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v10; // rdi
  signed __int32 v11; // eax
  int v12; // ebx
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  int v15; // ebx
  __int64 v16; // r10
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v17; // r10
  signed __int32 v18; // eax
  int v19; // ebx
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v21; // [rsp+20h] [rbp-28h]

  *a1 |= 4u;
  v21 = 0LL;
  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)operator new(
                                                                              0x78uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    CanCastTo = -2147024882;
    goto LABEL_30;
  }
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GameListFactoryServer(v8);
  CanCastTo = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(v10);
  if ( CanCastTo >= 0 )
  {
    if ( v10 )
    {
      v13 = _InterlockedIncrement((volatile signed __int32 *)v10 + 19);
      if ( (*((_BYTE *)v10 + 96) & 4) == 0 && v13 == 2 )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    v21 = v10;
    if ( !v10 )
      goto LABEL_24;
    v14 = _InterlockedDecrement((volatile signed __int32 *)v10 + 19);
    if ( v14 )
    {
      if ( (*((_BYTE *)v10 + 96) & 4) != 0 || v14 != 1 )
        goto LABEL_24;
    }
    else
    {
      v15 = *((_DWORD *)v10 + 24) >> 2;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *, __int64))(*(_QWORD *)v10 + 56LL))(
        v10,
        1LL);
      if ( (v15 & 1) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_24;
    }
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
LABEL_24:
    CanCastTo = 0;
    goto LABEL_25;
  }
  if ( v10 )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)v10 + 19);
    if ( v11 )
    {
      if ( (*((_BYTE *)v10 + 96) & 4) == 0 && v11 == 1 )
        goto LABEL_11;
    }
    else
    {
      v12 = *((_DWORD *)v10 + 24) >> 2;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *, __int64))(*(_QWORD *)v10 + 56LL))(
        v10,
        1LL);
      if ( (v12 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_11:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
LABEL_25:
  if ( CanCastTo >= 0 )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,Microsoft::WRL::Details::Nil,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v21,
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      if ( (*(_BYTE *)a1 & 4) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 76));
      v17 = v21;
      v21 = 0LL;
      CanCastTo = 0;
      *((_DWORD *)v17 + 24) = *a1;
      *((_QWORD *)v17 + 11) = a2;
    }
  }
LABEL_30:
  if ( v21 )
  {
    v18 = _InterlockedDecrement((volatile signed __int32 *)v21 + 19);
    if ( v18 )
    {
      if ( (*((_BYTE *)v21 + 96) & 4) == 0 && v18 == 1 )
        goto LABEL_37;
    }
    else
    {
      v19 = *((_DWORD *)v21 + 24) >> 2;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *, __int64))(*(_QWORD *)v21 + 56LL))(
        v21,
        1LL);
      if ( (v19 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_37:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (unsigned int)CanCastTo;
}
