/*
 * XREFs of MmQueryKernelCfgValidRanges @ 0x14086BEF0
 * Callers:
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     qsort @ 0x14015F450 (qsort.c)
 */

void __fastcall MmQueryKernelCfgValidRanges(_QWORD *a1)
{
  unsigned __int64 v1; // r10
  _QWORD *v2; // r9
  __int64 v3; // rdx

  v1 = 0LL;
  v2 = a1;
  do
  {
    v3 = *(int *)&MiTrimPassToAge[v1 + 8];
    v1 += 4LL;
    v3 *= 2LL;
    *v2 = qword_140389AD0[v3];
    v2[1] = qword_140389AD8[v3];
    v2 += 2;
  }
  while ( v1 < 8 );
  qsort(a1, 2uLL, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiKvaRangeSort);
}
