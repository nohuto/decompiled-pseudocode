/*
 * XREFs of ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18007D9F0
 * Callers:
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180074B00 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x18007C330 (-Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NotificationDispatcher::Shutdown(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbp
  HWND Ptr; // r14
  _QWORD *v4; // rdi
  PVOID v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx

  v1 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  Ptr = (HWND)this[6].Ptr;
  this[6].Ptr = 0LL;
  v4 = this[7].Ptr;
  v5 = this[8].Ptr;
  this[7].Ptr = 0LL;
  this[8].Ptr = 0LL;
  this[9].Ptr = 0LL;
  this[10].Ptr = 0LL;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  DestroyWindow(Ptr);
  if ( v4 )
  {
    v6 = 0LL;
    if ( v5 )
    {
      do
      {
        v7 = v4[v6];
        if ( v7 )
        {
          v4[v6] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        ++v6;
      }
      while ( v6 < (unsigned __int64)v5 );
    }
    CoTaskMemFree(v4);
  }
}
