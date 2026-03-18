/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x1407CA63C
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1407792DC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExpWnfFreeScopeInstance @ 0x14056705C (ExpWnfFreeScopeInstance.c)
 */

char __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  struct _EX_RUNDOWN_REF *v11; // rax
  struct _EX_RUNDOWN_REF v12; // rcx

  v4 = (unsigned __int64 *)(a1 + 24 + 24LL * a2);
  v5 = a1 + 32 + 24LL * a2;
  v6 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v10 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *(struct _EX_RUNDOWN_REF **)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5
    || (v12.Count = v11->Count, *(struct _EX_RUNDOWN_REF **)(v11->Count + 8) != v11) )
  {
    __fastfail(3u);
  }
  while ( 1 )
  {
    *(struct _EX_RUNDOWN_REF *)v5 = v12;
    *(_QWORD *)(v12.Count + 8) = v5;
    if ( v11 == (struct _EX_RUNDOWN_REF *)v5 )
      break;
    v11->Count = 0LL;
    if ( !a2 )
      *(_QWORD *)(a1 + 8) = 0LL;
    ExpWnfFreeScopeInstance(v11 - 4, 1);
    v11 = *(struct _EX_RUNDOWN_REF **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      v12.Count = v11->Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v11->Count + 8) == v11 )
        continue;
    }
    __fastfail(3u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4, v7, v8, v9);
  return KeAbPostRelease((ULONG_PTR)v4);
}
