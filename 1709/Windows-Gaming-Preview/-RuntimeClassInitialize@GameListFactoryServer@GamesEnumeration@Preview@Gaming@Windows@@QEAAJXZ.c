/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x1800189D0
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001B8F0 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180018E30 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_180025680.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v12; // [rsp+50h] [rbp+8h]

  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    *((_QWORD *)this + 14) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v2);
  }
  *((_QWORD *)this + 14) = 0LL;
  v3 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v12 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v3[4] = 1LL;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::`vftable';
  v6 = v3 + 1;
  v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::`vftable'{for `IWeakReferenceSource'};
  v7 = v4 + 2;
  v4[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v12;
  }
  *v4 = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable';
  *v6 = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable'{for `IWeakReferenceSource'};
  *v7 = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>'};
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[10] = 0LL;
  InitializeSRWLock((PSRWLOCK)v4 + 11);
  InitializeSRWLock((PSRWLOCK)v4 + 12);
  v4[13] = 0LL;
  InitializeSRWLock((PSRWLOCK)v4 + 14);
  InitializeSRWLock((PSRWLOCK)v4 + 15);
  v4[16] = 0LL;
  v5 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::RuntimeClassInitialize((Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *)v4);
  if ( v5 >= 0 )
  {
    if ( v4 )
    {
      v8 = v4[4];
      while ( v8 >= 0 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64(v4 + 4, v8 + 1, v8);
        if ( v9 == v8 )
          goto LABEL_16;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
    }
LABEL_16:
    *((_QWORD *)this + 14) = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v4);
    v5 = 0;
  }
  else if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v4);
  }
  if ( v5 < 0 )
    goto LABEL_20;
  return 0LL;
}
