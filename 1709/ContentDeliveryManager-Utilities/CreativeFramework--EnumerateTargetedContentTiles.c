/*
 * XREFs of CreativeFramework::EnumerateTargetedContentTiles @ 0x18008A500
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18008B76C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180077F58 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180097570 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
char __fastcall CreativeFramework::EnumerateTargetedContentTiles(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  const WCHAR *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v22; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v23[7]; // [rsp+21h] [rbp-B7h] BYREF
  __int64 v24; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-A8h] BYREF
  const WCHAR *v26; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-98h] BYREF
  int v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h] BYREF
  __int64 v30; // [rsp+58h] [rbp-80h] BYREF
  __int64 v31; // [rsp+60h] [rbp-78h] BYREF
  __int64 v32; // [rsp+68h] [rbp-70h] BYREF
  __int64 v33; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v35; // [rsp+90h] [rbp-48h] BYREF
  int v36; // [rsp+98h] [rbp-40h]
  __int64 v37; // [rsp+A0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v34[2] = -2LL;
  v34[1] = a2;
  v26 = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v33);
  v3 = v33;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v35, &v26);
  v25 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, *(_QWORD *)(v4 + 24), &v25);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
      (const char *)(unsigned int)v5);
  v32 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 104LL))(v25, &v32);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
      (const char *)(unsigned int)v6);
  v31 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v32)(
         v32,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         &v31);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v27 = 0LL;
  v29 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v27);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 56LL))(v27, &v22);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  LOBYTE(v10) = -v22;
  v11 = (v22 != 0) - 1;
  v28 = v11;
  v35 = 0LL;
  v36 = -1;
  v37 = 0LL;
  while ( v11 != -1 )
  {
    v12 = v27;
    v13 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v29);
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v14);
    v30 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 56LL))(v29, &v30);
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x22,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
        (const char *)(unsigned int)v15);
    v24 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, &v24);
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
        (const char *)(unsigned int)v16);
    (**(void (__fastcall ***)(__int64, GUID *, const WCHAR **))v24)(
      v24,
      &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
      &v26);
    v17 = v26;
    if ( v26 )
    {
      v34[0] = v24;
      v18 = *(_QWORD *)(a2 + 24);
      if ( !v18 )
        std::_Xbad_function_call();
      LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 16LL))(v18, v34);
      if ( !(_BYTE)v10 )
      {
        if ( v26 )
          LOBYTE(v10) = (*(__int64 (__fastcall **)(const WCHAR *))(*(_QWORD *)v26 + 16LL))(v26);
        if ( v24 )
          LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        if ( v30 )
          LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        break;
      }
      v17 = v26;
    }
    if ( v17 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 64LL))(v27, v23);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( v23[0] )
      v11 = v28 + 1;
    else
      v11 = -1;
    v28 = v11;
  }
  v19 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v31 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v25 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v33 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return v10;
}
