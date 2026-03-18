/*
 * XREFs of MiIsRangeFullyCommitted @ 0x14047B7F8
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B908 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 ProtoPteAddress; // rbx
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // esi
  __int64 v9; // rdi
  signed __int64 *v10; // rdi
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 5, &v15);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 5, &v14);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v9 + 40);
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  v11 = v15;
  while ( 1 )
  {
    v12 = v11 == v14 ? v6 : *(_QWORD *)(v11 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v11 + 44) - 1);
    while ( ProtoPteAddress <= v12 )
    {
      if ( !MI_READ_PTE_LOCK_FREE(ProtoPteAddress) )
      {
        v8 = 0;
        break;
      }
      ProtoPteAddress += 8LL;
    }
    if ( v11 == v14 )
      break;
    v11 = *(_QWORD *)(v11 + 16);
    v15 = v11;
    ProtoPteAddress = *(_QWORD *)(v11 + 8);
    if ( !ProtoPteAddress )
    {
      v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
