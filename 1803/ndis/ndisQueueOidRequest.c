/*
 * XREFs of ndisQueueOidRequest @ 0x1C000C3B0
 * Callers:
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     NdisFOidRequest @ 0x1C000BF60 (NdisFOidRequest.c)
 *     ndisLegacyRequest @ 0x1C0045480 (ndisLegacyRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0047EB0 (ndisProcessRequestAsync.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000E404 (ndisOidTranslateBetweenOids.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     ndisQueueRequestWorkItem @ 0x1C001F230 (ndisQueueRequestWorkItem.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqqq @ 0x1C0044080 (WPP_SF_qqqq.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A9F0 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueOidRequest(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, __int64 a3, unsigned __int8 *a4)
{
  KSPIN_LOCK *v4; // r12
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // eax
  KSPIN_LOCK *p_Lock; // rsi
  KIRQL v14; // r12
  unsigned __int8 *p_Type; // rdi
  KIRQL v16; // al
  int v17; // r15d
  unsigned __int16 v18; // cx
  KSPIN_LOCK *v19; // r14
  KIRQL v20; // al
  struct _NDIS_REFCOUNT_BLOCK *v21; // rcx
  KIRQL v22; // di
  KIRQL v23; // r12
  KSPIN_LOCK *v24; // r15
  KSPIN_LOCK **v25; // rdx
  unsigned int v26; // edi
  KSPIN_LOCK *v27; // rax
  KSPIN_LOCK *v28; // rcx
  KSPIN_LOCK **v29; // rcx
  KIRQL v30; // al
  ULONG_PTR v31; // r8
  KIRQL v32; // si
  int v33; // ecx
  __int64 v34; // r10
  unsigned __int8 v35; // r9
  _BYTE *v36; // rdx
  bool v37; // zf
  char v39; // al
  char v40; // di
  KIRQL v41; // r15
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v44; // al
  _LIST_ENTRY *v45; // r15
  KIRQL v46; // r12
  _LIST_ENTRY *p_OidRequestList; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rcx
  __int64 v50; // r9
  char v51; // si
  KIRQL v52; // al
  ULONG_PTR v53; // r8
  KIRQL v54; // r15
  int v55; // ecx
  __int64 v56; // r10
  unsigned __int8 v57; // r9
  _BYTE *v58; // rdx
  __int64 v59; // r9
  unsigned __int8 *v60; // r14
  KIRQL v61; // al
  unsigned __int16 v62; // cx
  KIRQL v63; // al
  ULONG_PTR v64; // r8
  KIRQL v65; // r15
  int v66; // ecx
  __int64 v67; // r10
  unsigned __int8 v68; // r9
  _BYTE *v69; // rdx
  char v70; // al
  ULONG_PTR v71; // r15
  unsigned int v72; // edx
  int v73; // ecx
  char v74; // al
  KIRQL v75; // al
  KIRQL v76; // di
  ULONG_PTR v77; // r15
  unsigned int v78; // edx
  int v79; // ecx
  ULONG_PTR v80; // r12
  unsigned int v81; // edx
  int v82; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  KIRQL v84; // [rsp+30h] [rbp-D0h]
  KIRQL v85; // [rsp+30h] [rbp-D0h]
  KIRQL v86; // [rsp+30h] [rbp-D0h]
  int v87; // [rsp+34h] [rbp-CCh]
  KSPIN_LOCK *Parameter; // [rsp+38h] [rbp-C8h]
  _DWORD v89[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v90[248]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0LL;
  Parameter = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqq(57LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, a3, a4);
  v9 = 0;
  memset(v90, 0, sizeof(v90));
  v89[0] = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(250LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v11);
  v12 = *(_DWORD *)(a1 + 32);
  if ( v12 > 0x10207 || v12 < 0x10106 )
    goto LABEL_6;
  if ( v12 <= 0x10107 || v12 == 65812 )
  {
LABEL_115:
    v9 = 1;
    goto LABEL_7;
  }
  if ( v12 != 66055 )
  {
LABEL_6:
    if ( (*(_DWORD *)(a1 + 88) & 0x100000) == 0 )
      goto LABEL_7;
    goto LABEL_115;
  }
  if ( a2->MajorNdisVersion < 6u )
  {
    memset(v90, 0, sizeof(v90));
    *(_DWORD *)&v90[88] |= 8u;
    *(_QWORD *)&v90[40] = v89;
    *(_QWORD *)&v90[104] = &ndisIntReqNsi;
    *(_DWORD *)v90 = 15466902;
    *(_DWORD *)&v90[32] = 65799;
    *(_QWORD *)&v90[4] = 2LL;
    *(_DWORD *)&v90[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v90, 0LL, 0LL);
    memset(v90, 0, sizeof(v90));
    *(_DWORD *)&v90[88] |= 8u;
    *(_QWORD *)&v90[40] = v89;
    *(_QWORD *)&v90[104] = &ndisIntReqNsi;
    *(_DWORD *)v90 = 15466902;
    *(_DWORD *)&v90[32] = 65812;
    *(_QWORD *)&v90[4] = 2LL;
    *(_DWORD *)&v90[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v90, 0LL, 0LL);
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(251LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v11);
  p_Lock = &a2->Lock;
  if ( v9 )
  {
    p_Type = &a2->Header.Type;
  }
  else
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    a2->LockDbg = 2298097;
    if ( a3 )
      p_Type = *(unsigned __int8 **)(a3 + 424);
    else
      p_Type = (unsigned __int8 *)a2->Next.RequestHandle;
    if ( a4 )
    {
      v60 = a4 + 320;
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 40);
      v85 = v61;
      v87 = 1;
      if ( !a4[330] )
      {
        v62 = *((_WORD *)a4 + 164);
        if ( v62 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v87 = 2;
        }
        else
        {
          *((_WORD *)a4 + 164) = v62 + 1;
          NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)a4 + 42));
          v61 = v85;
          v87 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)a4 + 40, v61);
      if ( !v87 )
      {
        if ( *(_QWORD *)(*((_QWORD *)a4 + 2) + 248LL) )
        {
          p_Type = a4;
        }
        else if ( *((_QWORD *)a4 + 53) )
        {
          p_Type = (unsigned __int8 *)*((_QWORD *)a4 + 53);
        }
        v63 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 40);
        v64 = *((_QWORD *)a4 + 42);
        v65 = v63;
        v86 = v63;
        if ( v64 - 2 > 1 )
        {
          if ( v64 <= 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v64, 0LL);
          if ( *(_BYTE *)(v64 + 2) <= 0x11u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v64, 0x11uLL);
          v66 = *(unsigned __int8 *)(v64 + 1);
          if ( *(_BYTE *)(v64 + 1) )
          {
            if ( v66 == 1 )
            {
              v71 = v64 + 1096;
              v72 = *(_DWORD *)(v64 + 1152);
              v73 = (unsigned __int16)v72 >> 1;
              if ( v72 >> 17 < 0x3FFE && v73 == (v72 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v64 + 1096));
                *(_DWORD *)(v71 + 56) &= 0x10001u;
              }
              else
              {
                if ( v73 == 0 && (v72 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v64, 0x11uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v64 + 1096), 0);
              }
              v65 = v86;
            }
          }
          else
          {
            v67 = *(_QWORD *)(v64 + 8);
            if ( v67 && (v68 = *(_BYTE *)(v64 + 3)) != 0 )
            {
              while ( 1 )
              {
                v69 = (_BYTE *)(v67 + 2LL * (unsigned __int8)v66);
                if ( *v69 == 17 )
                {
                  v74 = v69[1];
                  if ( v74 )
                    break;
                }
                LOBYTE(v66) = v66 + 1;
                if ( (unsigned __int8)v66 >= v68 )
                  goto LABEL_103;
              }
              v69[1] = v74 - 1;
            }
            else
            {
LABEL_103:
              if ( !_bittestandreset((signed __int32 *)(v64 + 16), 0x11u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v64, 0x11uLL);
            }
          }
        }
        v37 = (*((_WORD *)v60 + 4))-- == 1;
        if ( v37 && !v60[11] )
        {
          NdisFreeRefCount(*((_QWORD *)v60 + 2));
          *((_QWORD *)v60 + 2) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v60, v65);
      }
    }
    if ( *p_Type == 5 )
    {
      do
      {
        Parameter = (KSPIN_LOCK *)p_Type;
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Type + 40);
        v17 = 1;
        v84 = v16;
        if ( !p_Type[330] )
        {
          v18 = *((_WORD *)p_Type + 164);
          if ( v18 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            v17 = 2;
          }
          else
          {
            *((_WORD *)p_Type + 164) = v18 + 1;
            NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)p_Type + 42));
            v16 = v84;
            v17 = 0;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)p_Type + 40, v16);
        if ( !v17 )
          break;
        p_Type = (unsigned __int8 *)*((_QWORD *)p_Type + 53);
        Parameter = 0LL;
      }
      while ( *p_Type == 5 );
      p_Lock = &a2->Lock;
    }
    a2->MiniportThread = 0LL;
    a2->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v14);
    v4 = Parameter;
  }
  if ( *p_Type == 17 )
    ndisOidTranslateBetweenOids(a2, v10, a1);
  if ( KeGetCurrentIrql() )
  {
    v26 = ndisQueueRequestWorkItem(p_Type, a1, *p_Type);
    goto LABEL_45;
  }
  if ( v4 )
  {
    v19 = v4 + 40;
    v20 = KeAcquireSpinLockRaiseToDpc(v4 + 40);
    v21 = (struct _NDIS_REFCOUNT_BLOCK *)v4[42];
    ++*((_WORD *)v4 + 164);
    v22 = v20;
    NdisReferenceWithTag(v21);
    KeReleaseSpinLock(v4 + 40, v22);
    v23 = KeAcquireSpinLockRaiseToDpc(p_Lock);
    a2->MiniportThread = KeGetCurrentThread();
    v24 = Parameter + 18;
    a2->LockDbg = 2298174;
    KeAcquireSpinLockAtDpcLevel(Parameter + 18);
    v25 = (KSPIN_LOCK **)(a1 + 72);
    v26 = -1073741823;
    Parameter[19] = (KSPIN_LOCK)KeGetCurrentThread();
    *((_DWORD *)Parameter + 40) = 2298175;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( (*(_DWORD *)(Parameter[4] + 124) & 0x100) == 0 )
    {
      v27 = Parameter + 21;
      v28 = (KSPIN_LOCK *)Parameter[21];
      if ( v28 == Parameter + 21 )
      {
LABEL_26:
        v29 = (KSPIN_LOCK **)Parameter[22];
        v26 = 0;
        if ( *v29 != v27 )
          __fastfail(3u);
        *v25 = v27;
        *(_QWORD *)(a1 + 80) = v29;
        *v29 = (KSPIN_LOCK *)v25;
        Parameter[22] = (KSPIN_LOCK)v25;
      }
      else
      {
        while ( v28 != (KSPIN_LOCK *)v25 )
        {
          v28 = (KSPIN_LOCK *)*v28;
          if ( v28 == v27 )
            goto LABEL_26;
        }
      }
    }
    Parameter[19] = 0LL;
    *((_DWORD *)Parameter + 40) = 0;
    KeReleaseSpinLockFromDpcLevel(v24);
    a2->MiniportThread = 0LL;
    a2->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v23);
    if ( !v26 )
    {
      if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
      {
        v75 = KeAcquireSpinLockRaiseToDpc(v24);
        Parameter[19] = (KSPIN_LOCK)KeGetCurrentThread();
        v76 = v75;
        *((_DWORD *)Parameter + 40) = 2297785;
        *((_BYTE *)Parameter + 240) = 1;
        ndisQueueStackExpansionFallbackWorkItem(Parameter);
        Parameter[19] = 0LL;
        *((_DWORD *)Parameter + 40) = 0;
        KeReleaseSpinLock(v24, v76);
      }
      v26 = 259;
    }
    v30 = KeAcquireSpinLockRaiseToDpc(v19);
    v31 = v19[2];
    v32 = v30;
    if ( v31 - 2 > 1 )
    {
      if ( v31 <= 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v31, 0LL);
      if ( *(_BYTE *)(v31 + 2) <= 0xDu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v31, 0xDuLL);
      v33 = *(unsigned __int8 *)(v31 + 1);
      if ( *(_BYTE *)(v31 + 1) )
      {
        if ( v33 == 1 )
        {
          v77 = v31 + 840;
          v78 = *(_DWORD *)(v31 + 896);
          v79 = (unsigned __int16)v78 >> 1;
          if ( v78 >> 17 < 0x3FFE && v79 == (v78 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v31 + 840));
            *(_DWORD *)(v77 + 56) &= 0x10001u;
          }
          else
          {
            if ( v79 == 0 && (v78 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v31, 0xDuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v31 + 840), 0);
          }
        }
      }
      else
      {
        v34 = *(_QWORD *)(v31 + 8);
        if ( v34 && (v35 = *(_BYTE *)(v31 + 3)) != 0 )
        {
          while ( 1 )
          {
            v36 = (_BYTE *)(v34 + 2LL * (unsigned __int8)v33);
            if ( *v36 == 13 )
            {
              v39 = v36[1];
              if ( v39 )
                break;
            }
            LOBYTE(v33) = v33 + 1;
            if ( (unsigned __int8)v33 >= v35 )
              goto LABEL_40;
          }
          v36[1] = v39 - 1;
        }
        else
        {
LABEL_40:
          if ( !_bittestandreset((signed __int32 *)(v31 + 16), 0xDu) )
            ndisBugCheckEx(0x1EuLL, 0LL, v31, 0xDuLL);
        }
      }
    }
    v37 = (*((_WORD *)v19 + 4))-- == 1;
    if ( v37 && !*((_BYTE *)v19 + 11) )
    {
      NdisFreeRefCount(v19[2]);
      v19[2] = 1LL;
    }
    KeReleaseSpinLock(v19, v32);
    goto LABEL_45;
  }
  v40 = 1;
  v41 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( !a2->Ref.Closing )
  {
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)a2->RefCountTracker;
    if ( RefCountTracker )
      NdisReferenceWithTag(RefCountTracker);
    ReferenceCount = a2->Ref.ReferenceCount;
    a2->Ref.ReferenceCount = ReferenceCount + 1;
    if ( ReferenceCount != -1 )
      goto LABEL_56;
    a2->Ref.ReferenceCount = -1;
  }
  v40 = 0;
LABEL_56:
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(12LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a2, a2->Ref.ReferenceCount);
  KeReleaseSpinLock(&a2->Ref.SpinLock, v41);
  if ( !v40 )
  {
    v26 = -1073741823;
    goto LABEL_46;
  }
  v44 = KeAcquireSpinLockRaiseToDpc(p_Lock);
  v45 = (_LIST_ENTRY *)(a1 + 72);
  a2->MiniportThread = KeGetCurrentThread();
  v46 = v44;
  a2->LockDbg = 2298196;
  v26 = -1073741823;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(21LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a2, a1);
  v45->Flink = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( (a2->PnPFlags & 0x100) == 0 )
  {
    p_OidRequestList = &a2->OidRequestList;
    Flink = a2->OidRequestList.Flink;
    if ( Flink == &a2->OidRequestList )
    {
LABEL_63:
      Blink = a2->OidRequestList.Blink;
      v26 = 0;
      if ( Blink->Flink != p_OidRequestList )
        __fastfail(3u);
      v45->Flink = p_OidRequestList;
      *(_QWORD *)(a1 + 80) = Blink;
      Blink->Flink = v45;
      a2->OidRequestList.Blink = v45;
    }
    else
    {
      while ( Flink != v45 )
      {
        Flink = Flink->Flink;
        if ( Flink == p_OidRequestList )
          goto LABEL_63;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(22LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a2, a1, v26);
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(p_Lock, v46);
  if ( !v26 )
  {
    ndisMDoOidRequest(a2);
    v26 = 259;
  }
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a2, v50);
  v51 = 0;
  v52 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  v53 = (ULONG_PTR)a2->RefCountTracker;
  v54 = v52;
  if ( v53 && v53 - 2 > 1 )
  {
    if ( v53 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v53 + 2) <= 0x48u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v53, 0x48uLL);
    v55 = *(unsigned __int8 *)(v53 + 1);
    if ( *(_BYTE *)(v53 + 1) )
    {
      if ( v55 == 1 )
      {
        v80 = v53 + 4616;
        v81 = *(_DWORD *)(v53 + 4672);
        v82 = (unsigned __int16)v81 >> 1;
        if ( v81 >> 17 < 0x3FFE && v82 == (v81 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v53 + 4616));
          *(_DWORD *)(v80 + 56) &= 0x10001u;
        }
        else
        {
          if ( v82 == 0 && (v81 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v53, 0x48uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v53 + 4616), 0);
        }
      }
    }
    else
    {
      v56 = *(_QWORD *)(v53 + 8);
      if ( v56 && (v57 = *(_BYTE *)(v53 + 3)) != 0 )
      {
        while ( 1 )
        {
          v58 = (_BYTE *)(v56 + 2LL * (unsigned __int8)v55);
          if ( *v58 == 72 )
          {
            v70 = v58[1];
            if ( v70 )
              break;
          }
          LOBYTE(v55) = v55 + 1;
          if ( (unsigned __int8)v55 >= v57 )
            goto LABEL_80;
        }
        v58[1] = v70 - 1;
      }
      else
      {
LABEL_80:
        if ( !_bittestandreset((signed __int32 *)(v53 + 24), 8u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v53, 0x48uLL);
      }
    }
  }
  v37 = a2->Ref.ReferenceCount-- == 1;
  if ( v37 )
    v51 = 1;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a2, a2->Ref.ReferenceCount);
  KeReleaseSpinLock(&a2->Ref.SpinLock, v54);
  if ( v51 )
  {
    RemoveReadyEvent = a2->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a2, v59);
LABEL_45:
  if ( v26 != 259 && Parameter )
    ndisDereferenceRef(Parameter + 40);
LABEL_46:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(58LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, v26);
  return v26;
}
