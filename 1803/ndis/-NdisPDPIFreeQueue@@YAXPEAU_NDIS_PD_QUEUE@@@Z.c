/*
 * XREFs of ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00F8E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C00F738C (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z @ 0x1C00F9C2C (-ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00F9C58 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall NdisPDPIFreeQueue(struct _NDIS_PD_QUEUE *a1)
{
  char *v1; // rdi
  __int64 v3; // rsi

  v1 = (char *)a1->PDPlatformReserved[1];
  v3 = *((_QWORD *)v1 + 4);
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x24u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
  ndisCleanupPDQTracker((struct NDIS_PD_QUEUE_TRACKER *)v1);
  (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 80) + 16LL))(a1);
  ndisCleanupPDQAWM((struct NDIS_PD_QUEUE_AWM_STATE *)(v1 + 56));
  NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'(v1);
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x25u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)a1);
}
