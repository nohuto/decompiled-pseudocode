/*
 * XREFs of ?GetTokenClientWindowReadyForPresentationChangedForComponent@ViewEventDispatcher@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x1800344E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x18002FA70 (-GetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEven.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetTokenClientWindowReadyForPresentationChangedForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        struct EventRegistrationToken *a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, int, struct EventRegistrationToken *); // rax
  int TokenClientWindowReadyForPresentationChangedForComponent; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, struct EventRegistrationToken *))*((_QWORD *)v3->Ptr + 12);
  if ( v4 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetTokenClientWindowReadyForPresentationChangedForComponent )
    TokenClientWindowReadyForPresentationChangedForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetTokenClientWindowReadyForPresentationChangedForComponent(
                                                                 v3,
                                                                 a2,
                                                                 a3);
  else
    TokenClientWindowReadyForPresentationChangedForComponent = v4(v3, a2, a3);
  v6 = TokenClientWindowReadyForPresentationChangedForComponent;
  if ( TokenClientWindowReadyForPresentationChangedForComponent < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)TokenClientWindowReadyForPresentationChangedForComponent,
      v8);
  return v6;
}
