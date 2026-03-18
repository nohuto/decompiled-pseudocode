/*
 * XREFs of ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801780A8
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXXZ @ 0x180177668 (-IssueContextUpdateNotification@CVisual@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetNotifiedWorldOffset(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)a2 - `CVisual::SetNotifiedWorldOffset'::`2'::sc_defaultValue;
  if ( !v3 )
    v3 = a2[2];
  if ( v3 )
    CSparseStorage::SetData((CSparseStorage *)(a1 + 208), 0x16u, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) &= ~0x400u;
}
