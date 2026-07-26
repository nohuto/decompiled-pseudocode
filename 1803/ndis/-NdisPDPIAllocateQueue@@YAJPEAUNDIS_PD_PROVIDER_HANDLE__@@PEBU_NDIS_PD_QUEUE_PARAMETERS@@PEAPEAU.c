/*
 * XREFs of ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00F8AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qddS @ 0x1C0077DEC (WPP_SF_qddS.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C00F71A4 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C00F738C (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00FACB0 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAllocateQueue(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3)
{
  NDIS_PD_QUEUE_TRACKER *v6; // r14
  const wchar_t *v7; // r9
  int v8; // ebx
  NDIS_PD_QUEUE_TYPE QueueType; // eax
  NDIS_PD_COUNTER_HANDLE__ *CounterHandle; // rsi
  bool v11; // zf
  NDIS_PD_QUEUE_TRACKER *PoolWithTag; // rax
  int v13; // eax
  struct NDIS_PD_COUNTER *v15; // [rsp+20h] [rbp-38h]
  struct _NDIS_PD_QUEUE *v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    v7 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v7 = L" ";
    WPP_SF_qddS(0x22u, (__int64)a2, (__int64)a1, a2->QueueType, a2->QueueSize, v7);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v8 >= 0 )
      *((_QWORD *)(*a3)->PDPlatformReserved[1] + 5) = a1;
    goto LABEL_33;
  }
  *a3 = 0LL;
  if ( a2->Header.Type == 0x80 && a2->Header.Revision == 1 && a2->Header.Size >= 0x38u && (a2->Flags & 0xFFFFFFFE) == 0 )
  {
    QueueType = a2->QueueType;
    CounterHandle = a2->CounterHandle;
    if ( QueueType == PDQueueTypeReceive )
    {
      if ( !CounterHandle )
      {
LABEL_20:
        PoolWithTag = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
        if ( PoolWithTag )
          v6 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(PoolWithTag);
        if ( !v6 )
        {
          v8 = -1073741670;
          goto LABEL_33;
        }
        if ( CounterHandle )
          a2->CounterHandle = (NDIS_PD_COUNTER_HANDLE__ *)*((_QWORD *)CounterHandle + 6);
        v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
                *((_QWORD *)a1 + 9),
                a2,
                &v16);
        v8 = v13;
        if ( CounterHandle )
          a2->CounterHandle = CounterHandle;
        if ( v13 >= 0 )
        {
          ndisSetupPDQTracker(
            v6,
            v16,
            a2,
            (struct NDIS_PD_ASSOCIATION *)a1,
            (struct NDIS_PD_COUNTER *)CounterHandle,
            0,
            a2->Flags & 1);
          *a3 = v16;
          goto LABEL_33;
        }
        goto LABEL_31;
      }
      v11 = *((_DWORD *)CounterHandle + 14) == 1;
    }
    else
    {
      if ( QueueType != PDQueueTypeTransmit )
        goto LABEL_16;
      if ( !CounterHandle )
        goto LABEL_20;
      v11 = *((_DWORD *)CounterHandle + 14) == 2;
    }
    if ( !v11 )
    {
LABEL_16:
      v8 = -1073741811;
      goto LABEL_33;
    }
    goto LABEL_20;
  }
  v8 = -1073741811;
LABEL_31:
  if ( v6 )
    NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'((char *)v6);
LABEL_33:
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    LODWORD(v15) = v8;
    WPP_SF_qqd(0x23u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, a1, *a3, v15);
  }
  return (unsigned int)v8;
}
