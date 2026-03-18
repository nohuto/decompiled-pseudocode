/*
 * XREFs of MmForceSectionClosed @ 0x14010A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x14010A778 (MiAttemptSectionDelete.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  KIRQL v4; // al
  volatile signed __int32 *DataSectionObject; // rbx
  KIRQL v6; // di
  __int64 v7; // r8
  __int64 v8; // rdx

  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140388100);
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    v6 = v4;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
      if ( !DataSectionObject )
        break;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      LOBYTE(v7) = DelayClose;
      LOBYTE(v8) = v6;
      return MiAttemptSectionDelete(DataSectionObject, v8, v7);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  __writecr8(v6);
  return 1;
}
