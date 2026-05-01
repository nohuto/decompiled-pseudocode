/*
 * XREFs of ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800372A4
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180027CFC (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002843C (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     _lambda_2f005c4553e058cc09db3219ad9ea13a_::operator() @ 0x18002B150 (_lambda_2f005c4553e058cc09db3219ad9ea13a_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800147BC (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  __int64 *v3; // rdi
  __int64 *v7; // rbx
  bool v8; // zf
  __int64 *v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  __int64 *v13; // rax
  __int64 *i; // rax
  __int128 v15[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(__int64 **)(a1 + 88);
  v7 = (__int64 *)*v3;
  while ( v7 != v3 )
  {
    v8 = *a3 == 0LL;
    v9 = *(__int64 **)(a1 + 72);
    v15[0] = *((_OWORD *)v7 + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, const WCHAR *, int))(*v9 + 72))(
              v9,
              v15,
              a2,
              &word_18004E380,
              2);
      if ( v10 < 0 )
      {
        v11 = 302LL;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = SetStringPropertyToGameConfigStore(v9, v15, a2, a3);
      if ( v10 < 0 )
      {
        v11 = 295LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
    if ( !*((_BYTE *)v7 + 25) )
    {
      v13 = (__int64 *)v7[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        do
        {
          v7 = v13;
          v13 = (__int64 *)*v13;
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
  }
  return 0LL;
}
