/*
 * XREFs of PopDeviceIdleCompletion @ 0x14022A560
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

__int64 PopDeviceIdleCompletion()
{
  KIRQL v0; // al
  bool v1; // zf
  KIRQL v2; // bl
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v1 = dword_14036E2A0-- == 1;
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
