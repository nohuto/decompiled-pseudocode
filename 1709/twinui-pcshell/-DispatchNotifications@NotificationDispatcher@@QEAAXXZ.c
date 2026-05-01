/*
 * XREFs of ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x18007D8B8
 * Callers:
 *     ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x180076840 (-FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ.c)
 *     ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x18007B810 (-FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 *     ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18007D820 (-WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NotificationDispatcher::DispatchNotifications(NotificationDispatcher *this)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbp
  _QWORD *v5; // r15
  _QWORD *i; // r14
  unsigned __int64 j; // rbx
  __int64 v8; // rcx

  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    v2 = (RTL_SRWLOCK *)((char *)this + 88);
    AcquireSRWLockExclusive((PSRWLOCK)this + 11);
    v3 = (_QWORD *)*((_QWORD *)this + 7);
    v4 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    v5 = &v3[v4];
    for ( i = v3; i != v5; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, 0LL);
    *((_BYTE *)this + 96) = 0;
    AcquireSRWLockShared(v2);
    if ( *((_QWORD *)this + 8) )
      PostMessageW(*((HWND *)this + 6), 0x401u, 0LL, 0LL);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    if ( v3 )
    {
      for ( j = 0LL; j < v4; ++j )
      {
        v8 = v3[j];
        if ( v8 )
        {
          v3[j] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      CoTaskMemFree(v3);
    }
  }
}
