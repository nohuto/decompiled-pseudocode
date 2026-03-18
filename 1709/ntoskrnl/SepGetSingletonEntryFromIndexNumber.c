/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x14001ABFC
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140017800 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInitSingletonEntry @ 0x14001AC74 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140103B18 (SepCleanupMarkedForDeletionEntries.c)
 *     SepSetSingletonEntry @ 0x14025F674 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025F760 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  char v1; // si
  __int64 v2; // rdi
  unsigned int v3; // ebx
  KIRQL v4; // bp

  v1 = a1;
  v2 = 0LL;
  v3 = a1 >> 6;
  v4 = ExAcquireSpinLockShared(SepSingletonGlobal);
  if ( v3 < *((_DWORD *)SepSingletonGlobal + 1) )
    v2 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8LL * v3) + 24LL * (v1 & 0x3F);
  ExReleaseSpinLockSharedFromDpcLevel(SepSingletonGlobal);
  __writecr8(v4);
  return v2;
}
