/*
 * XREFs of sub_1800EBFF8 @ 0x1800EBFF8
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     sub_18005F118 @ 0x18005F118 (sub_18005F118.c)
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 * Callees:
 *     sub_1800F39A0 @ 0x1800F39A0 (sub_1800F39A0.c)
 *     sub_1800FF100 @ 0x1800FF100 (sub_1800FF100.c)
 */

__int64 __fastcall sub_1800EBFF8(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))funcs_1800EC034[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
