/*
 * XREFs of PopHaltDeviceIdle @ 0x14013ABF8
 * Callers:
 *     PoInitializeBroadcast @ 0x140578768 (PoInitializeBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS PopHaltDeviceIdle()
{
  __int16 *v0; // rbx
  KIRQL v1; // di
  NTSTATUS result; // eax
  __int16 v3; // [rsp+30h] [rbp-28h] BYREF
  char v4; // [rsp+32h] [rbp-26h]
  int v5; // [rsp+34h] [rbp-24h]
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  v0 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_14036E2A4 = 1;
  if ( dword_14036E2A0 )
  {
    v5 = 0;
    v6[1] = v6;
    v0 = &v3;
    v3 = 1;
    v6[0] = v6;
    PopDeviceIdleSync = (PRKEVENT)&v3;
    v4 = 6;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  result = v1;
  __writecr8(v1);
  if ( v0 )
    return KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
  return result;
}
