/*
 * XREFs of RtlAppendUnicodeToString @ 0x180044AB0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18003ADA8 @ 0x18003ADA8 (sub_18003ADA8.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800410E0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_180057888 @ 0x180057888 (sub_180057888.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_180085C94 @ 0x180085C94 (sub_180085C94.c)
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DB144 @ 0x1800DB144 (sub_1800DB144.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 *     sub_1800E1D24 @ 0x1800E1D24 (sub_1800E1D24.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int16 v4; // bx
  void *v5; // r14

  if ( !a2 )
    return 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    if ( *a1 + (unsigned int)v4 <= a1[1] )
    {
      v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v5, a2, v4);
      *a1 += v4;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
