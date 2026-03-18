/*
 * XREFs of VfKeInsertQueueDpc @ 0x140778180
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VfKeInsertQueueDpc(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  VfUtilCheckKernelAddress(a1, 64LL);
  return ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))pXdvKeInsertQueueDpc)(a1, a2, a3);
}
