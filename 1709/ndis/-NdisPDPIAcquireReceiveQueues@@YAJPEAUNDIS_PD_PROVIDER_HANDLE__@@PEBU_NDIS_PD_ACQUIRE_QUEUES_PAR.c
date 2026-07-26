/*
 * XREFs of ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00F5800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C0076458 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_SF_qddS @ 0x1C007763C (WPP_SF_qddS.c)
 *     WPP_SF_qddd @ 0x1C00776E4 (WPP_SF_qddd_ea_1C00776E4.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00F45B4 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00F4684 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00F7124 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00F72D8 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00F7DF0 (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C00F800C (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00F80C4 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAcquireReceiveQueues(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3,
        unsigned int *a4,
        struct _NDIS_PD_QUEUE_PARAMETERS *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  char v8; // si
  const wchar_t *v12; // rdx
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  NDIS_PD_COUNTER_HANDLE__ *v19; // rsi
  const struct _NDIS_PD_QUEUE_PARAMETERS *v20; // r15
  NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  _QWORD *v22; // rax
  NDIS_PD_QUEUE_TRACKER *v23; // rax
  NDIS_PD_QUEUE_TRACKER *v24; // rcx
  struct NDIS_PD_COUNTER *v26; // [rsp+20h] [rbp-60h]
  unsigned __int8 v27[8]; // [rsp+28h] [rbp-58h]
  char v28; // [rsp+40h] [rbp-40h]
  int v29; // [rsp+44h] [rbp-3Ch]
  unsigned int v30; // [rsp+48h] [rbp-38h]
  int v31; // [rsp+4Ch] [rbp-34h]
  struct _LIST_ENTRY v32; // [rsp+50h] [rbp-30h] BYREF
  KLockHolder v33; // [rsp+60h] [rbp-20h] BYREF
  _LIST_ENTRY **v34; // [rsp+D0h] [rbp+50h]

  v34 = (_LIST_ENTRY **)a3;
  v8 = 0;
  v28 = 0;
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
  {
    v12 = L"PASS_THROUGH";
    v13 = *a4;
    if ( !*((_BYTE *)a1 + 88) )
      v12 = L" ";
    WPP_SF_qddS(0x26u, (__int64)v12, (__int64)a1, v13, *a6, v12);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
            *((_QWORD *)a1 + 9),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    if ( v16 < 0 )
      goto LABEL_52;
    v14 = 0LL;
    if ( *a4 )
    {
      do
      {
        (*(_QWORD **)((char *)&a5->CounterHandle + (unsigned int)v14 * *a7))[5] = a1;
        v17 = (unsigned int)v14;
        v14 = (unsigned int)(v14 + 1);
        v15 = (__int64)v34[v17];
        *(_QWORD *)(*(_QWORD *)(v15 + 24) + 40LL) = a1;
      }
      while ( (unsigned int)v14 < *a4 );
      v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    goto LABEL_46;
  }
  v33.m_Lock = (KPushLockBase *)qword_1C00987F8;
  v33.m_State = Unlocked;
  v33.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v33);
  if ( !*((_BYTE *)a1 + 89) )
  {
    *((_BYTE *)a1 + 89) = 1;
    v28 = 1;
    KLockHolder::~KLockHolder(&v33);
    if ( a2->Header.Type == 0x80 && a2->Header.Revision == 1 && a2->Header.Size >= 8u && (a2->Flags & 0xFFFFFFFE) == 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
              *((_QWORD *)a1 + 9),
              a2,
              a3,
              a4,
              a5,
              a6,
              a7);
      if ( v16 < 0 )
      {
LABEL_50:
        v33.m_Lock = (KPushLockBase *)qword_1C00987F8;
        v33.m_State = Unlocked;
        v33.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v33);
        *((_BYTE *)a1 + 89) = 0;
        goto LABEL_51;
      }
      v14 = *a7;
      v31 = v14;
      if ( (unsigned int)v14 >= 0x38 && (v14 & 0xFFFFFFF8) == v14 )
      {
        v30 = *a4;
        v18 = (unsigned int)v14 * (unsigned __int64)*a4;
        if ( v18 <= 0xFFFFFFFF && (unsigned int)v18 <= *a6 )
        {
          v15 = 0LL;
          v16 = 0;
          v29 = 0;
          if ( !*a4 )
            goto LABEL_52;
          while ( 1 )
          {
            v19 = 0LL;
            v32.Flink = *v34;
            v20 = (struct _NDIS_PD_QUEUE_PARAMETERS *)((char *)a5 + (unsigned int)(v15 * v14));
            if ( v20->Header.Type != 0x80
              || v20->Header.Revision != 1
              || v20->Header.Size < 0x38u
              || (v20->Flags & 0xFFFFFFFE) != 0
              || v20->QueueType != PDQueueTypeReceive )
            {
              break;
            }
            if ( v20->CounterHandle )
            {
              PoolWithTag = (NDIS_PD_COUNTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
              v19 = PoolWithTag;
              if ( PoolWithTag )
              {
                *((_QWORD *)PoolWithTag + 4) = 0LL;
                *((_QWORD *)PoolWithTag + 5) = 0LL;
                *((_QWORD *)PoolWithTag + 6) = 0LL;
                *((_DWORD *)PoolWithTag + 14) = 0;
                *((_BYTE *)PoolWithTag + 60) = 0;
                *((_QWORD *)PoolWithTag + 8) = 0LL;
                *((_DWORD *)PoolWithTag + 22) = 0;
                *((_QWORD *)PoolWithTag + 1) = 0LL;
                *(_QWORD *)PoolWithTag = 0LL;
                *((_QWORD *)PoolWithTag + 3) = 0LL;
                *((_QWORD *)PoolWithTag + 2) = 0LL;
                v22 = PoolWithTag + 18;
                v22[1] = v22;
                *v22 = v22;
                *((_DWORD *)v19 + 24) = 0;
                *((_QWORD *)v19 + 13) = 0LL;
                *((_DWORD *)v19 + 28) = 0;
                *((_QWORD *)v19 + 15) = 0LL;
              }
              else
              {
                v19 = 0LL;
              }
              if ( !v19 )
              {
LABEL_42:
                v16 = -1073741670;
                goto LABEL_48;
              }
              *((_DWORD *)v19 + 16) = v29;
              *((_DWORD *)v19 + 17) = ndisGetNextPDCounterId();
              v16 = ndisPcwSetRssInstanceSuffix((struct NDIS_PD_COUNTER *)v19);
              if ( v16 < 0 )
              {
                NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v19);
LABEL_41:
                v8 = 1;
                goto LABEL_46;
              }
              ndisSetupPDCounter(
                (struct NDIS_PD_COUNTER *)v19,
                v20->CounterHandle,
                PDCounterTypeReceiveQueue,
                (struct NDIS_PD_ASSOCIATION *)a1,
                1);
              v20->CounterHandle = v19;
            }
            v23 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
            if ( v23 )
              v24 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v23);
            else
              v24 = 0LL;
            if ( !v24 )
              goto LABEL_42;
            ndisSetupPDQTracker(
              v24,
              (struct _NDIS_PD_QUEUE *)v32.Flink,
              v20,
              (struct NDIS_PD_ASSOCIATION *)a1,
              (struct NDIS_PD_COUNTER *)v19,
              1u,
              a2->Flags & 1);
            ++v34;
            v15 = (unsigned int)(v29 + 1);
            v29 = v15;
            if ( (unsigned int)v15 >= v30 )
              goto LABEL_41;
            LODWORD(v14) = v31;
          }
        }
      }
      v16 = -1073741776;
      goto LABEL_48;
    }
    v16 = -1073741811;
LABEL_46:
    if ( v16 >= 0 )
      goto LABEL_52;
    if ( !v8 )
    {
LABEL_49:
      if ( !v28 )
        goto LABEL_52;
      goto LABEL_50;
    }
LABEL_48:
    v33.m_Lock = (KPushLockBase *)&v33;
    *(_QWORD *)&v33.m_State = &v33;
    v32.Blink = &v32;
    v32.Flink = &v32;
    ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)a1, (struct _LIST_ENTRY *)&v33, &v32);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 10) + 32LL))(*((_QWORD *)a1 + 9));
    ndisFreePDRSSObjects((struct _LIST_ENTRY *)&v33, &v32);
    goto LABEL_49;
  }
  v16 = -1073741808;
LABEL_51:
  KLockHolder::~KLockHolder(&v33);
LABEL_52:
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
  {
    *(_DWORD *)v27 = v16;
    LODWORD(v26) = *a6;
    WPP_SF_qddd(v15, v14, (__int64)a1, *a4, v26, *(_QWORD *)v27);
  }
  return (unsigned int)v16;
}
