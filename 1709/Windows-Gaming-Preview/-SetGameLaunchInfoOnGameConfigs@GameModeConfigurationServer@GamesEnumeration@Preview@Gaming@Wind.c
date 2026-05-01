/*
 * XREFs of ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180036FAC
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180027CFC (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_b96116ebcf2e86e11ba2e7ddedf6dff5_::operator() @ 0x18002ADDC (_lambda_b96116ebcf2e86e11ba2e7ddedf6dff5_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800147BC (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        HSTRING *a2,
        HSTRING *a3)
{
  __int64 *v3; // rdi
  __int64 *v7; // rbx
  bool v8; // zf
  __int64 *v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 *i; // rax
  __int128 v16[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (__int64 *)*((_QWORD *)this + 11);
  v7 = (__int64 *)*v3;
  while ( v7 != v3 )
  {
    v8 = *a3 == 0LL;
    v9 = (__int64 *)*((_QWORD *)this + 9);
    v16[0] = *((_OWORD *)v7 + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v9 + 72))(
              v9,
              v16,
              26LL,
              &word_18004E380,
              2);
      if ( v10 < 0 )
      {
        v11 = 241LL;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = SetStringPropertyToGameConfigStore(v9, v16, 0x1Au, a3);
      if ( v10 < 0 )
      {
        v11 = 234LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
    v8 = *a2 == 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 9);
    v16[0] = *((_OWORD *)v7 + 2);
    if ( v8 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v13 + 72))(
              v13,
              v16,
              25LL,
              &word_18004E380,
              2);
      if ( v10 < 0 )
      {
        v11 = 258LL;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = SetStringPropertyToGameConfigStore(v13, v16, 0x19u, a2);
      if ( v10 < 0 )
      {
        v11 = 250LL;
        goto LABEL_6;
      }
    }
    if ( !*((_BYTE *)v7 + 25) )
    {
      v14 = (__int64 *)v7[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        do
        {
          v7 = v14;
          v14 = (__int64 *)*v14;
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
    }
  }
  return 0LL;
}
