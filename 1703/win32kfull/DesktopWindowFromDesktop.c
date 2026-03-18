/*
 * XREFs of DesktopWindowFromDesktop @ 0x1C00F1D18
 * Callers:
 *     xxxDesktopRecalc @ 0x1C00F1A48 (xxxDesktopRecalc.c)
 *     SnapshotWindowRects @ 0x1C01B578C (SnapshotWindowRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopWindowFromDesktop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      return *(_QWORD *)(v2 + 16);
  }
  return result;
}
