/*
 * XREFs of ttfdFree @ 0x1C0232958
 * Callers:
 *     ttfdSemFree @ 0x1C0226A30 (ttfdSemFree.c)
 *     ttfdQueryFontTree @ 0x1C0230170 (ttfdQueryFontTree.c)
 * Callees:
 *     <none>
 */

void __fastcall ttfdFree(__int64 a1, _DWORD *a2)
{
  if ( a2 && !*a2 && a2[1]-- == 1 )
  {
    *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) = 0LL;
    EngFreeMem(a2);
  }
}
