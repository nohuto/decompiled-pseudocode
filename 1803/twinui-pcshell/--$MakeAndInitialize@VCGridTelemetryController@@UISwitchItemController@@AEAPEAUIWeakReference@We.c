/*
 * XREFs of ??$MakeAndInitialize@VCGridTelemetryController@@UISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU3@@Z @ 0x1802A0414
 * Callers:
 *     ?CGridTelemetryController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUISwitchItemController@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A0644 (-CGridTelemetryController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUISwitchItemCo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISwitchItemController@@@WRL@Microsoft@@QEAA@XZ @ 0x180280C00 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISwitchItemController@@@WRL@Microsoft.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGridTelemetryController,ISwitchItemController,WeakReference::IWeakReference * &,ISwitchItemController * &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdi

  *a1 = 0LL;
  v6 = (__int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemController>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemController>(v6);
    *v7 = (__int64)&CGridTelemetryController::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
    v9 = *a2;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v7 + 2, *a3);
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(v7 + 3, v9);
    v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v7)(
           v7,
           &GUID_b6197d31_183c_4b40_942b_308a66f93fde,
           a1);
    (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
