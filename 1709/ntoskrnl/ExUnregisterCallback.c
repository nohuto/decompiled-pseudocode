/*
 * XREFs of ExUnregisterCallback @ 0x140131CC0
 * Callers:
 *     IopCleanupNotifications @ 0x1400159F4 (IopCleanupNotifications.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405DF540 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x1405ED930 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x1406B8590 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x1406D8310 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x140727F80 (SeUnregisterImageVerificationCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408551FC (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x140858470 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rax
  PVOID *v5; // rdx

  v1 = (KSPIN_LOCK *)*((_QWORD *)CallbackRegistration + 2);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&ExpCallbackEvent);
    KxReleaseSpinLock(v1 + 1);
    __writecr8(v3);
    KeWaitForSingleObject(&ExpCallbackEvent, Executive, 0, 0, 0LL);
  }
  v4 = *(_QWORD **)CallbackRegistration;
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration
    || (v5 = (PVOID *)*((_QWORD *)CallbackRegistration + 1), *v5 != CallbackRegistration) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  KxReleaseSpinLock(v1 + 1);
  __writecr8(v3);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
}
