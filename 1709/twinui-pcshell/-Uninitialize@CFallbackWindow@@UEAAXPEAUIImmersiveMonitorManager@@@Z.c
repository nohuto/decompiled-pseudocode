/*
 * XREFs of ?Uninitialize@CFallbackWindow@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x18002EA00
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CFallbackWindow::Uninitialize(
        HWND *this,
        int (__fastcall ***a2)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  int (__fastcall **v4)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v7);
  if ( (*v4)((struct IImmersiveMonitorManager *)a2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v5) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 10));
  RemovePropW(*(this - 4), L"UIA_WindowVisibilityOverridden");
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
