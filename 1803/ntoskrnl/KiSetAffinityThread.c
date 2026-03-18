/*
 * XREFs of KiSetAffinityThread @ 0x140135C70
 * Callers:
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140040610 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x14006B868 (KeSelectIdealProcessor.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KeSelectNodeForAffinity @ 0x1400CCDDC (KeSelectNodeForAffinity.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140135EA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1402AF470 (EtwTraceThreadAffinity.c)
 */

int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r12d
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // r14
  char v12; // r15
  int v13; // r8d
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int result; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-3Ch]
  unsigned int v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h]
  volatile signed __int64 *v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v21 = 0;
  v25 = a2;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v22 = *(_DWORD *)(a1 + 588);
  v23 = *(_DWORD *)(a1 + 196);
  *(_WORD *)(a1 + 560) = *((_WORD *)a3 + 4);
  *(_QWORD *)(a1 + 552) = *a3;
  v7 = *(unsigned int *)(a1 + 196);
  v8 = *(_DWORD *)(a1 + 196);
  v9 = KiProcessorBlock[v7];
  if ( !KiPrcbInGroupAffinity(v9, (__int64)a3) )
  {
    v19 = KeSelectNodeForAffinity((__int64)a3);
    v28 = 0LL;
    LOWORD(v28) = *((_WORD *)a3 + 4);
    v27 = *a3 & *(_QWORD *)(v19 + 136);
    LODWORD(v7) = KeSelectIdealProcessor(v19, (__int64)&v27, 0LL);
    v8 = v7;
    *(_DWORD *)(a1 + 196) = v7;
    v9 = KiProcessorBlock[(unsigned int)v7];
  }
  v10 = *(_DWORD *)(a1 + 116);
  v11 = 0LL;
  v24 = 0LL;
  if ( (v10 & 8) == 0 )
  {
    v12 = KiAcquireThreadStateLock(a1, &v24, (volatile signed __int32 **)&v26);
    *(_WORD *)(a1 + 584) = *((_WORD *)a3 + 4);
    *(_QWORD *)(a1 + 576) = *a3;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      a3 = &v27;
      LOWORD(v28) = *(_WORD *)(a1 + 584);
      v27 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v7;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v9, a1);
    }
    LOBYTE(v13) = v12;
    v11 = v24;
    v14 = v26;
    v4 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)a3, v13, v24, (__int64)v26, v25);
    KiReleaseThreadStateLock(v15, v11, v14);
    v8 = *(_DWORD *)(a1 + 196);
  }
  v16 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v4 )
  {
    v20 = *(unsigned int *)(v11 + 36);
    result = KeGetPcr()->Prcb.Number;
    if ( result != (_DWORD)v20 )
    {
      LOBYTE(v18) = 2;
      result = KiSendSoftwareInterrupt(v20, v18);
    }
  }
  if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v22, v16);
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v23, v8);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, a3);
  return result;
}
