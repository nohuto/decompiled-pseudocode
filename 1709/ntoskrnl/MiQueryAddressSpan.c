/*
 * XREFs of MiQueryAddressSpan @ 0x14003EDF0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x14027B8F8 (EtwTraceShouldYieldProcessor.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // r10
  _KPROCESS *Process; // rbp
  char v11; // al
  LONG *p_ProfileListHead; // rbx
  KIRQL v13; // r12
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  int v23; // r8d
  _KTHREAD *NextThread; // rax
  __int64 v25; // rbx
  LONG *v26; // rax
  volatile LONG *v27; // rax
  unsigned int v29; // esi
  LONG *SharedVm; // rax
  unsigned __int64 v31; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int16 *v33; // [rsp+60h] [rbp-58h]
  _KPROCESS *v34; // [rsp+68h] [rbp-50h]
  unsigned int v36; // [rsp+C8h] [rbp+10h] BYREF
  char v37; // [rsp+D0h] [rbp+18h] BYREF
  int v38; // [rsp+D8h] [rbp+20h] BYREF

  v4 = 0;
  v6 = a3;
  v7 = *(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32);
  v32 = 0LL;
  v9 = (v7 << 12) + 4096;
  if ( a3 > v9 || !a3 )
    v6 = v9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = (__int64)Process[2].Header.WaitListHead.Blink & 7;
  v34 = Process;
  v33 = &Process[1].IdealNode[12];
  if ( v11 == 2 )
    p_ProfileListHead = &dword_140389780;
  else
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  v13 = ExAcquireSpinLockShared(p_ProfileListHead);
  if ( p_ProfileListHead[1] )
    _InterlockedExchange(p_ProfileListHead + 1, 0);
  v14 = MiQueryAddressState(a2, v6 - 1, v13, a4, Process, 0, &v32, &v36, &v31, &v37);
  v15 = a1;
  v16 = v36;
  *(_DWORD *)(a1 + 32) = v14;
  if ( (_DWORD)v16 )
    *(_DWORD *)(a1 + 36) = MmProtectToValue[v16];
  else
    *(_DWORD *)(a1 + 36) = 0;
  v17 = v31;
  v18 = v31;
  if ( v31 < v6 )
  {
    while ( 1 )
    {
      if ( (unsigned int)MiQueryAddressState(v17, v6 - 1, v13, a4, Process, 0, &v32, &v38, &v31, &v37) != *(_DWORD *)(v15 + 32)
        || v38 != (_DWORD)v16 )
      {
        goto LABEL_25;
      }
      v18 = v31;
      if ( (++v4 & 0x1F) == 0 )
      {
        v25 = (__int64)&Process[1].IdealNode[12];
        v26 = ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2
            ? &dword_140389780
            : (LONG *)&Process[2].ProfileListHead;
        if ( (*v26 & 0x40000000) != 0 )
          goto LABEL_33;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
        break;
      v23 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_18;
      if ( CurrentPrcb->QuantumEnd )
      {
        v29 = 1;
        goto LABEL_29;
      }
LABEL_45:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v29 = 5;
      }
      else
      {
        if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
          goto LABEL_39;
        v29 = 6;
      }
LABEL_29:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v29, DpcWatchdogCount, DpcTimeCount);
      if ( v29 )
      {
        v25 = (__int64)v33;
LABEL_33:
        SharedVm = MiGetSharedVm(v25);
        ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
        __writecr8(v13);
        v13 = MiLockWorkingSetShared(v25);
      }
LABEL_19:
      v17 = v31;
      if ( v31 >= v6 )
        goto LABEL_25;
      LODWORD(v16) = v36;
      Process = v34;
      v15 = a1;
    }
    v23 = 0;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v29 = 2;
      goto LABEL_29;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v29 = 3;
      goto LABEL_29;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v29 = 4;
      goto LABEL_29;
    }
LABEL_18:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_19;
    if ( !v23 )
    {
LABEL_39:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler();
      _enable();
      v29 = 0;
      goto LABEL_29;
    }
    goto LABEL_45;
  }
LABEL_25:
  if ( (v33[96] & 7) == 2 )
    v27 = &dword_140389780;
  else
    v27 = (volatile LONG *)(v33 + 100);
  ExReleaseSpinLockSharedFromDpcLevel(v27);
  __writecr8(v13);
  return v18;
}
