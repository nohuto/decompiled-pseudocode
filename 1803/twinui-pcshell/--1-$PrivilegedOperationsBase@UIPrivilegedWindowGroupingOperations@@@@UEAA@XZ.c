/*
 * XREFs of ??1?$PrivilegedOperationsBase@UIPrivilegedWindowGroupingOperations@@@@UEAA@XZ @ 0x18019E0FC
 * Callers:
 *     ??_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z @ 0x18019E340 (--_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955F4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsBase<IPrivilegedWindowGroupingOperations>::~PrivilegedOperationsBase<IPrivilegedWindowGroupingOperations>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, volatile int *); // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    v3 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v2,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      ((void (__fastcall *)(__int64))v3)(v2);
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile int **)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
}
