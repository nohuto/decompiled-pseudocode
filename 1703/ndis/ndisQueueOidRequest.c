/*
 * XREFs of ndisQueueOidRequest @ 0x1C000A240
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     NdisFOidRequest @ 0x1C000A120 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000C330 (ndisMOidRequest.c)
 *     ndisLegacyRequest @ 0x1C00470B0 (ndisLegacyRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0049840 (ndisProcessRequestAsync.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000AFAC (ndisOidTranslateBetweenOids.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisQueueRequestWorkItem @ 0x1C001AEE0 (ndisQueueRequestWorkItem.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qqqq @ 0x1C0045D94 (WPP_SF_qqqq.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A894 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueOidRequest(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // r13
  __int64 v8; // r15
  char v9; // bl
  __int64 v10; // rdx
  unsigned int v11; // eax
  KSPIN_LOCK *p_Lock; // r13
  KIRQL v13; // r12
  KSPIN_LOCK *p_Type; // rsi
  int v15; // r14d
  KIRQL v16; // r15
  unsigned __int16 v17; // cx
  KSPIN_LOCK v18; // r14
  _WORD *v19; // rcx
  KIRQL v20; // al
  KIRQL v21; // r14
  KSPIN_LOCK v22; // rbx
  _WORD *v23; // rcx
  KIRQL v24; // r12
  unsigned int v25; // r14d
  KSPIN_LOCK **v26; // rdx
  KSPIN_LOCK *v27; // rax
  KSPIN_LOCK *v28; // rcx
  KSPIN_LOCK **v29; // rcx
  KIRQL v30; // al
  ULONG_PTR v31; // r8
  KIRQL v32; // bl
  __int64 v33; // r9
  unsigned __int8 v34; // r10
  unsigned __int8 v35; // cl
  _BYTE *v36; // rdx
  bool v37; // zf
  char v39; // r14
  KIRQL v40; // r15
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rsi
  _WORD *v42; // rcx
  KIRQL v43; // al
  __int64 v44; // r8
  KIRQL v45; // r12
  _LIST_ENTRY *v46; // rsi
  char v47; // dl
  _LIST_ENTRY *p_OidRequestList; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rcx
  char v51; // si
  KIRQL v52; // al
  ULONG_PTR v53; // r8
  KIRQL v54; // r15
  __int64 v55; // r10
  unsigned __int8 v56; // r9
  unsigned __int8 v57; // al
  _BYTE *v58; // rdx
  __int64 v59; // rbx
  int v60; // r15d
  KIRQL v61; // r12
  unsigned __int16 v62; // cx
  __int64 v63; // r15
  _WORD *v64; // rcx
  KIRQL v65; // al
  ULONG_PTR v66; // r8
  KIRQL v67; // r15
  __int64 v68; // r10
  unsigned __int8 v69; // r9
  unsigned __int8 v70; // cl
  _BYTE *v71; // rdx
  __int64 v72; // r10
  unsigned __int8 v73; // r9
  unsigned __int8 v74; // r8
  _BYTE *v75; // rdx
  __int64 v76; // r9
  unsigned __int8 v77; // r10
  unsigned __int8 v78; // r8
  _BYTE *v79; // rdx
  __int64 v80; // r10
  unsigned __int8 v81; // r9
  unsigned __int8 v82; // r8
  _BYTE *v83; // rdx
  unsigned __int8 v84; // dl
  unsigned __int8 v85; // dl
  unsigned __int8 v86; // dl
  unsigned __int8 v87; // dl
  __int64 v88; // r10
  unsigned __int8 v89; // r9
  unsigned __int8 v90; // r8
  _BYTE *v91; // rdx
  unsigned __int8 v92; // dl
  unsigned __int8 v93; // dl
  ULONG_PTR v94; // r14
  unsigned int v95; // edx
  KIRQL v96; // al
  KIRQL v97; // bl
  ULONG_PTR v98; // r15
  unsigned int v99; // edx
  unsigned __int8 v100; // dl
  unsigned __int8 v101; // dl
  ULONG_PTR v102; // r13
  unsigned int v103; // edx
  struct _KEVENT *RemoveReadyEvent; // rcx
  KIRQL v105; // [rsp+30h] [rbp-D0h]
  int v107; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Parameter; // [rsp+48h] [rbp-B8h]
  _BYTE v109[248]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0LL;
  Parameter = 0LL;
  v8 = a1;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqq(57LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3, a4);
  v9 = 0;
  memset(v109, 0, sizeof(v109));
  v107 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(235LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v8);
  v11 = *(_DWORD *)(v8 + 32);
  if ( v11 > 0x10207 || v11 < 0x10106 )
    goto LABEL_6;
  if ( v11 <= 0x10107 || v11 == 65812 )
  {
LABEL_159:
    v9 = 1;
    goto LABEL_7;
  }
  if ( v11 != 66055 )
  {
LABEL_6:
    if ( (*(_DWORD *)(v8 + 88) & 0x100000) == 0 )
      goto LABEL_7;
    goto LABEL_159;
  }
  if ( a2->MajorNdisVersion < 6u )
  {
    memset(v109, 0, sizeof(v109));
    *(_DWORD *)&v109[88] |= 8u;
    *(_QWORD *)&v109[40] = &v107;
    *(_QWORD *)&v109[104] = &ndisIntReqNsi;
    *(_DWORD *)v109 = 15466902;
    *(_DWORD *)&v109[32] = 65799;
    *(_QWORD *)&v109[4] = 2LL;
    *(_DWORD *)&v109[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v109, 0LL, 0LL);
    memset(v109, 0, sizeof(v109));
    *(_DWORD *)&v109[88] |= 8u;
    *(_QWORD *)&v109[40] = &v107;
    *(_QWORD *)&v109[104] = &ndisIntReqNsi;
    *(_DWORD *)v109 = 15466902;
    *(_DWORD *)&v109[32] = 65812;
    *(_QWORD *)&v109[4] = 2LL;
    *(_DWORD *)&v109[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v109, 0LL, 0LL);
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(236LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v8);
  if ( v9 )
  {
    p_Type = (KSPIN_LOCK *)&a2->Header.Type;
  }
  else
  {
    p_Lock = &a2->Lock;
    v13 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    v105 = v13;
    a2->LockDbg = 2297796;
    if ( a3 )
      p_Type = *(KSPIN_LOCK **)(a3 + 424);
    else
      p_Type = (KSPIN_LOCK *)a2->Next.RequestHandle;
    if ( a4 )
    {
      v59 = a4 + 320;
      v60 = 1;
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 320));
      if ( !*(_BYTE *)(a4 + 330) )
      {
        v62 = *(_WORD *)(a4 + 328);
        if ( v62 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v60 = 2;
        }
        else
        {
          v63 = *(_QWORD *)(a4 + 336);
          *(_WORD *)(a4 + 328) = v62 + 1;
          if ( v63 )
          {
            if ( *(_BYTE *)(v63 + 1) )
            {
              if ( *(_BYTE *)(v63 + 1) == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v63 + 1096), 1u);
            }
            else
            {
              v64 = 0LL;
              if ( _bittestandset((signed __int32 *)(v63 + 16), 0x11u) )
              {
                v88 = *(_QWORD *)(v63 + 8);
                if ( !v88 )
                  goto LABEL_253;
                v89 = *(_BYTE *)(v63 + 3);
                v90 = 0;
                if ( !v89 )
                  goto LABEL_253;
                do
                {
                  v91 = (_BYTE *)(v88 + 2LL * v90);
                  if ( *v91 == 17 )
                  {
                    if ( v91[1] != 0xFF )
                    {
                      ++v91[1];
                      goto LABEL_96;
                    }
                  }
                  else if ( !v91[1] )
                  {
                    v64 = (_WORD *)(v88 + 2LL * v90);
                  }
                  ++v90;
                }
                while ( v90 < v89 );
                if ( v64 )
                {
                  *v64 = 273;
                }
                else
                {
LABEL_253:
                  if ( !*(_BYTE *)(v63 + 1) )
                  {
                    v92 = *(_BYTE *)(v63 + 3);
                    if ( v92 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v63);
                      *(_BYTE *)(v63 + 1) = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v92 + 2 <= 0xFF )
                        v93 = v92 + 2;
                      else
                        v93 = -1;
                      ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v63, v93);
                    }
                  }
                  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v63);
                }
              }
            }
          }
LABEL_96:
          v60 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 320), v61);
      if ( !v60 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a4 + 16) + 248LL) )
        {
          p_Type = (KSPIN_LOCK *)a4;
        }
        else if ( *(_QWORD *)(a4 + 424) )
        {
          p_Type = *(KSPIN_LOCK **)(a4 + 424);
        }
        v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 320));
        v66 = *(_QWORD *)(a4 + 336);
        v67 = v65;
        if ( v66 )
        {
          if ( *(_BYTE *)(v66 + 1) )
          {
            if ( *(_BYTE *)(v66 + 1) == 1 )
            {
              v94 = v66 + 1096;
              v95 = *(_DWORD *)(v66 + 1152);
              if ( v95 >> 17 < 0x3FFE && (unsigned __int16)v95 >> 1 == (v95 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v66 + 1096));
                *(_DWORD *)(v94 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v95 & 0xFFFE) == 0 && (v95 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v66, 0x11uLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v66 + 1096), 0);
              }
            }
          }
          else
          {
            v68 = *(_QWORD *)(v66 + 8);
            if ( v68 && (v69 = *(_BYTE *)(v66 + 3), v70 = 0, v69) )
            {
              while ( 1 )
              {
                v71 = (_BYTE *)(v68 + 2LL * v70);
                if ( *v71 == 17 )
                {
                  if ( v71[1] )
                    break;
                }
                if ( ++v70 >= v69 )
                  goto LABEL_107;
              }
              --v71[1];
            }
            else
            {
LABEL_107:
              if ( !_bittestandreset((signed __int32 *)(v66 + 16), 0x11u) )
                ndisBugCheckEx(0x1EuLL, 0LL, v66, 0x11uLL);
            }
          }
        }
        v37 = (*(_WORD *)(v59 + 8))-- == 1;
        if ( v37 && !*(_BYTE *)(v59 + 11) )
        {
          NdisFreeRefCount(*(PVOID *)(v59 + 16));
          *(_QWORD *)(v59 + 16) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v59, v67);
      }
      v8 = a1;
      v13 = v105;
    }
    if ( *(_BYTE *)p_Type == 5 )
    {
      do
      {
        Parameter = p_Type;
        v15 = 1;
        v16 = KeAcquireSpinLockRaiseToDpc(p_Type + 40);
        if ( !*((_BYTE *)p_Type + 330) )
        {
          v17 = *((_WORD *)p_Type + 164);
          if ( v17 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            v15 = 2;
          }
          else
          {
            v18 = p_Type[42];
            *((_WORD *)p_Type + 164) = v17 + 1;
            if ( v18 )
            {
              if ( *(_BYTE *)(v18 + 1) )
              {
                if ( *(_BYTE *)(v18 + 1) == 1 )
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v18 + 968), 1u);
              }
              else
              {
                v19 = 0LL;
                if ( _bittestandset((signed __int32 *)(v18 + 16), 0xFu) )
                {
                  v80 = *(_QWORD *)(v18 + 8);
                  if ( !v80 )
                    goto LABEL_254;
                  v81 = *(_BYTE *)(v18 + 3);
                  v82 = 0;
                  if ( !v81 )
                    goto LABEL_254;
                  do
                  {
                    v83 = (_BYTE *)(v80 + 2LL * v82);
                    if ( *v83 == 15 )
                    {
                      if ( v83[1] != 0xFF )
                      {
                        ++v83[1];
                        goto LABEL_19;
                      }
                    }
                    else if ( !v83[1] )
                    {
                      v19 = (_WORD *)(v80 + 2LL * v82);
                    }
                    ++v82;
                  }
                  while ( v82 < v81 );
                  if ( v19 )
                  {
                    *v19 = 271;
                  }
                  else
                  {
LABEL_254:
                    if ( !*(_BYTE *)(v18 + 1) )
                    {
                      v84 = *(_BYTE *)(v18 + 3);
                      if ( v84 == 0xFF )
                      {
                        ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v18);
                        *(_BYTE *)(v18 + 1) = 2;
                      }
                      else
                      {
                        if ( (unsigned int)v84 + 2 > 0xFF )
                          v85 = -1;
                        else
                          v85 = v84 + 2;
                        ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v18, v85);
                      }
                    }
                    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v18);
                  }
                }
              }
            }
LABEL_19:
            v15 = 0;
          }
        }
        KeReleaseSpinLock(p_Type + 40, v16);
        if ( !v15 )
          break;
        p_Type = (KSPIN_LOCK *)p_Type[53];
        Parameter = 0LL;
      }
      while ( *(_BYTE *)p_Type == 5 );
      v8 = a1;
      p_Lock = &a2->Lock;
    }
    a2->MiniportThread = 0LL;
    a2->LockDbg = 0;
    KeReleaseSpinLock(p_Lock, v13);
    v4 = (KSPIN_LOCK *)Parameter;
  }
  if ( *(_BYTE *)p_Type == 17 )
    ndisOidTranslateBetweenOids(a2, v10, v8);
  if ( KeGetCurrentIrql() )
  {
    v25 = ndisQueueRequestWorkItem(p_Type, v8, *(unsigned __int8 *)p_Type);
    goto LABEL_50;
  }
  if ( !v4 )
  {
    v39 = 1;
    v40 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    if ( !a2->Ref.Closing )
    {
      RefCountTracker = a2->RefCountTracker;
      if ( RefCountTracker )
      {
        if ( *((_BYTE *)RefCountTracker + 1) )
        {
          if ( *((_BYTE *)RefCountTracker + 1) == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 1154), 1u);
        }
        else
        {
          v42 = 0LL;
          if ( _bittestandset((signed __int32 *)RefCountTracker + 6, 8u) )
          {
            v76 = *((_QWORD *)RefCountTracker + 1);
            if ( v76 && (v77 = *((_BYTE *)RefCountTracker + 3), v78 = 0, v77) )
            {
              do
              {
                v79 = (_BYTE *)(v76 + 2LL * v78);
                if ( *v79 == 72 )
                {
                  if ( v79[1] != 0xFF )
                  {
                    ++v79[1];
                    goto LABEL_59;
                  }
                }
                else if ( !v79[1] )
                {
                  v42 = (_WORD *)(v76 + 2LL * v78);
                }
                ++v78;
              }
              while ( v78 < v77 );
              if ( !v42 )
                goto LABEL_223;
              *v42 = 328;
            }
            else
            {
LABEL_223:
              if ( !*((_BYTE *)RefCountTracker + 1) )
              {
                v100 = *((_BYTE *)RefCountTracker + 3);
                if ( v100 == 0xFF )
                {
                  ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                  *((_BYTE *)RefCountTracker + 1) = 2;
                }
                else
                {
                  if ( (unsigned int)v100 + 2 <= 0xFF )
                    v101 = v100 + 2;
                  else
                    v101 = -1;
                  ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v101);
                }
              }
              NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
            }
          }
        }
      }
LABEL_59:
      v37 = a2->Ref.ReferenceCount++ == -1;
      if ( !v37 )
        goto LABEL_60;
      a2->Ref.ReferenceCount = -1;
    }
    v39 = 0;
LABEL_60:
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_qD(12LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a2, a2->Ref.ReferenceCount);
    KeReleaseSpinLock(&a2->Ref.SpinLock, v40);
    if ( !v39 )
    {
      v8 = a1;
      v25 = -1073741823;
      goto LABEL_51;
    }
    v43 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    v25 = -1073741823;
    v44 = a1;
    v45 = v43;
    a2->MiniportThread = KeGetCurrentThread();
    a2->LockDbg = 2297895;
    v46 = (_LIST_ENTRY *)(a1 + 72);
    v47 = byte_1C0092612;
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
    {
      WPP_SF_qq(21LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a2, a1);
      v47 = byte_1C0092612;
      v44 = a1;
    }
    v46->Flink = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( (a2->PnPFlags & 0x100) == 0 )
    {
      p_OidRequestList = &a2->OidRequestList;
      Flink = a2->OidRequestList.Flink;
      if ( Flink == &a2->OidRequestList )
      {
LABEL_67:
        Blink = a2->OidRequestList.Blink;
        v25 = 0;
        if ( Blink->Flink != p_OidRequestList )
          __fastfail(3u);
        v46->Flink = p_OidRequestList;
        *(_QWORD *)(a1 + 80) = Blink;
        Blink->Flink = v46;
        a2->OidRequestList.Blink = v46;
      }
      else
      {
        while ( Flink != v46 )
        {
          Flink = Flink->Flink;
          if ( Flink == p_OidRequestList )
            goto LABEL_67;
        }
      }
    }
    if ( (unsigned __int8)v47 >= 4u )
      WPP_SF_qqd(22LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a2, v44, v25);
    a2->MiniportThread = 0LL;
    a2->LockDbg = 0;
    KeReleaseSpinLock(&a2->Lock, v45);
    if ( !v25 )
    {
      ndisMDoOidRequest(a2);
      v25 = 259;
    }
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a2);
    v51 = 0;
    v52 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    v53 = (ULONG_PTR)a2->RefCountTracker;
    v54 = v52;
    if ( v53 )
    {
      if ( *(_BYTE *)(v53 + 1) )
      {
        if ( *(_BYTE *)(v53 + 1) == 1 )
        {
          v102 = v53 + 4616;
          v103 = *(_DWORD *)(v53 + 4672);
          if ( v103 >> 17 < 0x3FFE && (unsigned __int16)v103 >> 1 == (v103 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v53 + 4616));
            *(_DWORD *)(v102 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v103 & 0xFFFE) == 0 && (v103 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v53, 0x48uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v53 + 4616), 0);
          }
          v4 = (KSPIN_LOCK *)Parameter;
        }
      }
      else
      {
        v55 = *(_QWORD *)(v53 + 8);
        if ( v55 && (v56 = *(_BYTE *)(v53 + 3), v57 = 0, v56) )
        {
          while ( 1 )
          {
            v58 = (_BYTE *)(v55 + 2LL * v57);
            if ( *v58 == 72 )
            {
              if ( v58[1] )
                break;
            }
            if ( ++v57 >= v56 )
              goto LABEL_81;
          }
          --v58[1];
        }
        else
        {
LABEL_81:
          if ( !_bittestandreset((signed __int32 *)(v53 + 24), 8u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v53, 0x48uLL);
        }
      }
    }
    v37 = a2->Ref.ReferenceCount-- == 1;
    if ( v37 )
      v51 = 1;
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a2, a2->Ref.ReferenceCount);
    KeReleaseSpinLock(&a2->Ref.SpinLock, v54);
    if ( v51 )
    {
      RemoveReadyEvent = a2->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a2);
    goto LABEL_49;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(v4 + 40);
  ++*((_WORD *)v4 + 164);
  v21 = v20;
  v22 = v4[42];
  if ( v22 )
  {
    if ( *(_BYTE *)(v22 + 1) )
    {
      if ( *(_BYTE *)(v22 + 1) == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 840), 1u);
    }
    else
    {
      v23 = 0LL;
      if ( _bittestandset((signed __int32 *)(v22 + 16), 0xDu) )
      {
        v72 = *(_QWORD *)(v22 + 8);
        if ( !v72 )
          goto LABEL_255;
        v73 = *(_BYTE *)(v22 + 3);
        v74 = 0;
        if ( !v73 )
          goto LABEL_255;
        do
        {
          v75 = (_BYTE *)(v72 + 2LL * v74);
          if ( *v75 == 13 )
          {
            if ( v75[1] != 0xFF )
            {
              ++v75[1];
              goto LABEL_30;
            }
          }
          else if ( !v75[1] )
          {
            v23 = (_WORD *)(v72 + 2LL * v74);
          }
          ++v74;
        }
        while ( v74 < v73 );
        if ( v23 )
        {
          *v23 = 269;
        }
        else
        {
LABEL_255:
          if ( !*(_BYTE *)(v22 + 1) )
          {
            v86 = *(_BYTE *)(v22 + 3);
            if ( v86 == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v22);
              *(_BYTE *)(v22 + 1) = 2;
            }
            else
            {
              if ( (unsigned int)v86 + 2 > 0xFF )
                v87 = -1;
              else
                v87 = v86 + 2;
              ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v22, v87);
            }
          }
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v22);
        }
      }
    }
  }
LABEL_30:
  KeReleaseSpinLock(v4 + 40, v21);
  v24 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  a2->LockDbg = 2297873;
  KeAcquireSpinLockAtDpcLevel(v4 + 18);
  v25 = -1073741823;
  v26 = (KSPIN_LOCK **)(a1 + 72);
  v4[19] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_DWORD *)v4 + 40) = 2297874;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( (*(_DWORD *)(v4[4] + 124) & 0x100) == 0 )
  {
    v27 = v4 + 21;
    v28 = (KSPIN_LOCK *)v4[21];
    if ( v28 == v4 + 21 )
    {
LABEL_32:
      v29 = (KSPIN_LOCK **)v4[22];
      v25 = 0;
      if ( *v29 != v27 )
        __fastfail(3u);
      *v26 = v27;
      *(_QWORD *)(a1 + 80) = v29;
      *v29 = (KSPIN_LOCK *)v26;
      v4[22] = (KSPIN_LOCK)v26;
    }
    else
    {
      while ( v28 != (KSPIN_LOCK *)v26 )
      {
        v28 = (KSPIN_LOCK *)*v28;
        if ( v28 == v27 )
          goto LABEL_32;
      }
    }
  }
  v4[19] = 0LL;
  *((_DWORD *)v4 + 40) = 0;
  KeReleaseSpinLockFromDpcLevel(v4 + 18);
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(&a2->Lock, v24);
  if ( !v25 )
  {
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v4, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v96 = KeAcquireSpinLockRaiseToDpc(v4 + 18);
      v4[19] = (KSPIN_LOCK)KeGetCurrentThread();
      v97 = v96;
      *((_DWORD *)v4 + 40) = 2297484;
      *((_BYTE *)v4 + 240) = 1;
      ndisQueueStackExpansionFallbackWorkItem(v4);
      v4[19] = 0LL;
      *((_DWORD *)v4 + 40) = 0;
      KeReleaseSpinLock(v4 + 18, v97);
    }
    v25 = 259;
  }
  v30 = KeAcquireSpinLockRaiseToDpc(v4 + 40);
  v31 = v4[42];
  v32 = v30;
  if ( v31 )
  {
    if ( *(_BYTE *)(v31 + 1) )
    {
      if ( *(_BYTE *)(v31 + 1) == 1 )
      {
        v98 = v31 + 840;
        v99 = *(_DWORD *)(v31 + 896);
        if ( v99 >> 17 < 0x3FFE && (unsigned __int16)v99 >> 1 == (v99 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v31 + 840));
          *(_DWORD *)(v98 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v99 & 0xFFFE) == 0 && (v99 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v31, 0xDuLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v31 + 840), 0);
        }
      }
    }
    else
    {
      v33 = *(_QWORD *)(v31 + 8);
      if ( v33 && (v34 = *(_BYTE *)(v31 + 3), v35 = 0, v34) )
      {
        while ( 1 )
        {
          v36 = (_BYTE *)(v33 + 2LL * v35);
          if ( *v36 == 13 )
          {
            if ( v36[1] )
              break;
          }
          if ( ++v35 >= v34 )
            goto LABEL_44;
        }
        --v36[1];
      }
      else
      {
LABEL_44:
        if ( !_bittestandreset((signed __int32 *)(v31 + 16), 0xDu) )
          ndisBugCheckEx(0x1EuLL, 0LL, v31, 0xDuLL);
      }
    }
  }
  v37 = (*((_WORD *)v4 + 164))-- == 1;
  if ( v37 && !*((_BYTE *)v4 + 331) )
  {
    NdisFreeRefCount((PVOID)v4[42]);
    v4[42] = 0LL;
  }
  KeReleaseSpinLock(v4 + 40, v32);
LABEL_49:
  v8 = a1;
LABEL_50:
  if ( v25 != 259 && v4 )
    ndisDereferenceRef(v4 + 40);
LABEL_51:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(58LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v8, a2, v25);
  return v25;
}
