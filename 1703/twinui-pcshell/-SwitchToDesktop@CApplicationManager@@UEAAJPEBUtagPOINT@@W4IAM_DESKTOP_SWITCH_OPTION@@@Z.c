/*
 * XREFs of ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008A70
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SwitchToDesktop(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  if ( a2 )
  {
    v6 = (__int64 *)a1[47];
    v7 = *v6;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v10);
    (*(void (__fastcall **)(__int64 *, __int64, GUID *, GUID *, __int64))(v7 + 96))(
      v6,
      a2,
      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
      v8);
  }
  return (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 96LL))(a1, 0LL, a3);
}
