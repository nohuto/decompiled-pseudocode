/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x140064D30
 * Callers:
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140063D78 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140064BFC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  __int16 v1; // ax
  char v2; // dl
  char v3; // cl
  char v4; // al
  unsigned int v6; // edx

  v1 = *(_WORD *)(a1 + 88);
  if ( (v1 & 0x7FFF) != 0 )
  {
    _BitScanReverse(&v6, v1 & 0x7FFF);
    v2 = v6 + 1;
  }
  else
  {
    v2 = 0;
  }
  v3 = *(_BYTE *)(a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24)) + 563);
  if ( v3 > v2 )
  {
    v4 = v3;
    if ( v3 > 15 )
      return 15;
    return v4;
  }
  return v2;
}
