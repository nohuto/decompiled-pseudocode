/*
 * XREFs of ?IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z @ 0x180197C40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x180197CB4 (-IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewIconLoader::IconLoaded(AppViewIconLoader *this, HBITMAP a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = AppViewIconLoader::IconLoadedInternal((AppViewIconLoader *)((char *)this - 8), a2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
      (const char *)(unsigned int)v3);
  if ( a2 )
    DeleteObject(a2);
}
