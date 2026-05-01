/*
 * XREFs of ?GetDefault@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeUserConfiguration@2345@@Z @ 0x180039690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FA10 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002E220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039D80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180039D80.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetDefault(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // r14
  char *v5; // rax
  char *v6; // rbx
  int Interface; // edi
  _QWORD *v8; // rdi
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rcx
  volatile signed __int64 *v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v15; // rcx
  int v16; // eax
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v20; // [rsp+40h] [rbp+8h] BYREF
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v20 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v3 = (_QWORD *)((char *)this + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !*v3 )
  {
    *v3 = 0LL;
    v5 = (char *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
    {
      Interface = -2147024882;
LABEL_14:
      v13 = (unsigned int)Interface;
      v14 = 107LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)v13);
      if ( v2 )
        LeaveCriticalSection(v2);
      v17 = v20;
      goto LABEL_25;
    }
    v8 = v5 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 16));
    v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v6 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v6 + 8) = 1LL;
    if ( !v9 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v6 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable';
    *((_QWORD *)v6 + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 72), 0, 0);
    *((_QWORD *)v6 + 14) = 0LL;
    *((_QWORD *)v6 + 15) = 0LL;
    v21 = 0LL;
    v10 = CreateGameConfigStoreClient(&v21);
    Interface = v10;
    if ( v10 >= 0 )
    {
      v11 = *((_QWORD *)v6 + 15);
      *((_QWORD *)v6 + 15) = v21;
      if ( v11 )
        FreeGameConfigStoreClient(v11);
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x12,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)v10);
    }
    v12 = (volatile signed __int64 *)v6;
    if ( Interface >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
                    v6,
                    &GUID_72d34af4_756b_470f_a0c2_ba62a90795db,
                    v3);
      v12 = (volatile signed __int64 *)v6;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v12);
    if ( Interface < 0 )
      goto LABEL_14;
  }
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **))*v3)(
          *v3,
          &GUID_72d34af4_756b_470f_a0c2_ba62a90795db,
          &v20);
  Interface = v16;
  if ( v16 < 0 )
  {
    v13 = (unsigned int)v16;
    v14 = 110LL;
    goto LABEL_19;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v17 = 0LL;
  *a2 = v20;
  Interface = 0;
LABEL_25:
  if ( v17 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)Interface;
}
