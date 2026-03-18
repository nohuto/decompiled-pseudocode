/*
 * XREFs of MiComputeNodeMemory @ 0x1405BABD8
 * Callers:
 *     MiUpdatePartitionMemory @ 0x14021ED10 (MiUpdatePartitionMemory.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall MiComputeNodeMemory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int *v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // r14
  volatile signed __int64 *v5; // rbx
  unsigned __int8 *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r8
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(unsigned int **)(a1 + 64);
  v3 = 0;
  v4 = *v2;
  if ( KeNumberNodes )
  {
    v5 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 48) + 2144LL);
    do
    {
      memset(v12, 0, sizeof(v12));
      if ( (_DWORD)v4 )
      {
        v6 = (unsigned __int8 *)&v2[4 * v4 + 4] + 1;
        v7 = v4;
        v8 = v2 + 6;
        do
        {
          if ( *(v6 - 1) == v3 )
            v12[*v6] += *v8;
          v8 += 2;
          v6 += 2;
          --v7;
        }
        while ( v7 );
      }
      v9 = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
      if ( MmNumberOfChannels )
      {
        v10 = v12;
        v11 = (unsigned int)MmNumberOfChannels;
        do
        {
          v9 += *v10;
          *(_QWORD *)((char *)v10 + (_QWORD)v5 + 56LL - (_QWORD)&retaddr - 88) = *v10;
          ++v10;
          --v11;
        }
        while ( v11 );
      }
      *((_QWORD *)v5 - 11) = v9;
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v5 += 273;
      ++v3;
    }
    while ( v3 < (unsigned __int16)KeNumberNodes );
  }
}
