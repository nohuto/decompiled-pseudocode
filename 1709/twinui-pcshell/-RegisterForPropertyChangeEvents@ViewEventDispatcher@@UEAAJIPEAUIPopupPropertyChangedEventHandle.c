/*
 * XREFs of ?RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180122490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::RegisterForPropertyChangeEvents(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *a3,
        struct EventRegistrationToken *a4)
{
  RTL_SRWLOCK *v8; // rbx
  struct IViewWrapperInternal *v9; // rcx
  struct IViewWrapperInternal *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v15; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v16; // [rsp+68h] [rbp+20h]

  a4->value = 0LL;
  v15 = 0LL;
  v8 = this + 11;
  AcquireSRWLockShared(this + 11);
  v16 = v8;
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-26], a2, &v15) < 0 )
    a4->value = (__int64)a3;
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v10 = v15;
  if ( v15 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *, struct EventRegistrationToken *))(*(_QWORD *)v15 + 792LL))(
            v15,
            a3,
            a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x929,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
      v10 = v15;
      goto LABEL_12;
    }
    v10 = v15;
  }
  v12 = 0;
LABEL_12:
  if ( v10 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v12;
}
