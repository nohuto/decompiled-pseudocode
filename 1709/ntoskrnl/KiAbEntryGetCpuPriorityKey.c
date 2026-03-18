/*
 * XREFs of KiAbEntryGetCpuPriorityKey @ 0x1400A8B70
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1400A95A0 (KiAbOwnerComputeCpuPriorityKey.c)
 */

char __fastcall KiAbEntryGetCpuPriorityKey(unsigned __int8 *a1)
{
  char result; // al

  if ( (a1[27] & 1) == 0 )
    return a1[48];
  if ( (a1[25] & 1) == 0 )
    return KiAbOwnerComputeCpuPriorityKey(a1);
  result = a1[-(unsigned __int16)(16 * a1[24]) + 195];
  if ( result > 15 )
    return 15;
  return result;
}
