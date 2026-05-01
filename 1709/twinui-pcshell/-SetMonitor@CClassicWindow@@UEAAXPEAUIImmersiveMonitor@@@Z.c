/*
 * XREFs of ?SetMonitor@CClassicWindow@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180035340
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindow::SetMonitor(
        CClassicWindow *this,
        void (__fastcall ***a2)(struct IImmersiveMonitor *, GUID *, __int64 *))
{
  __int64 *v2; // rsi
  __int64 v4; // rcx
  void (__fastcall **v5)(struct IImmersiveMonitor *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax

  v2 = (__int64 *)((char *)this + 24);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
  {
    v5 = *a2;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v2);
    (*v5)((struct IImmersiveMonitor *)a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v6);
  }
}
