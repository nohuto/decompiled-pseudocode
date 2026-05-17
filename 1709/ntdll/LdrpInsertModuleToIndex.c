/*
 * XREFs of LdrpInsertModuleToIndex @ 0x180081A68
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInsertModuleToIndexLockHeld @ 0x180029BB0 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
