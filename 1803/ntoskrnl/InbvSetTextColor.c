/*
 * XREFs of InbvSetTextColor @ 0x140230F30
 * Callers:
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rax

  if ( qword_1403CDD28 && (v0 = *(__int64 (**)(void))(qword_1403CDD28 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
