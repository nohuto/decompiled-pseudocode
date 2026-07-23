/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x140762B58
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14071514C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExpWnfFreeScopeInstance @ 0x14059AAFC (ExpWnfFreeScopeInstance.c)
 */

char __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  PRTL_BALANCED_NODE v6; // rax
  PRTL_BALANCED_NODE v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF v9; // rcx

  v4 = (unsigned __int64 *)(a1 + 24 + 24LL * a2);
  v5 = a1 + 32 + 24LL * a2;
  v6 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v6, (__int16 *)v4);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = *(struct _EX_RUNDOWN_REF **)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5
    || (v9.Count = v8->Count, *(struct _EX_RUNDOWN_REF **)(v8->Count + 8) != v8) )
  {
    __fastfail(3u);
  }
  while ( 1 )
  {
    *(struct _EX_RUNDOWN_REF *)v5 = v9;
    *(_QWORD *)(v9.Count + 8) = v5;
    if ( v8 == (struct _EX_RUNDOWN_REF *)v5 )
      break;
    v8->Count = 0LL;
    if ( !a2 )
      *(_QWORD *)(a1 + 8) = 0LL;
    ExpWnfFreeScopeInstance(v8 - 4, 1);
    v8 = *(struct _EX_RUNDOWN_REF **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      v9.Count = v8->Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v8->Count + 8) == v8 )
        continue;
    }
    __fastfail(3u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  return KeAbPostRelease((ULONG_PTR)v4);
}
