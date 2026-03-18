/*
 * XREFs of PfpServiceMainThreadBoostPrep @ 0x1406F3658
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x140429040 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 */

__int64 __fastcall PfpServiceMainThreadBoostPrep(__int64 a1, PETHREAD *a2)
{
  void *v3; // rcx
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PETHREAD v7; // rdi
  struct _KTHREAD *PoolWithTag; // rax
  PETHREAD Thread; // [rsp+30h] [rbp+8h] BYREF

  Thread = 0LL;
  v3 = *(void **)(a1 + 72);
  if ( v3 )
  {
    v6 = PsLookupThreadByThreadId(v3, &Thread);
    v7 = Thread;
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( *(_QWORD *)&Thread[1].Header.Lock == *(_QWORD *)(a1 + 80) )
      {
        PoolWithTag = (struct _KTHREAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
        if ( PoolWithTag )
        {
          *a2 = v7;
          v5 = 0;
          a2[1] = PoolWithTag;
          return v5;
        }
        v5 = -1073741670;
      }
      else
      {
        v5 = -1073741735;
      }
    }
    if ( v7 )
      ObDereferenceObjectDeferDelete(v7);
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v5;
}
