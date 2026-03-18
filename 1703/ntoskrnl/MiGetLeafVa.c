/*
 * XREFs of MiGetLeafVa @ 0x14017CE14
 * Callers:
 *     MiReplacePageTablePage @ 0x140023E74 (MiReplacePageTablePage.c)
 *     MiDbgReleaseAddress @ 0x14021B304 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14021B75C (MiDbgWriteCheck.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  unsigned __int64 i; // rdx

  for ( i = a1; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return i;
}
