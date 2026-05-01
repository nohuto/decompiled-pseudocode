/*
 * XREFs of ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001B7C0 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180027CFC (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002843C (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002B85C (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18002CF9C (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800373A8 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfigs(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // r15
  __int64 v10; // rdx
  char v11; // r13
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  int v14; // eax
  int v15; // esi
  __int64 *v16; // rax
  __int64 *i; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  volatile signed __int64 *v20; // rcx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v21; // rax
  __int64 v22; // rax
  volatile signed __int64 *v23; // rbx
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int PropertyValues; // eax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  struct _GUID v30; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !a2[1] )
  {
    v6 = -2147024809;
    v7 = 834LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 835LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  if ( *(_QWORD *)(a1 + 264) && *(_QWORD *)(a1 + 272) )
  {
    v11 = 1;
    v12 = (__int64 *)*a2;
    v13 = (__int64 *)*v12;
    while ( v13 != v12 )
    {
      v30 = (struct _GUID)*((_OWORD *)v13 + 2);
      v14 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
              (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
              &v30,
              (const struct ExecutionModel::GameConfig **)v13 + 6,
              (__int64)a3);
      v15 = v14;
      if ( v14 < 0 )
      {
        v18 = (unsigned int)v14;
        v19 = 861LL;
        goto LABEL_44;
      }
      if ( !*((_BYTE *)v13 + 25) )
      {
        v16 = (__int64 *)v13[2];
        if ( *((_BYTE *)v16 + 25) )
        {
          for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v13 = i;
          v13 = i;
        }
        else
        {
          do
          {
            v13 = v16;
            v16 = (__int64 *)*v16;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
    }
    goto LABEL_46;
  }
  v11 = 0;
  v20 = *(volatile signed __int64 **)(a1 + 264);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 264) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v20);
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  v21 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)operator new(
                                                                                     0xD8uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( !v21 )
  {
    v15 = -2147024882;
LABEL_43:
    v18 = (unsigned int)v15;
    v19 = 849LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v18);
    goto LABEL_47;
  }
  v22 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v21);
  v23 = (volatile signed __int64 *)v22;
  v24 = (__int64 *)(v22 + 88);
  if ( (__int64 *)(v22 + 88) != a2 )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear((_QWORD *)(v22 + 88));
    v25 = *v24;
    *v24 = *a2;
    *a2 = v25;
    v26 = v24[1];
    v24[1] = a2[1];
    a2[1] = v26;
  }
  std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=(v23 + 9, a3);
  PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)v23);
  v15 = PropertyValues;
  if ( PropertyValues >= 0 )
    v15 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)PropertyValues);
  if ( v15 >= 0 )
  {
    if ( v23 )
    {
      v28 = *((_QWORD *)v23 + 8);
      while ( v28 >= 0 )
      {
        v29 = v28;
        v28 = _InterlockedCompareExchange64(v23 + 8, v28 + 1, v28);
        if ( v29 == v28 )
          goto LABEL_39;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v28 + 16));
    }
LABEL_39:
    *(_QWORD *)(a1 + 264) = v23;
    if ( v23 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v23);
    v15 = 0;
  }
  else if ( v23 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v23);
  }
  if ( v15 < 0 )
    goto LABEL_43;
  std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=(a1 + 272, a3);
LABEL_46:
  LOBYTE(v10) = v11;
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
    (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
    v10);
  v15 = 0;
LABEL_47:
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)v15;
}
