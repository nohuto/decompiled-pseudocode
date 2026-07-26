/*
 * XREFs of ?NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00EC020
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00EE0F4 (-ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall NdisPDDetachQueueFromEC(struct _NDIS_PD_QUEUE *a1)
{
  struct NDIS_PD_QUEUE_TRACKER *v1; // rbx
  KLockHolder v2; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct NDIS_PD_QUEUE_TRACKER *)*((_QWORD *)a1 + 3);
  if ( *((_QWORD *)v1 + 33) )
  {
    v2.m_State = Unlocked;
    v2.m_Region.m_Entered = 0;
    v2.m_Lock = (KPushLockBase *)qword_1C00926D0;
    KLockHolder::AcquireExclusive(&v2);
    ndisPDDetachQueueFromEC(v1);
    KLockHolder::~KLockHolder(&v2);
  }
}
