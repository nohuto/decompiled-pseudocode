/*
 * XREFs of RtlInsertElementGenericTable @ 0x180065AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFull @ 0x180065B20 (RtlInsertElementGenericTableFull.c)
 *     sub_180065EBC @ 0x180065EBC (sub_180065EBC.c)
 */

__int64 __fastcall RtlInsertElementGenericTable(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = sub_180065EBC(a1, a2, v10);
  return RtlInsertElementGenericTableFull(a1, a2, a3, a4, v10[0], v8);
}
