/*
 * XREFs of ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014858
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000A1A8 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800270E0 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800276A0 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800279B0 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180027CFC (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_09af48e3e39cecd76313a5728b88f4f6_::operator() @ 0x180028E08 (_lambda_09af48e3e39cecd76313a5728b88f4f6_--operator().c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002A800 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002A990 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x180036C20 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800170EC (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??3@YAXPEAX@Z @ 0x180041618 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStringPropertyFromGameConfigStore(__int64 a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v11; // eax
  const char *v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  char *v15; // rcx
  char *v16; // rax
  HRESULT String; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  char *v20; // rcx
  void *v21; // rax
  char *v22; // rcx
  void *v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // [rsp+30h] [rbp-58h]
  __int128 v26; // [rsp+40h] [rbp-48h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v28; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v30; // [rsp+90h] [rbp+8h] BYREF

  v5 = a3;
  if ( !a1 )
  {
    v8 = 194LL;
LABEL_3:
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)0x80004003LL);
    return v9;
  }
  if ( !a4 )
  {
    v8 = 195LL;
    goto LABEL_3;
  }
  v30 = 0;
  v26 = *a2;
  v11 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v26,
          a3,
          0LL,
          &v30);
  v9 = v11;
  if ( (_WORD)v11 == 2 )
    return 0LL;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD1,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v11);
    return v9;
  }
  *(_OWORD *)Block = 0LL;
  v28 = 0LL;
  try
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
      Block,
      (unsigned int)v30);
  }
  catch ( ... )
  {
    v25 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0xDA,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            v12);
    v22 = (char *)Block[0];
    if ( Block[0] )
    {
      if ( v28 - (unsigned __int64)Block[0] >= 0x1000 )
      {
        if ( ((__int64)Block[0] & 0x1F) != 0
          || (v23 = (void *)*((_QWORD *)Block[0] - 1), v23 >= Block[0])
          || (v22 = (char *)((char *)Block[0] - (char *)v23 - 8), (unsigned __int64)v22 > 0x1F) )
        {
          _o__invalid_parameter_noinfo_noreturn(v22, v24);
          __debugbreak();
        }
        v22 = (char *)*((_QWORD *)Block[0] - 1);
      }
      operator delete(v22);
    }
    return v25;
  }
  v26 = *a2;
  v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, void *, int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v26,
          v5,
          Block[0],
          &v30);
  v9 = v13;
  if ( v13 >= 0 )
  {
    String = WindowsCreateString((PCNZWCH)Block[0], (unsigned int)v30 >> 1, a4);
    v9 = String;
    if ( String >= 0 )
    {
      v20 = (char *)Block[0];
      if ( Block[0] )
      {
        if ( v28 - (unsigned __int64)Block[0] >= 0x1000 )
        {
          if ( ((__int64)Block[0] & 0x1F) != 0
            || (v21 = (void *)*((_QWORD *)Block[0] - 1), v21 >= Block[0])
            || (v20 = (char *)((char *)Block[0] - (char *)v21 - 8), (unsigned __int64)v20 > 0x1F) )
          {
            _o__invalid_parameter_noinfo_noreturn(v20, v18);
            __debugbreak();
          }
          v20 = (char *)*((_QWORD *)Block[0] - 1);
        }
        operator delete(v20);
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xDF,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)String);
    v15 = (char *)Block[0];
    if ( !Block[0] )
      return v9;
    if ( v28 - (unsigned __int64)Block[0] >= 0x1000 )
    {
      if ( ((__int64)Block[0] & 0x1F) != 0
        || (v16 = (char *)*((_QWORD *)Block[0] - 1), v16 >= Block[0])
        || (v15 = (char *)((char *)Block[0] - (char *)v16 - 8), (unsigned __int64)v15 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v15, v19);
        __debugbreak();
      }
      goto LABEL_18;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xDC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v13);
    v15 = (char *)Block[0];
    if ( !Block[0] )
      return v9;
    if ( v28 - (unsigned __int64)Block[0] >= 0x1000 )
    {
      if ( ((__int64)Block[0] & 0x1F) != 0
        || (v16 = (char *)*((_QWORD *)Block[0] - 1), v16 >= Block[0])
        || (v15 = (char *)((char *)Block[0] - (char *)v16 - 8), (unsigned __int64)v15 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v15, v14);
        __debugbreak();
      }
LABEL_18:
      v15 = v16;
    }
  }
  operator delete(v15);
  return v9;
}
