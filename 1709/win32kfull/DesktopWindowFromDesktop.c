/*
 * XREFs of DesktopWindowFromDesktop @ 0x1C004979C
 * Callers:
 *     xxxDesktopRecalc @ 0x1C00494C8 (xxxDesktopRecalc.c)
 *     SnapshotWindowRects @ 0x1C01B89F0 (SnapshotWindowRects.c)
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
