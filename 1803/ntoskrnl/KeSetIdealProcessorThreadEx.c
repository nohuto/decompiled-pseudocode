/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x14003ABC0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x1400C1EC0 (KeSetIdealProcessorThreadByNumber.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // esi
  unsigned int v6; // ebp
  __int64 v7; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v9; // edi
  unsigned int v10; // r12d
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // r11d
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 CurrentIrql; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v6 = -1073741823;
  v7 = KiProcessorBlock[(unsigned int)a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v19);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_DWORD *)(a1 + 588);
  v10 = *(_DWORD *)(a1 + 196);
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 588);
    if ( (unsigned int)KiPrcbInGroupAffinity(v7) )
    {
      KiAcquireThreadStateLock(a1, &v20, &v18);
      v12 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 588) = v3;
      if ( (v12 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = v3;
      KiUpdateSharedReadyQueueAffinityThread(v7, a1);
      KiReleaseThreadStateLock(v13, v20, v18);
      v6 = 0;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 196);
    if ( (unsigned int)KiPrcbInGroupAffinity(v7) )
    {
      v6 = 0;
      *(_DWORD *)(a1 + 196) = v3;
    }
  }
  v14 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadLockSafe(a1);
  if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v9, v15);
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v10, v14);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( a3 )
    *a3 = v11;
  return v6;
}
