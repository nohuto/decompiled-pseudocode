/*
 * XREFs of MmCanFileBeTruncated @ 0x140050EA0
 * Callers:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 * Callees:
 *     MiCanFileBeTruncatedInternal @ 0x140050EFC (MiCanFileBeTruncatedInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
