/*
 * XREFs of EtwpRealtimeDisconnectConsumerByHandle @ 0x1404515A4
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140451628 (EtwpRealtimeDisconnectConsumer.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumerByHandle(void *a1)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = ObReferenceObjectByHandle(
         a1,
         0x400u,
         EtwpRealTimeConnectionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    EtwpRealtimeDisconnectConsumer(Object);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v1;
}
