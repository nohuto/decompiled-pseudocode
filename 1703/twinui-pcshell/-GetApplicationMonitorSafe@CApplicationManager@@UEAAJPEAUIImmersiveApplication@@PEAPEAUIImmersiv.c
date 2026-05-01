/*
 * XREFs of ?GetApplicationMonitorSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18000EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationMonitorSafe(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64),
        struct IImmersiveMonitor **a3)
{
  __int64 (__fastcall **v5)(struct IImmersiveApplication *, GUID *, __int64); // rbx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v10);
  v7 = (*v5)((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v6);
  if ( v7 >= 0 )
    (*(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v10 + 464LL))(v10, a3);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
