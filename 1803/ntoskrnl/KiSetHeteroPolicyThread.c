/*
 * XREFs of KiSetHeteroPolicyThread @ 0x140248B08
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x140240150 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14024016C (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x14076B0D0 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400A6D68 (KiPrepareReadyThreadForRescheduling.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A7488 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140248000 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14024826C (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v10; // rdx
  unsigned int v11; // esi
  char v12; // al
  bool v13; // sf
  int v14; // eax
  __int64 v15; // rdi
  char v16; // cl
  unsigned __int64 v17; // rax
  char v18; // cl
  int v19; // ecx
  int v20; // r14d
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // rdi
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _KTHREAD *NextThread; // r15
  bool v26; // zf
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 Number; // rcx
  struct _KPRCB *v32; // rbx
  __int64 CurrentThread; // rdi
  struct _KPRCB *v34; // r14
  __int64 v35; // r14
  __int64 v36; // r8
  unsigned int v37; // r8d
  struct _KPRCB *v39; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v40; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+40h] [rbp-30h]
  int v42; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v43; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int64 *v44; // [rsp+50h] [rbp-20h] BYREF
  int v45; // [rsp+58h] [rbp-18h]
  __int64 v46; // [rsp+60h] [rbp-10h] BYREF
  __int64 v47; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp+40h]
  int v49; // [rsp+C0h] [rbp+50h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v49);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(unsigned int *)(a1 + 588);
  v48 = *(_DWORD *)(a1 + 588);
  v41 = *(_DWORD *)(a1 + 196);
  if ( a3 )
  {
    v11 = *(unsigned __int8 *)(a1 + 125);
    v12 = (a2 ^ *(_BYTE *)(a1 + 126)) & 0x7F;
    v13 = ((v12 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v12;
    if ( v13 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( a4 )
  {
LABEL_8:
    v11 = a2;
    goto LABEL_9;
  }
  v11 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_9:
  if ( v11 == 8 )
    v11 = KiDefaultHeteroCpuPolicy;
  if ( !KeHeteroSystem )
  {
    *(_BYTE *)(a1 + 126) &= ~0x80u;
    v11 = 0;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v11 )
  {
    KiReleaseThreadLockSafe(a1);
    __writecr8(CurrentIrql);
    return v11;
  }
  v14 = v11;
  v15 = KiProcessorBlock[v10];
  if ( (int)v11 >= 5 )
    v14 = KiConvertDynamicHeteroPolicy(a1, v10, KiProcessorBlock[v10]);
  KiGenerateHeteroSets(*(_QWORD *)(v15 + 192), *(_QWORD *)(a1 + 576), v14, &v46, &v47, &v43);
  if ( (v46 & *(_QWORD *)(v15 + 200)) == 0 )
  {
    v16 = *(_BYTE *)(v15 + 209);
    _BitScanForward64(&v17, __ROR8__(v46, v16));
    v18 = v17 + v16;
    LODWORD(v17) = *(_DWORD *)(a1 + 116);
    v19 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v15 + 208) + (v18 & 0x3F)];
    v45 = v19;
    *(_DWORD *)(a1 + 588) = v19;
    if ( (v17 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v19;
  }
  v40 = 0LL;
  v20 = 0;
  v21 = KiAcquireThreadStateLock(a1, (__int64 *)&v39, (volatile signed __int32 **)&v44);
  v22 = v39;
  *(_BYTE *)(a1 + 125) = v11;
  if ( v21 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue((__int64)v22, (__int64)v44, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64 *)&v40);
  }
  else
  {
    v23 = (unsigned int)v21 - 2;
    if ( v21 == 2 )
    {
      if ( (v22->GroupSetMember & v43) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v22 = v39;
          NextThread = v39->NextThread;
          v26 = NextThread == 0LL;
          if ( !NextThread )
          {
            KiSelectNextThread(v39, &v40);
            v26 = 1;
          }
          LOBYTE(v20) = v26;
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v22 = v39;
        }
      }
    }
    else if ( v21 == 3 && (v22->GroupSetMember & v43) == 0 )
    {
      KiSelectNextThread(v22, &v40);
      v24 = v40;
      v23 = a1 + 216;
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = v24;
      v40 = (_QWORD *)(a1 + 216);
    }
  }
  v27 = *(_DWORD *)(a1 + 588);
  v28 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v23, (__int64)v22, v44);
  KiReleaseThreadLockSafe(a1);
  if ( v20 )
  {
    LODWORD(v29) = KeGetPcr()->Prcb.Number;
    Number = v39->Number;
    if ( (_DWORD)v29 != (_DWORD)Number )
    {
      LOBYTE(v29) = 2;
      KiSendSoftwareInterrupt(Number, v29);
    }
  }
  if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v48, v27);
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v41, v28);
  }
  v32 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v32, &v40, v30);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)v32->CurrentThread;
    if ( v32->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v32->CurrentThread, 0);
      v34 = KeGetCurrentPrcb();
      v42 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v34, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v32->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v34, 0);
        do
          KeYieldProcessorEx(&v42);
        while ( v32->PrcbLock );
      }
      v35 = (__int64)v32->NextThread;
      v32->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v32, CurrentThread, 0LL);
      _enable();
      v32->CurrentThread = (_KTHREAD *)v35;
      if ( *(_BYTE *)(v35 + 388) == 1 )
      {
        v36 = (unsigned int)(*(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436));
        *(_DWORD *)(v35 + 132) = v36 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(v35 + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v32, CurrentThread, v36);
      LOBYTE(v37) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, v35, v37) )
        goto LABEL_53;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_53:
      __writecr8(CurrentIrql);
      return v11;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_53;
  }
  if ( v32->NextThread && !v32->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v32, 2);
  return v11;
}
