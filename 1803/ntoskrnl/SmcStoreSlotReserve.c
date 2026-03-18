/*
 * XREFs of SmcStoreSlotReserve @ 0x1407A0278
 * Callers:
 *     SmcStoreCreate @ 0x14079F994 (SmcStoreCreate.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     SmAlloc @ 0x14007E79C (SmAlloc.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SmcStorePlacementGet @ 0x14079FD84 (SmcStorePlacementGet.c)
 *     SmcStoreSlotAbort @ 0x1407A013C (SmcStoreSlotAbort.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax

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
    if ( *(_DWORD *)v12 == -1 )
    {
      v16 = *(_DWORD *)(v12 + 4);
      if ( (v16 & 4) == 0 )
      {
        *(_QWORD *)(v12 + 8) = v8;
        *(_DWORD *)(v12 + 4) = v16 | 4;
        v8 = 0LL;
        if ( (int)SmcStorePlacementGet(a1, a3, v12) >= 0 )
        {
          v5 = v12;
          v12 = 0LL;
        }
        if ( v12 )
        {
          SmcStoreSlotAbort(a1, v12, 1LL, v15);
          return v5;
        }
        break;
      }
    }
    v12 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 160), v13, v14, v15);
  KeAbPostRelease(a1 + 160);
  KeLeaveCriticalRegion();
  if ( v8 )
    CmSiFreeMemory(v8);
  return v5;
}
