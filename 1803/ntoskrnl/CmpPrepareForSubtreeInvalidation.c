/*
 * XREFs of CmpPrepareForSubtreeInvalidation @ 0x140614070
 * Callers:
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x1406FB2F0 (CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x14054E230 (CmpEnumerateAllOpenSubKeys.c)
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
