/*
 * XREFs of PopDisksRegisteredForIdle @ 0x1400D09EC
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  KIRQL v1; // di
  __int64 i; // rax

  if ( (PopSimulate & 2) != 0 )
    return 1;
  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  for ( i = PopIdleDetectList; (__int64 *)i != &PopIdleDetectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  __writecr8(v1);
  return v0;
}
