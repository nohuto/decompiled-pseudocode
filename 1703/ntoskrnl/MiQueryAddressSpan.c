/*
 * XREFs of MiQueryAddressSpan @ 0x1400D1790
 * Callers:
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     EtwTraceShouldYieldProcessor @ 0x140253C08 (EtwTraceShouldYieldProcessor.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edi
  _KPROCESS *Process; // rsi
  __int64 v8; // r14
  unsigned __int8 v9; // r12
  int v10; // eax
  __int64 v11; // rbx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // r14d
  volatile int DpcRequestSummary; // edx
  __int64 v18; // r9
  _KTHREAD *NextThread; // rax
  LONG *v20; // rax
  LONG *v21; // rax
  unsigned int v23; // esi
  LONG *SharedVm; // rax
  unsigned __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int16 *v26; // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  _KPROCESS *v28; // [rsp+68h] [rbp-50h]
  unsigned int v29; // [rsp+C0h] [rbp+8h] BYREF
  int v30; // [rsp+C8h] [rbp+10h]
  char v31; // [rsp+D0h] [rbp+18h] BYREF
  int v32; // [rsp+D8h] [rbp+20h] BYREF

  v30 = 1;
  v27 = 0LL;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v28 = Process;
  v8 = (__int64)&Process[1].IdealNode[12];
  v26 = &Process[1].IdealNode[12];
  v9 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  v10 = MiQueryAddressState(a2, v9, a3, Process, 0, &v27, &v29, &v25, &v31);
  v11 = v29;
  *(_DWORD *)(a1 + 32) = v10;
  if ( (_DWORD)v11 )
    *(_DWORD *)(a1 + 36) = MmProtectToValue[v11];
  else
    *(_DWORD *)(a1 + 36) = 0;
  v12 = v25;
  v13 = v25;
  if ( v25 >> 12 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
    goto LABEL_20;
  while ( (unsigned int)MiQueryAddressState(v12, v9, a3, Process, 0, &v27, &v32, &v25, &v31) == *(_DWORD *)(a1 + 32)
       && v32 == (_DWORD)v11 )
  {
    v13 = v25;
    if ( (++v6 & 0x1F) == 0 )
    {
      v20 = (*(_BYTE *)(v8 + 192) & 7) == 2 ? &dword_14036D4C0 : (LONG *)(v8 + 200);
      if ( (*v20 & 0x40000000) != 0 )
        goto LABEL_28;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    if ( (DpcRequestSummary & 1) == 0 )
    {
      v18 = 0LL;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v23 = 2;
        goto LABEL_25;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v23 = 3;
        goto LABEL_25;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v23 = 4;
        goto LABEL_25;
      }
LABEL_11:
      if ( DpcWatchdogCount <= 7 )
      {
        v8 = (__int64)v26;
        goto LABEL_13;
      }
      if ( !(_DWORD)v18 )
      {
LABEL_33:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
        _enable();
        v23 = 0;
        goto LABEL_25;
      }
      goto LABEL_38;
    }
    v18 = 1LL;
    if ( DpcTimeCount <= 7 )
      goto LABEL_11;
    if ( CurrentPrcb->QuantumEnd )
    {
      v23 = 1;
      goto LABEL_25;
    }
LABEL_38:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v23 = 5;
    }
    else
    {
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
        goto LABEL_33;
      v23 = 6;
    }
LABEL_25:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v23, DpcWatchdogCount, DpcTimeCount, v18);
    v8 = (__int64)v26;
    if ( v23 )
    {
LABEL_28:
      SharedVm = MiGetSharedVm(v8);
      ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
      __writecr8(v9);
      v9 = MiLockWorkingSetShared(v8);
    }
LABEL_13:
    v12 = v25;
    if ( v25 >> 12 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
      goto LABEL_20;
    LODWORD(v11) = v29;
    Process = v28;
  }
  v30 = 0;
LABEL_20:
  v21 = MiGetSharedVm(v8);
  ExReleaseSpinLockSharedFromDpcLevel(v21);
  __writecr8(v9);
  if ( v30 == 1 )
    return ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) + 4096;
  else
    return v13;
}
