/*
 * XREFs of PspLockJobsAndProcessExclusive @ 0x1405127BC
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PspLockJobChain @ 0x14050DF38 (PspLockJobChain.c)
 */

void __fastcall PspLockJobsAndProcessExclusive(unsigned int *a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // si
  unsigned int i; // ebx
  __int64 v7; // rcx

  v5 = a4 & 1;
  --*(_WORD *)(a3 + 486);
  if ( a2 )
    ExAcquirePushLockExclusiveEx(a2 + 728, 0LL);
  for ( i = 0; i < *a1; ++i )
  {
    v7 = *(_QWORD *)&a1[4 * i + 2];
    if ( LOBYTE(a1[4 * i + 4]) )
      PspLockJobChain(v7, 0LL, v5);
    else
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 56), 1u);
  }
}
