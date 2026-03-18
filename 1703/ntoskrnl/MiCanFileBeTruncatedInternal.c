/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x14010BDA4
 * Callers:
 *     MmCanFileBeTruncated @ 0x14002EE20 (MmCanFileBeTruncated.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 * Callees:
 *     MmFlushImageSection @ 0x14002D9E0 (MmFlushImageSection.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiFindLastSubsection @ 0x14005E430 (MiFindLastSubsection.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEndingOffset @ 0x1400CDDC0 (MiEndingOffset.c)
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
  unsigned __int64 v16; // rax

  while ( 1 )
  {
    v9 = SectionObjectPointer->ImageSectionObject == 0LL;
    *a5 = 17;
    if ( v9 )
    {
      v10 = ExAcquireSpinLockExclusive(&dword_14036BE00);
      if ( !SectionObjectPointer->ImageSectionObject )
        goto LABEL_3;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      __writecr8(v10);
    }
    if ( !MmFlushImageSection(SectionObjectPointer, MmFlushForWrite) )
      return 0LL;
    v10 = ExAcquireSpinLockExclusive(&dword_14036BE00);
LABEL_3:
    DataSectionObject = (volatile signed __int32 *)SectionObjectPointer->DataSectionObject;
    if ( !SectionObjectPointer->DataSectionObject )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      __writecr8(v10);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 18) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
  if ( !(DataSectionObject[14] & 1 | ((DataSectionObject[14] & 2) != 0))
    && (*((_QWORD *)DataSectionObject + 14) <= 1uLL || (DataSectionObject[14] & 8) != 0 || a4) )
  {
    if ( !*((_QWORD *)DataSectionObject + 6) || a3 == 1 && (a4 == 1 || !*((_QWORD *)DataSectionObject + 5)) )
      goto LABEL_8;
    if ( a2 )
    {
      LastSubsection = (__int64)(DataSectionObject + 32);
      if ( *((_QWORD *)DataSectionObject + 8) )
        LastSubsection = MiFindLastSubsection((__int64)DataSectionObject, 1);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v15 = MiEndingOffset(LastSubsection);
      if ( *a2 >= v15 )
      {
        v16 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v16 )
          *a2 = v16;
LABEL_8:
        *a5 = v10;
        return DataSectionObject;
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(DataSectionObject + 18);
  __writecr8(v10);
  return 0LL;
}
