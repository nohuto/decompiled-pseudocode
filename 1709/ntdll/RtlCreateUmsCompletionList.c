/*
 * XREFs of RtlCreateUmsCompletionList @ 0x1800F3060
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ZwCreateEvent @ 0x1800A09C0 (ZwCreateEvent.c)
 */

NTSTATUS __fastcall RtlCreateUmsCompletionList(_QWORD *a1)
{
  PVOID Heap; // rax
  _QWORD *v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS v5; // [rsp+30h] [rbp-48h]
  PVOID BaseAddress; // [rsp+38h] [rbp-40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  v3 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateEvent((PHANDLE)Heap + 1, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    v5 = result;
    if ( result < 0 )
      goto LABEL_6;
    *v3 = v3 + 3;
    v3[3] = 0LL;
    *a1 = v3;
    result = 0;
  }
  else
  {
    result = -1073741801;
  }
  v5 = result;
LABEL_6:
  if ( result < 0 )
  {
    if ( v3 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return v5;
    }
  }
  return result;
}
