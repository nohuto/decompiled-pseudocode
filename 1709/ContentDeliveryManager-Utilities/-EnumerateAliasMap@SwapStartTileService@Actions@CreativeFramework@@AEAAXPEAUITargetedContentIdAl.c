/*
 * XREFs of ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180075178
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180075564 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180097570 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
char __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-88h] BYREF
  int v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h] BYREF
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  __int64 v27; // [rsp+48h] [rbp-60h] BYREF
  __int64 v28; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v29[2]; // [rsp+58h] [rbp-50h] BYREF
  int v30; // [rsp+68h] [rbp-40h]
  __int64 v31; // [rsp+70h] [rbp-38h]
  __int64 v32; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v34; // [rsp+B0h] [rbp+8h] BYREF
  char v35; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+18h]
  HSTRING string; // [rsp+C8h] [rbp+20h] BYREF

  v36 = a3;
  v34 = a1;
  v32 = -2LL;
  v26 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 72LL))(a2, &v26);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x10E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v26)(
         v26,
         &GUID_c86cab97_c160_561a_9b32_542f9e2e4911,
         &v27);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v5);
  v22 = 0LL;
  v24 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, &v22);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 56LL))(v22, &v34);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  LOBYTE(v8) = -(char)v34;
  v9 = ((_BYTE)v34 != 0) - 1;
  v23 = v9;
  v29[1] = 0LL;
  v30 = -1;
  v31 = 0LL;
  while ( v9 != -1 )
  {
    v10 = v22;
    v11 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v24);
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v12);
    string = 0LL;
    v13 = v24;
    WindowsDeleteString(0LL);
    string = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 48LL))(v13, &string);
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x117,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v14);
    v25 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v25);
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x11A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v15);
    v16 = v25;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v28 = v16;
    v29[0] = StringRawBuffer;
    v18 = *(_QWORD *)(a3 + 24);
    if ( !v18 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v18 + 16LL))(v18, v29, &v28) )
    {
      if ( v25 )
        (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
      LOBYTE(v8) = WindowsDeleteString(string);
      break;
    }
    if ( v25 )
      (*(void (**)(void))(*(_QWORD *)v25 + 16LL))();
    WindowsDeleteString(string);
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 64LL))(v22, &v35);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    if ( v35 )
      v9 = v23 + 1;
    else
      v9 = -1;
    v23 = v9;
  }
  v19 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v27 )
    LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v26 )
    LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return v8;
}
