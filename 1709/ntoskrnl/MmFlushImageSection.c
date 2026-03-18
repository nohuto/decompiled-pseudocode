/*
 * XREFs of MmFlushImageSection @ 0x14010A5D0
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x14011042C (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x14010A778 (MiAttemptSectionDelete.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  BOOLEAN v4; // bl
  KIRQL v5; // si
  volatile signed __int32 *DataSectionObject; // rdi
  volatile signed __int32 *ImageSectionObject; // rdi
  __int64 v9; // rdx

  v4 = 0;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140388100);
    if ( FlushType == MmFlushForDelete )
    {
      DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
      if ( SectionObjectPointer->DataSectionObject )
        break;
    }
LABEL_4:
    ImageSectionObject = (volatile signed __int32 *)SectionObjectPointer->ImageSectionObject;
    if ( !ImageSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      v4 = 1;
LABEL_6:
      __writecr8(v5);
      return v4;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 18) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      LOBYTE(v9) = v5;
      return MiAttemptSectionDelete(ImageSectionObject, v9, 0LL);
    }
LABEL_15:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v5);
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
    goto LABEL_15;
  if ( !*((_QWORD *)DataSectionObject + 6) && (DataSectionObject[14] & 2) == 0 )
  {
    if ( *((_QWORD *)DataSectionObject + 14) > 1uLL )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
      goto LABEL_6;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
    goto LABEL_4;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
  __writecr8(v5);
  return 0;
}
