/*
 * XREFs of ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014F90
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000A26C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028034 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800285DC (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800288EC (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180028BE8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_53b45f8c27a1c8e4a22a66c2d530677f_::operator() @ 0x180029C70 (_lambda_53b45f8c27a1c8e4a22a66c2d530677f_--operator().c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002B590 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002B720 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x180037A34 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x180017AF8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStringPropertyFromGameConfigStore(__int64 a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rdx
  unsigned int v9; // ebx
  const char *v11; // r9
  int v12; // eax
  void *v13; // rdx
  char *v14; // rcx
  HRESULT String; // eax
  char *v16; // rcx
  void *v17; // rdx
  char *v18; // rcx
  void *v19; // rdx
  char *v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-58h]
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v26; // [rsp+90h] [rbp+8h] BYREF

  v5 = a3;
  if ( !a1 )
  {
    v8 = 203LL;
LABEL_3:
    v9 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v9);
    return v9;
  }
  if ( !a4 )
  {
    v8 = 204LL;
    goto LABEL_3;
  }
  v26 = 0;
  v22 = *a2;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
         a1,
         &v22,
         a3,
         0LL,
         &v26);
  if ( (_WORD)v9 == 2 )
    return 0LL;
  if ( (v9 & 0x80000000) != 0 )
  {
    v8 = 218LL;
    goto LABEL_4;
  }
  *(_OWORD *)Block = 0LL;
  v24 = 0LL;
  try
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
      Block,
      (unsigned int)v26);
  }
  catch ( ... )
  {
    v21 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0xE3,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            v11);
    v19 = Block[0];
    if ( Block[0] )
    {
      v20 = (char *)Block[0];
      if ( v24 - (unsigned __int64)Block[0] >= 0x1000 )
      {
        if ( ((__int64)Block[0] & 0x1F) != 0
          || (v19 = (void *)*((_QWORD *)Block[0] - 1), v19 >= Block[0])
          || (v20 = (char *)((char *)Block[0] - (char *)v19 - 8), (unsigned __int64)v20 > 0x1F) )
        {
          _o__invalid_parameter_noinfo_noreturn(v20, v19);
          __debugbreak();
        }
      }
      operator delete(v19);
    }
    return v21;
  }
  v22 = *a2;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, void *, int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v22,
          v5,
          Block[0],
          &v26);
  v9 = v12;
  if ( v12 >= 0 )
  {
    String = WindowsCreateString((PCNZWCH)Block[0], (unsigned int)v26 >> 1, a4);
    v9 = String;
    if ( String >= 0 )
    {
      v17 = Block[0];
      if ( Block[0] )
      {
        v18 = (char *)Block[0];
        if ( v24 - (unsigned __int64)Block[0] >= 0x1000 )
        {
          if ( ((__int64)Block[0] & 0x1F) != 0
            || (v17 = (void *)*((_QWORD *)Block[0] - 1), v17 >= Block[0])
            || (v18 = (char *)((char *)Block[0] - (char *)v17 - 8), (unsigned __int64)v18 > 0x1F) )
          {
            _o__invalid_parameter_noinfo_noreturn(v18, v17);
            __debugbreak();
          }
        }
        operator delete(v17);
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)String);
    v13 = Block[0];
    if ( !Block[0] )
      return v9;
    v16 = (char *)Block[0];
    if ( v24 - (unsigned __int64)Block[0] >= 0x1000 )
    {
      if ( ((__int64)Block[0] & 0x1F) != 0
        || (v13 = (void *)*((_QWORD *)Block[0] - 1), v13 >= Block[0])
        || (v16 = (char *)((char *)Block[0] - (char *)v13 - 8), (unsigned __int64)v16 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v16, v13);
        __debugbreak();
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v12);
    v13 = Block[0];
    if ( !Block[0] )
      return v9;
    v14 = (char *)Block[0];
    if ( v24 - (unsigned __int64)Block[0] >= 0x1000 )
    {
      if ( ((__int64)Block[0] & 0x1F) != 0
        || (v13 = (void *)*((_QWORD *)Block[0] - 1), v13 >= Block[0])
        || (v14 = (char *)((char *)Block[0] - (char *)v13 - 8), (unsigned __int64)v14 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v14, v13);
        __debugbreak();
      }
    }
  }
  operator delete(v13);
  return v9;
}
