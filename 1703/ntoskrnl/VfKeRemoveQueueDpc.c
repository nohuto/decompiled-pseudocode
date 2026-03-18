/*
 * XREFs of VfKeRemoveQueueDpc @ 0x140778240
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeRemoveQueueDpc(unsigned __int64 a1)
{
  VfUtilCheckKernelAddress(a1, 64LL);
  return ((__int64 (__fastcall *)(unsigned __int64))pXdvKeRemoveQueueDpc)(a1);
}
