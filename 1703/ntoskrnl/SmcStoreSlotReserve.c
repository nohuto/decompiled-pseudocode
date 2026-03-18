/*
 * XREFs of SmcStoreSlotReserve @ 0x140704FA0
 * Callers:
 *     SmcStoreCreate @ 0x140704688 (SmcStoreCreate.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SmAlloc @ 0x14012F798 (SmAlloc.c)
 *     SmcStorePlacementGet @ 0x140704A74 (SmcStorePlacementGet.c)
 *     SmcStoreSlotAbort @ 0x140704E5C (SmcStoreSlotAbort.c)
 */

unsigned __int64 __fastcall SmcStoreSlotReserve(__int64 a1, __int64 a2, ULONG a3)
{
  unsigned __int64 v5; // r12
  SIZE_T v6; // rsi
  struct _PRIVILEGE_SET *v7; // rax
  struct _PRIVILEGE_SET *v8; // r14
  SIZE_T v9; // rsi
  struct _PRIVILEGE_SET *p_Control; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rdi

  v5 = 0LL;
  v6 = 4 * (unsigned int)(((unsigned __int64)*(unsigned int *)(a1 + 8) + 31) >> 5);
  v7 = (struct _PRIVILEGE_SET *)SmAlloc(v6, 0x72436D73u);
  v8 = v7;
  if ( !v7 )
    return v5;
  v9 = v6 >> 2;
  p_Control = v7;
  if ( v9 )
  {
    if ( ((unsigned __int8)v7 & 4) != 0 )
    {
      v7->PrivilegeCount = -1;
      if ( !--v9 )
        goto LABEL_8;
      p_Control = (struct _PRIVILEGE_SET *)&v7->Control;
    }
    memset(p_Control, 0xFFu, 8 * (v9 >> 1));
    if ( (v9 & 1) != 0 )
      *((_DWORD *)p_Control + v9 - 1) = -1;
  }
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v12 = a1 + 168;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  while ( v12 < a1 + 552 )
  {
    if ( *(_DWORD *)v12 == -1 && (*(_DWORD *)(v12 + 4) & 4) == 0 )
    {
      *(_DWORD *)(v12 + 4) |= 4u;
      *(_QWORD *)(v12 + 8) = v8;
      v8 = 0LL;
      if ( (int)SmcStorePlacementGet(a1, a3, v12) >= 0 )
      {
        v5 = v12;
        v12 = 0LL;
      }
      if ( v12 )
      {
        SmcStoreSlotAbort(a1, v12, 1);
        return v5;
      }
      break;
    }
    v12 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160));
  KeAbPostRelease(a1 + 160);
  KeLeaveCriticalRegion();
  if ( v8 )
    MiDeleteSubsection(v8);
  return v5;
}
