/*
 * XREFs of CmpUnlockNameHashEntry @ 0x140694BD4
 * Callers:
 *     CmpGetNameControlBlock @ 0x140480E00 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockNameHashEntry(unsigned int a1)
{
  return ExReleasePushLockEx(
           (ULONG_PTR)CmpNameCacheTable
         + 16
         * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
           0LL);
}
