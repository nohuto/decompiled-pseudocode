/*
 * XREFs of ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00F9EC8
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00F83F0 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00F9330 (-NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 * Callees:
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00F7274 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C00F738C (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z @ 0x1C00F9C2C (-ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z.c)
 */

void __fastcall ndisFreePDRSSObjects(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v5; // rcx
  char *v6; // rsi
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *v8; // rcx

  while ( 1 )
  {
    Flink = a1->Flink;
    if ( a1->Flink == a1 )
      break;
    if ( Flink->Blink != a1 || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    a1->Flink = v5;
    v6 = (char *)&Flink[-1];
    v5->Blink = a1;
    Flink->Flink = 0LL;
    ndisCleanupPDQAWM((struct NDIS_PD_QUEUE_AWM_STATE *)&Flink[2].Blink);
    if ( v6 )
      NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'(v6);
  }
  while ( 1 )
  {
    v7 = a2->Flink;
    if ( a2->Flink == a2 )
      break;
    if ( v7->Blink != a2 || (v8 = v7->Flink, v7->Flink->Blink != v7) )
      __fastfail(3u);
    a2->Flink = v8;
    v8->Blink = a2;
    v7->Flink = 0LL;
    if ( v7 != (_LIST_ENTRY *)16 )
      NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)&v7[-1]);
  }
}
