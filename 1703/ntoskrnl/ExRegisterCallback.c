/*
 * XREFs of ExRegisterCallback @ 0x140148580
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405CBD10 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x1405D2C50 (IoRegisterContainerNotification.c)
 *     IoRegisterBootDriverCallback @ 0x1405D5660 (IoRegisterBootDriverCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x1405D5DC0 (SeRegisterImageVerificationCallback.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140823D88 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  struct _CALLBACK_OBJECT *PoolWithTag; // rax
  struct _CALLBACK_OBJECT *v7; // rbx
  char v8; // si
  KIRQL v9; // r14
  PCALLBACK_OBJECT *v10; // rdx

  ObfReferenceObjectWithTag(CallbackObject, 0x746C6644u);
  PoolWithTag = (struct _CALLBACK_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65524243u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 10) = 0;
    *((_QWORD *)PoolWithTag + 4) = CallbackContext;
    v8 = 0;
    *((_QWORD *)PoolWithTag + 2) = CallbackObject;
    *((_QWORD *)PoolWithTag + 3) = CallbackFunction;
    *((_BYTE *)PoolWithTag + 44) = 0;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
    if ( *((_BYTE *)CallbackObject + 32)
      || *((PCALLBACK_OBJECT *)CallbackObject + 2) == (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
    {
      v8 = 1;
      v10 = (PCALLBACK_OBJECT *)*((_QWORD *)CallbackObject + 3);
      if ( *v10 != (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
        __fastfail(3u);
      *(_QWORD *)v7 = (char *)CallbackObject + 16;
      *((_QWORD *)v7 + 1) = v10;
      *v10 = v7;
      *((_QWORD *)CallbackObject + 3) = v7;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)CallbackObject + 1);
    __writecr8(v9);
    if ( !v8 )
    {
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
      return 0LL;
    }
    return v7;
  }
  else
  {
    ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
    return 0LL;
  }
}
