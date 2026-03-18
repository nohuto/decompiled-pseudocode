/*
 * XREFs of KeSetAffinityProcess @ 0x1401580FC
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x14042E640 (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x140716B3C (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x140019778 (KiSetIdealNodeProcessByGroup.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x140126920 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  char v6; // r14
  unsigned int v7; // edx
  signed __int32 v8; // r13d
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  signed __int32 v11; // r13d
  __int64 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  volatile LONG *v14; // r15
  unsigned __int16 *v15; // rcx
  unsigned __int16 v16; // r14
  char v17; // r12
  _QWORD *i; // rsi
  __int64 *v19; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // r8
  __int64 CurrentThread; // rbx
  _KTHREAD *NextThread; // rsi
  __int64 v25; // r8
  __int64 v26; // r8
  unsigned __int16 v28; // r14
  unsigned __int16 v29; // r8
  char v30; // r12
  _QWORD *v31; // r9
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rax
  bool v35; // zf
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rax
  char v45; // [rsp+20h] [rbp-E0h]
  signed __int32 v46; // [rsp+24h] [rbp-DCh] BYREF
  int v47; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h]
  struct _KPRCB *v50; // [rsp+40h] [rbp-C0h]
  __int64 v51; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A8h]
  _QWORD v54[2]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v55[11]; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(v55[0]) = 1310721;
  v54[0] = 0LL;
  v54[1] = 0LL;
  v45 = 0;
  v51 = 1LL;
  v48 = 0LL;
  v6 = 0;
  memset((char *)v55 + 4, 0, 0xA4uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v6 = 1;
    else
      v45 = 1;
  }
  KeFirstGroupAffinityEx(v54, a3);
  v7 = *a3;
  v8 = 0;
  v46 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = a3 + 4;
    do
    {
      if ( *v10 )
        _bittestandset(&v46, v9);
      ++v9;
      ++v10;
    }
    while ( v9 < v7 );
    v8 = v46;
  }
  v11 = v8 << 9;
  v52 = 0LL;
  v53 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = (volatile LONG *)(a1 + 64);
  v50 = CurrentPrcb;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v6 || (((*(_DWORD *)(a1 + 440) & 0x1FFFFE00) - 1) & *(_DWORD *)(a1 + 440) & 0x1FFFFE00) == 0 )
  {
    v15 = (unsigned __int16 *)(a1 + 80);
    if ( v45 )
    {
      v28 = *v15;
      v29 = 0;
      if ( !*v15 )
        goto LABEL_25;
      v30 = 0;
      v31 = a3 + 4;
      v32 = a1 - (_QWORD)a3;
      do
      {
        v33 = *(_QWORD *)((char *)v31 + v32 + 80);
        if ( v33 )
        {
          v52 = *(_QWORD *)((char *)v31 + v32 + 80);
          if ( v29 < *a3 )
          {
            v34 = v33 | *v31;
            if ( v34 != v33 )
            {
              v33 |= *v31;
              v52 = v34;
              v30 = 1;
            }
          }
          if ( LOWORD(v55[0]) <= v29 )
            LOWORD(v55[0]) = v51 + v29;
          *(_QWORD *)((char *)v31 + (char *)v55 - (char *)a3) |= v33;
        }
        ++v29;
        ++v31;
      }
      while ( v29 < v28 );
      v35 = v30 == 0;
      LOBYTE(CurrentIrql) = v49;
      if ( v35 )
      {
LABEL_25:
        ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v48, v22);
        if ( (unsigned __int8)CurrentIrql >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            KiRequestSoftwareInterrupt(CurrentPrcb, 2);
          return 0LL;
        }
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
          v47 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v47);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
          {
            v25 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
            NextThread->ReadyTime = v25 + MEMORY[0xFFFFF78000000320];
          }
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(CurrentThread + 643) = 32;
          *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
          KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v25);
          LOBYTE(v26) = CurrentIrql;
          if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v26) )
            goto LABEL_35;
        }
        else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        {
          goto LABEL_35;
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_35:
        __writecr8((unsigned __int8)CurrentIrql);
        return 0LL;
      }
      v36 = v55[1];
      *(_OWORD *)v15 = v55[0];
      v37 = v55[2];
      *(_OWORD *)(a1 + 96) = v36;
      v38 = v55[3];
      *(_OWORD *)(a1 + 112) = v37;
      v39 = v55[4];
      *(_OWORD *)(a1 + 128) = v38;
      v40 = v55[5];
      *(_OWORD *)(a1 + 144) = v39;
      v41 = v55[6];
      *(_OWORD *)(a1 + 160) = v40;
      v42 = v55[8];
      *(_OWORD *)(a1 + 176) = v41;
      *(_OWORD *)(a1 + 192) = v55[7];
      v43 = v55[9];
      v44 = *(_QWORD *)&v55[10];
      *(_OWORD *)(a1 + 208) = v42;
      *(_OWORD *)(a1 + 224) = v43;
      *(_QWORD *)(a1 + 240) = v44;
    }
    else
    {
      v16 = 0;
      *(_OWORD *)v15 = *(_OWORD *)a3;
      *(_OWORD *)(a1 + 96) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(a1 + 112) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(a1 + 128) = *((_OWORD *)a3 + 3);
      *(_OWORD *)(a1 + 144) = *((_OWORD *)a3 + 4);
      *(_OWORD *)(a1 + 160) = *((_OWORD *)a3 + 5);
      *(_OWORD *)(a1 + 176) = *((_OWORD *)a3 + 6);
      *(_OWORD *)(a1 + 192) = *((_OWORD *)a3 + 7);
      *(_OWORD *)(a1 + 208) = *((_OWORD *)a3 + 8);
      *(_OWORD *)(a1 + 224) = *((_OWORD *)a3 + 9);
      *(_QWORD *)(a1 + 240) = *((_QWORD *)a3 + 20);
      if ( *a3 )
      {
        v17 = 0;
        do
        {
          if ( *(_QWORD *)&a3[4 * v16 + 4] )
          {
            KiSetIdealNodeProcessByGroup(a1, 0LL, v16);
            if ( !v17 )
            {
              v17 = 1;
              *(_WORD *)(a1 + 568) = *(_WORD *)(a1 + 2LL * v16 + 528);
            }
          }
          ++v16;
        }
        while ( v16 < *a3 );
        CurrentPrcb = v50;
        v14 = (volatile LONG *)(a1 + 64);
        LOBYTE(CurrentIrql) = v49;
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      v19 = &v52;
      LOWORD(v53) = *((_WORD *)i - 100);
      v52 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v53 + 88);
      if ( !v52 )
        v19 = v54;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v48, v19);
    }
    if ( !v45 )
    {
      _m_prefetchw((const void *)(a1 + 440));
      v20 = *(_DWORD *)(a1 + 440);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v11 | v20 & 0xE00001FF, v20);
      }
      while ( v21 != v20 );
    }
    goto LABEL_25;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8((unsigned __int8)CurrentIrql);
  return 3221225485LL;
}
