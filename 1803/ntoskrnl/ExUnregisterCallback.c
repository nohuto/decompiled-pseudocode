/*
 * XREFs of ExUnregisterCallback @ 0x14016DE80
 * Callers:
 *     IopCleanupNotifications @ 0x140160260 (IopCleanupNotifications.c)
 *     KeRegisterProcessorChangeCallback @ 0x14064C530 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x140651FD0 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x14071D2B0 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x140742190 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x14078C390 (SeUnregisterImageVerificationCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408C70DC (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x1408CA3D0 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
