/*
 * XREFs of ?CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellHookService@@@Z @ 0x1801144F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180115020 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackWindow::CompleteInitialization(
        CFallbackWindow *this,
        struct IImmersiveMonitorManager *a2,
        struct IImmersiveShellHookService *a3)
{
  struct IImmersiveMonitor **v6; // r14
  int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v6 = (struct IImmersiveMonitor **)((char *)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 6);
  v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitorManager *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 64LL))(
         a2,
         v6);
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v7 = (**(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *))a2)(
           a2,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v9);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v9 + 24LL))(
             v9,
             ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 72) >> 64),
             (char *)this + 40);
      if ( v7 >= 0 )
      {
        CFallbackWindow::_SizeWindow((CFallbackWindow *)((char *)this - 72), *v6);
        (*(void (__fastcall **)(char *, struct IImmersiveShellHookService *))(*((_QWORD *)this - 6) + 32LL))(
          (char *)this - 48,
          a3);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  return (unsigned int)v7;
}
