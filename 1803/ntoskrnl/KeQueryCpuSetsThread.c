/*
 * XREFs of KeQueryCpuSetsThread @ 0x14024689C
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x140132C78 (KiGetThreadCpuSetMaskPointer.c)
 */

__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // ebp
  __int64 ThreadCpuSetMaskPointer; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v5 = 20;
  ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v13);
  if ( v13 <= 0x14 )
    v5 = v13;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( v5 )
  {
    v9 = ThreadCpuSetMaskPointer - (_QWORD)a2;
    v10 = v5;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v9);
      ++a2;
      --v10;
    }
    while ( v10 );
  }
  KiReleaseThreadLockSafe(a1);
  __writecr8(CurrentIrql);
  return v13;
}
