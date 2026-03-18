/*
 * XREFs of MmForceSectionClosed @ 0x14002DAF0
 * Callers:
 *     <none>
 * Callees:
 *     MiAttemptSectionDelete @ 0x14002DB88 (MiAttemptSectionDelete.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  KIRQL v4; // al
  char *DataSectionObject; // rbx
  KIRQL v6; // di
  __int64 v7; // r8
  __int64 v8; // rdx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_14036BE00);
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    v6 = v4;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      DataSectionObject = (char *)SectionObjectPointer->ImageSectionObject;
      if ( !DataSectionObject )
        break;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      LOBYTE(v7) = DelayClose;
      LOBYTE(v8) = v6;
      return MiAttemptSectionDelete(DataSectionObject, v8, v7);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
  __writecr8(v6);
  return 1;
}
