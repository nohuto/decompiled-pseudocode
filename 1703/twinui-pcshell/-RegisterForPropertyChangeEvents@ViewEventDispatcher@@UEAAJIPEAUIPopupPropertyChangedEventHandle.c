/*
 * XREFs of ?RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800F7230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::RegisterForPropertyChangeEvents(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *a3,
        struct EventRegistrationToken *a4)
{
  struct IViewWrapperInternal *v8; // rcx
  struct IViewWrapperInternal *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v14; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  a4->value = 0LL;
  v14 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 8, &SRWLock);
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-20], a2, &v14) < 0 )
    a4->value = (__int64)a3;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v9 = v14;
  if ( v14 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *, struct EventRegistrationToken *))(*(_QWORD *)v14 + 792LL))(
            v14,
            a3,
            a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8E6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v10);
      v9 = v14;
      goto LABEL_12;
    }
    v9 = v14;
  }
  v11 = 0;
LABEL_12:
  if ( v9 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v11;
}
