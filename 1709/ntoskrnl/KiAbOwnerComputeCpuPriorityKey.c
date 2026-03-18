/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x1400A95A0
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400A8B70 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  __int16 v1; // ax
  char v2; // r8
  char result; // al
  unsigned int v4; // r8d

  v1 = *(_WORD *)(a1 + 88);
  if ( (v1 & 0x7FFF) != 0 )
  {
    _BitScanReverse(&v4, v1 & 0x7FFF);
    v2 = v4 + 1;
  }
  else
  {
    v2 = 0;
  }
  result = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 563);
  if ( result <= v2 )
    return v2;
  if ( result > 15 )
    return 15;
  return result;
}
