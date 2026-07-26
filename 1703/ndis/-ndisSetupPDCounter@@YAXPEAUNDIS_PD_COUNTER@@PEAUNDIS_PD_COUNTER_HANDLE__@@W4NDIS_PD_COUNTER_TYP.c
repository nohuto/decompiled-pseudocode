/*
 * XREFs of ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C00EEA30
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00EC230 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00EC6C0 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisSetupPDCounter(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  KPushLockBase *v5; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  KLockHolder v11; // [rsp+20h] [rbp-28h] BYREF

  v5 = (KPushLockBase *)qword_1C00926D0;
  v11.m_State = Unlocked;
  *(_BYTE *)(a1 + 60) = a5;
  *(_QWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  v11.m_Lock = v5;
  v11.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v11);
  v8 = *(_QWORD **)(a4 + 104);
  if ( *v8 != a4 + 96 )
    __fastfail(3u);
  *(_QWORD *)a1 = a4 + 96;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(a4 + 104) = a1;
  if ( a5 )
  {
    v9 = (_QWORD *)(a1 + 16);
    v10 = *(_QWORD **)(a4 + 120);
    if ( *v10 != a4 + 112 )
      __fastfail(3u);
    *v9 = a4 + 112;
    v9[1] = v10;
    *v10 = v9;
    *(_QWORD *)(a4 + 120) = v9;
  }
  KLockHolder::~KLockHolder(&v11);
}
