/*
 * XREFs of ExitIrpThreadAndQueue @ 0x1C000254C
 * Callers:
 *     DeviceStop @ 0x1C0013450 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0013570 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x1C001ABFC (CleanupPendingIrpQ.c)
 */

LONG_PTR __fastcall ExitIrpThreadAndQueue(__int64 a1)
{
  LONG_PTR result; // rax

  result = CleanupPendingIrpQ();
  if ( *(_QWORD *)(a1 + 672) )
  {
    *(_BYTE *)(a1 + 680) = 1;
    KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 640), 0, 1, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 672), Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(*(PVOID *)(a1 + 672));
    *(_QWORD *)(a1 + 672) = 0LL;
  }
  return result;
}
