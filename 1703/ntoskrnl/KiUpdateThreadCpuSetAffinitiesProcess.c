/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesProcess @ 0x140202EC0
 * Callers:
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadCpuSets @ 0x140202FAC (KiUpdateThreadCpuSets.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 */

void __fastcall KiUpdateThreadCpuSetAffinitiesProcess(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // r15d
  __int64 updated; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
  {
    v14 = 0;
    v5 = (volatile signed __int32 *)(i - 95);
    while ( _interlockedbittestandset64(v5 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *((_QWORD *)v5 + 8) );
    }
    v6 = *((_DWORD *)v5 + 147);
    updated = KiUpdateThreadCpuSets(i - 95, a2);
    v10 = *((unsigned int *)v5 + 147);
    v11 = updated;
    *((_QWORD *)v5 + 8) = 0LL;
    if ( (xmmword_1403E4010 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(i - 95, 1350LL, v6, v10);
    if ( v11 )
    {
      v12 = *(unsigned int *)(v11 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v12 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v8) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v12, v8, v9, v10);
      }
    }
  }
}
