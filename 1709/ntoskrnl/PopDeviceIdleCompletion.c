/*
 * XREFs of PopDeviceIdleCompletion @ 0x14023D460
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 PopDeviceIdleCompletion()
{
  KIRQL v0; // al
  bool v1; // zf
  KIRQL v2; // bl
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v1 = dword_1403A30D8-- == 1;
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
