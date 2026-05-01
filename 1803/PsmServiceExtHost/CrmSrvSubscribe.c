/*
 * XREFs of CrmSrvSubscribe @ 0x180069FB0
 * Callers:
 *     CrmRpcSrvSubscribe @ 0x18006E280 (CrmRpcSrvSubscribe.c)
 * Callees:
 *     CrmSubscriberStart @ 0x180039328 (CrmSubscriberStart.c)
 *     CrmSubscriberInitialize @ 0x180039AC4 (CrmSubscriberInitialize.c)
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 */

__int64 __fastcall CrmSrvSubscribe(struct _WNF_STATE_NAME **a1, unsigned int a2, _QWORD *a3, void *a4)
{
  struct _WNF_STATE_NAME *Heap; // rax
  struct _WNF_STATE_NAME *v9; // rbx
  int v10; // edi

  Heap = (struct _WNF_STATE_NAME *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x50uLL);
  v9 = Heap;
  if ( Heap )
  {
    CrmSubscriberInitialize(Heap);
    v10 = CrmSubscriberStart(v9, a2, a4);
    if ( v10 >= 0 )
    {
      *a3 = v9[9];
      *a1 = v9;
      v9 = 0LL;
      v10 = 0;
    }
    if ( v9 )
    {
      CrmSubscriberCleanup(v9, 1LL);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
