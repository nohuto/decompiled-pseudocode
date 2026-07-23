/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x180003A08
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x180003960 (RtlCSparseBitmapBitmaskWrite.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitOnAddress @ 0x18006DA0C (RtlpWaitOnAddress.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(ULONG_PTR a1, unsigned __int64 a2)
{
  NTSTATUS v3; // edi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  RegionSize = a1;
  while ( 1 )
  {
    RtlAcquireSRWLockShared(&SRWLock);
    if ( qword_18015D6C0 != a2 )
      break;
    RtlReleaseSRWLockShared(&SRWLock);
    RtlpWaitOnAddress((unsigned int)&qword_18015D6C0, (unsigned int)&v6, 8, 0, RtlpWaitOnAddressSpinCount);
  }
  if ( !_bittest64((const signed __int64 *)RtlpHpAllocTrackerBitmap, a2) )
  {
    BaseAddress = (char *)::BaseAddress + 4096 * a2;
    RegionSize = 4096LL;
    v3 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v3 < 0 )
    {
      RtlReleaseSRWLockShared(&SRWLock);
      return (unsigned int)v3;
    }
    _interlockedbittestandset64((volatile signed __int32 *)RtlpHpAllocTrackerBitmap, a2);
  }
  return 0;
}
