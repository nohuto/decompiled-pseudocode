/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C011FF64
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00FE58C (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C00FE60C (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 *     UmfdSessionUninitialize @ 0x1C0123710 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C011FFA0 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C011FFEC (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(void **pv)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *pv;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = pv[1];
  if ( v3 )
    CEventPool::Destroy(v3);
  EngFreeMem(pv);
}
