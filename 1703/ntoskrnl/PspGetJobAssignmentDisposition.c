/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x14054C3BC
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14054B2E0 (PsAssignProcessToJobObject.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PspIsProcessInJob @ 0x14054CC94 (PspIsProcessInJob.c)
 */

__int64 __fastcall PspGetJobAssignmentDisposition(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rax

  v4 = 0;
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 760);
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 760)) )
    {
      if ( (*(_DWORD *)(a2 + 772) & 8) != 0 )
      {
        v4 = -1073741558;
      }
      else if ( *(_QWORD *)(a2 + 944) )
      {
        if ( (unsigned int)PspIsProcessInJob(a2, a1, v9, v10) == 292 )
        {
          *a4 = 2;
        }
        else
        {
          v12 = a1;
          if ( a1 )
          {
            while ( v12 != *(_QWORD *)(a2 + 944) )
            {
              v12 = *(_QWORD *)(v12 + 1072);
              if ( !v12 )
                goto LABEL_11;
            }
            *a4 = 3;
          }
          else
          {
LABEL_11:
            if ( (*(_DWORD *)(a1 + 1308) & 1) != 0 || *(_QWORD *)(a1 + 1072) || *(_DWORD *)(a1 + 212) )
              v4 = -1073741637;
            else
              *a4 = 4;
          }
        }
      }
      else
      {
        *a4 = 1;
      }
      ExReleaseRundownProtection(v8);
      return v4;
    }
    else
    {
      return 3221225738LL;
    }
  }
  else if ( (*(_DWORD *)(a1 + 1308) & 1) != 0 || *(_QWORD *)(a1 + 1072) || *(_DWORD *)(a1 + 212) )
  {
    return 3221225659LL;
  }
  else
  {
    *a4 = (a3 != 0) + 5;
    return 0LL;
  }
}
