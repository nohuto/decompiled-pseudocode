/*
 * XREFs of MiGetLeafVa @ 0x1400D131C
 * Callers:
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     MiDbgReleaseAddress @ 0x140227BA8 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
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
