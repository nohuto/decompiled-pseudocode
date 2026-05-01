/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008B1B0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x18008B228 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800A4600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_1800A4600.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x18014C55C (--$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagR.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_GCCommonApplicationViewArrangePosition@@UEAAPEAXI@Z @ 0x18008B5A0 (--_GCCommonApplicationViewArrangePosition@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  CCommonApplicationViewArrangePosition *v3; // r10
  void *(__fastcall *v4)(CCommonApplicationViewArrangePosition *__hidden, unsigned int); // rax
  __int64 v5; // rdx
  void (*v6)(void); // rax

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 84), a2);
  if ( !v2 )
  {
    if ( v3 )
    {
      v4 = *(void *(__fastcall **)(CCommonApplicationViewArrangePosition *__hidden, unsigned int))(*(_QWORD *)v3 + 56LL);
      v5 = v2 + 1;
      if ( v4 == CCommonApplicationViewArrangePosition::`scalar deleting destructor' )
        CCommonApplicationViewArrangePosition::`scalar deleting destructor'(v3, v5);
      else
        v4(v3, v5);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
      else
        v6();
    }
  }
  return v2;
}
