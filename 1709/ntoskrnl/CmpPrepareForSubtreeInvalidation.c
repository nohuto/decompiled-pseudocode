/*
 * XREFs of CmpPrepareForSubtreeInvalidation @ 0x1405A6ED8
 * Callers:
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1405A4B40 (CmpSaveBootControlSet.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x14046E9E8 (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpPrepareForSubtreeInvalidation(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+24h] [rbp-24h]
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v4 = 0;
  v5 = 0LL;
  v3 = 0;
  v6 = a2;
  CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpPrepareForSubtreeInvalidationWorker, (__int64)&v3);
  result = (unsigned int)v3;
  if ( v3 >= 0 )
  {
    if ( v4 )
      return 3221225761LL;
    else
      return (_DWORD)v5 != 0 ? 0xC000022D : 0;
  }
  return result;
}
