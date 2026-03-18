/*
 * XREFs of VfPoolInitPhase1 @ 0x14077594C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140812904 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 */

unsigned int *VfPoolInitPhase1()
{
  unsigned int *v0; // rbx
  HANDLE v1; // rcx
  unsigned int *result; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v0 = (unsigned int *)&unk_1403864E8;
  do
  {
    KeInitializeEvent((PRKEVENT)v0 - 1, SynchronizationEvent, 0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ViPoolDelayFreeTrimThreadRoutine, v0 - 10) >= 0 )
    {
      ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      v1 = ThreadHandle;
      *(_QWORD *)v0 = Object;
      ZwClose(v1);
      InitializeSListHead((PSLIST_HEADER)(v0 - 10));
      _InterlockedExchange((volatile __int32 *)v0 + 2, 1);
    }
    v0 += 16;
    result = &ViAvlNodeLookaside.L.Tag;
  }
  while ( (__int64)v0 < (__int64)&ViAvlNodeLookaside.L.Tag );
  return result;
}
