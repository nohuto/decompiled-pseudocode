/*
 * XREFs of FsRtlCheckLockForOplockRequest @ 0x1400CBC90
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall FsRtlCheckLockForOplockRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rsi
  KSPIN_LOCK *v3; // rdi
  unsigned __int64 v4; // rbp
  KIRQL v5; // al
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx

  v2 = *(unsigned __int64 **)(a1 + 24);
  if ( !v2 || !v2[4] && !v2[5] || !*a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 88) )
    return 0;
  v3 = v2 + 3;
  v4 = *a2 - 1LL;
  v5 = KeAcquireSpinLockRaiseToDpc(v2 + 3);
  v6 = *v2;
  v7 = v5;
  KxReleaseSpinLock(v3);
  __writecr8(v7);
  return v4 < v6;
}
