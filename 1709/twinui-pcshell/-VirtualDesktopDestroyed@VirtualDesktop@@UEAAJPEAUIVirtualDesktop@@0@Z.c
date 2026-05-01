/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1801B8E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1801B9154 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopDestroyed(
        VirtualDesktop *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = VirtualDesktop::UpdateDesktopIndex((VirtualDesktop *)((char *)this - 16));
  v4 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)updated);
  return v4;
}
