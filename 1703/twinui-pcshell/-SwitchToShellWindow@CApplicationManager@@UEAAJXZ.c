/*
 * XREFs of ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x1800089D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SwitchToShellWindow(CApplicationManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 47);
  v3 = *v2;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v8);
  (*(void (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64))(v3 + 72))(
    v2,
    0LL,
    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
    v4);
  v5 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64, __int64))(*(_QWORD *)this + 96LL))(this, v8, 1LL);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
