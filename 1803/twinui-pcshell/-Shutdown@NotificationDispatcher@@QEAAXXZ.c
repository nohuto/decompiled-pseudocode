/*
 * XREFs of ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18013E428
 * Callers:
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18013CFD0 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x18013E120 (-Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NotificationDispatcher::Shutdown(RTL_SRWLOCK *this)
{
  HWND Ptr; // rbx
  _QWORD *v3; // rsi
  PVOID v4; // rbp
  unsigned __int64 v5; // rbx
  char *v6; // rcx
  void (*v7)(void); // rax
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v8, this + 10);
  Ptr = (HWND)this[5].Ptr;
  this[5].Ptr = 0LL;
  v3 = this[6].Ptr;
  v4 = this[7].Ptr;
  this[6].Ptr = 0LL;
  this[7].Ptr = 0LL;
  this[8].Ptr = 0LL;
  this[9].Ptr = 0LL;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  DestroyWindow(Ptr);
  if ( v3 )
  {
    v5 = 0LL;
    if ( v4 )
    {
      do
      {
        v6 = (char *)v3[v5];
        if ( v6 )
        {
          v3[v5] = 0LL;
          v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
          if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
              v6,
              (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release);
          else
            v7();
        }
        ++v5;
      }
      while ( v5 < (unsigned __int64)v4 );
    }
    CoTaskMemFree(v3);
  }
}
