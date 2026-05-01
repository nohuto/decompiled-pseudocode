/*
 * XREFs of ?Uninitialize@CImmersiveMode@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x180032C60
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::Uninitialize(
        CImmersiveMode *this,
        int (__fastcall ***a2)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  int (__fastcall **v4)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v8);
  if ( (*v4)((struct IImmersiveMonitorManager *)a2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v5) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, *((unsigned int *)this + 68));
  v6 = *((_QWORD *)this + 36);
  if ( v6 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v6);
    *((_QWORD *)this + 36) = 0LL;
  }
  v7 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
