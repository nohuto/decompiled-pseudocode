/*
 * XREFs of VfKeInsertQueueDpc @ 0x1408273C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeInsertQueueDpc(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  VfUtilCheckKernelAddress(a1, 0x40uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvKeInsertQueueDpc)(a1, a2, a3);
}
