/*
 * XREFs of ExUnregisterCallback @ 0x14014AE00
 * Callers:
 *     IopCleanupNotifications @ 0x140164310 (IopCleanupNotifications.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405CBD10 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x1405D2C50 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x14068C660 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x1406AD020 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x1406F0520 (SeUnregisterImageVerificationCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140823D88 (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x140826C40 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rdx
  PVOID *v5; // rax

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
  v5 = (PVOID *)*((_QWORD *)CallbackRegistration + 1);
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration || *v5 != CallbackRegistration )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  KxReleaseSpinLock(v1 + 1);
  __writecr8(v3);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
}
