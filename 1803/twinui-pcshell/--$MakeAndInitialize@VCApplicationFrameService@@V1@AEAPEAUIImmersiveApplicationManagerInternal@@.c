/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameService@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameService@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180128D54
 * Callers:
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180129A78 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     ??0CApplicationFrameService@@QEAA@XZ @ 0x180129144 (--0CApplicationFrameService@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E24CC (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E24CC.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E24D8 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameService,CApplicationFrameService,IImmersiveApplicationManagerInternal * &>(
        CApplicationFrameService **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  CApplicationFrameService *v5; // rax
  CApplicationFrameService *v6; // rax
  __int64 v7; // rdx
  CApplicationFrameService *v8; // rdi
  CApplicationFrameService *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (CApplicationFrameService *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CApplicationFrameService::CApplicationFrameService(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)v6 + 21, v7);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>::InternalAddRef(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
