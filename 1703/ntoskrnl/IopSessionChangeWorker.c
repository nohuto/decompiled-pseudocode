/*
 * XREFs of IopSessionChangeWorker @ 0x14014AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x14006EED0 (ExNotifyWithProcessing.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmSetSessionObjectIoEvent @ 0x1405856BC (MmSetSessionObjectIoEvent.c)
 */

void __fastcall IopSessionChangeWorker(__int64 a1)
{
  void *v2; // rcx

  ExNotifyWithProcessing((__int64)IopSessionCallbackObject, a1, 0LL, 0LL);
  MmSetSessionObjectIoEvent(*(_QWORD *)(a1 + 56));
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x746C6644u);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
