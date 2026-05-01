/*
 * XREFs of ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x18026BB0C
 * Callers:
 *     ?ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18026BBB0 (-ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?ViewShown@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18026BBC0 (-ViewShown@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800F5E74 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___ @ 0x18026B6DC (Windows--Internal--ComTaskPool--QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

void __fastcall MultitaskingViewVisibilityService::UpdateVisibility(__int64 a1, int a2, int a3)
{
  int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct IObjectArray *v10; // [rsp+20h] [rbp-10h] BYREF
  int v11; // [rsp+28h] [rbp-8h]
  bool v12; // [rsp+2Ch] [rbp-4h]
  struct IObjectArray *v13; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+38h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK *)(a1 + 56), &v14);
  v13 = 0LL;
  *(_DWORD *)(a1 + 64) = a3 & a2 | *(_DWORD *)(a1 + 64) & ~a3;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
  if ( (int)CGITRegistrationList::GetCallbackArray((CGITRegistrationList *)(a1 + 72), &v13) >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 64);
    v10 = v13;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
    v7 = *(_DWORD *)(a1 + 120);
    v11 = a3;
    v12 = (v6 & a3) != 0;
    Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___(v9, v8, v7, &v10);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v10);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
}
