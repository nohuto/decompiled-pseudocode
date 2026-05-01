/*
 * XREFs of ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18007AD18
 * Callers:
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180071F20 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x1800795B0 (-Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NotificationDispatcher::Shutdown(RTL_SRWLOCK *this)
{
  HWND Ptr; // rbp
  _QWORD *v3; // rdi
  PVOID v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 9, &SRWLock);
  Ptr = (HWND)this[4].Ptr;
  this[4].Ptr = 0LL;
  v3 = this[5].Ptr;
  v4 = this[6].Ptr;
  this[5].Ptr = 0LL;
  this[6].Ptr = 0LL;
  this[7].Ptr = 0LL;
  this[8].Ptr = 0LL;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  DestroyWindow(Ptr);
  if ( v3 )
  {
    v5 = 0LL;
    if ( v4 )
    {
      do
      {
        v6 = v3[v5];
        if ( v6 )
        {
          v3[v5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        ++v5;
      }
      while ( v5 < (unsigned __int64)v4 );
    }
    CoTaskMemFree(v3);
  }
}
