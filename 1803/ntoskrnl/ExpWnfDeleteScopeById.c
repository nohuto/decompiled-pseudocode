/*
 * XREFs of ExpWnfDeleteScopeById @ 0x140511974
 * Callers:
 *     ExWnfExitProcess @ 0x14051130C (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExpWnfFindScopeInstance @ 0x1404F79CC (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x14056705C (ExpWnfFreeScopeInstance.c)
 */

char __fastcall ExpWnfDeleteScopeById(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *ScopeInstance; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rdi
  _QWORD *v17; // rcx
  __int64 *v18; // rax

  v4 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = CurrentServerSiloGlobals[113];
  if ( v7 )
  {
    v8 = v7 + 24 * v4;
    v9 = (unsigned __int64 *)(v7 + 8 * (3 * v4 + 3));
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance((_QWORD **)(v8 + 32), a2, a3);
    v16 = ScopeInstance;
    if ( ScopeInstance )
    {
      v17 = ScopeInstance + 4;
      v13 = ScopeInstance[4];
      v18 = (__int64 *)ScopeInstance[5];
      if ( *(_QWORD **)(v13 + 8) != v17 || (_QWORD *)*v18 != v17 )
        __fastfail(3u);
      *v18 = v13;
      *(_QWORD *)(v13 + 8) = v18;
      *v17 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9, v13, v14, v15);
    LOBYTE(CurrentServerSiloGlobals) = KeAbPostRelease((ULONG_PTR)v9);
    if ( v16 )
      LOBYTE(CurrentServerSiloGlobals) = ExpWnfFreeScopeInstance(v16);
  }
  return (char)CurrentServerSiloGlobals;
}
