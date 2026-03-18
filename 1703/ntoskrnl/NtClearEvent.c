/*
 * XREFs of NtClearEvent @ 0x140430D10
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtClearEvent(HANDLE EventHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  result = ObReferenceObjectByHandle(
             EventHandle,
             2u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v2 = result;
  if ( result >= 0 )
  {
    KeResetEvent((PRKEVENT)Object);
    ObfDereferenceObject(Object);
    return v2;
  }
  return result;
}
