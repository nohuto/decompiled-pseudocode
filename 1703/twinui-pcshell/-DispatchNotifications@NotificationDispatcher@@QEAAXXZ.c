/*
 * XREFs of ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x18007ABD8
 * Callers:
 *     ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x180073A30 (-FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ.c)
 *     ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x180078C20 (-FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 *     ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18007AB60 (-WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NotificationDispatcher::DispatchNotifications(NotificationDispatcher *this)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rbp
  _QWORD *i; // r14
  unsigned __int64 j; // rbx
  __int64 v7; // rcx
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    *((_BYTE *)this + 80) = 1;
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 9, &SRWLock);
    v2 = (_QWORD *)*((_QWORD *)this + 5);
    v3 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v4 = &v2[v3];
    for ( i = v2; i != v4; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, 0LL);
    *((_BYTE *)this + 80) = 0;
    Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 9, &SRWLock);
    if ( *((_QWORD *)this + 6) )
      PostMessageW(*((HWND *)this + 4), 0x401u, 0LL, 0LL);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    if ( v2 )
    {
      for ( j = 0LL; j < v3; ++j )
      {
        v7 = v2[j];
        if ( v7 )
        {
          v2[j] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
      }
      CoTaskMemFree(v2);
    }
  }
}
