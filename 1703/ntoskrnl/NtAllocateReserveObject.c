/*
 * XREFs of NtAllocateReserveObject @ 0x14044DE0C
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // r8
  PVOID *p_Object; // rcx
  NTSTATUS result; // eax
  _DWORD *v9; // rbx
  NTSTATUS inserted; // edx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = Type;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MemoryReserveHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)MemoryReserveHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( (unsigned int)v3 > 1 )
    return -1073741811;
  p_Object = &Object;
  LOBYTE(p_Object) = PreviousMode;
  result = ObCreateObjectEx(
             (_DWORD)p_Object,
             (unsigned int)*(&PspMemoryReserveObjectTypes + v3),
             (_DWORD)ObjectAttributes,
             PreviousMode);
  if ( result >= 0 )
  {
    v9 = Object;
    memset(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v9[6] = 4;
      *((_QWORD *)v9 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v9 + 9) = v9;
      *((_BYTE *)v9 + 80) = 0;
    }
    inserted = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)&v11);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *MemoryReserveHandle = (HANDLE)v11;
    return inserted;
  }
  return result;
}
