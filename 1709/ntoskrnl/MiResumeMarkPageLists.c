/*
 * XREFs of MiResumeMarkPageLists @ 0x140218750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MiResumeMarkPageLists(__int64 a1, int a2)
{
  if ( a2 )
    *(_BYTE *)(a1 + 4676) = a2;
  *(_BYTE *)(a1 + 4677) = 1;
}
