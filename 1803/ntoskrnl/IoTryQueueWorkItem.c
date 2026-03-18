/*
 * XREFs of IoTryQueueWorkItem @ 0x14014B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpTryQueueWorkItem @ 0x14008F7AC (ExpTryQueueWorkItem.c)
 *     IopQueueWorkItemProlog @ 0x14008FB9C (IopQueueWorkItemProlog.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v6; // rax
  char v7; // bl
  void *v9; // rcx

  v6 = IopQueueWorkItemProlog(a1, a2, a4);
  v7 = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v6, a3, 1);
  if ( !v7 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
    v9 = *(void **)(a1 + 56);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return v7;
}
