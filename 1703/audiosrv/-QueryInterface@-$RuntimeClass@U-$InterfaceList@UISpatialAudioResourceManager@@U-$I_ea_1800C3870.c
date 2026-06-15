/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioResourceManager@@U?$InterfaceList@UIAudioAppVolumePolicyChange@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C3870
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioResourceManager@@U?$InterfaceList@UIAudioAppVolumePolicyChange@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058820 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioResourceManager@@U-$InterfaceList@.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioResourceManager,Microsoft::WRL::Details::InterfaceList<IAudioAppVolumePolicyChange,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  const struct _GUID *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  void (*v11)(void); // rax

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v6;
    v11 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    goto LABEL_9;
  }
  if ( InlineIsEqualGUID(v4, &GUID_7f299b05_3e79_4c05_b9ac_9418573ffd42) )
  {
    *(_QWORD *)v8 = v9;
LABEL_6:
    v11 = *(void (**)(void))(**(_QWORD **)v8 + 8LL);
LABEL_9:
    v11();
    return v3;
  }
  if ( InlineIsEqualGUID(v7, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b) )
  {
    *(_QWORD *)v8 = v10 + 8;
    goto LABEL_6;
  }
  return (unsigned int)-2147467262;
}
