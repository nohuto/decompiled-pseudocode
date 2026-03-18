/*
 * XREFs of PspGetMemoryPartitionFromJobList @ 0x1406E15D4
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x140545308 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PspGetMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v7; // ebx
  unsigned __int64 i; // rdi
  __int64 v9; // rbp
  void *v10; // rcx
  PVOID v11; // rax

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = 0;
  for ( i = 0LL; i < a2; ++i )
  {
    v9 = *(_QWORD *)(a1 + 8 * i);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
    if ( *a3 )
    {
      v11 = *(PVOID *)(v9 + 1536);
      if ( v11 && v11 != *a3 )
        v7 = -1073741637;
    }
    else
    {
      v10 = *(void **)(v9 + 1536);
      if ( v10 )
      {
        ObfReferenceObjectWithTag(v10, 0x624A7350u);
        *a3 = *(PVOID *)(v9 + 1536);
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    if ( v7 < 0 )
      break;
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    v7 = -1073741749;
  if ( v7 < 0 && *a3 )
    ObfDereferenceObjectWithTag(*a3, 0x624A7350u);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v7;
}
