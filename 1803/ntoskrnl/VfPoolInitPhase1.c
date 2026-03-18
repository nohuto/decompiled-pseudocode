/*
 * XREFs of VfPoolInitPhase1 @ 0x1408249D8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1408143C8 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1408C5854 (VerifierInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 *VfPoolInitPhase1()
{
  __int64 *result; // rax
  __int64 *v1; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  result = (__int64 *)(unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    v1 = (__int64 *)&unk_1403E59D8;
    do
    {
      KeInitializeEvent((PRKEVENT)v1 - 1, SynchronizationEvent, 0);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ViPoolDelayFreeTrimThreadRoutine, v1 - 5) >= 0 )
      {
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *v1 = (__int64)Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(v1 - 5));
        _InterlockedExchange((volatile __int32 *)v1 + 2, 1);
      }
      v1 += 8;
      result = &EtwpSplitIoNotifyRoutines;
    }
    while ( (__int64)v1 < (__int64)&EtwpSplitIoNotifyRoutines );
  }
  return result;
}
