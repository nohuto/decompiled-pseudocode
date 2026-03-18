/*
 * XREFs of PspGetMemoryPartitionFromJobList @ 0x1407178B8
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14053AF58 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 */

__int64 __fastcall PspGetMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // ebx
  unsigned __int64 i; // rsi
  __int64 v9; // r14
  PVOID v10; // rax

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = 0;
  for ( i = 0LL; i < a2; ++i )
  {
    v9 = *(_QWORD *)(a1 + 8 * i);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
    v10 = *(PVOID *)(v9 + 1544);
    if ( v10 == (PVOID)-1LL )
    {
      v7 = -1073740682;
    }
    else if ( *a3 )
    {
      if ( v10 && v10 != *a3 )
        v7 = -1073741637;
    }
    else if ( v10 )
    {
      ObfReferenceObject(*(PVOID *)(v9 + 1544));
      *a3 = *(PVOID *)(v9 + 1544);
    }
    ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    if ( v7 < 0 )
      break;
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    v7 = -1073741749;
  if ( v7 < 0 && *a3 )
  {
    ObfDereferenceObject(*a3);
    *a3 = 0LL;
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v7;
}
