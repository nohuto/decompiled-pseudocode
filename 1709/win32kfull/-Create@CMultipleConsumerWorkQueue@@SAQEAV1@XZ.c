/*
 * XREFs of ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C00FE60C
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00FE58C (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Create@CWorkItemQueue@@SAPEAV1@XZ @ 0x1C00FE6A4 (-Create@CWorkItemQueue@@SAPEAV1@XZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C011FF64 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 */

struct CMultipleConsumerWorkQueue *CMultipleConsumerWorkQueue::Create(void)
{
  struct CMultipleConsumerWorkQueue *result; // rax
  struct CMultipleConsumerWorkQueue *v1; // rdi
  struct CMultipleConsumerWorkQueue *v2; // rbx
  struct CWorkItemQueue *v3; // rax
  union _SLIST_HEADER *v4; // rax
  union _SLIST_HEADER *v5; // rsi

  result = (struct CMultipleConsumerWorkQueue *)EngAllocMem(0, 0x10u, 0x676D6466u);
  v1 = result;
  if ( result )
  {
    v2 = result;
    v3 = CWorkItemQueue::Create();
    *(_QWORD *)v2 = v3;
    if ( v3
      && ((v4 = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u), (v5 = v4) == 0LL)
        ? (v5 = 0LL)
        : (union _SLIST_HEADER *)(InitializeSListHead(v4 + 1), LODWORD(v5->Alignment) = 0),
          (*((_QWORD *)v1 + 1) = v5) != 0LL) )
    {
      v2 = 0LL;
    }
    else
    {
      v1 = 0LL;
    }
    if ( v2 )
      CMultipleConsumerWorkQueue::Destroy(v2);
    return v1;
  }
  return result;
}
