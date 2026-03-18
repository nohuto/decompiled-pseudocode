/*
 * XREFs of KeRegisterNmiCallback @ 0x1401FDA30
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1401EAE7C (HvlpInitializeHvCrashdump.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  PVOID result; // rax
  PVOID *v5; // rdi
  KIRQL v6; // al
  unsigned __int64 v7; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x494D4E4Bu);
  v5 = (PVOID *)result;
  if ( result )
  {
    *((_QWORD *)result + 1) = CallbackRoutine;
    *((_QWORD *)result + 2) = Context;
    *((_QWORD *)result + 3) = result;
    v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v5 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v5;
    v7 = v6;
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    __writecr8(v7);
    return v5[3];
  }
  return result;
}
