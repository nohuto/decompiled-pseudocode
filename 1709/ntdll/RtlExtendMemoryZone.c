/*
 * XREFs of RtlExtendMemoryZone @ 0x1800E8B70
 * Callers:
 *     RtlExtendMemoryBlockLookaside @ 0x1800E8B00 (RtlExtendMemoryBlockLookaside.c)
 *     RtlpRegisterStackTrace @ 0x1801021EC (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1800A2170 (NtLockVirtualMemory.c)
 */

__int64 __fastcall RtlExtendMemoryZone(__int64 a1, __int64 a2)
{
  NTSTATUS v5; // edi
  _QWORD *v6; // r8
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  BaseAddress = 0LL;
  RegionSize = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40)
      && (v5 = NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u), v5 < 0) )
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    else
    {
      v6 = BaseAddress;
      *((_QWORD *)BaseAddress + 1) = RegionSize;
      v6[2] = v6 + 4;
      v6[3] = (char *)v6 + RegionSize;
      *v6 = *(_QWORD *)(a1 + 48);
      _InterlockedOr(v7, 0);
      *(_QWORD *)(a1 + 48) = v6;
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  return (unsigned int)v5;
}
