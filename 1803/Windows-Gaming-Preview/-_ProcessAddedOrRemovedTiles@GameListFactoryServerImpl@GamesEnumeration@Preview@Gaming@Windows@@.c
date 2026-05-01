/*
 * XREFs of ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001A2F4
 * Callers:
 *     ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001A114 (-_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 * Callees:
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x180010DE4 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_ProcessAddedOrRemovedTiles(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        char a4)
{
  int v6; // eax
  Windows::Gaming::Preview::GamesEnumeration *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r14d
  Windows::Gaming::Preview::GamesEnumeration *v11; // rbx
  int IsUserPinnedTile; // eax
  unsigned __int8 *v13; // r8
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  Windows::Gaming::Preview::GamesEnumeration *v17; // rcx
  Windows::Gaming::Preview::GamesEnumeration *v18; // rcx
  int v19; // eax
  Windows::Gaming::Preview::GamesEnumeration *v20; // rcx
  _QWORD *v21; // rcx
  Windows::Gaming::Preview::GamesEnumeration *v23[5]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  unsigned int v25; // [rsp+50h] [rbp-20h] BYREF
  char **v26; // [rsp+58h] [rbp-18h]
  int v27; // [rsp+60h] [rbp-10h]
  Windows::Gaming::Preview::GamesEnumeration *v28; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v30; // [rsp+B0h] [rbp+40h] BYREF
  char *v31; // [rsp+B8h] [rbp+48h] BYREF
  _QWORD *v32; // [rsp+C0h] [rbp+50h]

  v32 = a3;
  v30 = a1;
  v23[1] = (Windows::Gaming::Preview::GamesEnumeration *)-2LL;
  if ( !a2 )
    goto LABEL_37;
  v24 = a2;
  v26 = &v31;
  v27 = 0;
  v28 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v25);
  *(_DWORD *)v26 = v6;
  if ( v6 >= 0 && v25 )
  {
    v7 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, Windows::Gaming::Preview::GamesEnumeration **))(*(_QWORD *)v24 + 48LL))(
           v24,
           0LL,
           &v28);
    *(_DWORD *)v26 = v8;
  }
  v9 = 0;
  v10 = v25;
  while ( *(int *)v26 >= 0 && v9 != v10 )
  {
    v11 = v28;
    v23[2] = v28;
    if ( v28 )
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v28 + 8LL))(v28);
    v23[3] = 0LL;
    LOBYTE(v30) = 0;
    v23[0] = 0LL;
    if ( a4 )
    {
      IsUserPinnedTile = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *, Windows::Gaming::Preview::GamesEnumeration **))(*(_QWORD *)v11 + 64LL))(
                           v11,
                           v23);
      v14 = retaddr;
      if ( IsUserPinnedTile < 0 )
      {
        v15 = 333LL;
LABEL_22:
        wil::details::in1diag3::_Log_Hr(
          v14,
          (void *)v15,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)IsUserPinnedTile);
        goto LABEL_23;
      }
      if ( !v23[0] )
        goto LABEL_23;
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                           v23[0],
                           (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)&v30,
                           v13);
      v14 = retaddr;
      if ( IsUserPinnedTile < 0 )
      {
        v15 = 335LL;
        goto LABEL_22;
      }
      if ( !(_BYTE)v30 )
        goto LABEL_23;
    }
    v23[4] = v11;
    v16 = a3[7];
    if ( !v16 )
    {
      std::_Xbad_function_call();
      break;
    }
    IsUserPinnedTile = (*(__int64 (__fastcall **)(_QWORD, Windows::Gaming::Preview::GamesEnumeration *))(v16 + 8))(
                         *(_QWORD *)(v16 + 32) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v16 + 8), 8)),
                         v11);
    v14 = retaddr;
    if ( IsUserPinnedTile < 0 )
    {
      v15 = 338LL;
      goto LABEL_22;
    }
LABEL_23:
    v17 = v23[0];
    if ( v23[0] )
    {
      v23[0] = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v11 )
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v11 + 16LL))(v11);
    ++v9;
    if ( *(int *)v26 >= 0 && v9 < v25 )
    {
      v18 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, Windows::Gaming::Preview::GamesEnumeration **))(*(_QWORD *)v24 + 48LL))(
              v24,
              v9,
              &v28);
      *(_DWORD *)v26 = v19;
    }
  }
  v20 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( (int)v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x156,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v31);
LABEL_37:
  v21 = (_QWORD *)a3[7];
  if ( v21 )
  {
    if ( v21 != a3 )
      operator delete(v21);
    a3[7] = 0LL;
  }
  return 0LL;
}
