/*
 * XREFs of std::_Func_impl__lambda_7b6d028ca7e5065436294691f7ceefcc__std::allocator_int__long_enum__VISUALELEMENT_EVENT_TYPE_ITileChangeEvent_____ptr64_::_Do_call @ 0x18000D230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x18000B6C8 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl__lambda_7b6d028ca7e5065436294691f7ceefcc__std::allocator_int__long_enum__VISUALELEMENT_EVENT_TYPE_ITileChangeEvent_____ptr64_::_Do_call(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *v4; // rdi
  int v5; // eax
  int v6; // ebx
  struct ITileInfo *v7; // rcx
  struct ITileInfo *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ITileInfo *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v4 = *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer **)(a1 + 8);
  if ( *a2 != 2 )
  {
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct ITileInfo **))(*(_QWORD *)v3 + 32LL))(v3, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppUpdated(v4, v11);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x163,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v5);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_8:
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
