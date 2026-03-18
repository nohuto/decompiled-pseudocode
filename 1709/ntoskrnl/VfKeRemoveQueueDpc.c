/*
 * XREFs of VfKeRemoveQueueDpc @ 0x1407BA120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeRemoveQueueDpc(ULONG_PTR a1)
{
  VfUtilCheckKernelAddress(a1, 0x40uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeRemoveQueueDpc)(a1);
}
