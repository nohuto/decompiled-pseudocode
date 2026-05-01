/*
 * XREFs of ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180125670
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180125100 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180125288 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x180126244 (wil--details--ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___--_ScopeExitFn__lambda_a6ab.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::_RemovePerApplicationData(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 592);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 584);
    while ( a2 != *(_QWORD *)(v5 + 8 * v3) )
    {
      if ( ++v3 >= v4 )
        return;
    }
    if ( v3 < v4 )
    {
      v6 = *(_QWORD *)(v5 + 8 * v3);
      if ( v6 )
      {
        *(_QWORD *)(v5 + 8 * v3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v7 = *(_QWORD *)(a1 + 592);
      if ( v3 != v7 - 1 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 584) + 8 * v3),
          (const void *)(*(_QWORD *)(a1 + 584) + 8 * v3 + 8),
          8 * (v7 - v3) - 8);
      --*(_QWORD *)(a1 + 592);
    }
  }
}
