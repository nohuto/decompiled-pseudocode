/*
 * XREFs of KeSetAffinityProcess @ 0x140183BE0
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140484800 (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x14077ACB8 (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14006B7D8 (KiSetIdealNodeProcessByGroup.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KeFirstGroupAffinityEx @ 0x1400C5EE0 (KeFirstGroupAffinityEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  struct _KPRCB *v24; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v26; // r8
  __int64 v27; // r8
  unsigned __int16 v29; // r14
  unsigned __int16 v30; // r8
  char v31; // r12
  _QWORD *v32; // r9
  __int64 v33; // r11
  __int64 v34; // rdx
  __int64 v35; // rax
  bool v36; // zf
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // rax
  char v46; // [rsp+20h] [rbp-E0h]
  signed __int32 v47; // [rsp+24h] [rbp-DCh] BYREF
  int v48; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+38h] [rbp-C8h]
  struct _KPRCB *v51; // [rsp+40h] [rbp-C0h]
  __int64 v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h]
  _QWORD v55[2]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v56[11]; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(v56[0]) = 1310721;
  v55[0] = 0LL;
  v55[1] = 0LL;
  v46 = 0;
  v52 = 1LL;
  v49 = 0LL;
  v6 = 0;
  memset((char *)v56 + 4, 0, 0xA4uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v6 = 1;
    else
      v46 = 1;
  }
  KeFirstGroupAffinityEx(v55, a3);
  v7 = *a3;
  v8 = 0;
  v47 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = a3 + 4;
    do
    {
      if ( *v10 )
        _bittestandset(&v47, v9);
      ++v9;
      ++v10;
    }
    while ( v9 < v7 );
    v8 = v47;
  }
  v11 = v8 << 10;
  v53 = 0LL;
  v54 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v50 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = (volatile LONG *)(a1 + 64);
  v51 = CurrentPrcb;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v6 || (((*(_DWORD *)(a1 + 440) & 0x3FFFFC00) - 1) & *(_DWORD *)(a1 + 440) & 0x3FFFFC00) == 0 )
  {
    v15 = (unsigned __int16 *)(a1 + 80);
    if ( v46 )
    {
      v29 = *v15;
      v30 = 0;
      if ( !*v15 )
        goto LABEL_25;
      v31 = 0;
      v32 = a3 + 4;
      v33 = a1 - (_QWORD)a3;
      do
      {
        v34 = *(_QWORD *)((char *)v32 + v33 + 80);
        if ( v34 )
        {
          v53 = *(_QWORD *)((char *)v32 + v33 + 80);
          if ( v30 < *a3 )
          {
            v35 = v34 | *v32;
            if ( v35 != v34 )
            {
              v34 |= *v32;
              v53 = v35;
              v31 = 1;
            }
          }
          if ( LOWORD(v56[0]) <= v30 )
            LOWORD(v56[0]) = v52 + v30;
          *(_QWORD *)((char *)v32 + (char *)v56 - (char *)a3) |= v34;
        }
        ++v30;
        ++v32;
      }
      while ( v30 < v29 );
      v36 = v31 == 0;
      LOBYTE(CurrentIrql) = v50;
      if ( v36 )
      {
LABEL_25:
        ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v49, v22);
        if ( (unsigned __int8)CurrentIrql >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            KiRequestSoftwareInterrupt(CurrentPrcb, 2);
          return 0LL;
        }
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
          v24 = KeGetCurrentPrcb();
          v48 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v24, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v24, 0);
            do
              KeYieldProcessorEx(&v48);
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
            v26 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
            NextThread->ReadyTime = v26 + MEMORY[0xFFFFF78000000320];
          }
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(CurrentThread + 643) = 32;
          *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
          KiQueueReadyThread(CurrentPrcb, CurrentThread, v26);
          LOBYTE(v27) = CurrentIrql;
          if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v27) )
            goto LABEL_36;
        }
        else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        {
          goto LABEL_36;
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
LABEL_36:
        __writecr8((unsigned __int8)CurrentIrql);
        return 0LL;
      }
      v37 = v56[1];
      *(_OWORD *)v15 = v56[0];
      v38 = v56[2];
      *(_OWORD *)(a1 + 96) = v37;
      v39 = v56[3];
      *(_OWORD *)(a1 + 112) = v38;
      v40 = v56[4];
      *(_OWORD *)(a1 + 128) = v39;
      v41 = v56[5];
      *(_OWORD *)(a1 + 144) = v40;
      v42 = v56[6];
      *(_OWORD *)(a1 + 160) = v41;
      v43 = v56[8];
      *(_OWORD *)(a1 + 176) = v42;
      *(_OWORD *)(a1 + 192) = v56[7];
      v44 = v56[9];
      v45 = *(_QWORD *)&v56[10];
      *(_OWORD *)(a1 + 208) = v43;
      *(_OWORD *)(a1 + 224) = v44;
      *(_QWORD *)(a1 + 240) = v45;
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
        CurrentPrcb = v51;
        v14 = (volatile LONG *)(a1 + 64);
        LOBYTE(CurrentIrql) = v50;
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      LOWORD(v54) = *((_WORD *)i - 100);
      v19 = &v53;
      v53 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v54 + 88);
      if ( !v53 )
        v19 = v55;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v49, v19);
    }
    if ( !v46 )
    {
      _m_prefetchw((const void *)(a1 + 440));
      v20 = *(_DWORD *)(a1 + 440);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v11 | v20 & 0xC00003FF, v20);
      }
      while ( v21 != v20 );
    }
    goto LABEL_25;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8((unsigned __int8)CurrentIrql);
  return 3221225485LL;
}
