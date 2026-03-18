/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesProcess @ 0x1401815B8
 * Callers:
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiUpdateThreadCpuSets @ 0x140181670 (KiUpdateThreadCpuSets.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 */

void __fastcall KiUpdateThreadCpuSetAffinitiesProcess(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // r15d
  __int64 updated; // rbp
  __int64 v9; // rdx
  unsigned int v10; // r11d
  __int64 v11; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = (volatile signed __int32 *)(i - 95);
    v12 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64(v6 + 16, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v12);
      while ( *((_QWORD *)v6 + 8) );
    }
    v7 = *((_DWORD *)v6 + 147);
    updated = KiUpdateThreadCpuSets(i - 95, a2);
    KiReleaseThreadLockSafe((__int64)(i - 95));
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(i - 95, 1350LL, v7, v10);
    if ( updated )
    {
      v11 = *(unsigned int *)(updated + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v11 )
      {
        LOBYTE(v9) = 2;
        KiSendSoftwareInterrupt(v11, v9);
      }
    }
  }
}
