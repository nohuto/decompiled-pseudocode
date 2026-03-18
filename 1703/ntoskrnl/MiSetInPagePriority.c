/*
 * XREFs of MiSetInPagePriority @ 0x1401099B8
 * Callers:
 *     MiSetInPagePrefetchPriority @ 0x1400334E0 (MiSetInPagePrefetchPriority.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiPfAllocateMdls @ 0x14053CAA0 (MiPfAllocateMdls.c)
 * Callees:
 *     <none>
 */

char __fastcall MiSetInPagePriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  char result; // al

  if ( a3 >= 5 || a2 <= a3 )
    *(_BYTE *)(a1 + 191) &= ~4u;
  else
    *(_BYTE *)(a1 + 191) |= 4u;
  result = (16 * (a3 & 7)) | a3 & 7 | *(_BYTE *)(a1 + 190) & 0x88;
  *(_BYTE *)(a1 + 190) = result;
  return result;
}
