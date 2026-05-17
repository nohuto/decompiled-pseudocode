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

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = a2;
  v9 = a1;
  while ( 1 )
  {
    RtlAcquireSRWLockShared(&qword_18015D6B8);
    if ( qword_18015D6C0 != a2 )
      break;
    RtlReleaseSRWLockShared(&qword_18015D6B8, v3, v4);
    RtlpWaitOnAddress((unsigned int)&qword_18015D6C0, (unsigned int)&v10, 8, 0, RtlpWaitOnAddressSpinCount);
  }
  if ( !_bittest64((const signed __int64 *)RtlpHpAllocTrackerBitmap, a2) )
  {
    v11 = qword_18015D6A8 + (a2 << 12);
    v9 = 4096LL;
    v5 = ZwAllocateVirtualMemory(-1LL, &v11, 0LL, &v9, 4096, 4);
    if ( v5 < 0 )
    {
      RtlReleaseSRWLockShared(&qword_18015D6B8, v7, v8);
      return (unsigned int)v5;
    }
    _interlockedbittestandset64((volatile signed __int32 *)RtlpHpAllocTrackerBitmap, a2);
  }
  return 0;
}
