/*
 * XREFs of VerifierIoAllocateWorkItem @ 0x140767BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierIoAllocateWorkItem(__int64 a1)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return ((__int64 (__fastcall *)(__int64, void *, __int64 (__fastcall *)(__int64, __int64)))pXdvIoAllocateWorkItem)(
           a1,
           retaddr,
           IovAllocateWorkItem);
}
