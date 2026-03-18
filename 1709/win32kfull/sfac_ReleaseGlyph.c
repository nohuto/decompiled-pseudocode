/*
 * XREFs of sfac_ReleaseGlyph @ 0x1C02C515C
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C105C (fsg_ExecuteGlyph.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C2D94 (InvokeReleaseSfntFrag.c)
 */

__int64 __fastcall sfac_ReleaseGlyph(__int64 a1, _QWORD *a2)
{
  if ( a2[1] )
  {
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    a2[1] = 0LL;
    *a2 = 0LL;
  }
  return 0LL;
}
