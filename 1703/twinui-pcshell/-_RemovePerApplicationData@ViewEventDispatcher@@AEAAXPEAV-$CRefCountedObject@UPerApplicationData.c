/*
 * XREFs of ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1800FA2F4
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F9DD0 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x1800F9F54 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x1800FAE90 (wil--details--ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___--_ScopeExitFn__lambda_a6ab.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::_RemovePerApplicationData(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  _QWORD *i; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 520);
  if ( v4 )
  {
    for ( i = *(_QWORD **)(a1 + 512); a2 != *i; ++i )
    {
      if ( ++v3 >= v4 )
        return;
    }
    if ( v3 < v4 )
    {
      v6 = *(_QWORD *)(a1 + 512);
      v7 = *(_QWORD *)(v6 + 8 * v3);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 8 * v3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v8 = *(_QWORD *)(a1 + 520);
      if ( v3 != v8 - 1 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 512) + 8 * v3),
          (const void *)(*(_QWORD *)(a1 + 512) + 8 * v3 + 8),
          8 * (v8 - v3) - 8);
      --*(_QWORD *)(a1 + 520);
    }
  }
}
