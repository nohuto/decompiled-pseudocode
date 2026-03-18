/*
 * XREFs of PopDeviceIdleCompletion @ 0x1402748E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

__int64 PopDeviceIdleCompletion()
{
  KIRQL v0; // al
  bool v1; // zf
  KIRQL v2; // bl
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v1 = dword_1403CDB68-- == 1;
  v2 = v0;
  if ( v1 && PopDeviceIdleSync )
  {
    KeSetEvent(PopDeviceIdleSync, 0, 0);
    PopDeviceIdleSync = 0LL;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  result = v2;
  __writecr8(v2);
  return result;
}
