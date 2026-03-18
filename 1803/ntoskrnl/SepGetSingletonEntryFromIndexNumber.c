/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x14006C5FC
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140060010 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInitSingletonEntry @ 0x14006C5A4 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400A0EEC (SepCleanupMarkedForDeletionEntries.c)
 *     SepSetSingletonEntry @ 0x1402A1120 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402A1210 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
