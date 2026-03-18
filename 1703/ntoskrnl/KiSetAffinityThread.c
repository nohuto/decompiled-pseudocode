/*
 * XREFs of KiSetAffinityThread @ 0x14001A918
 * Callers:
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 * Callees:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14001AB48 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectNodeForAffinity @ 0x14001AC28 (KeSelectNodeForAffinity.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400433E4 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KeSelectIdealProcessor @ 0x1400654C0 (KeSelectIdealProcessor.c)
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     KiPrcbInGroupAffinity @ 0x140113B68 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140113B90 (KiUpdateNodeAffinitizedFlag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140253C7C (EtwTraceThreadAffinity.c)
 */

__int64 __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // r15d
  unsigned int v7; // r13d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r15
  int v14; // r8d
  __int64 v15; // r14
  volatile signed __int64 *v16; // rdi
  unsigned int v17; // r14d
  unsigned int v18; // edi
  __int64 result; // rax
  __int64 v20; // rax
  unsigned int v21; // r10d
  struct _KPRCB *CurrentPrcb; // rax
  int v23; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-2Ch]
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int64 *v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]

  v3 = 0;
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_DWORD *)(a1 + 196);
  v24 = *(_DWORD *)(a1 + 588);
  *(_WORD *)(a1 + 560) = *((_WORD *)a3 + 4);
  *(_QWORD *)(a1 + 552) = *a3;
  v8 = *(unsigned int *)(a1 + 196);
  v9 = KiProcessorBlock[v8];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v9, a3) )
  {
    v20 = KeSelectNodeForAffinity(a3);
    v28 = 0LL;
    LOWORD(v28) = *((_WORD *)a3 + 4);
    v27 = *a3 & *(_QWORD *)(v20 + 136);
    LODWORD(v8) = KeSelectIdealProcessor(v20, &v27, 0LL);
    *(_DWORD *)(a1 + 196) = v8;
    v9 = KiProcessorBlock[(unsigned int)v8];
  }
  v25 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v13 = KiAcquireThreadStateLock(a1, &v25, &v26);
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
      *(_DWORD *)(a1 + 588) = v8;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v9, a1);
    }
    v15 = v25;
    LOBYTE(v14) = v13;
    v16 = v26;
    v3 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)a3, v14, v25, (__int64)v26, a2);
    if ( v15 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
      v16 = v26;
    }
    if ( v16 )
      _InterlockedAnd64(v16, 0LL);
  }
  v17 = *(_DWORD *)(a1 + 588);
  v18 = *(_DWORD *)(a1 + 196);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
  {
    v21 = *(_DWORD *)(v25 + 36);
    if ( KeGetPcr()->Prcb.Number != v21 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v10) = 2;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(v21, v10, v11, v12);
    }
  }
  result = (unsigned int)xmmword_1403E4010;
  if ( (xmmword_1403E4010 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v24, v17);
    result = (unsigned int)xmmword_1403E4010;
    if ( (xmmword_1403E4010 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v7, v18);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, a3);
  return result;
}
