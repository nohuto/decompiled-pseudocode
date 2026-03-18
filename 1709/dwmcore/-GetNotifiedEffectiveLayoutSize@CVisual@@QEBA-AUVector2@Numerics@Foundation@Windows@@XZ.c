/*
 * XREFs of ?GetNotifiedEffectiveLayoutSize@CVisual@@QEBA?AUVector2@Numerics@Foundation@Windows@@XZ @ 0x18017713C
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXXZ @ 0x180177668 (-IssueContextUpdateNotification@CVisual@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetNotifiedEffectiveLayoutSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 208);
  if ( (*(_DWORD *)(v2 + 4) & 0x800) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x15000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)a2 = *(_QWORD *)(i + 4);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return a2;
}
