/*
 * XREFs of CmCheckNoTxContext @ 0x1404D58A4
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x14065E844 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065EA94 (NtCompressKey.c)
 *     NtReplaceKey @ 0x14065F7EC (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14065FA60 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x14065FF88 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  if ( (int)result >= 0 )
    return v1 != 0 ? 0xC0190001 : 0;
  return result;
}
