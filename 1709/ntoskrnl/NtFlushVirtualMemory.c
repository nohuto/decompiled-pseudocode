/*
 * XREFs of NtFlushVirtualMemory @ 0x1404E6F84
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 */

NTSTATUS __stdcall NtFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  char PreviousMode; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  PVOID v12; // rcx
  ULONG_PTR v13; // rdx
  NTSTATUS result; // eax
  NTSTATUS v15; // [rsp+40h] [rbp-38h]
  ULONG_PTR v16; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int128 v19; // [rsp+60h] [rbp-18h] BYREF

  v19 = 0uLL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
      v10 = (__int64)BaseAddress;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)RegionSize < 0x7FFFFFFF0000LL )
      v11 = (__int64)RegionSize;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (unsigned __int64)IoStatus < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatus;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    v12 = *BaseAddress;
    v17 = (unsigned __int64)*BaseAddress;
    v13 = *RegionSize;
    v16 = *RegionSize;
  }
  else
  {
    v12 = *BaseAddress;
    v17 = (unsigned __int64)*BaseAddress;
    v13 = *RegionSize;
    v16 = *RegionSize;
  }
  if ( (unsigned __int64)v12 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFEFFFFLL - (__int64)v12 < v13 )
    return -1073741584;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             1816554829,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v15 = MmFlushVirtualMemory(Object, &v17, &v16, &v19);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    *RegionSize = v16;
    *BaseAddress = (PVOID)(v17 & 0xFFFFFFFFFFFFF000uLL);
    *(_OWORD *)&IoStatus->Status = v19;
    return v15;
  }
  return result;
}
