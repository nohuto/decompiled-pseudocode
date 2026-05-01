/*
 * XREFs of ?GetViewForComponent@ViewEventDispatcher@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180034520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180030100 (-GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetViewForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        struct IInspectable **a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, int, struct IInspectable **); // rax
  int ViewForComponent; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, struct IInspectable **))*((_QWORD *)v3->Ptr + 11);
  if ( v4 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewForComponent )
    ViewForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewForComponent(
                         v3,
                         a2,
                         a3);
  else
    ViewForComponent = v4(v3, a2, a3);
  v6 = ViewForComponent;
  if ( ViewForComponent < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x547,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)ViewForComponent,
      v8);
  return v6;
}
