/*
 * XREFs of CmpUnlockNameHashEntry @ 0x1406FA798
 * Callers:
 *     CmpGetNameControlBlock @ 0x1404AB750 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockNameHashEntry(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExReleasePushLockEx(
           (ULONG_PTR)CmpNameCacheTable
         + 16
         * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
           0LL,
           a3,
           a4);
}
