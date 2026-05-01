/*
 * XREFs of _lambda_f57c409ef9907fe20f12ddbbf436a36a_::operator() @ 0x18001A924
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_f57c409ef9907fe20f12ddbbf436a36a____Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x18001CA60 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_f57c409ef9907fe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001B7C0 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@XZ @ 0x18001B848 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionMode.c)
 *     ??$?0UIGameListEntry_Private@GamesEnumeration@Preview@Gaming@Windows@@@CMarshaledInterface@@QEAA@PEAUIGameListEntry_Private@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18001BCB8 (--$-0UIGameListEntry_Private@GamesEnumeration@Preview@Gaming@Windows@@@CMarshaledInterface@@QEAA.c)
 *     ??3@YAXPEAX@Z @ 0x180041618 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_f57c409ef9907fe20f12ddbbf436a36a_::operator()(
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private **a1,
        __int64 a2)
{
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private **v4; // r14
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private **v5; // rdi
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *v6; // rdi
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *v7; // r14
  int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  void *Block[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *v20; // [rsp+90h] [rbp+40h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *v21; // [rsp+98h] [rbp+48h]

  if ( (*(unsigned __int8 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)*a1 + 56LL))(*a1)
    && (*(unsigned __int8 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)a1[1] + 56LL))(a1[1])
    || (*(unsigned __int8 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)*a1 + 64LL))(*a1)
    || (v4 = a1 + 1,
        (*(unsigned __int8 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)a1[1] + 64LL))(a1[1])) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v5 = a1;
    if ( (*(unsigned __int8 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)*v4 + 56LL))(*v4) )
      v5 = a1 + 1;
    v6 = *v5;
    v20 = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)v6 + 8LL))(v6);
    if ( (*(unsigned __int8 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)*v4 + 56LL))(*v4) )
      v4 = a1;
    v7 = *v4;
    v21 = v7;
    if ( v7 )
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)v7 + 8LL))(v7);
    *(_OWORD *)Block = 0LL;
    Block[0] = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Buyheadnode();
    v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *, void **, __int128 *))(*(_QWORD *)v7 + 72LL))(
           v7,
           Block,
           &v17);
    v9 = v8;
    if ( v8 >= 0
      && (v8 = (*(__int64 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *, void **, __int128 *))(*(_QWORD *)v6 + 88LL))(
                 v6,
                 Block,
                 &v17),
          v9 = v8,
          v8 >= 0) )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v19, v6);
      v10 = *(_QWORD *)(a2 + 24);
      if ( v10 )
      {
        *(_QWORD *)(a2 + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v19;
      if ( *(_QWORD *)(a2 + 24) != v19 )
      {
        v12 = v19;
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v11 = v19;
        }
        v13 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 24) = v12;
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v11 = v19;
        }
      }
      if ( v11 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x216,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v8);
    }
    v14 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( !_InterlockedDecrement(v14 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
      v7 = v21;
      v6 = v20;
    }
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear(Block);
    operator delete(Block[0]);
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private *))(*(_QWORD *)v6 + 16LL))(v6);
    return v9;
  }
}
