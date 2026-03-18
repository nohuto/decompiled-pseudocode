/*
 * XREFs of ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x180178064
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXXZ @ 0x180177668 (-IssueContextUpdateNotification@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetNotifiedEffectiveLayoutSize(__int64 a1, __int64 a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[0] = a2;
  if ( a2 == `CBaseExpression::SetDebugInfo'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) &= ~0x800u;
  else
    CSparseStorage::SetData((CSparseStorage *)(a1 + 208), 0x15u, 8u, v2);
}
