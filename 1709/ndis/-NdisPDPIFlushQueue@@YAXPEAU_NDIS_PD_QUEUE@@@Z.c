/*
 * XREFs of ?NdisPDPIFlushQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C0075F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall NdisPDPIFlushQueue(struct _NDIS_PD_QUEUE *a1)
{
  void (__fastcall **v1)(struct _NDIS_PD_QUEUE *); // rdi

  v1 = (void (__fastcall **)(struct _NDIS_PD_QUEUE *))a1->PDPlatformReserved[0];
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x69u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
  v1[3](a1);
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x6Au, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
}
