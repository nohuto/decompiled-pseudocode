/*
 * XREFs of ?CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellHookService@@@Z @ 0x18002CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18002D4D0 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackWindow::CompleteInitialization(
        CFallbackWindow *this,
        __int64 (__fastcall ***a2)(struct IImmersiveMonitorManager *, GUID *, __int64 *),
        struct IImmersiveShellHookService *a3)
{
  struct IImmersiveMonitor **v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 (__fastcall **v9)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = (struct IImmersiveMonitor **)((char *)this + 48);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *), struct IImmersiveMonitor **))(*a2)[8])(
         a2,
         v6);
  if ( v8 >= 0 )
  {
    v13 = 0LL;
    v9 = *a2;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
    v8 = (*v9)((struct IImmersiveMonitorManager *)a2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v10);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v13 + 24LL))(
             v13,
             ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 56) >> 64),
             (char *)this + 40);
      if ( v8 >= 0 )
      {
        CFallbackWindow::_SizeWindow((CFallbackWindow *)((char *)this - 56), *v6);
        (*(void (__fastcall **)(char *, struct IImmersiveShellHookService *))(*((_QWORD *)this - 5) + 32LL))(
          (char *)this - 40,
          a3);
      }
    }
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return (unsigned int)v8;
}
