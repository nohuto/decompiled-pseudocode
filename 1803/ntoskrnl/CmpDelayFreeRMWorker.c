/*
 * XREFs of CmpDelayFreeRMWorker @ 0x140581E50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 */

void CmpDelayFreeRMWorker()
{
  PERESOURCE *v0; // rbx
  __int64 v1; // rax

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  while ( 1 )
  {
    v0 = (PERESOURCE *)CmpDelayFreeRMListHead;
    if ( CmpDelayFreeRMListHead == &CmpDelayFreeRMListHead )
      break;
    if ( *((PVOID **)CmpDelayFreeRMListHead + 1) != &CmpDelayFreeRMListHead
      || (v1 = *(_QWORD *)CmpDelayFreeRMListHead,
          *(PVOID *)(*(_QWORD *)CmpDelayFreeRMListHead + 8LL) != CmpDelayFreeRMListHead) )
    {
      __fastfail(3u);
    }
    CmpDelayFreeRMListHead = *(PVOID *)CmpDelayFreeRMListHead;
    *(_QWORD *)(v1 + 8) = &CmpDelayFreeRMListHead;
    KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
    CmpLockRegistryExclusive();
    ExDeleteResourceLite(v0[16]);
    ExFreePoolWithTag(v0[16], 0);
    ExFreePoolWithTag(v0, 0x6D524D43u);
    CmpUnlockRegistry();
    ExAcquireFastMutex(&CmpDelayFreeRMLock);
  }
  CmpDelayFreeRMWorkItemActive = 0;
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
