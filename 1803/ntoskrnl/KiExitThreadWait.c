/*
 * XREFs of KiExitThreadWait @ 0x140089090
 * Callers:
 *     KiFastExitThreadWait @ 0x140088FE4 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x14024A2D8 (KiSatisfyThreadWait.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 */

char __fastcall KiExitThreadWait(struct _KPRCB *a1, __int64 a2, char a3)
{
  unsigned __int8 v3; // r14
  __int64 v4; // rbx
  char v5; // al
  _KTHREAD *NextThread; // rax
  __int64 v7; // rbp
  __int64 CurrentThread; // rbp
  bool v9; // zf
  __int64 v10; // rdx
  struct _KPRCB *v11; // r15
  __int64 v12; // r15
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rdx
  struct _KPRCB *v16; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v18; // rdx
  struct _KPRCB *v19; // r15
  __int64 v20; // r14
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+24h] [rbp-34h] BYREF
  _QWORD v25[6]; // [rsp+28h] [rbp-30h] BYREF
  int v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a2 + 390);
  v4 = (__int64)a1;
  v5 = *(_BYTE *)(a2 + 112);
  if ( (v5 & 0x38) != 0 )
  {
    if ( (v5 & 0x18) != 0 )
    {
      if ( (v5 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      CurrentPrcb = KeGetCurrentPrcb();
      v25[0] = 0LL;
      v26 = 0;
      while ( 1 )
      {
        LOBYTE(a2) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v26);
        while ( *(_QWORD *)(v4 + 48) );
      }
      if ( !*(_QWORD *)(v4 + 16) )
        KiSelectNextThread(v4, v25);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      KiReadyDeferredReadyList(v4, v25);
      NextThread = *(_KTHREAD **)(v4 + 16);
      if ( v3 < 2u )
      {
        v7 = *(_QWORD *)(v4 + 8);
        if ( !NextThread )
        {
          v14 = (*(_DWORD *)(v7 + 116) & 0x40) == 0;
          goto LABEL_22;
        }
        KiAbProcessContextSwitch(*(_QWORD *)(v4 + 8), 0LL);
        v19 = KeGetCurrentPrcb();
        v27 = 0;
        while ( 1 )
        {
          LOBYTE(v18) = 1;
          KiSetVpThreadSpinLockCount(v19, v18);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v19, 0LL);
          do
            KeYieldProcessorEx(&v27);
          while ( *(_QWORD *)(v4 + 48) );
        }
LABEL_19:
        v12 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 16) = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v4, v7, 0LL);
        _enable();
        *(_QWORD *)(v4 + 8) = v12;
        if ( *(_BYTE *)(v12 + 388) == 1 )
          *(_DWORD *)(v12 + 132) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v12 + 388) = 2;
        *(_BYTE *)(v7 + 643) = 32;
        *(_BYTE *)(v7 + 390) = v3;
        KiQueueReadyThread(v4, v7);
        LOBYTE(v13) = v3;
        v14 = (unsigned __int8)KiSwapContext(v7, v12, v13) == 0;
LABEL_22:
        if ( v14 )
          goto LABEL_6;
        goto LABEL_25;
      }
      if ( NextThread )
      {
        LOBYTE(NextThread) = *(_BYTE *)(v4 + 11882);
        if ( !(_BYTE)NextThread )
        {
          a1 = (struct _KPRCB *)v4;
LABEL_24:
          LOBYTE(NextThread) = KiRequestSoftwareInterrupt(a1, 2);
        }
      }
    }
    else
    {
      CurrentThread = (__int64)a1->CurrentThread;
      if ( a1->NextThread )
      {
        KiAbProcessContextSwitch(a1->CurrentThread, 0LL);
        v16 = KeGetCurrentPrcb();
        v23 = 0;
        while ( 1 )
        {
          LOBYTE(v15) = 1;
          KiSetVpThreadSpinLockCount(v16, v15);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v16, 0LL);
          do
            KeYieldProcessorEx(&v23);
          while ( *(_QWORD *)(v4 + 48) );
        }
        v20 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 16) = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v4, CurrentThread, 0LL);
        _enable();
        *(_QWORD *)(v4 + 8) = v20;
        if ( *(_BYTE *)(v20 + 388) == 1 )
          *(_DWORD *)(v20 + 132) = *(_DWORD *)(v20 + 132) - *(_DWORD *)(v20 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v20 + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = 1;
        KiQueueReadyThread(v4, CurrentThread);
        LOBYTE(v21) = 1;
        v9 = (unsigned __int8)KiSwapContext(CurrentThread, v20, v21) == 0;
      }
      else
      {
        v9 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v9 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      __writecr8(1uLL);
      LOBYTE(NextThread) = KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    if ( !a3 )
    {
LABEL_6:
      LOBYTE(NextThread) = v3;
      __writecr8(v3);
      return (char)NextThread;
    }
    NextThread = a1->NextThread;
    if ( v3 < 2u )
    {
      v7 = (__int64)a1->CurrentThread;
      if ( !NextThread )
      {
        if ( (*(_DWORD *)(v7 + 116) & 0x40) == 0 )
          goto LABEL_6;
LABEL_25:
        __writecr8(1uLL);
        *(_DWORD *)(v7 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
        goto LABEL_6;
      }
      KiAbProcessContextSwitch(a1->CurrentThread, 0LL);
      v11 = KeGetCurrentPrcb();
      v24 = 0;
      while ( 1 )
      {
        LOBYTE(v10) = 1;
        KiSetVpThreadSpinLockCount(v11, v10);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v11, 0LL);
        do
          KeYieldProcessorEx(&v24);
        while ( *(_QWORD *)(v4 + 48) );
      }
      goto LABEL_19;
    }
    if ( NextThread )
    {
      LOBYTE(NextThread) = a1->DpcRoutineActive;
      if ( !(_BYTE)NextThread )
        goto LABEL_24;
    }
  }
  return (char)NextThread;
}
