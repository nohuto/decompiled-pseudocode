/*
 * XREFs of SmRereferenceProcessObject @ 0x140004810
 * Callers:
 *     SmProcessStoreMemoryPriorityRequest @ 0x14048C768 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall SmRereferenceProcessObject(void *a1, __int64 a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 0x2000u, (POBJECT_TYPE)PsProcessType, a3, &Object, 0LL);
  *a4 = Object;
  return result;
}
