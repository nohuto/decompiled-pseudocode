/*
 * XREFs of ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x1800288D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001B7C0 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026F70 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800276A0 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::ExtractGameConfigsOwnership(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  _QWORD *v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // r15
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 *i; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  volatile signed __int32 *v20; // rbx
  volatile signed __int64 *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  _OWORD v25[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v7 = *(_QWORD **)(a1 + 264);
  if ( !v7 || !*(_QWORD *)(a1 + 272) )
  {
    v8 = -2147467259;
    v9 = 916LL;
    goto LABEL_35;
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    v8 = -2147024891;
    v9 = 919LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
    goto LABEL_36;
  }
  if ( !v7[12] )
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80004005LL);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x39B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80004005LL);
LABEL_36:
    if ( v6 )
      LeaveCriticalSection(v6);
    return v8;
  }
  v10 = v7 + 11;
  v11 = (__int64 *)v7[11];
  v12 = (__int64 *)*v11;
  while ( v12 != v11 )
  {
    v13 = v7[9];
    v25[0] = *((_OWORD *)v12 + 2);
    (*(void (__fastcall **)(__int64, _OWORD *, __int64, const WCHAR *, int))(*(_QWORD *)v13 + 72LL))(
      v13,
      v25,
      24LL,
      &word_18004E380,
      2);
    if ( !*((_BYTE *)v12 + 25) )
    {
      v14 = (__int64 *)v12[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v12 = i;
        v12 = i;
      }
      else
      {
        do
        {
          v12 = v14;
          v14 = (__int64 *)*v14;
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
  }
  if ( a2 != v10 )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear(a2);
    v16 = *a2;
    *a2 = *v10;
    *v10 = v16;
    v17 = a2[1];
    a2[1] = v7[12];
    v7[12] = v17;
  }
  v18 = v7[9];
  v19 = v7[10];
  v7[9] = 0LL;
  v7[10] = 0LL;
  v20 = (volatile signed __int32 *)a3[1];
  a3[1] = v19;
  *a3 = v18;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v21 = *(volatile signed __int64 **)(a1 + 264);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 264) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v21);
  }
  v22 = *(_QWORD *)(a1 + 200);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( *(_QWORD *)(a1 + 240) && *(_QWORD *)(a1 + 224) )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory((Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24));
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget(
      (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
      v23);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
