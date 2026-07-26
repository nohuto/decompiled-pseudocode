/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C0019FD4
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C000A160 (ndisFOidRequestCompleteInternal.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C00449E0 (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C0002848 (ndisReferenceMiniportNoCheck.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisMQueueOidRequest @ 0x1C0044F5C (ndisMQueueOidRequest.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char *v5; // r15
  unsigned int v8; // ebp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v10; // rsi
  KIRQL v11; // al
  int v12; // edi
  unsigned __int16 v13; // cx
  char v14; // al
  KIRQL v15; // di
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *i; // rcx
  _QWORD *v19; // rcx
  KIRQL v20; // dl
  KSPIN_LOCK *v21; // rcx
  KIRQL v23; // al
  struct _NDIS_REFCOUNT_BLOCK *v24; // rcx
  KIRQL v25; // bl
  KIRQL v26; // bl
  unsigned int v27; // eax
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]
  KIRQL v29; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v5 = 0LL;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qLq(18LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a3, a2);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_46;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a3 == 17 )
  {
    v3 = (__int64)a1;
  }
  else
  {
    if ( a3 != 5 )
      goto LABEL_45;
    v5 = a1;
  }
  v10[1].Parameter = a1;
  if ( v3 )
  {
    if ( a2 )
    {
      v14 = ndisReferenceMiniport(v3);
      goto LABEL_14;
    }
    ndisReferenceMiniportNoCheck(v3);
LABEL_28:
    v14 = 1;
    goto LABEL_14;
  }
  if ( !v5 )
    goto LABEL_45;
  if ( !a2 )
  {
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 40);
    v24 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v5 + 42);
    v25 = v23;
    ++*((_WORD *)v5 + 164);
    NdisReferenceWithTag(v24, 0xCu);
    KeReleaseSpinLock((PKSPIN_LOCK)v5 + 40, v25);
    goto LABEL_28;
  }
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 40);
  v29 = v11;
  v12 = 1;
  if ( !v5[330] )
  {
    v13 = *((_WORD *)v5 + 164);
    if ( v13 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v12 = 2;
    }
    else
    {
      *((_WORD *)v5 + 164) = v13 + 1;
      NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v5 + 42), 0xCu);
      v11 = v29;
      v12 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v5 + 40, v11);
  v14 = v12 == 0;
LABEL_14:
  if ( v14 != 1 )
  {
    if ( v14 )
    {
LABEL_42:
      if ( v3 )
        ndisDereferenceMiniport(v3, 0x47u);
      else
        ndisDereferenceRef((PKSPIN_LOCK)v5 + 40);
    }
LABEL_45:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_46;
  }
  if ( a2 )
  {
    if ( v3 )
    {
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2295351;
      v27 = ndisMQueueOidRequest(v3, a2);
      *(_QWORD *)(v3 + 520) = 0LL;
      v21 = (KSPIN_LOCK *)(v3 + 96);
      *(_DWORD *)(v3 + 1856) = 0;
      v8 = v27;
      v20 = v26;
    }
    else
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)v5 + 4) + 96LL));
      *(_QWORD *)(*((_QWORD *)v5 + 4) + 520LL) = KeGetCurrentThread();
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 1856LL) = 2295359;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 18);
      v16 = (_QWORD *)(a2 + 72);
      *((_QWORD *)v5 + 19) = KeGetCurrentThread();
      *((_DWORD *)v5 + 40) = 2295360;
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 80) = 0LL;
      if ( (*(_DWORD *)(*((_QWORD *)v5 + 4) + 124LL) & 0x100) == 0 )
      {
        v17 = v5 + 168;
        for ( i = (_QWORD *)*((_QWORD *)v5 + 21); i != v17; i = (_QWORD *)*i )
        {
          if ( i == v16 )
            goto LABEL_22;
        }
        v19 = (_QWORD *)*((_QWORD *)v5 + 22);
        v8 = 0;
        if ( (_QWORD *)*v19 != v17 )
          __fastfail(3u);
        *v16 = v17;
        *(_QWORD *)(a2 + 80) = v19;
        *v19 = v16;
        *((_QWORD *)v5 + 22) = v16;
      }
LABEL_22:
      *((_QWORD *)v5 + 19) = 0LL;
      *((_DWORD *)v5 + 40) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 18);
      v20 = v15;
      *(_QWORD *)(*((_QWORD *)v5 + 4) + 520LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 1856LL) = 0;
      v21 = (KSPIN_LOCK *)(*((_QWORD *)v5 + 4) + 96LL);
    }
    KeReleaseSpinLock(v21, v20);
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
    goto LABEL_42;
  v10[1].List.Blink = 0LL;
  v10[1].List.Flink = retaddr;
  v10->List.Flink = 0LL;
  v10->WorkerRoutine = (void (__fastcall *)(void *))ndisDoOidRequests;
  v10->Parameter = v10;
  ExQueueWorkItem(v10, (WORK_QUEUE_TYPE)40);
  v8 = 259;
  if ( (unsigned __int8)byte_1C0098752 < 4u )
    return v8;
  WPP_SF_qD(19LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v10, 259LL);
LABEL_46:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(20LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v8);
  return v8;
}
