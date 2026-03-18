/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x14011042C
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1401103D0 (MmCanFileBeTruncated.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiEndingOffset @ 0x14002B178 (MiEndingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmFlushImageSection @ 0x14010A5D0 (MmFlushImageSection.c)
 *     MiFindLastSubsection @ 0x140110710 (MiFindLastSubsection.c)
 */

volatile signed __int32 *__fastcall MiCanFileBeTruncatedInternal(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        unsigned __int64 *a2,
        int a3,
        int a4,
        KIRQL *a5)
{
  bool v9; // zf
  KIRQL v10; // di
  volatile signed __int32 *DataSectionObject; // rbx
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v15; // rax
  volatile LONG *v16; // rcx
  unsigned __int64 v17; // rax

  while ( 1 )
  {
    v9 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v9 )
    {
      v10 = ExAcquireSpinLockExclusive(&dword_140388100);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      __writecr8(v10);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    v10 = ExAcquireSpinLockExclusive(&dword_140388100);
LABEL_3:
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      __writecr8(v10);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  if ( !(DataSectionObject[14] & 1 | ((DataSectionObject[14] & 2) != 0))
    && (*((_QWORD *)DataSectionObject + 14) <= 1uLL || (DataSectionObject[14] & 8) != 0 || a4) )
  {
    if ( *((_QWORD *)DataSectionObject + 6) && (a3 != 1 || *((_QWORD *)DataSectionObject + 5) && a4 != 1) )
    {
      if ( !a2 )
        goto LABEL_18;
      LastSubsection = (__int64)(DataSectionObject + 32);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection(DataSectionObject, 1LL);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v15 = MiEndingOffset(LastSubsection);
      if ( *a2 < v15 )
      {
LABEL_18:
        v16 = DataSectionObject + 18;
        goto LABEL_19;
      }
      v17 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( *a2 < v17 )
        *a2 = v17;
    }
    *a5 = v10;
    return DataSectionObject;
  }
  v16 = DataSectionObject + 18;
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel(v16);
  __writecr8(v10);
  return 0LL;
}
