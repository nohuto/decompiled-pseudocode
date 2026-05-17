/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1800691F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180069260 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_18006938C @ 0x18006938C (sub_18006938C.c)
 */

__int64 __fastcall RtlInsertElementGenericTableAvl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = sub_18006938C(a1, a2, v10);
  return RtlInsertElementGenericTableFullAvl(a1, a2, a3, a4, v10[0], v8);
}
