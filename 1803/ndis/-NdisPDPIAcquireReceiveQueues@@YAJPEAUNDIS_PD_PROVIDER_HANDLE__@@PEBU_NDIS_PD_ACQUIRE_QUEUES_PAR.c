/*
 * XREFs of ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00F83F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C0076C08 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_SF_qddS @ 0x1C0077DEC (WPP_SF_qddS.c)
 *     WPP_SF_qddd @ 0x1C0077E94 (WPP_SF_qddd_ea_1C0077E94.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00F71A4 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C00F7274 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00F9D14 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00F9EC8 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00FA9DC (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C00FABF8 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00FACB0 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
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
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  NDIS_PD_COUNTER_HANDLE__ *v20; // rsi
  const struct _NDIS_PD_QUEUE_PARAMETERS *v21; // r15
  NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  _QWORD *v23; // rax
  NDIS_PD_QUEUE_TRACKER *v24; // rax
  NDIS_PD_QUEUE_TRACKER *v25; // rcx
  struct NDIS_PD_COUNTER *v27; // [rsp+20h] [rbp-60h]
  unsigned __int8 v28[8]; // [rsp+28h] [rbp-58h]
  char v29; // [rsp+40h] [rbp-40h]
  int v30; // [rsp+44h] [rbp-3Ch]
  unsigned int v31; // [rsp+48h] [rbp-38h]
  int v32; // [rsp+4Ch] [rbp-34h]
  struct _LIST_ENTRY v33; // [rsp+50h] [rbp-30h] BYREF
  KLockHolder v34; // [rsp+60h] [rbp-20h] BYREF
  _LIST_ENTRY **v35; // [rsp+D0h] [rbp+50h]

  v35 = (_LIST_ENTRY **)a3;
  v8 = 0;
  v29 = 0;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
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
        v15 = (__int64)v35[v17];
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
  v34.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v34.m_State = Unlocked;
  v34.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v34);
  if ( !*((_BYTE *)a1 + 89) )
  {
    *((_BYTE *)a1 + 89) = 1;
    v29 = 1;
    KLockHolder::~KLockHolder(&v34);
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
        v34.m_Lock = (KPushLockBase *)qword_1C00996C8;
        v34.m_State = Unlocked;
        v34.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v34);
        *((_BYTE *)a1 + 89) = 0;
        goto LABEL_51;
      }
      v14 = *a7;
      v18 = *a4;
      v31 = *a4;
      v32 = v14;
      if ( (unsigned int)v14 >= 0x38 && (v14 & 0xFFFFFFF8) == v14 )
      {
        v19 = (unsigned int)v14 * (unsigned __int64)v18;
        if ( v19 <= 0xFFFFFFFF && (unsigned int)v19 <= *a6 )
        {
          v15 = 0LL;
          v16 = 0;
          v30 = 0;
          if ( !v18 )
            goto LABEL_52;
          while ( 1 )
          {
            v20 = 0LL;
            v33.Flink = *v35;
            v21 = (struct _NDIS_PD_QUEUE_PARAMETERS *)((char *)a5 + (unsigned int)(v15 * v14));
            if ( v21->Header.Type != 0x80
              || v21->Header.Revision != 1
              || v21->Header.Size < 0x38u
              || (v21->Flags & 0xFFFFFFFE) != 0
              || v21->QueueType != PDQueueTypeReceive )
            {
              break;
            }
            if ( v21->CounterHandle )
            {
              PoolWithTag = (NDIS_PD_COUNTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
              v20 = PoolWithTag;
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
                v23 = PoolWithTag + 18;
                v23[1] = v23;
                *v23 = v23;
                *((_DWORD *)v20 + 24) = 0;
                *((_QWORD *)v20 + 13) = 0LL;
                *((_DWORD *)v20 + 28) = 0;
                *((_QWORD *)v20 + 15) = 0LL;
              }
              else
              {
                v20 = 0LL;
              }
              if ( !v20 )
              {
LABEL_42:
                v16 = -1073741670;
                goto LABEL_48;
              }
              *((_DWORD *)v20 + 16) = v30;
              *((_DWORD *)v20 + 17) = ndisGetNextPDCounterId();
              v16 = ndisPcwSetRssInstanceSuffix((struct NDIS_PD_COUNTER *)v20);
              if ( v16 < 0 )
              {
                NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v20);
LABEL_41:
                v8 = 1;
                goto LABEL_46;
              }
              ndisSetupPDCounter(
                (struct NDIS_PD_COUNTER *)v20,
                v21->CounterHandle,
                PDCounterTypeReceiveQueue,
                (struct NDIS_PD_ASSOCIATION *)a1,
                1);
              v21->CounterHandle = v20;
            }
            v24 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
            if ( v24 )
              v25 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v24);
            else
              v25 = 0LL;
            if ( !v25 )
              goto LABEL_42;
            ndisSetupPDQTracker(
              v25,
              (struct _NDIS_PD_QUEUE *)v33.Flink,
              v21,
              (struct NDIS_PD_ASSOCIATION *)a1,
              (struct NDIS_PD_COUNTER *)v20,
              1u,
              a2->Flags & 1);
            ++v35;
            v15 = (unsigned int)(v30 + 1);
            v30 = v15;
            if ( (unsigned int)v15 >= v31 )
              goto LABEL_41;
            LODWORD(v14) = v32;
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
      if ( !v29 )
        goto LABEL_52;
      goto LABEL_50;
    }
LABEL_48:
    v34.m_Lock = (KPushLockBase *)&v34;
    *(_QWORD *)&v34.m_State = &v34;
    v33.Blink = &v33;
    v33.Flink = &v33;
    ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)a1, (struct _LIST_ENTRY *)&v34, &v33);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 10) + 32LL))(*((_QWORD *)a1 + 9));
    ndisFreePDRSSObjects((struct _LIST_ENTRY *)&v34, &v33);
    goto LABEL_49;
  }
  v16 = -1073741808;
LABEL_51:
  KLockHolder::~KLockHolder(&v34);
LABEL_52:
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    *(_DWORD *)v28 = v16;
    LODWORD(v27) = *a6;
    WPP_SF_qddd(v15, v14, (__int64)a1, *a4, v27, *(_QWORD *)v28);
  }
  return (unsigned int)v16;
}
