/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180066FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180067030 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_180067154 @ 0x180067154 (sub_180067154.c)
 */

__int64 __fastcall RtlInsertElementGenericTableAvl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = sub_180067154(a1, a2, v10);
  return RtlInsertElementGenericTableFullAvl(a1, a2, a3, a4, v10[0], v8);
}
