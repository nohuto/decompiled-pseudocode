/*
 * XREFs of ?SetIsModalDialogEnabled@ViewEventDispatcher@@UEAAJIE@Z @ 0x180034120
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIE@Z @ 0x1800304F0 (-SetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::SetIsModalDialogEnabled(ViewEventDispatcher *this, int a2, char a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (*v4)(void); // rax
  int IsModalDialogEnabled; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v4 = (__int64 (*)(void))*((_QWORD *)v3->Ptr + 20);
  if ( (char *)v4 == (char *)Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetIsModalDialogEnabled )
    IsModalDialogEnabled = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetIsModalDialogEnabled(
                             v3,
                             a2,
                             a3);
  else
    IsModalDialogEnabled = v4();
  v6 = IsModalDialogEnabled;
  if ( IsModalDialogEnabled < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)IsModalDialogEnabled,
      v8);
  return v6;
}
