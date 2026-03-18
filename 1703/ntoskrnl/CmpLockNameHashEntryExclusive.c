/*
 * XREFs of CmpLockNameHashEntryExclusive @ 0x14066A44C
 * Callers:
 *     CmpDereferenceNameControlBlockWithLock @ 0x140665AFC (CmpDereferenceNameControlBlockWithLock.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpLockNameHashEntryExclusive(unsigned int a1)
{
  ExAcquirePushLockExclusiveEx(
    (ULONG_PTR)CmpNameCacheTable
  + 16
  * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
    0LL);
}
