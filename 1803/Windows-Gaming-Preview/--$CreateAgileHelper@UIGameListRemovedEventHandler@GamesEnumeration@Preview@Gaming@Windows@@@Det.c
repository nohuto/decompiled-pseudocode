/*
 * XREFs of ??$CreateAgileHelper@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x18001CF28
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001AF30 (-add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FCB0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  int AgileReference; // eax
  __int64 v5; // rdi
  char *v6; // rax
  char *v7; // rsi
  char *v8; // rbx
  _QWORD *v9; // rsi
  bool v10; // zf
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h]
  __int64 v15; // [rsp+88h] [rbp+48h]

  *a2 = 0LL;
  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    AgileReference = RoGetAgileReference(0LL, &GUID_10c5648f_6c8f_4712_9b38_474bc22e76d8, a1, &v12);
    v5 = v12;
    v2 = AgileReference;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v2 >= 0 )
  {
    v12 = 0LL;
    v13 = v5;
    v6 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = 0LL;
    v8 = v6;
    if ( v6 )
    {
      v9 = v6 + 8;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 8));
      v10 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler'};
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v8 + 15) = 1;
      if ( !v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v5 = v13;
      }
      *((_QWORD *)v8 + 8) = 0LL;
      if ( v8 + 64 != (char *)&v13 )
      {
        *((_QWORD *)v8 + 8) = v5;
        v5 = 0LL;
      }
      *(_QWORD *)v8 = off_180048DD8;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v7 = v8;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v7 )
    {
      *a2 = v7;
      v2 = 0;
    }
    else
    {
      v2 = -2147024882;
    }
    v5 = v12;
  }
  if ( v5 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v2;
}
