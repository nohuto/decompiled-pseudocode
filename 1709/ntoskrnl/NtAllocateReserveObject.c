/*
 * XREFs of NtAllocateReserveObject @ 0x14058A580
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v7; // rdx
  NTSTATUS result; // eax
  _DWORD *v9; // rbx
  NTSTATUS inserted; // edx
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = Type;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MemoryReserveHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)MemoryReserveHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  if ( (unsigned int)v3 > 1 )
    return -1073741811;
  result = ObCreateObjectEx(
             PreviousMode,
             *(&PspMemoryReserveObjectTypes + v3),
             (__int64)ObjectAttributes,
             PreviousMode,
             v11,
             PspMemoryReserveObjectSizes[v3],
             0,
             0,
             &Object,
             0LL);
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
    inserted = ObInsertObjectEx(v9, 0LL, 0xF0003u, 0, 0, 0LL, (unsigned __int64 *)&v12);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *MemoryReserveHandle = (HANDLE)v12;
    return inserted;
  }
  return result;
}
