/*
 * XREFs of ?SetApplicationMonitorSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIImmersiveMonitor@@W4__MIDL___MIDL_itf_shpriv_core_0000_0315_0002@@@Z @ 0x18000E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationMonitorSafe(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64),
        __int64 a3,
        int a4)
{
  int v4; // ebp
  void (__fastcall **v8)(_QWORD, GUID *, __int64); // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+6Ch] [rbp+14h]

  v4 = a4 - 1;
  v12 = 0LL;
  v8 = *a2;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
  (*v8)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
  v13 = *(_DWORD *)(a1 + 552);
  v14 = 0;
  (*(void (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)v12 + 456LL))(
    v12,
    a3,
    &v13,
    3 - (unsigned int)(v4 != 0));
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
