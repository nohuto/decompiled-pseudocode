/*
 * XREFs of PiDqQueryActionQueueEntryCreate @ 0x140580A98
 * Callers:
 *     PiDqQueryEnumObject @ 0x140529564 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryActionQueueEntryCreate(int a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x58706E50u);
  *(_QWORD *)a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[8] = a1;
    *((_QWORD *)PoolWithTag + 2) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
    *(_QWORD *)(*(_QWORD *)a4 + 24LL) = a3;
    if ( a3 )
      _InterlockedIncrement(a3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
