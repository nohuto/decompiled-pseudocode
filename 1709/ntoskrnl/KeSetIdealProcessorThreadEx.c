/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x1400A6CA4
 * Callers:
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1400E5800 (KeSetIdealProcessorThreadByNumber.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  int v10; // r14d
  int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // esi
  int v15; // eax
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 CurrentIrql; // [rsp+88h] [rbp+20h]

  v6 = -1073741823;
  v7 = KiProcessorBlock[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = *(_DWORD *)(a1 + 588);
  v9 = *(_DWORD *)(a1 + 196);
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 588);
    if ( (unsigned int)KiPrcbInGroupAffinity(v7, a1 + 576) )
    {
      KiAcquireThreadStateLock(a1, &v16, (volatile signed __int32 **)&v18);
      v11 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 588) = a2;
      if ( (v11 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = a2;
      KiUpdateSharedReadyQueueAffinityThread(v7, a1);
      if ( v16 )
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
      if ( v18 )
        _InterlockedAnd64(v18, 0LL);
      v6 = 0;
    }
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 196);
    v15 = KiPrcbInGroupAffinity(v7, a1 + 552);
    if ( v15 )
      *(_DWORD *)(a1 + 196) = a2;
    v6 = v15 == 0 ? 0xC0000001 : 0;
  }
  v12 = *(unsigned int *)(a1 + 588);
  v13 = *(_DWORD *)(a1 + 196);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (xmmword_140401150 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v8, v12);
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v9, v13);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( a3 )
    *a3 = v10;
  return v6;
}
