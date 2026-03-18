/*
 * XREFs of _IsDescendant @ 0x1C0134A10
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     CalcVisRgn @ 0x1C0066160 (CalcVisRgn.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDescendant(__int64 a1, __int64 a2)
{
  while ( a1 != a2 )
  {
    if ( (*(_WORD *)(a2 + 82) & 0x3FFF) == 0x29D )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 104);
  }
  return 1LL;
}
