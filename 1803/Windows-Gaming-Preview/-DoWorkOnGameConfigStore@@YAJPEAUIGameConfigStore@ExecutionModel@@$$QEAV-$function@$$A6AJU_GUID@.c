/*
 * XREFs of ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180014B9C
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000933C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180014AB8 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x180016DE0 (-_Reallocate_exactly@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     wprintf @ 0x180043100 (wprintf.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DoWorkOnGameConfigStore(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  const char *v6; // r9
  unsigned int GameFromGameConfigStore; // esi
  int v9; // eax
  void *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // r14d
  void *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  void *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  void *Block[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h]
  __int128 v25; // [rsp+40h] [rbp-58h] BYREF
  __int128 v26; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v29; // [rsp+A0h] [rbp+8h] BYREF
  int v30; // [rsp+B0h] [rbp+18h] BYREF
  void *v31; // [rsp+B8h] [rbp+20h] BYREF

  v24 = -2LL;
  v29 = 0;
  v4 = 0LL;
  v31 = 0LL;
  v30 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, 0LL, &v29);
  GameFromGameConfigStore = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v5);
    return GameFromGameConfigStore;
  }
  if ( !v29 )
  {
    wprintf(L"GameConfigStore is empty\n");
    return 0;
  }
  v26 = 0LL;
  v27 = 0LL;
  try
  {
    if ( v29 )
      std::vector<_GUID>::_Reallocate_exactly(&v26);
  }
  catch ( ... )
  {
    LODWORD(v31) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x79,
                     (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                     v6);
    goto LABEL_39;
  }
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, v26, &v29);
  GameFromGameConfigStore = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v9);
    v10 = (void *)v26;
    if ( !(_QWORD)v26 )
      return GameFromGameConfigStore;
    v11 = (v27 - (__int64)v26) >> 4;
    v12 = v26;
    if ( v11 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v11 < 0x1000
        || (v26 & 0x1F) == 0
        && (v10 = *(void **)(v26 - 8), (unsigned __int64)v10 < (unsigned __int64)v26)
        && (v12 = v26 - (_QWORD)v10 - 8, v12 <= 0x1F) )
      {
        operator delete(v10);
        return GameFromGameConfigStore;
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v10, v12);
  }
  GameFromGameConfigStore = 0;
  v13 = 0;
  if ( v29 )
  {
    while ( 1 )
    {
      *(_OWORD *)Block = *(_OWORD *)(v26 + 16LL * v13);
      GameFromGameConfigStore = GetGameFromGameConfigStore(a1, (__int128 *)Block, &v31, &v30);
      if ( (GameFromGameConfigStore & 0x80000000) != 0 )
        break;
      v14 = v31;
      v4 = 0LL;
      v31 = 0LL;
      Block[0] = v14;
      v25 = *(_OWORD *)(v26 + 16LL * v13);
      v15 = *(_QWORD *)(a2 + 56);
      if ( !v15 )
      {
        std::_Xbad_function_call();
        break;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v15 + 16LL))(v15, &v25, Block);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8F,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v16);
      if ( Block[0] )
        operator delete(Block[0]);
      if ( ++v13 >= v29 )
        goto LABEL_29;
    }
    v4 = v31;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)GameFromGameConfigStore);
  }
LABEL_29:
  v17 = (void *)v26;
  if ( !(_QWORD)v26 )
  {
LABEL_36:
    if ( v4 )
      operator delete(v4);
    return GameFromGameConfigStore;
  }
  v18 = (v27 - (__int64)v26) >> 4;
  v19 = v26;
  if ( v18 <= 0xFFFFFFFFFFFFFFFLL )
  {
    if ( 16 * v18 < 0x1000
      || (v26 & 0x1F) == 0
      && (v17 = *(void **)(v26 - 8), (unsigned __int64)v17 < (unsigned __int64)v26)
      && (v19 = v26 - (_QWORD)v17 - 8, v19 <= 0x1F) )
    {
      operator delete(v17);
      v26 = 0LL;
      v27 = 0LL;
      goto LABEL_36;
    }
  }
  _o__invalid_parameter_noinfo_noreturn(v17, v19);
LABEL_39:
  v20 = (void *)v26;
  if ( (_QWORD)v26 )
  {
    v21 = (v27 - (__int64)v26) >> 4;
    v22 = v26;
    if ( v21 > 0xFFFFFFFFFFFFFFFLL
      || 16 * v21 >= 0x1000
      && ((v26 & 0x1F) != 0
       || (v20 = *(void **)(v26 - 8), (unsigned __int64)v20 >= (unsigned __int64)v26)
       || (v22 = v26 - (_QWORD)v20 - 8, v22 > 0x1F)) )
    {
      _o__invalid_parameter_noinfo_noreturn(v20, v22);
      JUMPOUT(0x180014EF3LL);
    }
    operator delete(v20);
  }
  return (unsigned int)v31;
}
