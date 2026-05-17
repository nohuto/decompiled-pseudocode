/*
 * XREFs of sub_180063A64 @ 0x180063A64
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_1800637EC @ 0x1800637EC (sub_1800637EC.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     sub_180063ACC @ 0x180063ACC (sub_180063ACC.c)
 */

unsigned __int64 __fastcall sub_180063A64(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // edi
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3;
  v7 = sub_180063ACC(a1, a2, a3, v11);
  result = -1LL;
  if ( v7 != -1 )
  {
    result = 0LL;
    if ( a4 )
      *a4 = v7;
    if ( v11[0] )
    {
      v9 = a2 + v7;
      v10 = v9 + 16;
      if ( (v5 & 0x10000000) == 0 )
        v10 = v9;
      return (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return result;
}
