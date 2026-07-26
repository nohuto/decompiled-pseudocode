/*
 * XREFs of ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00ED9EC
 * Callers:
 *     ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00ECC20 (-NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00EDB44 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisCleanupPDCounter(struct NDIS_PD_COUNTER *a1)
{
  struct NDIS_PD_COUNTER *v2; // rcx
  struct NDIS_PD_COUNTER **v3; // rax
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00926D0;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = *(struct NDIS_PD_COUNTER **)a1;
  v3 = (struct NDIS_PD_COUNTER **)*((_QWORD *)a1 + 1);
  if ( *(struct NDIS_PD_COUNTER **)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *((_QWORD *)v2 + 1) = v3;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  KLockHolder::~KLockHolder(&v4);
}
