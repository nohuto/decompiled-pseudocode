/*
 * XREFs of RtlUnlockMemoryZone @ 0x180049280
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180049020 (RtlLockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180049220 (RtlUnlockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004930C @ 0x18004930C (sub_18004930C.c)
 *     ZwUnlockVirtualMemory @ 0x18009E310 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __cdecl RtlUnlockMemoryZone(PVOID MemoryZone)
{
  _RTL_SRWLOCK *v1; // rsi
  int v3; // eax
  NTSTATUS v4; // ebx
  int v5; // eax
  ULONG_PTR *i; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_RTL_SRWLOCK *)((char *)MemoryZone + 32);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  v3 = *((_DWORD *)MemoryZone + 10);
  v4 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    *((_DWORD *)MemoryZone + 10) = v5;
    if ( !v5 )
    {
      for ( i = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); i; i = (ULONG_PTR *)*i )
      {
        BaseAddress = i;
        RegionSize = i[1];
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      }
      sub_18004930C();
    }
  }
  else
  {
    v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v1);
  return v4;
}
