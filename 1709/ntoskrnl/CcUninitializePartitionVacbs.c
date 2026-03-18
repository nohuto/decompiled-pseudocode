/*
 * XREFs of CcUninitializePartitionVacbs @ 0x1401E2584
 * Callers:
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x140115A18 (CcSetVacbInFreeList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MmFreeSystemCacheReserveView @ 0x1406E242C (MmFreeSystemCacheReserveView.c)
 */

_QWORD *__fastcall CcUninitializePartitionVacbs(__int64 a1)
{
  _QWORD **v2; // rsi
  _QWORD *result; // rax
  ULONG_PTR *v4; // r14
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  KIRQL v7; // bl
  int v8; // eax

  v2 = (_QWORD **)(a1 + 840);
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    v4 = result - 2;
    v5 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    MmFreeSystemCacheReserveView(*v4);
    *v4 = 0LL;
    v7 = KeAcquireQueuedSpinLock(4uLL);
    CcSetVacbInFreeList(a1, v4, 0);
    KeReleaseQueuedSpinLock(4uLL, v7);
    v8 = *(_DWORD *)(a1 + 856);
    if ( !v8 )
      KeBugCheckEx(0x34u, 0x614uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 856) = v8 - 1;
  }
  if ( *(_DWORD *)(a1 + 856) )
    KeBugCheckEx(0x34u, 0x61CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
