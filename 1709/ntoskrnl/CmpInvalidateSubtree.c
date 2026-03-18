/*
 * XREFs of CmpInvalidateSubtree @ 0x1405A6E98
 * Callers:
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x14046E9E8 (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpInvalidateSubtree(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  result = CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpInvalidateSubtreeWorker, (__int64)&v5);
  if ( a3 )
  {
    result = HIDWORD(v5);
    *a3 = HIDWORD(v5);
  }
  return result;
}
