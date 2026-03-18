/*
 * XREFs of PsAssignProcessToJobObject @ 0x14054B2E0
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14054B1F4 (NtAssignProcessToJobObject.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJobList @ 0x1406E231C (PspAssignProcessToJobList.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x14054C3BC (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(void *a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(a1, a2, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(a1, a2);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
