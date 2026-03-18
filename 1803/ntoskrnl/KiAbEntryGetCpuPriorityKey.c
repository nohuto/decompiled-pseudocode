/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x140064BFC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140064D30 (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  char result; // al

  if ( (a1[27] & 1) == 0 )
    return a1[48];
  if ( (a1[25] & 1) == 0 )
    return KiAbOwnerComputeCpuPriorityKey(a1, a1, a3);
  result = a1[-(unsigned __int16)(16 * a1[24]) + 195];
  if ( result > 15 )
    return 15;
  return result;
}
