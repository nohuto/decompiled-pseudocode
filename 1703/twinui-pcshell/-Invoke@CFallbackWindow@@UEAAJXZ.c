/*
 * XREFs of ?Invoke@CFallbackWindow@@UEAAJXZ @ 0x18002D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18002D540 (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFallbackWindow::Invoke(CFallbackWindow *this)
{
  char *v2; // rsi
  int VisibleApp; // eax
  IUnknown *v4; // rbx
  __int64 *v5; // rax
  void *v6; // rcx
  struct IImmersiveApplication *v7; // rcx
  void *ppvOut; // [rsp+50h] [rbp+20h] BYREF
  struct IImmersiveApplication *v10; // [rsp+58h] [rbp+28h] BYREF

  v10 = 0LL;
  v2 = (char *)this - 80;
  VisibleApp = CFallbackWindow::_GetVisibleApp((CFallbackWindow *)((char *)this - 80), &v10);
  ppvOut = 0LL;
  if ( VisibleApp < 0 )
  {
    v4 = (IUnknown *)*((_QWORD *)this - 9);
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           v4,
           (const GUID *const)&SID_ImmersiveLauncher,
           &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
           (void **)v5) >= 0 )
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 4LL);
  }
  else if ( IUnknown_QueryService(
              *((IUnknown **)this - 9),
              &IID_IImmersiveApplicationManager,
              &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
              &ppvOut) >= 0 )
  {
    (*(void (__fastcall **)(void *, struct IImmersiveApplication *, __int64))(*(_QWORD *)ppvOut + 56LL))(
      ppvOut,
      v10,
      1LL);
  }
  v6 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  UiaRaiseAutomationEvent((IRawElementProviderSimple *)(((unsigned __int64)this - 8) & -(__int64)(v2 != 0LL)), 20009);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
