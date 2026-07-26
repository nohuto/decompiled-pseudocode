/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C001AEE0
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B070 (ndisFOidRequestCompleteInternal.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001C6A4 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisMQueueOidRequest @ 0x1C0047B44 (ndisMQueueOidRequest.c)
 *     WPP_SF_qLq @ 0x1C005013C (WPP_SF_qLq.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(_LIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  _LIST_ENTRY *v5; // r15
  _LIST_ENTRY *v7; // rdi
  unsigned int v8; // ebp
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v10; // rsi
  __int64 v11; // rdx
  KIRQL v12; // al
  int v13; // edi
  unsigned __int16 Blink; // cx
  _LIST_ENTRY *v15; // rbx
  _WORD *v16; // rdx
  char v17; // al
  KIRQL v18; // di
  _LIST_ENTRY *v19; // rdx
  _LIST_ENTRY **p_Blink; // rax
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v22; // rcx
  KIRQL v23; // dl
  KSPIN_LOCK *v24; // rcx
  KIRQL v25; // bl
  KIRQL v27; // al
  struct _NDIS_REFCOUNT_BLOCK *Flink; // rcx
  KIRQL v29; // bl
  _LIST_ENTRY *v30; // r11
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // r10
  unsigned __int8 v33; // r9
  _BYTE *v34; // rcx
  unsigned __int8 v35; // cl
  KIRQL v36; // bl
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]
  KIRQL v39; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v5 = 0LL;
  v7 = a1;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qLq(18LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a3, a2);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_73;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a3 == 17 )
  {
    v4 = (__int64)v7;
  }
  else
  {
    if ( a3 != 5 )
    {
      ExFreePoolWithTag(v10, 0);
LABEL_73:
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_qqd(20LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v7, a2, v8);
      return v8;
    }
    v5 = v7;
  }
  v10[3].Blink = v7;
  if ( v4 )
  {
    LOBYTE(v11) = 71;
    if ( a2 )
    {
      v17 = ndisReferenceMiniport(v4, 0x47u);
      goto LABEL_17;
    }
    ndisReferenceMiniportNoCheck(v4, v11);
LABEL_33:
    v17 = 1;
    goto LABEL_17;
  }
  if ( !v5 )
    goto LABEL_70;
  if ( !a2 )
  {
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[20]);
    Flink = (struct _NDIS_REFCOUNT_BLOCK *)v5[21].Flink;
    v29 = v27;
    ++LOWORD(v5[20].Blink);
    NdisReferenceWithTag(Flink);
    KeReleaseSpinLock((PKSPIN_LOCK)&v5[20], v29);
    goto LABEL_33;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[20]);
  v13 = 1;
  v39 = v12;
  if ( !BYTE2(v5[20].Blink) )
  {
    Blink = (unsigned __int16)v5[20].Blink;
    if ( Blink >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v13 = 2;
    }
    else
    {
      v15 = v5[21].Flink;
      LOWORD(v5[20].Blink) = Blink + 1;
      if ( v15 )
      {
        if ( BYTE1(v15->Flink) )
        {
          if ( BYTE1(v15->Flink) == 1 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v15[48].Blink, 1u);
LABEL_45:
            v12 = v39;
          }
        }
        else
        {
          v16 = 0LL;
          if ( _bittestandset((signed __int32 *)&v15[1], 0xCu) )
          {
            v30 = v15->Blink;
            v31 = -1;
            if ( v30 && (v32 = BYTE3(v15->Flink), v33 = 0, v32) )
            {
              do
              {
                v34 = (char *)v30 + 2 * v33;
                if ( *v34 == 12 )
                {
                  if ( v34[1] != 0xFF )
                  {
                    ++v34[1];
                    goto LABEL_45;
                  }
                }
                else if ( !v34[1] )
                {
                  v16 = (_WORD *)v30 + v33;
                }
                ++v33;
              }
              while ( v33 < v32 );
              if ( !v16 )
                goto LABEL_53;
              *v16 = 268;
            }
            else
            {
LABEL_53:
              if ( !BYTE1(v15->Flink) )
              {
                v35 = BYTE3(v15->Flink);
                if ( v35 == 0xFF )
                {
                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v15);
                  BYTE1(v15->Flink) = 2;
                }
                else
                {
                  if ( (unsigned int)v35 + 2 <= 0xFF )
                    v31 = v35 + 2;
                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v15, v31);
                }
              }
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v15);
              v12 = v39;
            }
          }
        }
      }
      v13 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&v5[20], v12);
  v17 = v13 == 0;
LABEL_17:
  if ( v17 != 1 )
  {
    if ( v17 )
    {
LABEL_67:
      if ( v4 )
        ndisDereferenceMiniport(v4, 0x47u);
      else
        ndisDereferenceRef((PKSPIN_LOCK)&v5[20], 0xCu);
    }
LABEL_70:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_71;
  }
  if ( a2 )
  {
    if ( v4 )
    {
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 1856) = 2295325;
      v8 = ndisMQueueOidRequest(v4, a2);
      *(_QWORD *)(v4 + 520) = 0LL;
      v23 = v36;
      *(_DWORD *)(v4 + 1856) = 0;
      v24 = (KSPIN_LOCK *)(v4 + 96);
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[2].Flink[6]);
      v5[2].Flink[32].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[2].Flink[116].Flink) = 2295333;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v5[9]);
      v19 = (_LIST_ENTRY *)(a2 + 72);
      v5[9].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[10].Flink) = 2295334;
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 80) = 0LL;
      if ( (HIDWORD(v5[2].Flink[7].Blink) & 0x100) == 0 )
      {
        p_Blink = &v5[10].Blink;
        for ( i = v5[10].Blink; i != (_LIST_ENTRY *)p_Blink; i = i->Flink )
        {
          if ( i == v19 )
            goto LABEL_25;
        }
        v22 = v5[11].Flink;
        v8 = 0;
        if ( (_LIST_ENTRY **)v22->Flink != p_Blink )
          __fastfail(3u);
        v19->Flink = (_LIST_ENTRY *)p_Blink;
        *(_QWORD *)(a2 + 80) = v22;
        v22->Flink = v19;
        v5[11].Flink = v19;
      }
LABEL_25:
      v5[9].Blink = 0LL;
      LODWORD(v5[10].Flink) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v5[9]);
      v23 = v18;
      v5[2].Flink[32].Blink = 0LL;
      LODWORD(v5[2].Flink[116].Flink) = 0;
      v24 = (KSPIN_LOCK *)&v5[2].Flink[6];
    }
    KeReleaseSpinLock(v24, v23);
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
    goto LABEL_67;
  v10[2].Flink = retaddr;
  v10[2].Blink = 0LL;
  v10[1].Flink = (_LIST_ENTRY *)ndisDoOidRequests;
  v10[1].Blink = v10;
  v10->Flink = 0LL;
  KeInsertQueue(&ndisWorkerQueue, v10);
  _InterlockedAdd(&ndisWorkerQueueItemCount, 1u);
  v25 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
  if ( !ndisThreadPoolTimerQueued )
  {
    ndisThreadPoolTimerQueued = 1;
    KeSetTimer(&ndisThreadPoolTimer, ndisThreadPoolTimerDueTime, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v25);
  v8 = 259;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qD(19LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v10, 259LL);
LABEL_71:
    v7 = a1;
    goto LABEL_73;
  }
  return v8;
}
