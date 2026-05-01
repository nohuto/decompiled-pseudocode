/*
 * XREFs of ?UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1800F7330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::UnregisterForPropertyChangeEvents(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct EventRegistrationToken a3)
{
  struct IViewWrapperInternal *v6; // rcx
  struct IViewWrapperInternal *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewWrapperInternal *v12; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 8, &SRWLock);
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-20], a2, &v12);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v7 = v12;
  if ( v12 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v12 + 800LL))(v12, a3.value);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8FC,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
      v7 = v12;
      goto LABEL_10;
    }
    v7 = v12;
  }
  v9 = 0;
LABEL_10:
  if ( v7 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v9;
}
