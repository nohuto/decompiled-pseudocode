/*
 * XREFs of ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18010D970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18010DA20 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SwitchToDesktop(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 400);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
    (*(void (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 96LL))(
      v7,
      a2,
      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
      &v10);
    v6 = v10;
  }
  v8 = CApplicationManager::SwitchToDesktopOnMonitor(a1, v6, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
  return v8;
}
