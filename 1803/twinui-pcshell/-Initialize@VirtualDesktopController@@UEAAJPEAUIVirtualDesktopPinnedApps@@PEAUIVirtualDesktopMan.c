/*
 * XREFs of ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@@Z @ 0x180260980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall VirtualDesktopController::Initialize(
        VirtualDesktopController *this,
        struct IVirtualDesktopPinnedApps *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        struct IVirtualDesktopDataSourceInternal *a5)
{
  struct IVirtualDesktopDataSourceInternal *v9; // rax
  struct IVirtualDesktopDataSourceInternal *v10; // rbx
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v12, (RTL_SRWLOCK *)this + 11);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a4);
  v9 = (struct IVirtualDesktopDataSourceInternal *)*((_QWORD *)this + 9);
  v10 = a5;
  if ( v9 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopDataSourceInternal *))(*(_QWORD *)a5 + 8LL))(a5);
      v9 = (struct IVirtualDesktopDataSourceInternal *)*((_QWORD *)this + 9);
    }
    a5 = v9;
    *((_QWORD *)this + 9) = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  return 0LL;
}
