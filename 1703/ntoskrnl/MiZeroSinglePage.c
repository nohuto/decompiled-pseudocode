/*
 * XREFs of MiZeroSinglePage @ 0x1400C6290
 * Callers:
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14021EFC4 (MiFreeZeroPageSlistSufficient.c)
 *     HvlNotifyPageHeat @ 0x140269C18 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiZeroSinglePage(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // rdi
  unsigned __int64 v5; // r14
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  volatile signed __int64 *v12; // rdi
  int v13; // [rsp+20h] [rbp-78h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-70h]
  unsigned __int64 v16; // [rsp+60h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 72);
  v5 = (v4 + 0x58000000000LL) / 48;
  v6 = *(_QWORD **)(a1 + 32);
  KeZeroPages(*(_QWORD *)(a1 + 40), 4096LL);
  v7 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v13 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      v8 = (unsigned int)(v13 + 1);
      v13 = v8;
      if ( ((unsigned int)v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( *(__int64 *)(v4 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
  }
  *v6 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v6) )
    MiWritePteShadow(v9);
  if ( !*(_BYTE *)(a1 + 68) )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(v4 + 34) &= ~8u;
    if ( (HvlEnlightenments & 0x200000) != 0 )
    {
      if ( HvlMemoryHeatHintEnabled )
      {
        v10 = dword_14036C1F8 & (unsigned int)v5 | (((*(_QWORD *)(v4 + 40) >> 36) & 3) << byte_14036C1BA) | ((unsigned __int16)(*(_QWORD *)(v4 + 40) >> 58) << byte_14036C1B9);
        if ( (unsigned int)MiFreeZeroPageSlistSufficient(a2, v10, 0LL) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a2 + 1920) + 40 * v10) >= (unsigned __int64)(unsigned int)(4
                                                                                                * *(_DWORD *)(a2 + 5084)) )
            v7 = 1025;
        }
      }
    }
    MiUnlinkFreeOrZeroedPage((v4 + 0x58000000000LL) / 48, 0LL, 0LL);
    *(_QWORD *)(v4 + 16) = 0LL;
    MiInsertPageInFreeOrZeroedList((v4 + 0x58000000000LL) / 48, v7);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (v7 & 0x400) != 0 )
  {
    KeSetActualBasePriorityThread(CurrentThread, 1LL);
    --CurrentThread->SpecialApcDisable;
    v12 = (volatile signed __int64 *)(a2 + 224);
    ExAcquirePushLockSharedEx(a2 + 224, 0LL);
    if ( MiIsPfnInline(v5) )
    {
      v16 = v5 << 12;
      HvlNotifyPageHeat(0LL, 1LL, &v16);
    }
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return KeSetActualBasePriorityThread(CurrentThread, 0LL);
  }
  return result;
}
