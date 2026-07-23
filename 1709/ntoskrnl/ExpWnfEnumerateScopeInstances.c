/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x14044DD2C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
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
    ExfAcquirePushLockSharedEx(v8, (__int64)v10, (ULONG_PTR)v8);
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
    if ( ExAcquireRundownProtection_0(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)v4[4].Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 1);
  return v4;
}
