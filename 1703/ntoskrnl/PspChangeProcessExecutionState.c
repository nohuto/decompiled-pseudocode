/*
 * XREFs of PspChangeProcessExecutionState @ 0x140547580
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14011E790 (PspExecuteJobFreezeThawCallback.c)
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PsSwapProcessWorkingSet @ 0x1406DFE78 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x14007D3E4 (MmInSwapWorkingSet.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(_KPROCESS *BugCheckParameter1)
{
  unsigned int v1; // r14d
  char v3; // r15
  unsigned __int32 DirectoryTableBase; // eax
  void *v5; // rbp
  int v6; // ebx
  unsigned int v7; // edi
  unsigned __int32 v9; // ett
  char v10; // r12
  char v11; // di
  int v12; // r13d
  int SessionId; // eax
  ULONG_PTR SessionById; // rax
  unsigned __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  int v18; // eax
  _BYTE v19[48]; // [rsp+20h] [rbp-98h] BYREF
  $5BC46E0569261879018906DEC3127961 v20; // [rsp+50h] [rbp-68h] BYREF

  v1 = 0;
  v3 = 0;
  _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
  DirectoryTableBase = BugCheckParameter1[1].DirectoryTableBase;
  v5 = 0LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v6 = (DirectoryTableBase >> 28) & 3;
    v7 = (DirectoryTableBase >> 22) & 3;
    if ( v6 == v7 )
      break;
    v9 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v9 == DirectoryTableBase )
    {
LABEL_6:
      v10 = 0;
      v11 = v6 ^ v7;
      v12 = v6;
      if ( !v3 )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v20);
        SessionId = MmGetSessionIdEx(BugCheckParameter1);
        if ( SessionId != -1 )
        {
          SessionById = MmGetSessionById(SessionId);
          v5 = (void *)SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById) < 0 )
            {
              ObfDereferenceObject(v5);
              v5 = 0LL;
            }
          }
        }
        v3 = 1;
      }
      if ( (v11 & 2) != 0 )
      {
        if ( (v6 & 2) != 0 )
          v10 = 1;
        else
          MmInSwapWorkingSet(BugCheckParameter1);
      }
      if ( (v11 & 1) != 0 )
      {
        if ( (v6 & 1) != 0 )
          PsFreezeProcess((ULONG_PTR)BugCheckParameter1, 1);
        else
          PsThawProcess(BugCheckParameter1);
      }
      v7 = v6;
      if ( v10 )
      {
        v18 = MmOutSwapWorkingSet(BugCheckParameter1, PspOutSwapSharedPages != 0);
        if ( v18 < 0 )
        {
          if ( v18 == -1073741671 )
            v1 = -1073741671;
          v7 = v6 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
      v15 = BugCheckParameter1[1].DirectoryTableBase;
      do
      {
        v6 = (v15 >> 28) & 3;
        if ( v6 != v12 && v6 != v7 )
          goto LABEL_6;
        v17 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                v15 & 0x8F3FFFFF | ((v7 | (v7 << 6)) << 22),
                v15);
        v16 = v15 == v17;
        v15 = v17;
      }
      while ( !v16 );
      if ( v5 )
      {
        MmDetachSession((__int64)v5, (__int64)v19);
        ObfDereferenceObject(v5);
      }
      KiUnstackDetachProcess(&v20, 0LL);
      return v1;
    }
  }
  return v1;
}
