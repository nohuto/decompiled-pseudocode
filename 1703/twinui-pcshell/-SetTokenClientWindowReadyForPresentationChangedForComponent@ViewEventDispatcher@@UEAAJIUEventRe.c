/*
 * XREFs of ?SetTokenClientWindowReadyForPresentationChangedForComponent@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1800F5DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::SetTokenClientWindowReadyForPresentationChangedForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        struct EventRegistrationToken a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 39) + 104LL))(
         *((_QWORD *)this + 39),
         a2,
         a3.value);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F1,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
