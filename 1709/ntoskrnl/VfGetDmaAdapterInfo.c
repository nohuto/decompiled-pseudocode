/*
 * XREFs of VfGetDmaAdapterInfo @ 0x1407ABB90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x1407AE128 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfGetDmaAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64))ViGetRealDmaOperation(a1, 128LL);
  return RealDmaOperation(a1, a2);
}
