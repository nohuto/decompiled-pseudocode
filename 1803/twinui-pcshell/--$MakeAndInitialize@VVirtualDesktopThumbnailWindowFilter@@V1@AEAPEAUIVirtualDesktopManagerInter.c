/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1802736E0
 * Callers:
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x180274068 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180113CD4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitas.c)
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x1802737A4 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ @ 0x180273D58 (-InternalRelease@-$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180273F30 (-RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInte.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopThumbnailWindowFilter,VirtualDesktopThumbnailWindowFilter,IVirtualDesktopManagerInternal * &,ITabletModeController * &,IVirtualDesktopNotificationService * &>(
        __int64 *a1,
        struct IVirtualDesktopManagerInternal **a2,
        struct ITabletModeController **a3,
        struct IVirtualDesktopNotificationService **a4)
{
  VirtualDesktopThumbnailWindowFilter *v8; // rax
  int v9; // ebx
  VirtualDesktopThumbnailWindowFilter *v10; // rax
  struct IVirtualDesktopNotificationService *v11; // r9
  struct ITabletModeController *v12; // r8
  __int64 v13; // rdi
  struct IVirtualDesktopManagerInternal *v14; // rdx
  volatile int *v15; // rdx
  VirtualDesktopThumbnailWindowFilter *v17; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopThumbnailWindowFilter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = VirtualDesktopThumbnailWindowFilter::VirtualDesktopThumbnailWindowFilter(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = (__int64)v10;
    v14 = *a2;
    v17 = v10;
    v9 = VirtualDesktopThumbnailWindowFilter::RuntimeClassInitialize(v10, v14, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture>::InternalAddRef(
          v13,
          v15);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
