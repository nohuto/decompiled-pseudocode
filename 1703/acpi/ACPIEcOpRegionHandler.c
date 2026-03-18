/*
 * XREFs of ACPIEcOpRegionHandler @ 0x1C004C480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIEcQueueEcIrp @ 0x1C004C510 (ACPIEcQueueEcIrp.c)
 */

__int64 __fastcall ACPIEcOpRegionHandler(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        void *a5,
        int a6,
        void (__fastcall *a7)(__int64),
        __int64 a8)
{
  if ( (int)ACPIEcQueueEcIrp(a6, (unsigned int)(a1 != 0) + 128, a3, a4, (__int64)a5, (__int64)a7, a8) < 0 )
  {
    memset(a5, 255, a4);
    a7(a8);
  }
  return 259LL;
}
