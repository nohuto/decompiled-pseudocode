/*
 * XREFs of EtwpReserveWithPmcCounters @ 0x1402B025C
 * Callers:
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x140172980 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400F0B50 (EtwpReserveTraceBuffer.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall EtwpReserveWithPmcCounters(
        __int64 a1,
        __int16 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        __int16 a6)
{
  __int64 v6; // r13
  int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v14; // rcx

  v6 = *(_QWORD *)(a1 + 1000);
  v7 = *(_DWORD *)(v6 + 44);
  v8 = 8 * (unsigned __int8)v7 + 16;
  v9 = v8 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  v11 = EtwpReserveTraceBuffer((unsigned int *)a1, v9, a4, a5, a6);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = *a5;
    *(_WORD *)(v11 + 4) = v9;
    *(_DWORD *)v11 = (unsigned __int8)a6 | ((unsigned __int8)v7 << 8) | 0xC0110000;
    *(_WORD *)(v11 + 6) = a2;
    v14 = *(_QWORD *)(v6 + 8LL * KeGetPcr()->Prcb.Number + 48);
    if ( v14 )
      ((void (__fastcall *)(__int64, unsigned __int64))off_1403988B8[0])(v14, v11 + 16);
    else
      memset((void *)(v11 + 16), 0, 8LL * (unsigned __int8)v7);
    if ( CurrentIrql < 2u )
      __writecr8(CurrentIrql);
    return v12 + v8;
  }
  else
  {
    if ( CurrentIrql < 2u )
      __writecr8(CurrentIrql);
    return 0LL;
  }
}
