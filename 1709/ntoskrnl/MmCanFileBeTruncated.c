/*
 * XREFs of MmCanFileBeTruncated @ 0x1401103D0
 * Callers:
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCanFileBeTruncatedInternal @ 0x14011042C (MiCanFileBeTruncatedInternal.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  __int64 CanFileBeTruncatedInternal; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp+10h]

  if ( NewFileSize )
    QuadPart = NewFileSize->QuadPart;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(SectionPointer, (__int64)&v4);
  if ( (_BYTE)v4 == 17 )
    return 0;
  if ( CanFileBeTruncatedInternal )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    __writecr8((unsigned __int8)v4);
  }
  return 1;
}
