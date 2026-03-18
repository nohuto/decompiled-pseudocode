/*
 * XREFs of KiSetAffinityThread @ 0x1400ABE08
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x1400AC100 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140019804 (KeSelectIdealProcessor.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400A88E8 (KiUpdateNodeAffinitizedFlag.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400AC020 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectNodeForAffinity @ 0x140128DE0 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14027B9A4 (EtwTraceThreadAffinity.c)
 */

int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // r12d
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int result; // eax
  __int64 v13; // rdi
  char v14; // r12
  int v15; // r8d
  volatile signed __int64 *v16; // rsi
  unsigned int v17; // r15d
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-34h]
  unsigned int v24; // [rsp+40h] [rbp-30h]
  volatile signed __int64 *v25; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]

  v3 = 0;
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v23 = *(_DWORD *)(a1 + 588);
  v24 = *(_DWORD *)(a1 + 196);
  *(_WORD *)(a1 + 560) = *((_WORD *)a3 + 4);
  *(_QWORD *)(a1 + 552) = *a3;
  v7 = *(unsigned int *)(a1 + 196);
  v8 = KiProcessorBlock[v7];
  if ( !KiPrcbInGroupAffinity(v8, (__int64)a3) )
  {
    v19 = KeSelectNodeForAffinity(a3);
    v27 = 0LL;
    LOWORD(v27) = *((_WORD *)a3 + 4);
    v26 = *a3 & *(_QWORD *)(v19 + 136);
    LODWORD(v7) = KeSelectIdealProcessor(v19, (__int64)&v26, 0LL);
    *(_DWORD *)(a1 + 196) = v7;
    v8 = KiProcessorBlock[(unsigned int)v7];
  }
  result = *(_DWORD *)(a1 + 116);
  v13 = 0LL;
  v21 = 0LL;
  if ( (result & 8) == 0 )
  {
    v14 = KiAcquireThreadStateLock(a1, &v21, (volatile signed __int32 **)&v25);
    *(_WORD *)(a1 + 584) = *((_WORD *)a3 + 4);
    *(_QWORD *)(a1 + 576) = *a3;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      a3 = &v26;
      LOWORD(v27) = *(_WORD *)(a1 + 584);
      v26 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v7;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v8, a1);
    }
    v13 = v21;
    LOBYTE(v15) = v14;
    v16 = v25;
    result = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)a3, v15, v21, (__int64)v25, a2);
    v3 = result;
    if ( v13 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
      v13 = v21;
      v16 = v25;
    }
    if ( v16 )
    {
      _InterlockedAnd64(v16, 0LL);
      v13 = v21;
    }
  }
  v17 = *(_DWORD *)(a1 + 588);
  v18 = *(_DWORD *)(a1 + 196);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
  {
    v20 = *(unsigned int *)(v13 + 36);
    result = KeGetPcr()->Prcb.Number;
    if ( result != (_DWORD)v20 )
    {
      LOBYTE(v9) = 2;
      result = KiSendSoftwareInterrupt(v20, v9);
    }
  }
  if ( (xmmword_140401150 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v23, v17);
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v24, v18);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, a3, v10, v11);
  return result;
}
