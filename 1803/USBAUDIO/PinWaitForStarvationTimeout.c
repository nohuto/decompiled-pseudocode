/*
 * XREFs of PinWaitForStarvationTimeout @ 0x1C0002220
 * Callers:
 *     PinWaitForStarvation @ 0x1C00022B8 (PinWaitForStarvation.c)
 *     USBType1StateChangePin @ 0x1C0004BC0 (USBType1StateChangePin.c)
 *     USBCaptureResetWorker @ 0x1C0005160 (USBCaptureResetWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinWaitForStarvationTimeout(__int64 a1, union _LARGE_INTEGER *a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  KIRQL v5; // al
  KIRQL v6; // bp

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 112));
  v6 = v5;
  if ( *(_DWORD *)(v2 + 56) )
  {
    KeResetEvent((PRKEVENT)(v2 + 120));
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 112), v6);
    return (unsigned int)KeWaitForSingleObject((PVOID)(v2 + 120), Executive, 0, 0, a2);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 112), v5);
  }
  return v4;
}
