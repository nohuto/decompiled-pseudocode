/*
 * XREFs of PpDevNodeInsertIntoTree @ 0x14012281C
 * Callers:
 *     PipProcessEnumeratedChildDevice @ 0x1404E0008 (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PpDevNodeInsertIntoTree(__int64 a1, __int64 a2)
{
  KIRQL v4; // si
  int v5; // r8d
  _QWORD *v6; // rcx
  __int64 result; // rax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v5 = *(_DWORD *)(a1 + 136) + 1;
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 136) = v5;
  _InterlockedOr(v8, 0);
  v6 = *(_QWORD **)(a1 + 24);
  if ( v6 )
    *v6 = a2;
  else
    *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  KxReleaseSpinLock(&PnpSpinLock);
  result = v4;
  __writecr8(v4);
  return result;
}
