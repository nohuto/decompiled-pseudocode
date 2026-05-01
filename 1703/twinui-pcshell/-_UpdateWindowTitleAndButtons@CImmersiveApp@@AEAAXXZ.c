/*
 * XREFs of ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180056D58
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x1800504E8 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x1800520E0 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x180052140 (-OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18005664C (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180058E88 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_UpdateWindowTitleAndButtons(
        int (__fastcall ***this)(CImmersiveApp *, GUID *, __int64 *))
{
  int (__fastcall **v2)(CImmersiveApp *, GUID *, __int64 *); // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *this;
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v5);
  if ( (*v2)((CImmersiveApp *)this, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v3) >= 0 )
    (*((void (__fastcall **)(int (__fastcall **)(CImmersiveApp *, GUID *, __int64 *), __int64))*this[45] + 19))(
      this[45],
      v5);
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
