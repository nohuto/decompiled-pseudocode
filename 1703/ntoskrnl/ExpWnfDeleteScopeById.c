/*
 * XREFs of ExpWnfDeleteScopeById @ 0x1404997D0
 * Callers:
 *     ExWnfExitProcess @ 0x140498BC4 (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExpWnfFreeScopeInstance @ 0x140438760 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1404EE260 (ExpWnfFindScopeInstance.c)
 */

void __fastcall ExpWnfDeleteScopeById(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned __int64 *v8; // rbx
  PRTL_BALANCED_NODE v9; // rax
  PRTL_BALANCED_NODE v10; // rdi
  __int64 ScopeInstance; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax

  v4 = a1;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( v6 )
  {
    v7 = v6 + 24 * v4;
    v8 = (unsigned __int64 *)(v6 + 8 * (3 * v4 + 3));
    v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance(v7 + 32, a2, a3);
    v12 = (struct _EX_RUNDOWN_REF *)ScopeInstance;
    if ( ScopeInstance )
    {
      v13 = (_QWORD *)(ScopeInstance + 32);
      v14 = *(_QWORD *)(ScopeInstance + 32);
      v15 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v14 + 8) != v13 || (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    if ( v12 )
      ExpWnfFreeScopeInstance(v12, 1);
  }
}
