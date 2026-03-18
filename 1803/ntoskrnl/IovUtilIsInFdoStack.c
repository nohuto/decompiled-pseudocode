/*
 * XREFs of IovUtilIsInFdoStack @ 0x1408228C4
 * Callers:
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140822870 (IovUtilIsDeviceObjectMarked.c)
 */

__int64 __fastcall IovUtilIsInFdoStack(__int64 a1)
{
  unsigned int v2; // edi
  KIRQL v3; // r8

  KeAcquireQueuedSpinLock(0xAuLL);
  v2 = 0;
  do
  {
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(a1, 1) )
      break;
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL);
  }
  while ( a1 );
  KeReleaseQueuedSpinLock(0xAuLL, v3);
  LOBYTE(v2) = a1 != 0;
  return v2;
}
