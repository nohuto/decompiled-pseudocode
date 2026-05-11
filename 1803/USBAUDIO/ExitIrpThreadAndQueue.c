/*
 * XREFs of ExitIrpThreadAndQueue @ 0x1C0002668
 * Callers:
 *     DeviceStop @ 0x1C0017730 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C00178D0 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x1C001EFAC (CleanupPendingIrpQ.c)
 */

LONG_PTR __fastcall ExitIrpThreadAndQueue(__int64 a1)
{
  LONG_PTR result; // rax

  result = CleanupPendingIrpQ();
  if ( *(_QWORD *)(a1 + 680) )
  {
    *(_BYTE *)(a1 + 688) = 1;
    KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 648), 0, 1, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 680), Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(*(PVOID *)(a1 + 680));
    *(_QWORD *)(a1 + 680) = 0LL;
  }
  return result;
}
