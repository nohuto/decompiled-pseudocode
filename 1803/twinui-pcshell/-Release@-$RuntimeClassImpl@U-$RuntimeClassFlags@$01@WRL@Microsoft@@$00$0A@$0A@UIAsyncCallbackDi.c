/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008F4E0
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x180066450 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18006D6D0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F4A0 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FA130 (--1-$ComPtr@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PE.c)
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E100 (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18018A728 (--$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ??$MakeAndInitialize@VCoCreateInstanceImmersiveShellComponentCreator@@UIImmersiveComponentCreator@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveComponentCreator@@@Z @ 0x18018A80C (--$MakeAndInitialize@VCoCreateInstanceImmersiveShellComponentCreator@@UIImmersiveComponentCreato.c)
 *     ??$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncCallbackDispatcher@@@Z @ 0x18018CC7C (--$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180249C78 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@VTrayNotifyCallback@SystemTray@@@WRL@Microsoft@@QEAA@XZ @ 0x18026520C (--1-$ComPtr@VTrayNotifyCallback@SystemTray@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VTrayNotifyCallback@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18026522C (--1-$com_ptr_t@VTrayNotifyCallback@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180265E54 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
