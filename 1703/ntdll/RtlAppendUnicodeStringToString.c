/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x18003C260
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18003ADA8 @ 0x18003ADA8 (sub_18003ADA8.c)
 *     sub_18003C0F0 @ 0x18003C0F0 (sub_18003C0F0.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_180057888 @ 0x180057888 (sub_180057888.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_180085C94 @ 0x180085C94 (sub_180085C94.c)
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DB144 @ 0x1800DB144 (sub_1800DB144.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // si
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *a2;
  if ( !*a2 )
    return 0LL;
  v4 = *a1;
  if ( (unsigned int)v4 + v2 <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, *((const void **)a2 + 1), v2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
