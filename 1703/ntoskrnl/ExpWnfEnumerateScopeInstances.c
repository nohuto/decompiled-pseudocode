/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x140438FF8
 * Callers:
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rdi
  _QWORD *ServerSiloGlobals; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  signed __int64 *v8; // rbx
  struct _EX_RUNDOWN_REF **v9; // r14
  PRTL_BALANCED_NODE v10; // rbp
  struct _EX_RUNDOWN_REF *Count; // rax
  __int64 HostSilo; // rax

  v2 = a1;
  v4 = 0LL;
  if ( a1 == 4 )
  {
    HostSilo = PsGetHostSilo();
    ServerSiloGlobals = PsGetServerSiloGlobals(HostSilo);
  }
  else
  {
    ServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  v6 = ServerSiloGlobals[113];
  if ( !v6 )
    return 0LL;
  v7 = 3 * v2 + 4;
  v8 = (signed __int64 *)(v6 + 8 * (3 * v2 + 3));
  v9 = (struct _EX_RUNDOWN_REF **)(v6 + 8 * v7);
  v10 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, v10, (ULONG_PTR)v8);
  if ( v10 )
    BYTE2(v10[1].Left) |= 1u;
  if ( a2 )
    Count = (struct _EX_RUNDOWN_REF *)a2[4].Count;
  else
    Count = 0LL;
  if ( !Count )
    Count = *v9;
  while ( Count != (struct _EX_RUNDOWN_REF *)v9 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)v4[4].Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  if ( a2 )
    ExReleaseRundownProtection(a2 + 1);
  return v4;
}
