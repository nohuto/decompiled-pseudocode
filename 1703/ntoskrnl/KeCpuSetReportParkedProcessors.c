/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14001A140
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14001A064 (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x140046D50 (PpmParkReportMask.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14001A410 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x14001B1AC (RtlWriteAcquireTickLock.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

unsigned __int8 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r15d
  unsigned __int8 v3; // bp
  int v5; // eax
  unsigned __int16 v6; // di
  int v7; // esi
  __int64 v8; // rbp
  __int64 v9; // r8
  _QWORD *v10; // r13
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned __int16 i; // dx
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  volatile unsigned __int8 result; // al
  __int64 v18; // rdx
  _KTHREAD *CurrentThread; // rdi
  bool v20; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  _QWORD *v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r11
  _QWORD *v32; // r15
  __int64 v33; // r9
  int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v38; // [rsp+24h] [rbp-114h]
  unsigned int v39; // [rsp+28h] [rbp-110h]
  _QWORD *v40; // [rsp+30h] [rbp-108h] BYREF
  int v41; // [rsp+38h] [rbp-100h]
  _DWORD v42[45]; // [rsp+3Ch] [rbp-FCh] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v39 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v38 = 0;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = qword_1403E42B8[v6];
      if ( !a1 )
        break;
      if ( v6 >= *a1 )
        v23 = 0LL;
      else
        v23 = *(_QWORD *)&a1[4 * v6 + 4];
      v9 = v8 ^ v23;
      *(_QWORD *)&v42[2 * v6 + 5] = v9;
      if ( KiNonParkedCpuSets[v6] != v9 )
        goto LABEL_7;
      v5 = v38;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        goto LABEL_13;
      }
    }
    v9 = KiNonParkedCpuSets[v6];
    *(_QWORD *)&v42[2 * v6 + 5] = v9;
LABEL_7:
    v5 = 1;
    v10 = KiCpuSetAffinitiesShadow;
    v11 = v8 & v9;
    v38 = 1;
    v12 = v8 ^ v8 & v9;
    v40 = KiCpuSetAffinitiesShadow;
    if ( (v8 & v9) != 0 )
    {
      do
      {
        _BitScanForward64(&v13, v11);
        v42[1] = v13;
        v11 ^= 1LL << v13;
        v10[(unsigned int)((v7 << 6) + v13)] = 1LL << v13;
      }
      while ( v11 );
      v5 = 1;
    }
    if ( v12 )
    {
      v24 = qword_1403E6548[2 * v6];
      v25 = v8 ^ v24;
      if ( ((v8 ^ v24) & v9) == 0 || (v24 & v9) == 0 )
      {
        v24 = 0LL;
        v25 = 0LL;
      }
      v26 = v8 ^ KiSystemAllowedCpuSets[v6];
      v27 = v9 & v26;
      if ( v26 )
      {
        if ( v27 )
        {
          v28 = v12 & v26;
          v12 ^= v28;
          if ( v28 )
          {
            v29 = v40;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v30, v28);
              v31 = v27;
              v28 &= ~(1LL << v30);
              v41 = v30;
              if ( _bittest64(&v24, (unsigned int)v30) )
              {
                if ( (v24 & v27) != 0 )
                  v31 = v24 & v27;
              }
              else if ( (v25 & v27) != 0 )
              {
                v31 = v25 & v27;
              }
              v29[(unsigned int)((v7 << 6) + v30)] = v31;
            }
            while ( v28 );
            v2 = v39;
          }
        }
      }
      if ( v12 )
      {
        v32 = v40;
        v33 = v8 & ~v27;
        if ( (v33 & v9) == 0 )
          v33 = v8;
        v34 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v35, v12);
          v36 = v33;
          v12 &= ~(1LL << v35);
          v41 = v35;
          if ( _bittest64(&v24, (unsigned int)v35) )
          {
            if ( (v24 & v33 & v9) != 0 )
              v36 = v24 & v33;
          }
          else if ( (v25 & v33 & v9) != 0 )
          {
            v36 = v25 & v33;
          }
          v32[(unsigned int)(v34 + v35)] = v36;
        }
        while ( v12 );
        v2 = v39;
      }
      v5 = 1;
    }
    goto LABEL_11;
  }
LABEL_13:
  v40 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v15] = *(_QWORD *)&v42[2 * v15 + 5] )
      v15 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v40);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList(CurrentPrcb, &v40);
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v18) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, v18);
      }
    }
  }
  else
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v42[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(v42);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = v3;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v22) = v3;
      v20 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v22) == 0;
    }
    else
    {
      v20 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v20 )
    {
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
