/*
 * XREFs of ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00EEAE8
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00EC230 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00EC8D0 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00EDDC4 (-ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisSetupPDQTracker(
        char *DeferredContext,
        struct _NDIS_PD_QUEUE *a2,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a3,
        struct NDIS_PD_ASSOCIATION *a4,
        struct NDIS_PD_COUNTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  __int64 v10; // rax
  struct NDIS_PD_ASSOCIATION **v11; // rcx
  struct NDIS_PD_ASSOCIATION **v12; // rdx
  struct NDIS_PD_ASSOCIATION *v13; // rax
  struct NDIS_PD_ASSOCIATION **v14; // rcx
  struct NDIS_PD_COUNTER **v15; // rdx
  struct NDIS_PD_COUNTER *v16; // rbx
  KLockHolder v17; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)DeferredContext + 6) = a2;
  *((_DWORD *)DeferredContext + 38) = *((_DWORD *)a3 + 2);
  *((_DWORD *)DeferredContext + 39) = *((_DWORD *)a3 + 3);
  *((_DWORD *)DeferredContext + 40) = *((_DWORD *)a3 + 4);
  *(_OWORD *)(DeferredContext + 168) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)DeferredContext + 46) = *((_DWORD *)a3 + 10);
  *((_DWORD *)DeferredContext + 47) = *((_DWORD *)a3 + 11);
  DeferredContext[200] = a6;
  *((_QWORD *)DeferredContext + 4) = a4;
  *((_DWORD *)DeferredContext + 68) = _InterlockedIncrement((volatile signed __int32 *)(qword_1C00926D0 + 8236));
  if ( a7 )
    ndisInitPDQAWM(DeferredContext);
  v10 = *((_QWORD *)a2 + 1);
  v17.m_State = Unlocked;
  *((_QWORD *)a2 + 2) = v10;
  *((_QWORD *)a2 + 1) = &unk_1C007BA90;
  v17.m_Lock = (KPushLockBase *)qword_1C00926D0;
  *((_QWORD *)a2 + 3) = DeferredContext;
  v17.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v17);
  if ( *((_DWORD *)DeferredContext + 38) == 1 )
  {
    v11 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 17);
    if ( *v11 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 128) )
      __fastfail(3u);
    *(_QWORD *)DeferredContext = (char *)a4 + 128;
    *((_QWORD *)DeferredContext + 1) = v11;
    *v11 = (struct NDIS_PD_ASSOCIATION *)DeferredContext;
    *((_QWORD *)a4 + 17) = DeferredContext;
    if ( a6 )
    {
      v12 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 19);
      v13 = (struct NDIS_PD_ASSOCIATION *)(DeferredContext + 16);
      if ( *v12 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 144) )
        __fastfail(3u);
      *(_QWORD *)v13 = (char *)a4 + 144;
      *((_QWORD *)DeferredContext + 3) = v12;
      *v12 = v13;
      *((_QWORD *)a4 + 19) = v13;
    }
  }
  else
  {
    v14 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 21);
    if ( *v14 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 160) )
      __fastfail(3u);
    *(_QWORD *)DeferredContext = (char *)a4 + 160;
    *((_QWORD *)DeferredContext + 1) = v14;
    *v14 = (struct NDIS_PD_ASSOCIATION *)DeferredContext;
    *((_QWORD *)a4 + 21) = DeferredContext;
    *((_DWORD *)DeferredContext + 48) = -1;
  }
  if ( a5 )
  {
    *((_QWORD *)DeferredContext + 28) = a5;
    v15 = (struct NDIS_PD_COUNTER **)*((_QWORD *)a5 + 10);
    v16 = (struct NDIS_PD_COUNTER *)(DeferredContext + 232);
    if ( *v15 != (struct NDIS_PD_COUNTER *)((char *)a5 + 72) )
      __fastfail(3u);
    *(_QWORD *)v16 = (char *)a5 + 72;
    *((_QWORD *)v16 + 1) = v15;
    *v15 = v16;
    *((_QWORD *)a5 + 10) = v16;
    ++*((_DWORD *)a5 + 22);
  }
  KLockHolder::~KLockHolder(&v17);
}
