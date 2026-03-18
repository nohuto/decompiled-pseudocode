/*
 * XREFs of CmpSearchForTrans @ 0x14042DB64
 * Callers:
 *     CmpTransSearchAddTrans @ 0x14042D944 (CmpTransSearchAddTrans.c)
 * Callees:
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpTransUowIsEqual @ 0x140669578 (CmpTransUowIsEqual.c)
 */

__int64 __fastcall CmpSearchForTrans(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = a1 + 16;
  while ( 1 )
  {
    result = CmListGetNextElement(v3, &v8, 0LL);
    v7 = result;
    if ( !result )
      break;
    if ( a2 && a2 == *(_QWORD *)(result + 56) || a3 && (unsigned __int8)CmpTransUowIsEqual(a3, result + 88) )
      return v7;
  }
  return result;
}
