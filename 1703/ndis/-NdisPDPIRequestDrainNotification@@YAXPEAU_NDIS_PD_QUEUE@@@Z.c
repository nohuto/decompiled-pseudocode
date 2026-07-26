/*
 * XREFs of ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00ED250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 */

void __fastcall NdisPDPIRequestDrainNotification(struct _NDIS_PD_QUEUE *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_QWORD *)(v1 + 32);
  if ( !*(_QWORD *)(v1 + 64) )
    ndisBugCheckEx(0x23uLL, 2uLL, *((_QWORD *)a1 + 3), *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL));
  *(_BYTE *)(v1 + 61) = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 56), 1, 0) )
  {
    if ( (unsigned __int8)byte_1C0092624 >= 5u )
      WPP_SF_q(0x3Eu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092624 >= 5u )
      WPP_SF_q(0x3Du, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
    (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 80) + 80LL))(a1);
  }
}
