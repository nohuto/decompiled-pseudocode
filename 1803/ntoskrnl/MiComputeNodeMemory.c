/*
 * XREFs of MiComputeNodeMemory @ 0x14064FEE4
 * Callers:
 *     MiUpdatePartitionMemory @ 0x140270148 (MiUpdatePartitionMemory.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MiComputeNodeMemory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int *v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // r14
  volatile signed __int64 *v5; // rbx
  unsigned __int8 *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  _QWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(unsigned int **)(a1 + 32);
  v3 = 0;
  v4 = *v2;
  if ( KeNumberNodes )
  {
    v5 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 1896LL);
    do
    {
      memset(v14, 0, sizeof(v14));
      if ( (_DWORD)v4 )
      {
        v6 = (unsigned __int8 *)&v2[4 * v4 + 4] + 1;
        v7 = v4;
        v8 = v2 + 6;
        do
        {
          if ( *(v6 - 1) == v3 )
            v14[*v6] += *v8;
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
        v10 = (char *)v5 - (char *)&v15;
        v13 = v14;
        v11 = (unsigned int)MmNumberOfChannels;
        do
        {
          v9 += *v13;
          *(_QWORD *)((char *)v13 + v10 - 88) = *v13;
          ++v13;
          --v11;
        }
        while ( v11 );
      }
      *((_QWORD *)v5 - 11) = v9;
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5, v10, v11, v12);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v5 += 248;
      ++v3;
    }
    while ( v3 < (unsigned __int16)KeNumberNodes );
  }
}
