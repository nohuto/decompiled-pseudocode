/*
 * XREFs of PspGetJobAssignmentDisposition @ 0x14050BE50
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14050BD70 (PsAssignProcessToJobObject.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     PspIsProcessInJob @ 0x14050BB68 (PspIsProcessInJob.c)
 *     PsIsJobParentImmutable @ 0x14050BB94 (PsIsJobParentImmutable.c)
 *     PspIsJobMovable @ 0x1407179F4 (PspIsJobMovable.c)
 */

__int64 __fastcall PspGetJobAssignmentDisposition(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _EX_RUNDOWN_REF *v8; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9

  v4 = 0;
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 760);
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760)) )
    {
      if ( (*(_DWORD *)(a2 + 772) & 8) != 0 )
      {
        v4 = -1073741558;
      }
      else if ( *(_QWORD *)(a2 + 944) )
      {
        if ( (unsigned int)PspIsProcessInJob(a2, a1) == 292 )
        {
          *a4 = 2;
        }
        else
        {
          v10 = a1;
          if ( a1 )
          {
            while ( v10 != *(_QWORD *)(a2 + 944) )
            {
              v10 = *(_QWORD *)(v10 + 1072);
              if ( !v10 )
                goto LABEL_11;
            }
            *a4 = 3;
          }
          else
          {
LABEL_11:
            if ( PsIsJobParentImmutable(a1) || *(_DWORD *)(a1 + 212) )
            {
              if ( (unsigned __int8)PspIsJobMovable() )
                *a4 = 5;
              else
                v4 = -1073741637;
            }
            else
            {
              *a4 = 4;
            }
          }
        }
      }
      else
      {
        *a4 = 1;
      }
      ExReleaseRundownProtection_0(v8);
      return v4;
    }
    else
    {
      return 3221225738LL;
    }
  }
  else if ( PsIsJobParentImmutable(a1) || *(_DWORD *)(v11 + 212) || *(_QWORD *)(v11 + 1544) == -1LL )
  {
    return 3221225659LL;
  }
  else
  {
    *v13 = (v12 != 0) + 6;
    return 0LL;
  }
}
