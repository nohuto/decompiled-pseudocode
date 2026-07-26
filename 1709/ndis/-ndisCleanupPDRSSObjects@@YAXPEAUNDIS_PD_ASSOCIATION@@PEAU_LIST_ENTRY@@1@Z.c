/*
 * XREFs of ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00F7124
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00F5800 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00F6740 (-NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00F6FCC (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00F7068 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisCleanupPDRSSObjects(struct NDIS_PD_ASSOCIATION *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  char *v6; // rdi
  _LIST_ENTRY *v7; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rax
  char *v10; // rdi
  _LIST_ENTRY *v11; // rbx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *v13; // rax
  KLockHolder v14; // [rsp+20h] [rbp-28h] BYREF

  v14.m_State = Unlocked;
  v14.m_Lock = (KPushLockBase *)qword_1C00987F8;
  v14.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v14);
  v6 = (char *)a1 + 144;
  while ( *(char **)v6 != v6 )
  {
    v7 = *(_LIST_ENTRY **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (Flink = v7->Flink, v7->Flink->Blink != v7) )
      __fastfail(3u);
    *(_QWORD *)v6 = Flink;
    Flink->Blink = (_LIST_ENTRY *)v6;
    v7->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v14);
    ndisCleanupPDQTracker((struct NDIS_PD_QUEUE_TRACKER ***)&v7[-1]);
    Blink = a2->Blink;
    if ( Blink->Flink != a2 )
      __fastfail(3u);
    v7->Flink = a2;
    v7->Blink = Blink;
    Blink->Flink = v7;
    a2->Blink = v7;
    KLockHolder::AcquireExclusive(&v14);
  }
  v10 = (char *)a1 + 112;
  while ( *(char **)v10 != v10 )
  {
    v11 = *(_LIST_ENTRY **)v10;
    if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || (v12 = v11->Flink, v11->Flink->Blink != v11) )
      __fastfail(3u);
    *(_QWORD *)v10 = v12;
    v12->Blink = (_LIST_ENTRY *)v10;
    v11->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v14);
    ndisCleanupPDCounter((struct NDIS_PD_COUNTER ***)&v11[-1]);
    v13 = a3->Blink;
    if ( v13->Flink != a3 )
      __fastfail(3u);
    v11->Flink = a3;
    v11->Blink = v13;
    v13->Flink = v11;
    a3->Blink = v11;
    KLockHolder::AcquireExclusive(&v14);
  }
  KLockHolder::~KLockHolder(&v14);
}
