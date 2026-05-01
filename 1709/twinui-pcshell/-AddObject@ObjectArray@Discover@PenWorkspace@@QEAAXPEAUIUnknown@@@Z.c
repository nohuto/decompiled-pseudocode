/*
 * XREFs of ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x1800E6450
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1800E3A80 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x180072E04 (--$emplace_back@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@@@WRL@M.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenWorkspace::Discover::ObjectArray::AddObject(
        PenWorkspace::Discover::ObjectArray *this,
        struct IUnknown *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v5; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v5 = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::emplace_back<Microsoft::WRL::ComPtr<ITaskWindow>>(
      (unsigned __int64 *)this + 7,
      &v5);
    if ( v5 )
      ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ObjectArray.h",
      v3);
  }
}
