/*
 * XREFs of ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x1801771F4
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXXZ @ 0x180177668 (-IssueContextUpdateNotification@CVisual@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetNotifiedWorldRenderingScale(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v1 + 4) & 0x1000) == 0 )
    return 0.0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x14000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
