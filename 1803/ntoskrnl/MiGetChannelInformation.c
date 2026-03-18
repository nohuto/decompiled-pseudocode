/*
 * XREFs of MiGetChannelInformation @ 0x14051275C
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x1405124C4 (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x14075688C (MmGetChannelInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14006FF50 (MiUnlockDynamicMemoryExclusive.c)
 *     MiGetNodeChannelPageCounts @ 0x14007014C (MiGetNodeChannelPageCounts.c)
 *     MiLockDynamicMemoryExclusive @ 0x140070288 (MiLockDynamicMemoryExclusive.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rsi
  signed __int64 *v8; // rdi
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  _QWORD *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // ecx
  unsigned __int8 *v18; // rdx
  struct _KTHREAD *v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v21 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 16) + 1984LL * a2;
  v19 = CurrentThread;
  *a4 = 40LL * (unsigned int)MmNumberOfChannels;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  --CurrentThread->SpecialApcDisable;
  v8 = (signed __int64 *)(v7 + 1896);
  ExAcquirePushLockSharedEx(v7 + 1896, 0LL);
  v9 = MmNumberOfChannels;
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    v11 = v21;
    v12 = (_QWORD *)(v7 + 1776);
    v13 = a3 + 4;
    do
    {
      *(_DWORD *)(v13 - 4) = v10;
      if ( (*(_DWORD *)(v7 + 1888) & 1) != 0 )
      {
        v17 = 0;
        v18 = (unsigned __int8 *)(v7 + 1914);
        while ( *v18 != v10 )
        {
          ++v17;
          ++v18;
          if ( v17 >= v9 )
            goto LABEL_5;
        }
        *(_DWORD *)v13 = v17;
      }
      else
      {
        *(_DWORD *)v13 = -1;
      }
LABEL_5:
      *(_QWORD *)(v13 + 4) = *v12;
      MiGetNodeChannelPageCounts(a1, v11, v10++, &v20, &v22, &v23);
      *(_QWORD *)(v13 + 12) = v20;
      ++v12;
      *(_QWORD *)(v13 + 20) = v22;
      *(_QWORD *)(v13 + 28) = v23;
      v13 += 40LL;
    }
    while ( v10 < v9 );
    v8 = (signed __int64 *)(v7 + 1896);
    CurrentThread = v19;
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread, v14, v15);
}
