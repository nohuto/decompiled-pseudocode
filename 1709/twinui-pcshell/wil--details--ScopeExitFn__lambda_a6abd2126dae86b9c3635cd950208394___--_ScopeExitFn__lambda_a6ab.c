/*
 * XREFs of wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x180126244
 * Callers:
 *     _ViewEventDispatcher::_AddValidView_::_1_::dtor$1 @ 0x1801EEC73 (_ViewEventDispatcher--_AddValidView_--_1_--dtor$1.c)
 * Callees:
 *     ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180125670 (-_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV-$CRefCountedObject@UPerApplicationData.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___(
        __int64 a1)
{
  __int64 v1; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = **(_QWORD **)a1;
    if ( !*(_QWORD *)(v1 + 16) )
      ViewEventDispatcher::_RemovePerApplicationData(*(_QWORD *)(a1 + 8), v1);
  }
}
