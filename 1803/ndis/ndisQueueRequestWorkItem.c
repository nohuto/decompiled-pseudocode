/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C001F230
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C000BD50 (ndisFOidRequestCompleteInternal.c)
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045BB0 (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisMQueueOidRequest @ 0x1C0046118 (ndisMQueueOidRequest.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  char *v5; // r15
  unsigned int v8; // ebp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v10; // rsi
  __int64 v11; // rdx
  KIRQL v12; // al
  int v13; // ebx
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  KIRQL v18; // di
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *i; // rcx
  _QWORD *v22; // rcx
  KIRQL v23; // dl
  KSPIN_LOCK *v24; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v26; // rcx
  KIRQL v27; // bl
  KIRQL v28; // bl
  unsigned int v29; // eax
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]
  KIRQL v31; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v5 = 0LL;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qLq(18LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a3, a2);
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
    LOBYTE(v11) = 71;
    if ( a2 )
    {
      v17 = ndisReferenceMiniport(v3);
      goto LABEL_14;
    }
    ndisReferenceMiniportNoCheck(v3, v11);
LABEL_28:
    v17 = 1;
    goto LABEL_14;
  }
  if ( !v5 )
    goto LABEL_45;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 40);
  if ( !a2 )
  {
    v26 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v5 + 42);
    v27 = v12;
    ++*((_WORD *)v5 + 164);
    NdisReferenceWithTag(v26, 0xCu);
    KeReleaseSpinLock((PKSPIN_LOCK)v5 + 40, v27);
    goto LABEL_28;
  }
  v31 = v12;
  v13 = 1;
  if ( !v5[330] )
  {
    v14 = *((_WORD *)v5 + 164);
    if ( v14 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v13 = 2;
    }
    else
    {
      *((_WORD *)v5 + 164) = v14 + 1;
      NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v5 + 42), 0xCu);
      v12 = v31;
      v13 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v5 + 40, v12);
  v17 = v13 == 0;
LABEL_14:
  if ( v17 != 1 )
  {
    if ( v17 )
    {
LABEL_42:
      if ( v3 )
        ndisDereferenceMiniport(v3, 0x47u, v15, v16);
      else
        ndisDereferenceRef((PKSPIN_LOCK)v5 + 40, 0xCu);
    }
LABEL_45:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_46;
  }
  if ( a2 )
  {
    if ( v3 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2295351;
      v29 = ndisMQueueOidRequest(v3, a2);
      *(_QWORD *)(v3 + 520) = 0LL;
      v24 = (KSPIN_LOCK *)(v3 + 96);
      *(_DWORD *)(v3 + 1856) = 0;
      v8 = v29;
      v23 = v28;
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)v5 + 4) + 96LL));
      *(_QWORD *)(*((_QWORD *)v5 + 4) + 520LL) = KeGetCurrentThread();
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 1856LL) = 2295359;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 18);
      v19 = (_QWORD *)(a2 + 72);
      *((_QWORD *)v5 + 19) = KeGetCurrentThread();
      *((_DWORD *)v5 + 40) = 2295360;
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 80) = 0LL;
      if ( (*(_DWORD *)(*((_QWORD *)v5 + 4) + 124LL) & 0x100) == 0 )
      {
        v20 = v5 + 168;
        for ( i = (_QWORD *)*((_QWORD *)v5 + 21); i != v20; i = (_QWORD *)*i )
        {
          if ( i == v19 )
            goto LABEL_22;
        }
        v22 = (_QWORD *)*((_QWORD *)v5 + 22);
        v8 = 0;
        if ( (_QWORD *)*v22 != v20 )
          __fastfail(3u);
        *v19 = v20;
        *(_QWORD *)(a2 + 80) = v22;
        *v22 = v19;
        *((_QWORD *)v5 + 22) = v19;
      }
LABEL_22:
      *((_QWORD *)v5 + 19) = 0LL;
      *((_DWORD *)v5 + 40) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 18);
      v23 = v18;
      *(_QWORD *)(*((_QWORD *)v5 + 4) + 520LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 1856LL) = 0;
      v24 = (KSPIN_LOCK *)(*((_QWORD *)v5 + 4) + 96LL);
    }
    KeReleaseSpinLock(v24, v23);
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
  if ( (unsigned __int8)byte_1C0099612 < 4u )
    return v8;
  WPP_SF_qD(19LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v10, 259LL);
LABEL_46:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(20LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, v8);
  return v8;
}
