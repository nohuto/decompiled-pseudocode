/*
 * XREFs of PortpAsyncCompletion @ 0x1C0048CC0
 * Callers:
 *     <none>
 * Callees:
 *     PortpCompleteRequestIrp @ 0x1C0048DC0 (PortpCompleteRequestIrp.c)
 */

__int64 __fastcall PortpAsyncCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  bool v5; // cl
  __int64 v6; // rax
  __int64 v7; // rbx
  KIRQL Irql; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a3 + 16);
  v5 = 1;
  if ( _InterlockedExchange64((volatile __int64 *)(v3 + 104), 0LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v3 + 184) + 32LL) = 0LL;
  }
  else
  {
    IoAcquireCancelSpinLock(&Irql);
    v6 = *(_QWORD *)(v3 + 184);
    v7 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    v5 = v7 == 0;
  }
  if ( v5 )
    PortpCompleteRequestIrp(*(_QWORD *)(a3 + 16), a3);
  return 3221225494LL;
}
