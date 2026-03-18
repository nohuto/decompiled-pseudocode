/*
 * XREFs of MmGetSessionObjectById @ 0x14008A93C
 * Callers:
 *     SepSetTokenSessionById @ 0x14048C960 (SepSetTokenSessionById.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     SeSetSessionIdToken @ 0x140563A28 (SeSetSessionIdToken.c)
 *     NtSetInformationObject @ 0x140566540 (NtSetInformationObject.c)
 *     IoGetContainerInformation @ 0x1405ED6D0 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x1405ED930 (IoRegisterContainerNotification.c)
 *     SeExchangePrimaryToken @ 0x14072E0A8 (SeExchangePrimaryToken.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

__int64 __fastcall MmGetSessionObjectById(int a1)
{
  __int64 v1; // rdi
  __int64 SessionById; // rax
  void *v3; // rsi
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  SessionById = MmGetSessionById(a1);
  v3 = (void *)SessionById;
  if ( SessionById )
  {
    v4 = *(_QWORD *)(SessionById + 1024);
    v1 = *(_QWORD *)(v4 + 72);
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    if ( (*(_DWORD *)(v4 + 4) & 2) != 0 )
    {
      v1 = 0LL;
    }
    else
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo(v1 - 48);
      ObpIncrPointerCount(v1 - 48);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ObfDereferenceObject(v3);
  }
  return v1;
}
