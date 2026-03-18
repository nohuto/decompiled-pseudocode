/*
 * XREFs of MmFlushImageSection @ 0x1400BCC80
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x140050EFC (MiCanFileBeTruncatedInternal.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x1400BCE70 (MiAttemptSectionDelete.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

BOOLEAN __stdcall MmFlushImageSection(PSECTION_OBJECT_POINTERS SectionObjectPointer, MMFLUSH_TYPE FlushType)
{
  BOOLEAN v4; // di
  KIRQL v5; // si
  volatile signed __int32 *DataSectionObject; // rbx
  volatile signed __int32 *ImageSectionObject; // rbp
  int v9; // ebx
  __int64 v10; // rdx

  v4 = 0;
  while ( 1 )
  {
    v5 = ExAcquireSpinLockExclusive(&dword_1403CB280);
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
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
      v4 = 1;
LABEL_6:
      __writecr8(v5);
      return v4;
    }
    v9 = ExTryAcquireSpinLockExclusiveAtDpcLevel(ImageSectionObject + 18);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    if ( v9 )
    {
      LOBYTE(v10) = v5;
      return MiAttemptSectionDelete(ImageSectionObject, v10, 0LL);
    }
LABEL_16:
    __writecr8(v5);
  }
  if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    goto LABEL_16;
  }
  if ( !*((_QWORD *)DataSectionObject + 6) && (DataSectionObject[14] & 2) == 0 )
  {
    if ( *((_QWORD *)DataSectionObject + 14) > 1uLL )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
      ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
      goto LABEL_6;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
    goto LABEL_4;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
  ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
  __writecr8(v5);
  return 0;
}
