/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x140050EFC
 * Callers:
 *     MmCanFileBeTruncated @ 0x140050EA0 (MmCanFileBeTruncated.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 * Callees:
 *     MiFindLastSubsection @ 0x14004CFC0 (MiFindLastSubsection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MmFlushImageSection @ 0x1400BCC80 (MmFlushImageSection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEndingOffset @ 0x140128958 (MiEndingOffset.c)
 */

char *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        KIRQL *a5)
{
  bool v8; // zf
  KIRQL v9; // si
  char *DataSectionObject; // rdi
  int v12; // ebx
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v15; // rax
  volatile LONG *v16; // rcx
  unsigned __int64 v17; // rax

  while ( 1 )
  {
    v8 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v8 )
    {
      v9 = ExAcquireSpinLockExclusive(&dword_1403CB280);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
      __writecr8(v9);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    v9 = ExAcquireSpinLockExclusive(&dword_1403CB280);
LABEL_3:
    DataSectionObject = (char *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
      __writecr8(v9);
      *a5 = 0;
      return 0LL;
    }
    v12 = ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    if ( v12 )
      break;
    __writecr8(v9);
  }
  if ( *((_DWORD *)DataSectionObject + 14) & 1 | ((*((_DWORD *)DataSectionObject + 14) & 2) != 0)
    || *((_QWORD *)DataSectionObject + 14) > 1uLL && (*((_DWORD *)DataSectionObject + 14) & 8) == 0 && !a4 )
  {
    goto LABEL_20;
  }
  if ( !*((_QWORD *)DataSectionObject + 6) || a3 == 1 && (!*((_QWORD *)DataSectionObject + 5) || a4 == 1) )
    goto LABEL_10;
  if ( !a2 )
  {
LABEL_20:
    v16 = (volatile LONG *)(DataSectionObject + 72);
LABEL_19:
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    __writecr8(v9);
    return 0LL;
  }
  LastSubsection = (__int64)(DataSectionObject + 128);
  if ( *((_QWORD *)DataSectionObject + 8) )
    LastSubsection = MiFindLastSubsection((__int64)DataSectionObject, 1);
  for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
    LastSubsection = i;
  v15 = MiEndingOffset(LastSubsection);
  if ( *a2 < v15 )
  {
    v16 = (volatile LONG *)(DataSectionObject + 72);
    goto LABEL_19;
  }
  v17 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( *a2 < v17 )
    *a2 = v17;
LABEL_10:
  *a5 = v9;
  return DataSectionObject;
}
