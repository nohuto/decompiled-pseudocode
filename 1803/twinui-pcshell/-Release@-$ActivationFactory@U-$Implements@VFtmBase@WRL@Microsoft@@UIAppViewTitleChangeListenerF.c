/*
 * XREFs of ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801A63A0
 * Callers:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIBrokeredViewTabConverterStatics@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800A64E0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIBrokeredViewTabConverterSta.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800A7540 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewListenerFactory@Data.c)
 *     ??$CreateActivationFactory@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801A1860 (--$CreateActivationFactory@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@.c)
 *     ??$CreateActivationFactory@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801A1900 (--$CreateActivationFactory@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal.c)
 *     ??$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801A1EF8 (--$MakeAndInitialize@VAppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456.c)
 *     ??$MakeAndInitialize@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801A1F78 (--$MakeAndInitialize@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     ?Attach@?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801A385C (-Attach@-$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6DD0 (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A6F64 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A71B4 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ??$CreateActivationFactory@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801A8E60 (--$CreateActivationFactory@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     ??$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801A90AC (--$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V1.c)
 *     ??$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801C60E0 (--$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBU.c)
 *     ??$MakeAndInitialize@VBrokeredViewTabConverterStatics@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBrokeredViewTabConverterStatics@@@Z @ 0x1801C6178 (--$MakeAndInitialize@VBrokeredViewTabConverterStatics@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVB.c)
 *     ?Release@BrokeredViewTabConverterStatics@@UEAAKXZ @ 0x1801C6450 (-Release@BrokeredViewTabConverterStatics@@UEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // r10
  int v4; // edi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  v4 = v3[22] & 4;
  if ( v2 )
  {
    if ( !v4 && v2 == 1 )
    {
      v5 = Microsoft::WRL::Details::ModuleBase::module_;
LABEL_8:
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
    if ( v4 )
    {
      v5 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_8;
    }
  }
  return v2;
}
