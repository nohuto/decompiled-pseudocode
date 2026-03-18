/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x140066010
 * Callers:
 *     SepInitSingletonEntry @ 0x140065FB8 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400665C4 (SepCleanupMarkedForDeletionEntries.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140247F54 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140248040 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
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
