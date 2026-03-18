/*
 * XREFs of KiSetHeteroPolicyThread @ 0x140150BC8
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x140202AF0 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x140202B78 (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1405D6290 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D14D0 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D15AC (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14020A308 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14020A548 (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
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
  unsigned __int64 *v22; // r8
  __int64 v23; // rdi
  _QWORD *v24; // rax
  unsigned int v25; // r12d
  unsigned int v26; // r13d
  __int64 v27; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // r14
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v34; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-30h]
  int v36; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v37; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int64 *v38; // [rsp+50h] [rbp-20h] BYREF
  int v39; // [rsp+58h] [rbp-18h]
  __int64 v40; // [rsp+60h] [rbp-10h] BYREF
  _BYTE v41[8]; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+40h]
  int v43; // [rsp+C0h] [rbp+50h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v43 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v43);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(unsigned int *)(a1 + 588);
  v42 = *(_DWORD *)(a1 + 588);
  v35 = *(_DWORD *)(a1 + 196);
  if ( a3 )
  {
    v10 = *(unsigned __int8 *)(a1 + 125);
    v11 = (a2 ^ *(_BYTE *)(a1 + 126)) & 0x7F;
    v12 = ((v11 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v11;
    if ( v12 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( a4 )
  {
LABEL_5:
    v10 = a2;
    goto LABEL_6;
  }
  v10 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_6:
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
  KiGenerateHeteroSets(
    *(_QWORD *)(v14 + 192),
    *(_QWORD *)(a1 + 576),
    result,
    (unsigned int)&v40,
    (__int64)v41,
    (__int64)&v37);
  if ( (v40 & *(_QWORD *)(v14 + 200)) == 0 )
  {
    v15 = *(_BYTE *)(v14 + 209);
    _BitScanForward64(&v16, __ROR8__(v40, v15));
    v17 = v16 + v15;
    LODWORD(v16) = *(_DWORD *)(a1 + 116);
    v18 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v14 + 208) + (v17 & 0x3F)];
    v39 = v18;
    *(_DWORD *)(a1 + 588) = v18;
    if ( (v16 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v18;
  }
  v34 = 0LL;
  v19 = 0;
  v20 = KiAcquireThreadStateLock(a1, &v33, (volatile signed __int32 **)&v38);
  v23 = v33;
  *(_BYTE *)(a1 + 125) = v10;
  if ( v20 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v23, (__int64)v38, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64 *)&v34);
  }
  else if ( v20 == 2 )
  {
    if ( (*(_QWORD *)(v23 + 200) & v37) != 0 )
      goto LABEL_33;
    if ( *(_BYTE *)(a1 + 388) != 2 )
    {
      *(_BYTE *)(a1 + 112) |= 8u;
      goto LABEL_31;
    }
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
    v23 = v33;
    if ( !*(_QWORD *)(v33 + 16) )
    {
      KiSelectNextThread(v33, (unsigned __int64 *)&v34, v22);
      v19 = 1;
    }
  }
  else if ( v20 == 3 && (*(_QWORD *)(v23 + 200) & v37) == 0 )
  {
    KiSelectNextThread(v23, (unsigned __int64 *)&v34, v22);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
    v24 = v34;
    *(_BYTE *)(a1 + 388) = 7;
    *(_QWORD *)(a1 + 216) = v24;
    v34 = (_QWORD *)(a1 + 216);
LABEL_31:
    v23 = v33;
  }
LABEL_33:
  v25 = *(_DWORD *)(a1 + 588);
  v26 = *(_DWORD *)(a1 + 196);
  if ( v23 )
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 48), 0LL);
  if ( v38 )
    _InterlockedAnd64(v38, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v19 )
  {
    LODWORD(v21) = KeGetPcr()->Prcb.Number;
    v27 = *(unsigned int *)(v33 + 36);
    if ( (_DWORD)v21 != (_DWORD)v27 )
    {
      LOBYTE(v21) = 2;
      KiSendSoftwareInterrupt(v27, v21);
    }
  }
  if ( (xmmword_140401150 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v42, v25);
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v35, v26);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v34, (__int64)v22);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    return v10;
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v36);
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
      v31 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v31 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(CurrentThread + 643) = 32;
    *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v31);
    LOBYTE(v32) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v32) )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
  {
LABEL_54:
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
  }
LABEL_55:
  __writecr8(CurrentIrql);
  return v10;
}
