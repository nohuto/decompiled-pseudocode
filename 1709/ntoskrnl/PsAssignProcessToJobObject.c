/*
 * XREFs of PsAssignProcessToJobObject @ 0x14050BD70
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14050BC70 (NtAssignProcessToJobObject.c)
 *     PspSetJobMemoryPartition @ 0x140718000 (PspSetJobMemoryPartition.c)
 *     PspAssignProcessToJobList @ 0x14071874C (PspAssignProcessToJobList.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     PspGetJobAssignmentDisposition @ 0x14050BE50 (PspGetJobAssignmentDisposition.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(ULONG_PTR BugCheckParameter3, PVOID Object, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(BugCheckParameter3, Object, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(BugCheckParameter3, Object);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
