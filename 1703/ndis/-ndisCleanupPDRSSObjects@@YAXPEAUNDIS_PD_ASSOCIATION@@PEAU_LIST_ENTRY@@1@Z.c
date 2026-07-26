/*
 * XREFs of ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00EDB44
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00EC230 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00ED160 (-NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B4FFC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00ED9EC (-ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00EDA88 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisCleanupPDRSSObjects(struct NDIS_PD_ASSOCIATION *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  _LIST_ENTRY **v6; // rdi
  _LIST_ENTRY *v7; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY **v10; // rdi
  _LIST_ENTRY *v11; // rbx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *v13; // rax
  KLockHolder v14; // [rsp+20h] [rbp-28h] BYREF

  v14.m_State = Unlocked;
  v14.m_Lock = (KPushLockBase *)qword_1C00926D0;
  v14.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v14);
  v6 = (_LIST_ENTRY **)((char *)a1 + 144);
  while ( *v6 != (_LIST_ENTRY *)v6 )
  {
    v7 = *v6;
    Flink = (*v6)->Flink;
    if ( (_LIST_ENTRY **)(*v6)->Blink != v6 || Flink->Blink != v7 )
      __fastfail(3u);
    *v6 = Flink;
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
  v10 = (_LIST_ENTRY **)((char *)a1 + 112);
  while ( *v10 != (_LIST_ENTRY *)v10 )
  {
    v11 = *v10;
    v12 = (*v10)->Flink;
    if ( (_LIST_ENTRY **)(*v10)->Blink != v10 || v12->Blink != v11 )
      __fastfail(3u);
    *v10 = v12;
    v12->Blink = (_LIST_ENTRY *)v10;
    v11->Flink = 0LL;
    KLockHolder::ReleaseExclusive(&v14);
    ndisCleanupPDCounter((struct NDIS_PD_COUNTER *)&v11[-1]);
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
