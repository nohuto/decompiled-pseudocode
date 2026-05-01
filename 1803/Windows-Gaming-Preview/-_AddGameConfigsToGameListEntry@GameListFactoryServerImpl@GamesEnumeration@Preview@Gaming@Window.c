/*
 * XREFs of ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001B700
 * Callers:
 *     _lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_::operator() @ 0x18001B284 (_lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_--operator().c)
 *     _lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator() @ 0x18001BC20 (_lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000E020 (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010850 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_180010850.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180010930.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x180014A1C (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@UG.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180027468 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180029660 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
        __int64 a1,
        __int64 a2,
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer **a3,
        __int64 *a4)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r15d
  int v11; // ecx
  __int128 v12; // xmm6
  int GameFromGameConfigStore; // eax
  int v14; // ebx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v15; // rcx
  __int64 v16; // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v17; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  void *Block[2]; // [rsp+38h] [rbp-69h] BYREF
  __int128 v24; // [rsp+48h] [rbp-59h] BYREF
  __int128 v25; // [rsp+58h] [rbp-49h] BYREF
  __int64 v26; // [rsp+68h] [rbp-39h]
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v27; // [rsp+70h] [rbp-31h]
  __int64 v28; // [rsp+78h] [rbp-29h]
  unsigned int v29; // [rsp+80h] [rbp-21h] BYREF
  int *v30; // [rsp+88h] [rbp-19h]
  int v31; // [rsp+90h] [rbp-11h] BYREF
  __int128 v32; // [rsp+94h] [rbp-Dh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v26 = -2LL;
  v28 = a2;
  v30 = &v31;
  v31 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v29);
  *v30 = v7;
  if ( v7 >= 0 && v29 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v28 + 48LL))(v28, 0LL, &v32);
    *v30 = v8;
  }
  v9 = 0;
  v10 = v29;
  v11 = 0;
  while ( 1 )
  {
    if ( *v30 < 0 || v11 == v10 )
      return 0LL;
    v12 = v32;
    Block[0] = 0LL;
    v25 = v32;
    GameFromGameConfigStore = GetGameFromGameConfigStore(*a4, &v25, Block);
    v14 = GameFromGameConfigStore;
    if ( GameFromGameConfigStore < 0 )
      break;
    v15 = *a3;
    if ( *a3 )
    {
      v24 = v12;
      GameFromGameConfigStore = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
                                  (char *)v15 + 24,
                                  &v24,
                                  Block,
                                  a4);
      v14 = GameFromGameConfigStore;
      if ( GameFromGameConfigStore < 0 )
      {
        v21 = 593LL;
        goto LABEL_31;
      }
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 128);
      *a3 = 0LL;
      v17 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                                 0x138uLL,
                                                                                 (const struct std::nothrow_t *)&std::nothrow);
      if ( !v17 )
      {
        v14 = -2147024882;
LABEL_28:
        v20 = (unsigned int)v14;
        v21 = 586LL;
        goto LABEL_32;
      }
      v18 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v17);
      v27 = v18;
      *(_QWORD *)&v25 = 0LL;
      v24 = v12;
      v14 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
              v18,
              (v16 + 8) & -(__int64)(v16 != 0));
      if ( v14 >= 0 )
      {
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef((__int64)v18);
        *a3 = v18;
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v18);
        v14 = 0;
      }
      else if ( v18 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v18);
      }
      if ( v14 < 0 )
        goto LABEL_28;
    }
    if ( Block[0] )
      operator delete(Block[0]);
    v11 = ++v9;
    if ( *v30 >= 0 && v9 < v29 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v28 + 48LL))(v28, v9, &v32);
      *v30 = v19;
      v11 = v9;
    }
  }
  v21 = 576LL;
LABEL_31:
  v20 = (unsigned int)GameFromGameConfigStore;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)v20);
  if ( Block[0] )
    operator delete(Block[0]);
  return (unsigned int)v14;
}
