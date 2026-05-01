/*
 * XREFs of ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001C840
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x1800193CC (--0GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180019550 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@$01@WRL@Microsoft@@UEAAKXZ @ 0x180026160 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatic_ea_180026160.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@@23@UIGameListStatics2@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180026528 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v4; // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v9; // rax
  int CanCastTo; // esi
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v11; // rdi
  signed __int32 v12; // edx
  int v13; // edx
  signed __int32 v14; // eax
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v16; // [rsp+20h] [rbp-38h]

  *a1 |= 4u;
  v4 = 0LL;
  v16 = 0LL;
  v9 = (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)operator new(
                                                                              0x70uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GameListFactoryServer(v9);
    CanCastTo = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(v11);
    if ( CanCastTo >= 0 )
    {
      if ( v11 )
      {
        v12 = *((_DWORD *)v11 + 17);
        if ( v12 == 0x7FFFFFFF )
          goto LABEL_12;
        do
        {
          if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)v11 + 17, v12 + 1, v12) )
            break;
          v12 = *((_DWORD *)v11 + 17);
        }
        while ( v12 != 0x7FFFFFFF );
        if ( v12 == 0x7FFFFFFF )
LABEL_12:
          v13 = 0x7FFFFFFF;
        else
          v13 = v12 + 1;
        if ( (*((_BYTE *)v11 + 88) & 4) == 0 && v13 == 2 )
          _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      }
      v4 = v11;
      v16 = v11;
      if ( v11 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v11);
      CanCastTo = 0;
    }
    else if ( v11 )
    {
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v11);
    }
    if ( CanCastTo >= 0 )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                    v4,
                    a3,
                    a4);
      if ( CanCastTo >= 0 )
      {
        if ( (*(_BYTE *)a1 & 4) == 0 )
        {
          do
            v14 = *((_DWORD *)v4 + 17);
          while ( v14 != 0x7FFFFFFF
               && v14 != _InterlockedCompareExchange((volatile signed __int32 *)v4 + 17, v14 + 1, v14) );
          v4 = v16;
        }
        *((_DWORD *)v4 + 22) = *a1;
        *((_QWORD *)v4 + 10) = a2;
        v4 = 0LL;
        CanCastTo = 0;
      }
    }
  }
  else
  {
    CanCastTo = -2147024882;
  }
  if ( v4 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(v4);
  return (unsigned int)CanCastTo;
}
