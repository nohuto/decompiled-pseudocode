/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18000A950
 * Callers:
 *     ??$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18000C2A0 (--$CreateActivationFactory@VGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@@Deta.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004B50 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@Z@std@@@Z @ 0x18001E274 (-SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXA.c)
 *     ?SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@@Z @ 0x18001E438 (-SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAE.c)
 *     ?SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z@std@@@Z @ 0x18001E5FC (-SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  LPVOID *ppv; // rbx
  __int64 v3; // rcx
  HRESULT Instance; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rcx
  char *v9; // rax
  char *v10; // rbx
  int v11; // r14d
  _QWORD *v12; // r14
  _QWORD *v13; // r12
  __int64 v14; // rcx
  HRESULT v15; // eax
  int v16; // eax
  _QWORD *v17; // rdx
  _QWORD *v18; // rdx
  const char *v19; // r9
  _QWORD *v20; // rdx
  char *v21; // [rsp+38h] [rbp-100h]
  _QWORD v22[7]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD *v23; // [rsp+88h] [rbp-B0h]
  _QWORD v24[7]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+C8h] [rbp-70h]
  _QWORD v26[7]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD *v27; // [rsp+108h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  ppv = (LPVOID *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *ppv = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Instance = CoCreateInstance(
               &GUID_4b6c85f1_a6d9_433a_9789_89ea153626ed,
               0LL,
               4u,
               &GUID_bd3e41ca_2e87_47a8_8ec0_6f0fe76752ac,
               ppv);
  if ( Instance < 0 )
  {
    v5 = 33LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v7 = *((_QWORD *)this + 11);
  if ( v7 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Instance = CoCreateInstance(
               &GUID_4661626c_9f41_40a9_b3f5_5580e80cb347,
               0LL,
               4u,
               &GUID_93af7f9c_2f24_4377_be59_a3a109d0ac64,
               (LPVOID *)this + 11);
  if ( Instance < 0 )
  {
    v5 = 36LL;
    goto LABEL_5;
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    *((_QWORD *)this + 12) = 0LL;
    if ( _InterlockedExchangeAdd(v8 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  *((_QWORD *)this + 12) = 0LL;
  v9 = (char *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v21 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
LABEL_37:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v12 = v9 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *((_DWORD *)v10 + 9) = 1;
  *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IVisualElementEventSink'};
  *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v10 = v21;
  }
  *(_QWORD *)v10 = &Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`vftable'{for `IVisualElementEventSink'};
  *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)v10 + 10) = 0;
  *((_QWORD *)v10 + 6) = 0LL;
  *((_QWORD *)v10 + 14) = 0LL;
  *((_QWORD *)v10 + 22) = 0LL;
  *((_QWORD *)v10 + 30) = 0LL;
  v13 = v10 + 48;
  v14 = *((_QWORD *)v10 + 6);
  if ( v14 )
  {
    *v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = CoCreateInstance(
          &GUID_a6358b41_04b3_477f_b8e5_7edb1a5d7acd,
          0LL,
          1u,
          &GUID_8200309e_b0a8_4269_bd55_e0442725d348,
          (LPVOID *)v10 + 6);
  v11 = v15;
  if ( v15 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, char *))(*(_QWORD *)*v13 + 24LL))(
            *v13,
            v10,
            25LL,
            v10 + 40);
    v11 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
        (const char *)(unsigned int)v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
      (const char *)(unsigned int)v15);
  }
  if ( v11 >= 0 )
  {
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 9);
    *((_QWORD *)this + 12) = v10;
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 9, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 32LL))(v10, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      }
    }
    v11 = 0;
  }
  else if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 32LL))(v10, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  if ( v11 < 0 )
    goto LABEL_37;
  try
  {
    v22[0] = off_18002D568;
    v22[1] = this;
    v23 = v22;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetAppStateChangedHandler(
      *((_QWORD *)this + 12),
      v22);
    if ( v23 )
    {
      v17 = v22;
      LOBYTE(v17) = v23 != v22;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v17);
    }
    v24[0] = off_18002D538;
    v24[1] = this;
    v25 = v24;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetTileStateChangedHandler(
      *((_QWORD *)this + 12),
      v24);
    if ( v25 )
    {
      v18 = v24;
      LOBYTE(v18) = v25 != v24;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v25 + 32LL))(v25, v18);
    }
    v26[0] = off_18002D508;
    v26[1] = this;
    v27 = v26;
    Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetViewContentsChangedHandler(
      *((_QWORD *)this + 12),
      v26);
    if ( v27 )
    {
      v20 = v26;
      LOBYTE(v20) = v27 != v26;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v27 + 32LL))(v27, v20);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x42,
                           (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
                           v19);
  }
  return 0LL;
}
