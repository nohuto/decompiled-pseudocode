/*
 * XREFs of MiLeapPrefetch @ 0x14010A194
 * Callers:
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchJumpVad @ 0x14021BF50 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x140100550 (ExfTryAcquirePushLockShared.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  char Queue; // al
  __int64 Process; // rbp
  PRTL_BALANCED_NODE v8; // rdi
  KIRQL v9; // di
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  LONG *v19; // rax
  LONG *SharedVm; // rax
  LONG *v21; // rax
  LONG *v22; // rax

  v2 = a2;
  if ( a2 )
  {
LABEL_25:
    v15 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v16 = *v15 & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 >= v16 && v2 < v16 + (((*(_DWORD *)v15 & 0xFFF) + v15[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v2 - v16) >> 12;
    }
    else
    {
LABEL_27:
      ++a1[3];
      a1[4] = 0LL;
    }
    return 1LL;
  }
  v4 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v4 > 0x7FFFFFFEFFFFLL )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (char)CurrentThread[1].Queue;
  if ( Queue < 0 || (Queue & 3) != 0 )
    return 1LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(Process + 872, 0LL, 1);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(Process + 872), 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)(Process + 872)) )
  {
    if ( v8 )
      BYTE2(v8[1].Left) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 2u;
    v9 = 17;
  }
  else
  {
    if ( v8 )
      KeAbPostReleaseEx(Process + 872, (unsigned __int64)v8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v9 = MiLockWorkingSetShared(Process + 1280);
  }
  if ( (*(_DWORD *)(Process + 772) & 0x20) == 0 && *(_QWORD *)(Process + 1592) )
  {
    v10 = *(_QWORD *)(Process + 1576);
    v11 = v4 >> 12;
    while ( 1 )
    {
      if ( !v10 )
        goto LABEL_46;
      v13 = *(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32);
      if ( v11 < v13 )
      {
        v12 = *(_QWORD *)v10;
      }
      else
      {
        if ( v11 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
        {
          if ( v9 == 17 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
          }
          else
          {
            SharedVm = MiGetSharedVm(Process + 1280);
            ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
            __writecr8(v9);
          }
          return 1LL;
        }
        v12 = *(_QWORD *)(v10 + 8);
      }
      if ( !v12 )
      {
        if ( v13 >= v11 )
          goto LABEL_23;
        v17 = *(_QWORD **)(v10 + 8);
        v18 = v10;
        if ( v17 )
        {
          do
          {
            v10 = (unsigned __int64)v17;
            v17 = (_QWORD *)*v17;
          }
          while ( v17 );
        }
        else
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v10 || *(_QWORD *)v10 == v18 )
              break;
            v18 = v10;
          }
        }
        if ( v10 )
        {
LABEL_23:
          v2 = (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
          if ( v9 == 17 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
          }
          else
          {
            v21 = MiGetSharedVm(Process + 1280);
            ExReleaseSpinLockSharedFromDpcLevel(v21);
            __writecr8(v9);
          }
          goto LABEL_25;
        }
LABEL_46:
        if ( v9 == 17 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
        }
        else
        {
          v22 = MiGetSharedVm(Process + 1280);
          ExReleaseSpinLockSharedFromDpcLevel(v22);
          __writecr8(v9);
        }
        goto LABEL_27;
      }
      v10 = v12;
    }
  }
  if ( v9 == 17 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  }
  else
  {
    v19 = MiGetSharedVm(Process + 1280);
    ExReleaseSpinLockSharedFromDpcLevel(v19);
    __writecr8(v9);
  }
  return 0LL;
}
