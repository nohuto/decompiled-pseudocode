/*
 * XREFs of CmpUnlockNameHashEntry @ 0x14066A554
 * Callers:
 *     CmpGetNameControlBlock @ 0x140502E40 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140665AFC (CmpDereferenceNameControlBlockWithLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpUnlockNameHashEntry(unsigned int a1)
{
  return ExReleasePushLockEx(
           (ULONG_PTR)CmpNameCacheTable
         + 16
         * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
           0LL);
}
