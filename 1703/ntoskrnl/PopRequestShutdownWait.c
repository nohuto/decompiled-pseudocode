/*
 * XREFs of PopRequestShutdownWait @ 0x1405C5F14
 * Callers:
 *     PoRequestShutdownEvent @ 0x1405C5ED0 (PoRequestShutdownEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopRequestShutdownWait(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4C536F50u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = Object;
  ObfReferenceObject(Object);
  ExAcquireFastMutex(&PopShutdownListMutex);
  if ( PopShutdownListAvailable )
  {
    *v4 = PopShutdownThreadList;
    PopShutdownThreadList = v4;
  }
  else
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v4, 0);
    v3 = -1073741823;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v3;
}
