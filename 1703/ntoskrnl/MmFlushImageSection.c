/*
 * XREFs of MmFlushImageSection @ 0x14002D9E0
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x14010BDA4 (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     MiAttemptSectionDelete @ 0x14002DB88 (MiAttemptSectionDelete.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  BOOLEAN v4; // bl
  KIRQL v5; // si
  volatile LONG *DataSectionObject; // rdi
  char *ImageSectionObject; // rdi
  __int64 v9; // rdx

  v4 = 0;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_14036BE00);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile LONG *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
        break;
    }
LABEL_9:
    ImageSectionObject = (char *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      v4 = 1;
LABEL_11:
      __writecr8(v5);
      return v4;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      LOBYTE(v9) = v5;
      return MiAttemptSectionDelete(ImageSectionObject, v9, 0LL);
    }
LABEL_15:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v5);
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
    goto LABEL_15;
  if ( !*((_QWORD *)DataSectionObject + 6) && (DataSectionObject[14] & 2) == 0 )
  {
    if ( *((_QWORD *)DataSectionObject + 14) > 1uLL )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
      goto LABEL_11;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
    goto LABEL_9;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
  ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
  __writecr8(v5);
  return 0;
}
