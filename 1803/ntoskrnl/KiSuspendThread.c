/*
 * XREFs of KiSuspendThread @ 0x140044BA8
 * Callers:
 *     KeSuspendThread @ 0x14004584C (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x1400BD320 (KiFreezeSingleThread.c)
 *     KiAdjustThreadTimer @ 0x140247E70 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140008690 (KiDecrementProcessStackCount.c)
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThread @ 0x14002F9B0 (KiSignalThread.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140043A70 (KiInsertQueueApc.c)
 *     KiCancelTimer @ 0x14005B820 (KiCancelTimer.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v3; // di
  __int64 v4; // r15
  __int64 v6; // r10
  char v7; // r11
  char v9; // al
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r14
  volatile signed __int32 *v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rcx
  struct _KPRCB *v18; // rsi
  char v19; // al
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp+8h] BYREF
  int v23; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v22 = 0;
  v4 = a2;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v6 = a1 + 648;
      v7 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || (v9 = *(_BYTE *)(a1 + 3), (v9 & 0x40) != 0)
        || v9 < 0
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v7 )
          KiSignalThreadForApc(v4, v6, 2);
      }
      else
      {
        v10 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v10;
        *(_BYTE *)(a1 + 193) = 1;
        KiReleaseThreadLockSafe(a1);
        v12 = *(_QWORD *)(a1 + 208);
        v13 = v12 + 17;
        v14 = v12 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v13 < 5u )
          {
            v15 = *(volatile signed __int32 **)(v13 + 15);
            KiAcquireKobjectLockSafe(v15);
            if ( *(_BYTE *)v13 == 4 )
            {
              v16 = *(_QWORD **)(v13 - 9);
              v11 = v13 - 17;
              v17 = *(_QWORD *)(v13 - 17);
              if ( *(_QWORD *)(v17 + 8) != v13 - 17 || *v16 != v11 )
                __fastfail(3u);
              *v16 = v17;
              *(_QWORD *)(v17 + 8) = v16;
            }
            _InterlockedAnd(v15, 0xFFFFFF7F);
            *(_BYTE *)v13 = 6;
          }
          v13 += 48LL;
        }
        while ( v13 - 17 != v14 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(v11) = 1;
          v20 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, v11) )
          {
            v21 = *(_QWORD *)(a1 + 280);
            if ( v21 <= v20 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v20;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v20 - v21;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0
          && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
        {
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
        }
        v18 = KeGetCurrentPrcb();
        v23 = 0;
        while ( 1 )
        {
          LOBYTE(v11) = 1;
          KiSetVpThreadSpinLockCount(v18, v11);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v18, 0LL);
          do
            KeYieldProcessorEx(&v23);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v19 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v19 |= 4u;
        *(_BYTE *)(a1 + 112) = v19;
        if ( (v19 & 0x20) != 0 )
          KiSignalThread(v4, a1, 256LL, 0LL);
      }
    }
    v3 = 1;
  }
  KiReleaseThreadLockSafe(a1);
  return v3;
}
