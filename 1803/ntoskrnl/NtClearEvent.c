/*
 * XREFs of NtClearEvent @ 0x140555500
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
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
