/*
 * XREFs of EtwQueryProcessTelemetryCoverage @ 0x1407A69D0
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     EtwpCoverageUserIsAdmin @ 0x1407A7264 (EtwpCoverageUserIsAdmin.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryCoverage(_KPROCESS *a1, char *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // r12d
  char *v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 *v10; // r15
  __int64 *i; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 *j; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdi
  unsigned int v18; // [rsp+24h] [rbp-44h]

  v5 = a3;
  v6 = a2;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    if ( EtwpCoverageContext )
    {
      if ( (unsigned __int8)EtwpCoverageUserIsAdmin() )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
        EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
        v8 = EtwpCoverageContext;
        v9 = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 16LL);
        v10 = (__int64 *)(EtwpCoverageContext + 48);
        for ( i = *(__int64 **)(EtwpCoverageContext + 48); i != v10; i = (__int64 *)*i )
          v9 = *((_DWORD *)i + 6) - (_DWORD)i + v9 - 40;
        if ( a4 )
          *a4 = v9;
        a2 = *(char **)(v8 + 16);
        v12 = *((_DWORD *)a2 + 4);
        if ( v5 < v12 )
          v12 = v5;
        if ( v12 )
        {
          v13 = v12;
          memmove(v6, a2, v12);
          v6 += v13;
        }
        if ( v5 < v9 )
        {
          v18 = -2147483643;
        }
        else
        {
          for ( j = (__int64 *)*v10; j != v10; j = (__int64 *)*j )
          {
            v15 = *((_DWORD *)j + 6) - (_DWORD)j - 40;
            if ( *((_DWORD *)j + 6) - (_DWORD)j != 40 )
            {
              v16 = v15;
              memmove(v6, j + 5, v15);
              v6 += v16;
            }
          }
          v18 = 0;
        }
      }
      else
      {
        v18 = -1073741790;
      }
    }
    else
    {
      v18 = -1073741641;
    }
  }
  else
  {
    v18 = -1073741637;
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock, (__int64)a2, a3, (__int64)a4);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v18;
}
