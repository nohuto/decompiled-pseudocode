/*
 * XREFs of KeSetAffinityProcess @ 0x140165A2C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140418DA0 (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x1406E0848 (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeFirstGroupAffinityEx @ 0x14002FE30 (KeFirstGroupAffinityEx.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140065434 (KiSetIdealNodeProcessByGroup.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     memset @ 0x140192D80 (memset.c)
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
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 CurrentThread; // rbx
  _KTHREAD *NextThread; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int16 v32; // r14
  unsigned __int16 v33; // r8
  char v34; // r12
  _QWORD *v35; // r9
  __int64 v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rax
  bool v39; // zf
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int64 v48; // rax
  char v49; // [rsp+20h] [rbp-E0h]
  signed __int32 v50; // [rsp+24h] [rbp-DCh] BYREF
  int v51; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v52; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+38h] [rbp-C8h]
  struct _KPRCB *v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h]
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h]
  _QWORD v58[2]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v59[11]; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(v59[0]) = 1310721;
  v58[0] = 0LL;
  v58[1] = 0LL;
  v49 = 0;
  v55 = 1LL;
  v52 = 0LL;
  v6 = 0;
  memset((char *)v59 + 4, 0, 0xA4uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v6 = 1;
    else
      v49 = 1;
  }
  KeFirstGroupAffinityEx(v58, a3);
  v7 = *a3;
  v8 = 0;
  v50 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = a3 + 4;
    do
    {
      if ( *v10 )
        _bittestandset(&v50, v9);
      ++v9;
      ++v10;
    }
    while ( v9 < v7 );
    v8 = v50;
  }
  v11 = v8 << 8;
  v56 = 0LL;
  v57 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = (volatile LONG *)(a1 + 64);
  v54 = CurrentPrcb;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v6 || (((*(_DWORD *)(a1 + 440) & 0xFFFFF00) - 1) & *(_DWORD *)(a1 + 440) & 0xFFFFF00) == 0 )
  {
    v15 = (unsigned __int16 *)(a1 + 80);
    if ( v49 )
    {
      v32 = *v15;
      v33 = 0;
      if ( !*v15 )
        goto LABEL_25;
      v34 = 0;
      v35 = a3 + 4;
      v36 = a1 - (_QWORD)a3;
      do
      {
        v37 = *(_QWORD *)((char *)v35 + v36 + 80);
        if ( v37 )
        {
          v56 = *(_QWORD *)((char *)v35 + v36 + 80);
          if ( v33 < *a3 )
          {
            v38 = v37 | *v35;
            if ( v38 != v37 )
            {
              v37 |= *v35;
              v56 = v38;
              v34 = 1;
            }
          }
          if ( LOWORD(v59[0]) <= v33 )
            LOWORD(v59[0]) = v55 + v33;
          *(_QWORD *)((char *)v35 + (char *)v59 - (char *)a3) |= v37;
        }
        ++v33;
        ++v35;
      }
      while ( v33 < v32 );
      v39 = v34 == 0;
      LOBYTE(CurrentIrql) = v53;
      if ( v39 )
      {
LABEL_25:
        ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v52, v22, v23);
        if ( (unsigned __int8)CurrentIrql >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            KiRequestSoftwareInterrupt(CurrentPrcb, 2);
          return 0LL;
        }
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v24, v25);
          v51 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v51);
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
            v29 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
            NextThread->ReadyTime = v29 + MEMORY[0xFFFFF78000000320];
          }
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(CurrentThread + 643) = 32;
          *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
          KiQueueReadyThread(CurrentPrcb, CurrentThread, v29, v30);
          LOBYTE(v31) = CurrentIrql;
          if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) )
            goto LABEL_28;
        }
        else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        {
LABEL_28:
          __writecr8((unsigned __int8)CurrentIrql);
          return 0LL;
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
        goto LABEL_28;
      }
      v40 = v59[1];
      *(_OWORD *)v15 = v59[0];
      v41 = v59[2];
      *(_OWORD *)(a1 + 96) = v40;
      v42 = v59[3];
      *(_OWORD *)(a1 + 112) = v41;
      v43 = v59[4];
      *(_OWORD *)(a1 + 128) = v42;
      v44 = v59[5];
      *(_OWORD *)(a1 + 144) = v43;
      v45 = v59[6];
      *(_OWORD *)(a1 + 160) = v44;
      v46 = v59[8];
      *(_OWORD *)(a1 + 176) = v45;
      *(_OWORD *)(a1 + 192) = v59[7];
      v47 = v59[9];
      v48 = *(_QWORD *)&v59[10];
      *(_OWORD *)(a1 + 208) = v46;
      *(_OWORD *)(a1 + 224) = v47;
      *(_QWORD *)(a1 + 240) = v48;
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
        CurrentPrcb = v54;
        v14 = (volatile LONG *)(a1 + 64);
        LOBYTE(CurrentIrql) = v53;
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      v19 = &v56;
      LOWORD(v57) = *((_WORD *)i - 100);
      v56 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v57 + 88);
      if ( !v56 )
        v19 = v58;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v52, v19);
    }
    if ( !v49 )
    {
      _m_prefetchw((const void *)(a1 + 440));
      v20 = *(_DWORD *)(a1 + 440);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v11 | v20 & 0xF00000FF, v20);
      }
      while ( v21 != v20 );
    }
    goto LABEL_25;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8((unsigned __int8)CurrentIrql);
  return 3221225485LL;
}
