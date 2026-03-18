/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1405678F8
 * Callers:
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rbp
  _QWORD *ServerSiloGlobals; // rax
  __int64 v6; // rdx
  unsigned __int64 *v7; // rdi
  struct _EX_RUNDOWN_REF **v8; // r14
  __int64 v9; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx
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
  v7 = (unsigned __int64 *)(v6 + 8 * (3 * v2 + 3));
  v8 = (struct _EX_RUNDOWN_REF **)(v6 + 8 * (3 * v2 + 4));
  v9 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a2 )
    Count = (struct _EX_RUNDOWN_REF *)a2[4].Count;
  else
    Count = 0LL;
  if ( !Count )
    Count = *v8;
  while ( Count != (struct _EX_RUNDOWN_REF *)v8 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( a2 )
    ExReleaseRundownProtection(a2 + 1);
  return v4;
}
