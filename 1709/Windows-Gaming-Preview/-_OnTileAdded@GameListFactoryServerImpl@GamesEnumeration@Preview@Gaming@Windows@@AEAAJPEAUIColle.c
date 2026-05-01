/*
 * XREFs of ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180019A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000DE5C (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800105C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800105C0.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001D04C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Wind.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800262F4 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded(
        RTL_SRWLOCK *this,
        struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *a2)
{
  int v4; // eax
  int v5; // edi
  PVOID Ptr; // rdi
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *v7; // rsi
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v8; // r15
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v9; // rax
  volatile signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  volatile signed __int32 *v13; // rbx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v14; // rcx
  _QWORD v15[5]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  volatile signed __int64 *v17; // [rsp+90h] [rbp+40h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v18; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = -2LL;
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v18 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Ptr = this[16].Ptr;
    v7 = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager *)this[7].Ptr;
    v8 = v18;
    v17 = 0LL;
    v9 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                              0x140uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
    {
      v10 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v9);
      v15[2] = v10;
      v15[3] = 0LL;
      v5 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
             (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v10,
             v8,
             v7,
             (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)(((unsigned __int64)Ptr
                                                                                                + 8) & -(__int64)(Ptr != 0LL)));
      if ( v5 >= 0 )
      {
        if ( v10 )
        {
          v11 = *((_QWORD *)v10 + 18);
          while ( v11 >= 0 )
          {
            v12 = v11;
            v11 = _InterlockedCompareExchange64(v10 + 18, v11 + 1, v11);
            if ( v12 == v11 )
              goto LABEL_16;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
        }
LABEL_16:
        v17 = v10;
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v10);
        v5 = 0;
      }
      else if ( v10 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v10);
      }
      if ( v5 >= 0 )
      {
        v15[0] = v17;
        v5 = 0;
        v13 = 0LL;
        AcquireSRWLockExclusive(this + 11);
        if ( this[10].Ptr )
        {
          v13 = (volatile signed __int32 *)this[10].Ptr;
          _InterlockedIncrement(v13 + 3);
        }
        if ( this != (RTL_SRWLOCK *)-88LL )
          ReleaseSRWLockExclusive(this + 11);
        if ( v13 )
        {
          v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_(
                 v15,
                 v13,
                 &this[10]);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
          }
          if ( v5 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x16D,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
              (const char *)(unsigned int)v5);
        }
        goto LABEL_31;
      }
    }
    else
    {
      v5 = -2147024882;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x16B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v5);
LABEL_31:
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x164,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v4);
LABEL_33:
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v5;
}
