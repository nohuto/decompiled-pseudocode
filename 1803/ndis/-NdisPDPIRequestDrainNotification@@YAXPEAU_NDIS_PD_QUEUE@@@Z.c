/*
 * XREFs of ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00F9420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall NdisPDPIRequestDrainNotification(struct _NDIS_PD_QUEUE *a1)
{
  void *v1; // rdx
  __int64 v3; // rdi

  v1 = a1->PDPlatformReserved[1];
  v3 = *((_QWORD *)v1 + 4);
  if ( !*((_QWORD *)v1 + 8) )
    ndisBugCheckEx(0x23uLL, 2uLL, (ULONG_PTR)a1->PDPlatformReserved[1], *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL));
  *((_BYTE *)v1 + 61) = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)v1 + 14, 1, 0) )
  {
    if ( (unsigned __int8)byte_1C0099624 >= 5u )
      WPP_SF_q(0x3Eu, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099624 >= 5u )
      WPP_SF_q(0x3Du, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
    (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 80) + 80LL))(a1);
  }
}
