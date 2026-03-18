/*
 * XREFs of NtFlushVirtualMemory @ 0x1404C6810
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID v11; // rcx
  ULONG_PTR v12; // rdx
  NTSTATUS result; // eax
  NTSTATUS v14; // [rsp+40h] [rbp-38h]
  ULONG_PTR v15; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int128 v18; // [rsp+60h] [rbp-18h] BYREF

  v18 = 0uLL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
      v9 = (__int64)BaseAddress;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)RegionSize < 0x7FFFFFFF0000LL )
      v10 = (__int64)RegionSize;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( (unsigned __int64)IoStatus < 0x7FFFFFFF0000LL )
      v8 = (__int64)IoStatus;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v11 = *BaseAddress;
    v16 = (unsigned __int64)*BaseAddress;
    v12 = *RegionSize;
    v15 = *RegionSize;
  }
  else
  {
    v11 = *BaseAddress;
    v16 = (unsigned __int64)*BaseAddress;
    v12 = *RegionSize;
    v15 = *RegionSize;
  }
  if ( (unsigned __int64)v11 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFEFFFFLL - (__int64)v11 < v12 )
    return -1073741584;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 1816554829, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v14 = MmFlushVirtualMemory(Object, &v16, &v15, &v18);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    *RegionSize = v15;
    *BaseAddress = (PVOID)(v16 & 0xFFFFFFFFFFFFF000uLL);
    *(_OWORD *)&IoStatus->Status = v18;
    return v14;
  }
  return result;
}
