/*
 * XREFs of ndisQueueOidRequest @ 0x1C000B550
 * Callers:
 *     ndisMOidRequest @ 0x1C00094B0 (ndisMOidRequest.c)
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     NdisFOidRequest @ 0x1C000A360 (NdisFOidRequest.c)
 *     ndisLegacyRequest @ 0x1C00442B0 (ndisLegacyRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0046C20 (ndisProcessRequestAsync.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000D5AC (ndisOidTranslateBetweenOids.c)
 *     ndisQueueRequestWorkItem @ 0x1C0019FD4 (ndisQueueRequestWorkItem.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqqq @ 0x1C0042F94 (WPP_SF_qqqq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A0D8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueOidRequest(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v7; // r15
  unsigned __int8 *v8; // r13
  char v9; // bl
  __int64 v10; // rdx
  unsigned int v11; // eax
  KSPIN_LOCK *p_Lock; // r12
  KIRQL v13; // al
  unsigned __int8 *p_Type; // rsi
  int v15; // r14d
  KIRQL v16; // r15
  unsigned __int16 v17; // cx
  KIRQL v18; // al
  struct _NDIS_REFCOUNT_BLOCK *v19; // rcx
  KIRQL v20; // bl
  KIRQL v21; // r12
  unsigned int v22; // esi
  unsigned __int8 *v23; // rdx
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rcx
  unsigned __int8 **v26; // rcx
  KIRQL v27; // al
  ULONG_PTR v28; // r8
  KIRQL v29; // bl
  __int64 v30; // r9
  unsigned __int8 v31; // r10
  unsigned __int8 v32; // cl
  _BYTE *v33; // rdx
  bool v34; // zf
  char v36; // al
  char v37; // si
  KIRQL v38; // r14
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v40; // al
  __int64 v41; // rdx
  KIRQL v42; // r12
  _LIST_ENTRY *v43; // r14
  _LIST_ENTRY *p_OidRequestList; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rcx
  char v47; // r14
  KIRQL v48; // al
  ULONG_PTR v49; // r8
  KIRQL v50; // r15
  __int64 v51; // r10
  unsigned __int8 v52; // r9
  unsigned __int8 v53; // al
  _BYTE *v54; // rdx
  unsigned __int8 *v55; // rbx
  KIRQL v56; // al
  int v57; // r15d
  unsigned __int16 v58; // cx
  KIRQL v59; // al
  ULONG_PTR v60; // r8
  KIRQL v61; // r15
  __int64 v62; // r10
  unsigned __int8 v63; // r9
  unsigned __int8 v64; // cl
  _BYTE *v65; // rdx
  char v66; // cl
  ULONG_PTR v67; // r14
  unsigned int v68; // edx
  char v69; // al
  KIRQL v70; // bl
  ULONG_PTR v71; // r15
  unsigned int v72; // edx
  ULONG_PTR v73; // r12
  unsigned int v74; // edx
  struct _KEVENT *RemoveReadyEvent; // rcx
  KIRQL v76; // [rsp+30h] [rbp-D0h]
  KIRQL v77; // [rsp+31h] [rbp-CFh]
  _DWORD v79[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v80[248]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = a1;
  v8 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqq(57LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, a3, a4);
  v9 = 0;
  memset(v80, 0, sizeof(v80));
  v79[0] = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(253LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v7);
  v11 = *(_DWORD *)(v7 + 32);
  if ( v11 > 0x10207 || v11 < 0x10106 )
    goto LABEL_6;
  if ( v11 <= 0x10107 || v11 == 65812 )
  {
LABEL_113:
    v9 = 1;
    goto LABEL_7;
  }
  if ( v11 != 66055 )
  {
LABEL_6:
    if ( (*(_DWORD *)(v7 + 88) & 0x100000) == 0 )
      goto LABEL_7;
    goto LABEL_113;
  }
  if ( a2->MajorNdisVersion < 6u )
  {
    memset(v80, 0, sizeof(v80));
    *(_DWORD *)&v80[88] |= 8u;
    *(_QWORD *)&v80[40] = v79;
    *(_QWORD *)&v80[104] = &ndisIntReqNsi;
    *(_DWORD *)v80 = 15466902;
    *(_DWORD *)&v80[32] = 65799;
    *(_QWORD *)&v80[4] = 2LL;
    *(_DWORD *)&v80[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v80, 0LL, 0LL);
    memset(v80, 0, sizeof(v80));
    *(_DWORD *)&v80[88] |= 8u;
    *(_QWORD *)&v80[40] = v79;
    *(_QWORD *)&v80[104] = &ndisIntReqNsi;
    *(_DWORD *)v80 = 15466902;
    *(_DWORD *)&v80[32] = 65812;
    *(_QWORD *)&v80[4] = 2LL;
    *(_DWORD *)&v80[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v80, 0LL, 0LL);
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(254LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v7);
  if ( v9 )
  {
    p_Type = &a2->Header.Type;
  }
  else
  {
    p_Lock = &a2->Lock;
    v13 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    v76 = v13;
    a2->LockDbg = 2298102;
    if ( a3 )
      p_Type = *(unsigned __int8 **)(a3 + 424);
    else
      p_Type = (unsigned __int8 *)a2->Next.RequestHandle;
    if ( a4 )
    {
      v55 = a4 + 320;
      v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 40);
      v57 = 1;
      v77 = v56;
      if ( !a4[330] )
      {
        v58 = *((_WORD *)a4 + 164);
        if ( v58 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v57 = 2;
        }
        else
        {
          *((_WORD *)a4 + 164) = v58 + 1;
          NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)a4 + 42));
          v56 = v77;
          v57 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)a4 + 40, v56);
      if ( !v57 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a4 + 2) + 248LL) )
        {
          p_Type = a4;
        }
        else if ( *((_QWORD *)a4 + 53) )
        {
          p_Type = (unsigned __int8 *)*((_QWORD *)a4 + 53);
        }
        v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 40);
        v60 = *((_QWORD *)a4 + 42);
        v61 = v59;
        if ( v60 )
        {
          if ( *(_BYTE *)(v60 + 1) )
          {
            if ( *(_BYTE *)(v60 + 1) == 1 )
            {
              v67 = v60 + 1096;
              v68 = *(_DWORD *)(v60 + 1152);
              if ( v68 >> 17 < 0x3FFE && (unsigned __int16)v68 >> 1 == (v68 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v60 + 1096));
                *(_DWORD *)(v67 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v68 & 0xFFFE) == 0 && (v68 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v60, 0x11uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v60 + 1096), 0);
              }
            }
          }
          else
          {
            v62 = *(_QWORD *)(v60 + 8);
            if ( v62 && (v63 = *(_BYTE *)(v60 + 3), v64 = 0, v63) )
            {
              while ( 1 )
              {
                v65 = (_BYTE *)(v62 + 2LL * v64);
                if ( *v65 == 17 )
                {
                  v69 = v65[1];
                  if ( v69 )
                    break;
                }
                if ( ++v64 >= v63 )
                  goto LABEL_97;
              }
              v65[1] = v69 - 1;
            }
            else
            {
LABEL_97:
              if ( !_bittestandreset((signed __int32 *)(v60 + 16), 0x11u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v60, 0x11uLL);
            }
          }
        }
        v34 = (*((_WORD *)v55 + 4))-- == 1;
        if ( v34 && !v55[11] )
        {
          NdisFreeRefCount(*((struct _NDIS_REFCOUNT_BLOCK **)v55 + 2));
          *((_QWORD *)v55 + 2) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v55, v61);
      }
      v7 = a1;
      v13 = v76;
    }
    if ( *p_Type == 5 )
    {
      do
      {
        v8 = p_Type;
        v15 = 1;
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Type + 40);
        if ( !p_Type[330] )
        {
          v17 = *((_WORD *)p_Type + 164);
          if ( v17 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            v15 = 2;
          }
          else
          {
            *((_WORD *)p_Type + 164) = v17 + 1;
            NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)p_Type + 42));
            v15 = 0;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)p_Type + 40, v16);
        if ( !v15 )
          break;
        p_Type = (unsigned __int8 *)*((_QWORD *)p_Type + 53);
        v8 = 0LL;
      }
      while ( *p_Type == 5 );
      v13 = v76;
      p_Lock = &a2->Lock;
      v7 = a1;
    }
    a2->MiniportThread = 0LL;
    a2->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v13);
  }
  if ( *p_Type == 17 )
    ndisOidTranslateBetweenOids(a2, v10, v7);
  if ( KeGetCurrentIrql() )
  {
    v22 = ndisQueueRequestWorkItem(p_Type, v7, *p_Type);
    goto LABEL_44;
  }
  if ( !v8 )
  {
    v37 = 1;
    v38 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    if ( !a2->Ref.Closing )
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)a2->RefCountTracker;
      if ( RefCountTracker )
        NdisReferenceWithTag(RefCountTracker);
      v34 = a2->Ref.ReferenceCount++ == -1;
      if ( !v34 )
        goto LABEL_55;
      a2->Ref.ReferenceCount = -1;
    }
    v37 = 0;
LABEL_55:
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_qD(12LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a2, a2->Ref.ReferenceCount);
    KeReleaseSpinLock(&a2->Ref.SpinLock, v38);
    if ( !v37 )
    {
      v22 = -1073741823;
      goto LABEL_45;
    }
    v40 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    v22 = -1073741823;
    v41 = a1;
    v42 = v40;
    a2->MiniportThread = KeGetCurrentThread();
    a2->LockDbg = 2298201;
    v43 = (_LIST_ENTRY *)(a1 + 72);
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
    {
      WPP_SF_qq(21LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a2, a1);
      v41 = a1;
    }
    v43->Flink = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( (a2->PnPFlags & 0x100) == 0 )
    {
      p_OidRequestList = &a2->OidRequestList;
      Flink = a2->OidRequestList.Flink;
      if ( Flink == &a2->OidRequestList )
      {
LABEL_62:
        Blink = a2->OidRequestList.Blink;
        v22 = 0;
        if ( Blink->Flink != p_OidRequestList )
          __fastfail(3u);
        v43->Flink = p_OidRequestList;
        *(_QWORD *)(a1 + 80) = Blink;
        Blink->Flink = v43;
        a2->OidRequestList.Blink = v43;
      }
      else
      {
        while ( Flink != v43 )
        {
          Flink = Flink->Flink;
          if ( Flink == p_OidRequestList )
            goto LABEL_62;
        }
      }
    }
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qqd(22LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a2, v41, v22);
    a2->MiniportThread = 0LL;
    a2->LockDbg = 0;
    KeReleaseSpinLock(&a2->Lock, v42);
    if ( !v22 )
    {
      ndisMDoOidRequest(a2);
      v22 = 259;
    }
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a2);
    v47 = 0;
    v48 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    v49 = (ULONG_PTR)a2->RefCountTracker;
    v50 = v48;
    if ( v49 )
    {
      if ( *(_BYTE *)(v49 + 1) )
      {
        if ( *(_BYTE *)(v49 + 1) == 1 )
        {
          v73 = v49 + 4616;
          v74 = *(_DWORD *)(v49 + 4672);
          if ( v74 >> 17 < 0x3FFE && (unsigned __int16)v74 >> 1 == (v74 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v49 + 4616));
            *(_DWORD *)(v73 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v74 & 0xFFFE) == 0 && (v74 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v49, 0x48uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 4616), 0);
          }
        }
      }
      else
      {
        v51 = *(_QWORD *)(v49 + 8);
        if ( v51 && (v52 = *(_BYTE *)(v49 + 3), v53 = 0, v52) )
        {
          while ( 1 )
          {
            v54 = (_BYTE *)(v51 + 2LL * v53);
            if ( *v54 == 72 )
            {
              v66 = v54[1];
              if ( v66 )
                break;
            }
            if ( ++v53 >= v52 )
              goto LABEL_76;
          }
          v54[1] = v66 - 1;
        }
        else
        {
LABEL_76:
          if ( !_bittestandreset((signed __int32 *)(v49 + 24), 8u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v49, 0x48uLL);
        }
      }
    }
    v34 = a2->Ref.ReferenceCount-- == 1;
    if ( v34 )
      v47 = 1;
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a2, a2->Ref.ReferenceCount);
    KeReleaseSpinLock(&a2->Ref.SpinLock, v50);
    if ( v47 )
    {
      RemoveReadyEvent = a2->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a2);
    goto LABEL_43;
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 40);
  v19 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v8 + 42);
  ++*((_WORD *)v8 + 164);
  v20 = v18;
  NdisReferenceWithTag(v19);
  KeReleaseSpinLock((PKSPIN_LOCK)v8 + 40, v20);
  v21 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  a2->LockDbg = 2298179;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v8 + 18);
  v22 = -1073741823;
  v23 = (unsigned __int8 *)(a1 + 72);
  *((_QWORD *)v8 + 19) = KeGetCurrentThread();
  *((_DWORD *)v8 + 40) = 2298180;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)v8 + 4) + 124LL) & 0x100) == 0 )
  {
    v24 = v8 + 168;
    v25 = (unsigned __int8 *)*((_QWORD *)v8 + 21);
    if ( v25 == v8 + 168 )
    {
LABEL_26:
      v26 = (unsigned __int8 **)*((_QWORD *)v8 + 22);
      v22 = 0;
      if ( *v26 != v24 )
        __fastfail(3u);
      *(_QWORD *)v23 = v24;
      *(_QWORD *)(a1 + 80) = v26;
      *v26 = v23;
      *((_QWORD *)v8 + 22) = v23;
    }
    else
    {
      while ( v25 != v23 )
      {
        v25 = *(unsigned __int8 **)v25;
        if ( v25 == v24 )
          goto LABEL_26;
      }
    }
  }
  *((_QWORD *)v8 + 19) = 0LL;
  *((_DWORD *)v8 + 40) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v8 + 18);
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(&a2->Lock, v21);
  if ( !v22 )
  {
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v8, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 18);
      *((_QWORD *)v8 + 19) = KeGetCurrentThread();
      *((_DWORD *)v8 + 40) = 2297790;
      v8[240] = 1;
      ndisQueueStackExpansionFallbackWorkItem(v8);
      *((_QWORD *)v8 + 19) = 0LL;
      *((_DWORD *)v8 + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v8 + 18, v70);
    }
    v22 = 259;
  }
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 40);
  v28 = *((_QWORD *)v8 + 42);
  v29 = v27;
  if ( v28 )
  {
    if ( *(_BYTE *)(v28 + 1) )
    {
      if ( *(_BYTE *)(v28 + 1) == 1 )
      {
        v71 = v28 + 840;
        v72 = *(_DWORD *)(v28 + 896);
        if ( v72 >> 17 < 0x3FFE && (unsigned __int16)v72 >> 1 == (v72 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 840));
          *(_DWORD *)(v71 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v72 & 0xFFFE) == 0 && (v72 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v28, 0xDuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 840), 0);
        }
      }
    }
    else
    {
      v30 = *(_QWORD *)(v28 + 8);
      if ( v30 && (v31 = *(_BYTE *)(v28 + 3), v32 = 0, v31) )
      {
        while ( 1 )
        {
          v33 = (_BYTE *)(v30 + 2LL * v32);
          if ( *v33 == 13 )
          {
            v36 = v33[1];
            if ( v36 )
              break;
          }
          if ( ++v32 >= v31 )
            goto LABEL_38;
        }
        v33[1] = v36 - 1;
      }
      else
      {
LABEL_38:
        if ( !_bittestandreset((signed __int32 *)(v28 + 16), 0xDu) )
          ndisBugCheckEx(0x1EuLL, 0LL, v28, 0xDuLL);
      }
    }
  }
  v34 = (*((_WORD *)v8 + 164))-- == 1;
  if ( v34 && !v8[331] )
  {
    NdisFreeRefCount(*((struct _NDIS_REFCOUNT_BLOCK **)v8 + 42));
    *((_QWORD *)v8 + 42) = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v8 + 40, v29);
LABEL_43:
  v7 = a1;
LABEL_44:
  if ( v22 != 259 && v8 )
    ndisDereferenceRef((PKSPIN_LOCK)v8 + 40);
LABEL_45:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(58LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v7, a2, v22);
  return v22;
}
