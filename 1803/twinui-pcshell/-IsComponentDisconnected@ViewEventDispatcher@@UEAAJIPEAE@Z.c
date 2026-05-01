/*
 * XREFs of ?IsComponentDisconnected@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1800341D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsComponentDisconnected@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x180030940 (-IsComponentDisconnected@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::IsComponentDisconnected(ViewEventDispatcher *this, __int64 a2, bool *a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, int, bool *); // rax
  int IsComponentDisconnected; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, bool *))*((_QWORD *)v3->Ptr + 25);
  if ( v4 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsComponentDisconnected )
    IsComponentDisconnected = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsComponentDisconnected(
                                v3,
                                a2,
                                a3);
  else
    IsComponentDisconnected = v4(v3, a2, a3);
  v6 = IsComponentDisconnected;
  if ( IsComponentDisconnected < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x587,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)IsComponentDisconnected,
      v8);
  return v6;
}
