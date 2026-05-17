/*
 * XREFs of RtlInsertElementGenericTable @ 0x180066770
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFull @ 0x1800667E0 (RtlInsertElementGenericTableFull.c)
 *     sub_180066B64 @ 0x180066B64 (sub_180066B64.c)
 */

__int64 __fastcall RtlInsertElementGenericTable(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = sub_180066B64(a1, a2, v10);
  return RtlInsertElementGenericTableFull(a1, a2, a3, a4, v10[0], v8);
}
