/*
 * XREFs of ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@@Z @ 0x1800AF55C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??$emplace_back@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C4F8 (--$emplace_back@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIContextua.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorManager::RegisterProcessor(__int64 **this, struct IContextualProcessor *a2)
{
  struct IContextualProcessor *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)a2 + 8LL))(a2);
  std::vector<Microsoft::WRL::ComPtr<IContextualProcessor>>::emplace_back<Microsoft::WRL::ComPtr<IContextualProcessor>>(
    this + 2,
    (__int64 *)&v4);
  if ( v4 )
    (*(void (__fastcall **)(struct IContextualProcessor *))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
