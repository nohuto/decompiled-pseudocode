/*
 * XREFs of IoRegisterDriverReinitialization @ 0x14064B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x140183068 (IopInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *PoolWithTag; // rax

  ObfReferenceObject(DriverObject);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69526F49u);
  if ( PoolWithTag )
  {
    DriverObject->Flags |= 8u;
    PoolWithTag[2] = DriverObject;
    PoolWithTag[3] = DriverReinitializationRoutine;
    PoolWithTag[4] = Context;
    IopInterlockedInsertTailList((__int64)&IopDriverReinitializeQueueHead, PoolWithTag);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}
