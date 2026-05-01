/*
 * XREFs of ?SetTokenClientWindowReadyForPresentationChangedForComponent@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1800345A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x18002F9A0 (-SetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEven.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::SetTokenClientWindowReadyForPresentationChangedForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, int, struct EventRegistrationToken); // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 41);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int, struct EventRegistrationToken))*((_QWORD *)v3->Ptr + 13);
  if ( v4 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetTokenClientWindowReadyForPresentationChangedForComponent )
    v5 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetTokenClientWindowReadyForPresentationChangedForComponent(
           v3,
           a2,
           a3);
  else
    v5 = ((__int64 (__fastcall *)(RTL_SRWLOCK *, __int64, __int64))v4)(v3, a2, a3.value);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x553,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v8);
  return v6;
}
