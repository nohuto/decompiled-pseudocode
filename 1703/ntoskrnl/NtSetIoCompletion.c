/*
 * XREFs of NtSetIoCompletion @ 0x14043E664
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetIoCompletion(
        HANDLE IoCompletionPortHandle,
        PVOID CompletionKey,
        PVOID CompletionContext,
        NTSTATUS CompletionStatus,
        ULONG CompletionInformation)
{
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v8 = ObReferenceObjectByHandle(
         IoCompletionPortHandle,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v8 >= 0 )
  {
    v8 = IoSetIoCompletionEx2(
           (__int64)Object,
           (__int64)CompletionKey,
           (__int64)CompletionContext,
           CompletionStatus,
           *(__int64 *)&CompletionInformation,
           1u,
           0LL,
           0);
    ObfDereferenceObject(Object);
  }
  return v8;
}
