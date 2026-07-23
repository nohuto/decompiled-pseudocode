/*
 * XREFs of RtlDestroyMemoryZone @ 0x180087DC0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x18007EF30 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087D60 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x180100DB4 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800829AC (RtlpUnregisterLockedMemoryZone.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryZone(PVOID MemoryZone)
{
  ULONG_PTR *v2; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  if ( *((_DWORD *)MemoryZone + 10) )
    RtlpUnregisterLockedMemoryZone();
  v2 = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6);
  while ( v2 )
  {
    BaseAddress = v2;
    RegionSize = v2[1];
    v2 = (ULONG_PTR *)*v2;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return 0;
}
