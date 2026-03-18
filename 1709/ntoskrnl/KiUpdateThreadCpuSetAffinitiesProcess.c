/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesProcess @ 0x140153ED0
 * Callers:
 *     KeSetCpuSetsProcess @ 0x140153D04 (KeSetCpuSetsProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSets @ 0x140153F78 (KiUpdateThreadCpuSets.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 */

void __fastcall KiUpdateThreadCpuSetAffinitiesProcess(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // r15d
  __int64 updated; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
  {
    v12 = 0;
    v5 = (volatile signed __int32 *)(i - 95);
    while ( _interlockedbittestandset64(v5 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *((_QWORD *)v5 + 8) );
    }
    v6 = *((_DWORD *)v5 + 147);
    updated = KiUpdateThreadCpuSets(i - 95, a2);
    v9 = *((unsigned int *)v5 + 147);
    v10 = updated;
    *((_QWORD *)v5 + 8) = 0LL;
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(i - 95, 1350LL, v6, v9);
    if ( v10 )
    {
      v11 = *(unsigned int *)(v10 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v11 )
      {
        LOBYTE(v8) = 2;
        KiSendSoftwareInterrupt(v11, v8);
      }
    }
  }
}
