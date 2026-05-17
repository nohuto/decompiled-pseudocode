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
  int VirtualMemory; // edi
  signed __int32 v6[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h]

  if ( !a2 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  v6[10] = 4;
  v7 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6[8] = 12288;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40) && (VirtualMemory = ZwLockVirtualMemory(), VirtualMemory < 0) )
    {
      ZwFreeVirtualMemory();
    }
    else
    {
      MEMORY[8] = v7;
      MEMORY[0x10] = 32LL;
      MEMORY[0x18] = v7;
      MEMORY[0] = *(_QWORD *)(a1 + 48);
      _InterlockedOr(v6, 0);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return (unsigned int)VirtualMemory;
}
