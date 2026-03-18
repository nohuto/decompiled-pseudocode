/*
 * XREFs of KiSetHeteroPolicyThread @ 0x14020467C
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x1401FCCE0 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401FCD58 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeUpdateThreadHeteroPolicy @ 0x140418980 (KeUpdateThreadHeteroPolicy.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140203EA8 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x140203F48 (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rdx
  unsigned int v10; // esi
  char v11; // al
  bool v12; // sf
  __int64 result; // rax
  __int64 v14; // rdi
  char v15; // cl
  unsigned __int64 v16; // rax
  char v17; // cl
  int v18; // ecx
  int v19; // r14d
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // r9
  struct _KPRCB *v23; // rdi
  __int64 v24; // r8
  _QWORD *v25; // rax
  unsigned int v26; // r13d
  unsigned int v27; // r12d
  __int64 Number; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KPRCB *v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 CurrentThread; // rdi
  __int64 NextThread; // r14
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // r8d
  struct _KPRCB *v38; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v39; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v40; // [rsp+40h] [rbp-30h]
  int v41; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v42; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int64 *v43; // [rsp+50h] [rbp-20h] BYREF
  int v44; // [rsp+58h] [rbp-18h]
  __int64 v45; // [rsp+60h] [rbp-10h] BYREF
  __int64 v46; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v47; // [rsp+B0h] [rbp+40h]
  int v48; // [rsp+C0h] [rbp+50h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v48 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v48);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(unsigned int *)(a1 + 588);
  v47 = *(_DWORD *)(a1 + 588);
  v40 = *(_DWORD *)(a1 + 196);
  if ( a3 )
  {
    v10 = *(unsigned __int8 *)(a1 + 125);
    v11 = (*(_BYTE *)(a1 + 126) ^ a2) & 0x7F;
    v12 = ((v11 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v11;
    if ( v12 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( a4 )
  {
LABEL_7:
    v10 = a2;
    goto LABEL_8;
  }
  v10 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_8:
  if ( v10 == 8 )
    v10 = KiDefaultHeteroCpuPolicy;
  if ( !KeHeteroSystem )
  {
    *(_BYTE *)(a1 + 126) &= ~0x80u;
    v10 = 0;
  }
  result = v10;
  if ( *(unsigned __int8 *)(a1 + 125) == v10 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    __writecr8(CurrentIrql);
    return result;
  }
  v14 = KiProcessorBlock[v9];
  if ( (int)v10 >= 5 )
    LODWORD(result) = KiConvertDynamicHeteroPolicy(a1, v9, KiProcessorBlock[v9]);
  KiGenerateHeteroSets(*(_QWORD *)(v14 + 192), *(_QWORD *)(a1 + 576), result, &v45, &v46, &v42);
  if ( (v45 & *(_QWORD *)(v14 + 200)) == 0 )
  {
    v15 = *(_BYTE *)(v14 + 209);
    _BitScanForward64(&v16, __ROR8__(v45, v15));
    v17 = v16 + v15;
    LODWORD(v16) = *(_DWORD *)(a1 + 116);
    v18 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v14 + 208) + (v17 & 0x3F)];
    v44 = v18;
    *(_DWORD *)(a1 + 588) = v18;
    if ( (v16 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v18;
  }
  v39 = 0LL;
  v19 = 0;
  v20 = KiAcquireThreadStateLock(a1, (__int64 *)&v38, (volatile signed __int32 **)&v43);
  v23 = v38;
  v24 = 1LL;
  *(_BYTE *)(a1 + 125) = v10;
  if ( v20 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue((__int64)v23, (__int64)v43, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64 *)&v39);
    goto LABEL_32;
  }
  if ( v20 == 2 )
  {
    if ( (v23->GroupSetMember & v42) == 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xBu);
        v23 = v38;
        if ( !v38->NextThread )
        {
          KiSelectNextThread(v38, (struct _LIST_ENTRY **)&v39, (_QWORD *)1);
          v24 = 1LL;
          v19 = 1;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 112) |= 8u;
        v23 = v38;
      }
    }
  }
  else if ( v20 == 3 && (v23->GroupSetMember & v42) == 0 )
  {
    KiSelectNextThread(v23, (struct _LIST_ENTRY **)&v39, (_QWORD *)1);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v25 = v39;
    v23 = v38;
    *(_BYTE *)(a1 + 388) = 7;
    *(_QWORD *)(a1 + 216) = v25;
    v39 = (_QWORD *)(a1 + 216);
LABEL_32:
    v24 = 1LL;
  }
  v26 = *(_DWORD *)(a1 + 588);
  v27 = *(_DWORD *)(a1 + 196);
  if ( v23 )
    _InterlockedAnd64((volatile signed __int64 *)&v23->PrcbLock, 0LL);
  if ( v43 )
    _InterlockedAnd64(v43, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v19 )
  {
    LODWORD(v21) = KeGetPcr()->Prcb.Number;
    Number = v38->Number;
    if ( (_DWORD)v21 != (_DWORD)Number )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v21) = 2;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(Number, v21, 1LL, v22);
    }
  }
  if ( (xmmword_1403E4010 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v47, v26);
    if ( (xmmword_1403E4010 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v40, v27);
  }
  v30 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v30, &v39, v24, v22);
  if ( CurrentIrql >= 2u )
  {
    if ( v30->NextThread && !v30->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v30, 2);
    return v10;
  }
  CurrentThread = (__int64)v30->CurrentThread;
  if ( v30->NextThread )
  {
    KiAbProcessContextSwitch((__int64)v30->CurrentThread, 0, v31, v32);
    v41 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v30->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v41);
      while ( v30->PrcbLock );
    }
    NextThread = (__int64)v30->NextThread;
    v30->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)v30, CurrentThread, 0LL);
    _enable();
    v30->CurrentThread = (_KTHREAD *)NextThread;
    if ( *(_BYTE *)(NextThread + 388) == 1 )
    {
      v35 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
      *(_DWORD *)(NextThread + 132) = v35 + MEMORY[0xFFFFF78000000320];
    }
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 32;
    *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
    KiQueueReadyThread(v30, CurrentThread, v35, v36);
    LOBYTE(v37) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v37) )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
  {
LABEL_54:
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
  }
LABEL_55:
  __writecr8(CurrentIrql);
  return v10;
}
