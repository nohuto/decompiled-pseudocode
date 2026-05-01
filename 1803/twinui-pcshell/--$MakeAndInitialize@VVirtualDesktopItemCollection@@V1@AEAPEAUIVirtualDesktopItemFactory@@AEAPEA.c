/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18027A8B0
 * Callers:
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18027B220 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDes.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x18027A964 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x18027AD0C (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18027AEF0 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802B3EEC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
        VirtualDesktopItemCollection **a1,
        struct IVirtualDesktopItemFactory **a2,
        struct IVirtualDesktopManagerInternal **a3,
        struct IVirtualDesktopNotificationService **a4)
{
  VirtualDesktopItemCollection *v8; // rax
  int v9; // ebx
  VirtualDesktopItemCollection *v10; // rax
  struct IVirtualDesktopNotificationService *v11; // r9
  struct IVirtualDesktopManagerInternal *v12; // r8
  VirtualDesktopItemCollection *v13; // rdi
  struct IVirtualDesktopItemFactory *v14; // rdx
  VirtualDesktopItemCollection *v16; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopItemCollection *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = VirtualDesktopItemCollection::VirtualDesktopItemCollection(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = v10;
    v14 = *a2;
    v16 = v10;
    v9 = VirtualDesktopItemCollection::RuntimeClassInitialize(v10, v14, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(v13);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
