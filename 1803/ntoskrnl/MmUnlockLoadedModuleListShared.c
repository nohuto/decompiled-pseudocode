/*
 * XREFs of MmUnlockLoadedModuleListShared @ 0x14013F788
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x14012EDA0 (RtlpxLookupFunctionTable.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x140182850 (RtlPcToFileName.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall MmUnlockLoadedModuleListShared(unsigned __int8 a1)
{
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( a1 < 0xFu )
    __writecr8(a1);
}
