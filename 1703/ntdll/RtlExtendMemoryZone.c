/*
 * XREFs of RtlExtendMemoryZone @ 0x1800E9820
 * Callers:
 *     RtlExtendMemoryBlockLookaside @ 0x1800E97B0 (RtlExtendMemoryBlockLookaside.c)
 *     sub_1801003C4 @ 0x1801003C4 (sub_1801003C4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwLockVirtualMemory @ 0x1800A7390 (ZwLockVirtualMemory.c)
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
      && (v5 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u), v5 < 0) )
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
