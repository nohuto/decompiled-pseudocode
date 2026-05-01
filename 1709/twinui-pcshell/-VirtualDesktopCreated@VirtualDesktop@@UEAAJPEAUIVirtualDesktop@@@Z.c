/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1801B8E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1801B9154 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 */

__int64 __fastcall VirtualDesktop::VirtualDesktopCreated(VirtualDesktop *this, struct IVirtualDesktop *a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = VirtualDesktop::UpdateDesktopIndex((VirtualDesktop *)((char *)this - 16));
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
