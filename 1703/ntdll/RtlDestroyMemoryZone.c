/*
 * XREFs of RtlDestroyMemoryZone @ 0x1800890C0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x1800800B0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180089060 (RtlDestroyMemoryBlockLookaside.c)
 *     sub_1800FF204 @ 0x1800FF204 (sub_1800FF204.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180083B3C @ 0x180083B3C (sub_180083B3C.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryZone(PVOID MemoryZone)
{
  ULONG_PTR *v2; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  if ( *((_DWORD *)MemoryZone + 10) )
    sub_180083B3C();
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
