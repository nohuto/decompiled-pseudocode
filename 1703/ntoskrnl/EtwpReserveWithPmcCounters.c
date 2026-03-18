/*
 * XREFs of EtwpReserveWithPmcCounters @ 0x1402548E8
 * Callers:
 *     EtwTraceContextSwap @ 0x140086BB0 (EtwTraceContextSwap.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall EtwpReserveWithPmcCounters(__int64 a1, __int16 a2, int a3, __int64 a4, _QWORD *a5, int a6)
{
  __int64 v6; // r13
  int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned __int8 CurrentIrql; // bl
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v14; // rcx

  v6 = *(_QWORD *)(a1 + 848);
  v7 = *(_DWORD *)(v6 + 44);
  v8 = 8 * (unsigned __int8)v7 + 16;
  v9 = v8 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  v11 = EtwpReserveTraceBuffer((int *)a1, v9, a4, a5, a6);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = *a5;
    *(_WORD *)(v11 + 4) = v9;
    *(_DWORD *)v11 = (unsigned __int8)a6 | ((unsigned __int8)v7 << 8) | 0xC0110000;
    *(_WORD *)(v11 + 6) = a2;
    v14 = *(_QWORD *)(v6 + 8LL * KeGetPcr()->Prcb.Number + 48);
    if ( v14 )
      ((void (__fastcall *)(__int64, __int64))off_14033B4E8[0])(v14, v11 + 16);
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
