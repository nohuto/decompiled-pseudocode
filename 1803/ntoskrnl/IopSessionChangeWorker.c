/*
 * XREFs of IopSessionChangeWorker @ 0x14016DD10
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x140072E18 (ExNotifyWithProcessing.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MmSetSessionObjectIoEvent @ 0x14061364C (MmSetSessionObjectIoEvent.c)
 */

void __fastcall IopSessionChangeWorker(__int64 P)
{
  void *v2; // rcx

  ExNotifyWithProcessing((__int64)IopSessionCallbackObject, P, 0LL, 0LL);
  MmSetSessionObjectIoEvent(*(_QWORD *)(P + 56));
  ObfDereferenceObjectWithTag(*(PVOID *)(P + 56), 0x746C6644u);
  v2 = *(void **)(P + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag((PVOID)P, 0);
}
