/*
 * XREFs of IovpCheckIrpForCriticalTracking @ 0x1407AF928
 * Callers:
 *     VfIrpAllocateCallDriverData @ 0x1407B0940 (VfIrpAllocateCallDriverData.c)
 * Callees:
 *     VfIrpDatabaseEntryFindAndLock @ 0x1407BDFC4 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1407BE144 (VfIrpDatabaseEntryReleaseLock.c)
 */

_BOOL8 __fastcall IovpCheckIrpForCriticalTracking(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  BOOL v4; // ebx

  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) == 0 )
  {
    v2 = VfIrpDatabaseEntryFindAndLock(a1);
    if ( v2 )
    {
      *(_DWORD *)(a1 + 16) |= 0x40000000u;
      goto LABEL_6;
    }
    *(_DWORD *)(a1 + 16) |= 0x80000000;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0xC0000000) != 0x40000000 )
    return 0LL;
  v2 = VfIrpDatabaseEntryFindAndLock(a1);
LABEL_6:
  v3 = *(_QWORD *)(v2 + 240);
  v4 = v3 != 0;
  if ( !v3 )
    *(_DWORD *)(v2 + 56) |= 0x80000u;
  VfIrpDatabaseEntryReleaseLock(v2);
  return v4;
}
