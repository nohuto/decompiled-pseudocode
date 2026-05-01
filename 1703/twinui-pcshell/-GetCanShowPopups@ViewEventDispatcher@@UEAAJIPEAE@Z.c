/*
 * XREFs of ?GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1800F7160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::GetCanShowPopups(RTL_SRWLOCK *this, unsigned int a2, bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct IViewWrapperInternal *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewWrapperInternal *v11; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 8, &SRWLock);
  v11 = 0LL;
  v6 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-20], a2, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *a3 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v11 + 824LL))(v11) == 0;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8C3,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
