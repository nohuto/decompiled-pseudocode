/*
 * XREFs of VfKeRemoveQueueDpc @ 0x140827480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140813F1C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeRemoveQueueDpc(ULONG_PTR a1)
{
  VfUtilCheckKernelAddress(a1, 0x40uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeRemoveQueueDpc)(a1);
}
