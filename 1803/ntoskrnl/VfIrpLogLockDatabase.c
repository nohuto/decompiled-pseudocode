/*
 * XREFs of VfIrpLogLockDatabase @ 0x14082E32C
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x1408156B8 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall VfIrpLogLockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rdx
  unsigned int v4; // ebx
  KIRQL v5; // di

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = 3 * v1;
  v4 = 0;
  v5 = v2;
  if ( *(_DWORD *)(ViIrpLogDatabase + 8 * v3) )
    v4 = -1073741267;
  else
    *(_DWORD *)(ViIrpLogDatabase + 8 * v3) = 1;
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  __writecr8(v5);
  return v4;
}
