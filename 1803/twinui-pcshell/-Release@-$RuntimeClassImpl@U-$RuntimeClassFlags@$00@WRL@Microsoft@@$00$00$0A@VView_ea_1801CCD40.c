/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CCD40
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A6E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEvent.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800A7FD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800A7FD0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1800A7FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800A7FE0.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2F8 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ViewSizePreference@ViewManagement@UI@7@AEAUSize@Foundation@7@AEAPEAUIAsyncCallback@@@Z @ 0x1801C7008 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z @ 0x1801C9DBC (-Attach@-$ComPtr@VViewEventArgsForSwitch@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForSwitch@@@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1801D1768 (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 88);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
