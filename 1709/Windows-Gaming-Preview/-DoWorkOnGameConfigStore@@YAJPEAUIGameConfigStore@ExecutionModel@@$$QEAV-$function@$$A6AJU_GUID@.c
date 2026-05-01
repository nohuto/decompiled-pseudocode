/*
 * XREFs of ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180014468
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800091E8 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180014354 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@$$.c)
 *     ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x1800165C0 (-_Reallocate_exactly@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180041618 (--3@YAXPEAX@Z.c)
 *     wprintf @ 0x180042164 (wprintf.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DoWorkOnGameConfigStore(__int64 *a1, __int64 a2)
{
  void *v4; // rbx
  int v5; // eax
  const char *v6; // r9
  unsigned int GameFromGameConfigStore; // esi
  int v8; // eax
  unsigned __int64 v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v14; // r14d
  void *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  void *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  void *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  void *v24[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h]
  __int128 v26; // [rsp+40h] [rbp-68h] BYREF
  __int128 v27; // [rsp+50h] [rbp-58h] BYREF
  __int64 v28; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v30; // [rsp+B0h] [rbp+8h] BYREF
  int v31; // [rsp+C0h] [rbp+18h] BYREF
  void *v32; // [rsp+C8h] [rbp+20h] BYREF

  v25 = -2LL;
  v30 = 0;
  v4 = 0LL;
  v32 = 0LL;
  v31 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, 0LL, &v30);
  GameFromGameConfigStore = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x62,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v5);
    return GameFromGameConfigStore;
  }
  if ( !v30 )
  {
    wprintf(L"GameConfigStore is empty\n");
    return 0;
  }
  v27 = 0LL;
  v28 = 0LL;
  try
  {
    if ( v30 )
      std::vector<_GUID>::_Reallocate_exactly(&v27);
  }
  catch ( ... )
  {
    LODWORD(v32) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x70,
                     (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                     v6);
    v21 = (void *)v27;
    if ( !(_QWORD)v27 )
      return (unsigned int)v32;
    v22 = (v28 - (__int64)v27) >> 4;
    if ( v22 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_49;
    if ( 16 * v22 >= 0x1000 )
    {
      if ( (v27 & 0x1F) == 0 )
      {
        v23 = *(_QWORD *)(v27 - 8);
        if ( v23 < (unsigned __int64)v27 )
        {
          v21 = (void *)(v27 - v23 - 8);
          if ( (unsigned __int64)v21 <= 0x1F )
          {
            v21 = *(void **)(v27 - 8);
            goto LABEL_48;
          }
        }
      }
LABEL_49:
      _o__invalid_parameter_noinfo_noreturn(v21, 0xFFFFFFFFFFFFFFFLL);
      return (unsigned int)v32;
    }
LABEL_48:
    operator delete(v21);
    return (unsigned int)v32;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a1 + 48))(a1, v27, &v30);
  GameFromGameConfigStore = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x72,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v8);
    v10 = (void *)v27;
    if ( !(_QWORD)v27 )
      return GameFromGameConfigStore;
    v11 = (v28 - (__int64)v27) >> 4;
    if ( v11 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v11 < 0x1000 )
      {
LABEL_16:
        operator delete(v10);
        return GameFromGameConfigStore;
      }
      if ( (v27 & 0x1F) == 0 )
      {
        v12 = *(_QWORD *)(v27 - 8);
        if ( v12 < (unsigned __int64)v27 )
        {
          v10 = (void *)(v27 - v12 - 8);
          if ( (unsigned __int64)v10 <= 0x1F )
          {
            v10 = *(void **)(v27 - 8);
            goto LABEL_16;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v10, 0xFFFFFFFFFFFFFFFLL);
    return GameFromGameConfigStore;
  }
  GameFromGameConfigStore = 0;
  v14 = 0;
  if ( v30 )
  {
    while ( 1 )
    {
      *(_OWORD *)v24 = *(_OWORD *)(v27 + 16LL * v14);
      GameFromGameConfigStore = GetGameFromGameConfigStore(a1, (__int128 *)v24, &v32, &v31);
      if ( (GameFromGameConfigStore & 0x80000000) != 0 )
        break;
      v15 = v32;
      v4 = 0LL;
      v32 = 0LL;
      v24[0] = v15;
      v26 = *(_OWORD *)(v27 + 16LL * v14);
      v16 = *(_QWORD *)(a2 + 56);
      if ( !v16 )
      {
        std::_Xbad_function_call();
        break;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v16 + 16LL))(v16, &v26, v24);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x86,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v17);
      if ( v24[0] )
        operator delete(v24[0], v9);
      if ( ++v14 >= v30 )
        goto LABEL_30;
    }
    v4 = v32;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)GameFromGameConfigStore);
  }
LABEL_30:
  v18 = (void *)v27;
  if ( (_QWORD)v27 )
  {
    v19 = (v28 - (__int64)v27) >> 4;
    if ( v19 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v19 < 0x1000 )
      {
LABEL_37:
        operator delete(v18);
        v27 = 0LL;
        v28 = 0LL;
        goto LABEL_39;
      }
      if ( (v27 & 0x1F) == 0 )
      {
        v20 = *(_QWORD *)(v27 - 8);
        if ( v20 < (unsigned __int64)v27 )
        {
          v18 = (void *)(v27 - v20 - 8);
          if ( (unsigned __int64)v18 <= 0x1F )
          {
            v18 = *(void **)(v27 - 8);
            goto LABEL_37;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v18, 0xFFFFFFFFFFFFFFFLL);
  }
LABEL_39:
  if ( v4 )
    operator delete(v4, v9);
  return GameFromGameConfigStore;
}
