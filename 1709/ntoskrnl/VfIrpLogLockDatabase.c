/*
 * XREFs of VfIrpLogLockDatabase @ 0x1407C0DFC
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x1407A8690 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall VfIrpLogLockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  int v3; // edx
  unsigned int v4; // ebx

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = *(_DWORD *)(ViIrpLogDatabase + 24 * v1);
  if ( !v3 )
    *(_DWORD *)(ViIrpLogDatabase + 24 * v1) = 1;
  v4 = v3 != 0 ? 0xC000022D : 0;
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  __writecr8(v2);
  return v4;
}
