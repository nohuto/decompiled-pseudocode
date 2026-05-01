/*
 * XREFs of ??$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x18001C308
 * Callers:
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18001B450 (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FA10 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  int AgileReference; // eax
  __int64 v5; // rsi
  char *v6; // rdi
  char *v7; // rax
  char *v8; // rbx
  _QWORD *v9; // rdi
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
    AgileReference = RoGetAgileReference(0LL, &GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64, a1, &v12);
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
    v6 = 0LL;
    v13 = v5;
    v7 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      v9 = v7 + 8;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 8));
      v10 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler'};
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
      *((_DWORD *)v8 + 17) = 1;
      if ( !v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v5 = v13;
      }
      *((_QWORD *)v8 + 9) = 0LL;
      if ( v8 + 72 != (char *)&v13 )
      {
        *((_QWORD *)v8 + 9) = v5;
        v5 = 0LL;
      }
      *(_QWORD *)v8 = off_180047DB8;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
      v6 = v8;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v5 = v12;
    if ( v6 )
    {
      *a2 = v6;
      v2 = 0;
    }
    else
    {
      v2 = -2147024882;
    }
  }
  if ( v5 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v2;
}
