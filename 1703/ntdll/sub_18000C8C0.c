/*
 * XREFs of sub_18000C8C0 @ 0x18000C8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18000C9B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall sub_18000C8C0(char *BaseAddress, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdi
  signed __int64 v5; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  ULONG Protect; // eax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddressa; // [rsp+58h] [rbp+10h] BYREF

  v2 = (_RTL_SRWLOCK *)(BaseAddress + 144);
  RtlAcquireReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 18);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)BaseAddress + 19);
      if ( (unsigned __int64)(v5 + a2) > *((_QWORD *)BaseAddress + 20) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)BaseAddress + 19, v5 + a2, v5) )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = *((_QWORD *)BaseAddress + 19);
    v8 = *((_QWORD *)BaseAddress + 20);
    if ( v7 + a2 > v8 )
      break;
LABEL_8:
    RtlReleaseSRWLockExclusive(v2);
  }
  BaseAddressa = (PVOID)*((_QWORD *)BaseAddress + 20);
  RegionSize = (v7 - v8 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Protect = sub_18001E548(BaseAddress);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect) >= 0 )
  {
    *((_QWORD *)BaseAddress + 20) += RegionSize;
    goto LABEL_8;
  }
  v5 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v5;
}
