/*
 * XREFs of RtlInsertElementGenericTable @ 0x180068F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFull @ 0x180068FA0 (RtlInsertElementGenericTableFull.c)
 *     FindNodeOrParent @ 0x180069328 (FindNodeOrParent.c)
 */

__int64 __fastcall RtlInsertElementGenericTable(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int NodeOrParent; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent = FindNodeOrParent(a1, a2, v10);
  return RtlInsertElementGenericTableFull(a1, a2, a3, a4, v10[0], NodeOrParent);
}
