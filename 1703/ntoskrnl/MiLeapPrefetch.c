/*
 * XREFs of MiLeapPrefetch @ 0x14003A5C0
 * Callers:
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchJumpVad @ 0x140213F48 (MiPrefetchJumpVad.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140007170 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  char Queue; // al
  _KPROCESS *Process; // rbp
  __int64 v8; // rdi
  unsigned __int8 v9; // di
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 j; // r8
  _QWORD *v16; // rax
  unsigned __int64 v17; // r8
  volatile LONG *v18; // rax
  volatile LONG *SharedVm; // rax
  _QWORD *i; // rax
  volatile LONG *v21; // rax
  volatile LONG *v22; // rax

  v2 = a2;
  if ( a2 )
  {
LABEL_30:
    v16 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v17 = *v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 >= v17 && v2 < v17 + (((*(_DWORD *)v16 & 0xFFF) + v16[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v2 - v17) >> 12;
    }
    else
    {
LABEL_32:
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
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)&Process[1].Affinity.Bitmap[7]) )
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 2u;
    v9 = 17;
  }
  else
  {
    if ( v8 )
      KeAbPostReleaseEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7]);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v9 = MiLockWorkingSetShared(&Process[1].IdealNode[12]);
  }
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 && Process[2].Affinity.Bitmap[6] )
  {
    v10 = Process[2].Affinity.Bitmap[4];
    v11 = v4 >> 12;
    while ( 1 )
    {
      v13 = v10;
      if ( !v10 )
        goto LABEL_48;
      if ( v11 < (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) )
      {
        v12 = *(_QWORD *)v10;
      }
      else
      {
        if ( v11 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
        {
          if ( v9 == 17 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
          }
          else
          {
            SharedVm = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
            ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
            __writecr8(v9);
          }
          return 1LL;
        }
        v12 = *(_QWORD *)(v10 + 8);
      }
      if ( !v12 )
      {
        if ( (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) >= v11 )
          goto LABEL_28;
        v13 = *(_QWORD *)(v10 + 8);
        if ( v13 )
        {
          for ( i = *(_QWORD **)v13; i; i = (_QWORD *)*i )
            v13 = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(v10 + 16); ; j = *(_QWORD *)(v13 + 16) )
          {
            v13 = j & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v13 || *(_QWORD *)v13 == v10 )
              break;
            v10 = v13;
          }
        }
        if ( v13 )
        {
LABEL_28:
          v2 = (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12;
          if ( v9 == 17 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
          }
          else
          {
            v21 = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
            ExReleaseSpinLockSharedFromDpcLevel(v21);
            __writecr8(v9);
          }
          goto LABEL_30;
        }
LABEL_48:
        if ( v9 == 17 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
        }
        else
        {
          v22 = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
          ExReleaseSpinLockSharedFromDpcLevel(v22);
          __writecr8(v9);
        }
        goto LABEL_32;
      }
      v10 = v12;
    }
  }
  if ( v9 == 17 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  }
  else
  {
    v18 = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
    ExReleaseSpinLockSharedFromDpcLevel(v18);
    __writecr8(v9);
  }
  return 0LL;
}
