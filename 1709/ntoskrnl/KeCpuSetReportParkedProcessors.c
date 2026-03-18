/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x14011F5C8
 * Callers:
 *     PpmParkReportMask @ 0x1400901C0 (PpmParkReportMask.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011F4EC (KeSetSystemAllowedCpuSets.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F888 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x14011FBD8 (RtlWriteAcquireTickLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

char __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebp
  unsigned __int8 v3; // r12
  int v5; // eax
  unsigned __int16 v6; // di
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v16; // r8
  char result; // al
  __int64 CurrentThread; // rdi
  bool v19; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // r12
  __int64 v31; // rcx
  unsigned __int64 v32; // r11
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v38; // [rsp+24h] [rbp-104h]
  _QWORD *v39; // [rsp+28h] [rbp-100h] BYREF
  int v40; // [rsp+30h] [rbp-F8h]
  _DWORD v41[43]; // [rsp+34h] [rbp-F4h] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0;
  v38 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = qword_140401408[v6];
      if ( a1 )
      {
        if ( v6 >= *a1 )
          v23 = 0LL;
        else
          v23 = *(_QWORD *)&a1[4 * v6 + 4];
        v9 = v8 ^ v23;
        *(_QWORD *)&v41[2 * v6 + 3] = v9;
        if ( KiNonParkedCpuSets[v6] == v9 )
          goto LABEL_63;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v6];
        *(_QWORD *)&v41[2 * v6 + 3] = v9;
      }
      v10 = v8 & v9;
      v5 = 1;
      v38 = 1;
      v11 = v8 ^ v8 & v9;
      if ( (v8 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v12, v10);
          v41[1] = v12;
          v10 ^= 1LL << v12;
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
        }
        while ( v10 );
        v5 = 1;
      }
      if ( !v11 )
        goto LABEL_11;
      v24 = qword_1404023C8[2 * v6];
      v25 = v24 & -(__int64)((v24 & v9) != 0 && ((v8 ^ v24) & v9) != 0);
      v26 = (v8 ^ v24) & -(__int64)((v24 & v9) != 0 && ((v8 ^ v24) & v9) != 0);
      v27 = v8 ^ KiSystemAllowedCpuSets[v6];
      v39 = (_QWORD *)v26;
      v28 = v9 & v27;
      if ( v27 )
      {
        if ( v28 )
        {
          v29 = v11 & v27;
          v11 ^= v29;
          if ( v29 )
          {
            v30 = (__int64)v39;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v31, v29);
              v32 = v28;
              v29 &= ~(1LL << v31);
              v40 = v31;
              if ( _bittest64(&v25, (unsigned int)v31) )
              {
                v32 = v25 & v28;
                if ( (v25 & v28) == 0 )
                  v32 = v28;
              }
              else if ( (v28 & v30) != 0 )
              {
                v32 = v28 & v30;
              }
              *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v31)) = v32;
            }
            while ( v29 );
            v26 = v30;
          }
        }
      }
      if ( v11 )
      {
        v33 = v8 & ~v28;
        if ( (v33 & v9) == 0 )
          v33 = v8;
        v34 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v35, v11);
          v36 = v33;
          v11 &= ~(1LL << v35);
          v40 = v35;
          if ( _bittest64(&v25, (unsigned int)v35) )
          {
            v36 = v25 & v33;
            if ( (v25 & v33 & v9) == 0 )
              v36 = v33;
          }
          else if ( (v33 & v26 & v9) != 0 )
          {
            v36 = v33 & v26;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v34 + v35)) = v36;
        }
        while ( v11 );
      }
LABEL_63:
      v5 = v38;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v39 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v41[2 * v14 + 3] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v39);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v39, v16);
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
      v41[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(v41);
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
        v21 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v21 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v21);
      LOBYTE(v22) = v3;
      v19 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v22) == 0;
    }
    else
    {
      v19 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v19 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
