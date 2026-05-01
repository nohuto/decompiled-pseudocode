/*
 * XREFs of std::_Func_impl__lambda_3d906c606aac7fe0753d996226436724__std::allocator_int__long_enum__VISUALELEMENT_EVENT_TYPE_ITileInViewChangeEvent_____ptr64_::_Do_call @ 0x18000D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000B764 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 */

__int64 __fastcall std::_Func_impl__lambda_3d906c606aac7fe0753d996226436724__std::allocator_int__long_enum__VISUALELEMENT_EVENT_TYPE_ITileInViewChangeEvent_____ptr64_::_Do_call(
        __int64 a1,
        int *a2,
        __int64 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged(
         *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer **)(a1 + 8),
         *a2,
         *a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
