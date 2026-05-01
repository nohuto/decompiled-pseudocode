/*
 * XREFs of ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800373A8
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180027CFC (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028510 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180036AA8 (-RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x180014C60 (-GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z.c)
 *     ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800152B4 (-GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$C.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x18003711C (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180037FD0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  __int64 FirstGameConfig; // r15
  __int64 *v3; // r14
  __int64 v4; // rcx
  int RelatedProcessesFromGameConfigStore; // eax
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int NullableInt; // ebx
  unsigned int v14; // esi
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct _GUID v31; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v33; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v34; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+40h] BYREF

  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  *((_BYTE *)this + 104) = (*(_DWORD *)(*(_QWORD *)(FirstGameConfig + 16) + 32LL) & 0x80) != 0;
  *((_BYTE *)this + 168) = (*(_DWORD *)(*(_QWORD *)(FirstGameConfig + 16) + 32LL) & 0x100) == 0;
  v3 = (__int64 *)((char *)this + 112);
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v33 = 0LL;
  v31 = *(struct _GUID *)FirstGameConfig;
  RelatedProcessesFromGameConfigStore = GetRelatedProcessesFromGameConfigStore(
                                          *((_QWORD *)this + 9),
                                          (__int128 *)&v31,
                                          &v33);
  v6 = RelatedProcessesFromGameConfigStore;
  v7 = v33;
  if ( RelatedProcessesFromGameConfigStore >= 0 )
  {
    v9 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    RelatedProcessesFromGameConfigStore = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v7)(
                                            v7,
                                            &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
                                            (char *)this + 112);
    v6 = RelatedProcessesFromGameConfigStore;
    if ( RelatedProcessesFromGameConfigStore < 0 )
    {
      v8 = 323LL;
      goto LABEL_9;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v11 = *((_QWORD *)this + 9);
    LODWORD(v33) = 0;
    v35 = 4;
    v31 = *(struct _GUID *)FirstGameConfig;
    v12 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, __int64 *, unsigned int *))(*(_QWORD *)v11 + 64LL))(
            v11,
            &v31,
            19LL,
            &v33,
            &v35);
    NullableInt = v12;
    if ( v12 >= 0 )
    {
      v16 = BYTE3(v33);
      v15 = WORD1(v33);
      v14 = (unsigned int)v33 >> 8;
      NullableInt = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x16C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v12);
      LOBYTE(v14) = v33;
      LOBYTE(v15) = v33;
      LOBYTE(v16) = v33;
    }
    if ( (_WORD)NullableInt == 2 )
    {
      v17 = *((_QWORD *)this + 15);
      if ( v17 )
      {
        *((_QWORD *)this + 15) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = *((_QWORD *)this + 16);
      if ( v18 )
      {
        *((_QWORD *)this + 16) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = *((_QWORD *)this + 17);
      if ( v19 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v20 = 339LL;
        goto LABEL_24;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v16,
                      (__int64 *)this + 15,
                      (unsigned __int8)v16);
      if ( NullableInt < 0 )
      {
        v20 = 340LL;
        goto LABEL_24;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v21,
                      (__int64 *)this + 16,
                      (unsigned __int8)v15);
      if ( NullableInt < 0 )
      {
        v20 = 341LL;
        goto LABEL_24;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v22,
                      (__int64 *)this + 17,
                      (unsigned __int8)v14);
      if ( NullableInt < 0 )
      {
        v20 = 342LL;
        goto LABEL_24;
      }
    }
    v34 = 0;
    v23 = *((_QWORD *)this + 9);
    LODWORD(v33) = 4;
    v31 = *(struct _GUID *)FirstGameConfig;
    v24 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, unsigned int *, __int64 *))(*(_QWORD *)v23 + 64LL))(
            v23,
            &v31,
            20LL,
            &v34,
            &v33);
    NullableInt = v24;
    if ( v24 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x143,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v24);
    if ( (_WORD)NullableInt == 2 )
    {
      v26 = *((_QWORD *)this + 18);
      if ( v26 )
      {
        *((_QWORD *)this + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v20 = 353LL;
        goto LABEL_24;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v25,
                      (__int64 *)this + 18,
                      v34);
      if ( NullableInt < 0 )
      {
        v20 = 354LL;
        goto LABEL_24;
      }
    }
    v31 = *(struct _GUID *)FirstGameConfig;
    NullableInt = GetGameCpuMask(
                    *((struct ExecutionModel::IGameConfigStore **)this + 9),
                    &v31,
                    (unsigned int *)&v33,
                    &v35);
    if ( (_WORD)NullableInt == 2 )
    {
      v28 = *((_QWORD *)this + 19);
      if ( v28 )
      {
        *((_QWORD *)this + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = *((_QWORD *)this + 20);
      if ( v29 )
      {
        *((_QWORD *)this + 20) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      return 0LL;
    }
    if ( NullableInt >= 0 )
    {
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v27,
                      (__int64 *)this + 19,
                      v33);
      if ( NullableInt >= 0 )
      {
        NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                        v30,
                        (__int64 *)this + 20,
                        v35);
        if ( NullableInt >= 0 )
          return 0LL;
        v20 = 369LL;
      }
      else
      {
        v20 = 368LL;
      }
    }
    else
    {
      v20 = 367LL;
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)NullableInt);
    return (unsigned int)NullableInt;
  }
  v8 = 321LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)(unsigned int)RelatedProcessesFromGameConfigStore);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
