/*
 * XREFs of ?get_ViewAnchor@ViewEventArgsForShowAsViewMode@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F0C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_ViewAnchor(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))this
          + 4))(
         *((_QWORD *)this + 4),
         &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
