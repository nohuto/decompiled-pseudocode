/*
 * XREFs of CmCheckNoTxContext @ 0x1404E3874
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x1406876C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140687910 (NtCompressKey.c)
 *     NtReplaceKey @ 0x14068866C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406889E0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140688F10 (NtSaveMergedKeys.c)
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
