/*
 * XREFs of ndisOidRequestComplete @ 0x1C000B560
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B070 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000B2E0 (ndisFDoOidRequestInternal.c)
 *     ndisPreProcessOid @ 0x1C000BAF0 (ndisPreProcessOid.c)
 *     ndisMAbortRequests @ 0x1C0025880 (ndisMAbortRequests.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0046030 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00461C4 (ndisCancelOidRequestOnMiniport.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059D40 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisPMAddRemoveAsync @ 0x1C00D5FF0 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     ?ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00453A0 (-ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     WPP_SF_qqqqDL @ 0x1C0045E60 (WPP_SF_qqqqDL.c)
 *     WPP_SF_qLq @ 0x1C005013C (WPP_SF_qLq.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     WPP_SF_qLqL @ 0x1C0059B8C (WPP_SF_qLqL.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C005A29C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C005C774 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060A74 (ndisMResetCompleteStage2.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C00FBAD4 (ndisMFinishClose.c)
 */

void __fastcall ndisOidRequestComplete(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  _BYTE *v3; // r12
  _BYTE *v5; // r15
  _BYTE *v6; // rdi
  int v7; // eax
  bool v8; // r13
  ULONG_PTR v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  void (__fastcall *v16)(__int64 *); // rax
  __int64 v17; // rbp
  int v18; // edi
  bool v19; // dl
  int v20; // edi
  int v21; // ebp
  ULONG_PTR v22; // rsi
  __int64 v23; // rsi
  KIRQL v24; // al
  __int64 v25; // rsi
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // r14
  __int64 v29; // r10
  unsigned __int8 v30; // r9
  unsigned __int8 v31; // cl
  _BYTE *v32; // rdx
  bool v33; // zf
  __int64 v34; // rdi
  unsigned int v35; // esi
  __int64 v36; // rbp
  unsigned int v37; // r14d
  KIRQL v38; // r14
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rsi
  KIRQL v44; // r12
  ULONG_PTR v45; // r8
  __int64 v46; // r10
  unsigned __int8 v47; // r9
  unsigned __int8 v48; // cl
  _BYTE *v49; // rdx
  char v50; // bp
  KIRQL v51; // al
  __int64 v52; // rax
  __int64 *v53; // rsi
  __int64 v54; // rsi
  KIRQL v55; // r15
  int v56; // edx
  ULONG_PTR v57; // rbp
  unsigned int v58; // edx
  ULONG_PTR v59; // rbp
  unsigned int v60; // edx
  __int64 v61; // r8
  char v62; // [rsp+A0h] [rbp+8h]
  KSPIN_LOCK *v63; // [rsp+A8h] [rbp+10h]
  _BYTE *v64; // [rsp+B0h] [rbp+18h]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp+20h]

  v2 = a1[4];
  v3 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v5 = 0LL;
  v62 = 0;
  v6 = *(_BYTE **)(v2 + 104);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqqDL(a1, a2, *a1, a1[2], a1[3], v2, *(_DWORD *)(v2 + 32), *((_DWORD *)a1 + 10));
  *(_DWORD *)(v2 + 88) |= 1u;
  v7 = *(_DWORD *)(v2 + 88);
  v8 = (v7 & 0x200000) != 0;
  v9 = a1[4];
  BugCheckParameter3 = v9;
  if ( (v7 & 0x220) != 0 )
  {
    a1[3] = (__int64)v6;
    v3 = v6;
    v63 = (KSPIN_LOCK *)v6;
    if ( (*(_DWORD *)(v2 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    a1[3] = 0LL;
    if ( *v6 == 5 )
    {
      v5 = v6;
      v64 = v6;
      a1[1] = (__int64)v6;
      goto LABEL_6;
    }
  }
  v62 = 1;
LABEL_6:
  v10 = *a1;
  if ( *a1 )
  {
    v15 = *(_BYTE *)(v10 + 32);
    if ( (v15 > 6u || v15 == 6 && *(_BYTE *)(v10 + 33) >= 0x28u) && !*((_DWORD *)a1 + 10) )
      goto LABEL_99;
  }
  else
  {
    v10 = a1[2];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_BYTE *)(v11 + 100);
      if ( v12 > 6u || v12 == 6 && *(_BYTE *)(v11 + 101) >= 0x28u )
      {
        v13 = *(_QWORD *)(v10 + 32);
        v14 = *(_BYTE *)(v13 + 32);
        if ( (v14 > 6u || v14 == 6 && *(_BYTE *)(v13 + 33) >= 0x28u) && !*((_DWORD *)a1 + 10) )
LABEL_99:
          ndisCheckOidBufferIntegrity(v9, (struct _NDIS_OBJECT_HEADER *)v10);
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 88) & 0x40004) == 4 && !v8 && (*(_DWORD *)(v2 + 88) & 0x1000000) == 0 )
  {
    v16 = (void (__fastcall *)(__int64 *))*((_QWORD *)&unk_1C007A360 + 3 * *(unsigned int *)(v2 + 92));
    if ( v16 )
      v16(a1);
  }
  v17 = *a1;
  if ( *a1 && *(_DWORD *)(a1[4] + 32) == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 3896));
    *(_DWORD *)(v17 + 3904) = *(_DWORD *)(v17 + 3908);
    *(_DWORD *)(v17 + 3908) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 3896), v51);
  }
  v18 = *(_DWORD *)(v2 + 88);
  v19 = (v18 & 2) != 0;
  v20 = v18 & 0x2000000;
  v21 = *(_DWORD *)(a1[4] + 4);
  if ( (*(_DWORD *)(v2 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v2 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v2 + 112), 0, 0);
  }
  else
  {
    if ( !v19 )
      goto LABEL_26;
    if ( (*(_DWORD *)(v2 + 88) & 0x100) != 0 )
    {
      v52 = a1[2];
      v53 = (__int64 *)(v52 + 32);
      if ( !v52 )
        v53 = a1;
      v54 = *v53;
      v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 96));
      *(_QWORD *)(v54 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v54 + 1856) = 2296993;
      if ( v21 == 1 && (*(_DWORD *)(v54 + 120) & 0x200000) != 0 )
      {
        v56 = *((_DWORD *)a1 + 10);
        if ( v56 && v56 != -1073676276 && (unsigned __int8)byte_1C0092612 >= 3u )
          WPP_SF_qdD(44LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v54, *(unsigned int *)(a1[4] + 32), v56);
        ndisMResetCompleteStage2((NDIS_HANDLE)v54);
      }
      *(_DWORD *)(v54 + 120) &= ~0x1000000u;
      *(_QWORD *)(v54 + 520) = 0LL;
      *(_DWORD *)(v54 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v54 + 96), v55);
      v5 = v64;
    }
    ExFreePoolWithTag((PVOID)a1[4], 0);
  }
  a1[4] = 0LL;
LABEL_26:
  v22 = *a1;
  if ( *a1 )
  {
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 96));
    *(_QWORD *)(v22 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v22 + 1856) = 2297050;
    if ( !v8 )
    {
      *(_DWORD *)(v22 + 4452) &= ~2u;
      v39 = *((_DWORD *)a1 + 11);
      if ( (v39 & 1) == 0 )
      {
        if ( (unsigned __int8)byte_1C0092612 >= 4u )
          WPP_SF_q(45LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v22);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          Template_jqxq(
            v39,
            (unsigned int)&ClearingOidRequest,
            v22 + 4032,
            v22 + 4032,
            *(_DWORD *)(v22 + 4080),
            *(_QWORD *)(v22 + 4048),
            240);
        *(_DWORD *)(v22 + 4452) &= ~1u;
        *(_QWORD *)(v22 + 2224) = 0LL;
      }
      v40 = *((_DWORD *)a1 + 11);
      if ( (v40 & 3) == 2 && *(_QWORD *)(v22 + 2216) != BugCheckParameter3 )
        ndisBugCheckEx(0x26uLL, v22, BugCheckParameter3, 0LL);
      if ( (v40 & 1) == 0 && *(_QWORD *)(v22 + 2216) )
        *(_QWORD *)(v22 + 2216) = 0LL;
    }
    *(_QWORD *)(v22 + 520) = 0LL;
    *(_DWORD *)(v22 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 96), v38);
    *(_WORD *)(v22 + 1822) = 0;
  }
  else
  {
    v23 = a1[2];
    if ( v23 )
    {
      if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
      {
        v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 144));
        *(_QWORD *)(v23 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v23 + 160) = 2297122;
        if ( v8 )
        {
          --*(_DWORD *)(v23 + 856);
        }
        else
        {
          *(_DWORD *)(v23 + 56) &= ~0x800u;
          *(_QWORD *)(v23 + 184) = 0LL;
        }
        *(_QWORD *)(v23 + 152) = 0LL;
        *(_DWORD *)(v23 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 144), v24);
      }
      if ( v8 )
      {
        ndisDereferenceRef((PKSPIN_LOCK)(v23 + 320));
      }
      else
      {
        v25 = v23 + 320;
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v25);
        v27 = *(_QWORD *)(v25 + 16);
        v28 = v26;
        if ( v27 )
        {
          if ( *(_BYTE *)(v27 + 1) )
          {
            if ( *(_BYTE *)(v27 + 1) == 1 )
            {
              v57 = v27 + 968;
              v58 = *(_DWORD *)(v27 + 1024);
              if ( v58 >> 17 < 0x3FFE && (unsigned __int16)v58 >> 1 == (v58 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 968));
                *(_DWORD *)(v57 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v58 & 0xFFFE) == 0 && (v58 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v27, 0xFuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 968), 0);
              }
            }
          }
          else
          {
            v29 = *(_QWORD *)(v27 + 8);
            if ( v29 && (v30 = *(_BYTE *)(v27 + 3), v31 = 0, v30) )
            {
              while ( 1 )
              {
                v32 = (_BYTE *)(v29 + 2LL * v31);
                if ( *v32 == 15 )
                {
                  if ( v32[1] )
                    break;
                }
                if ( ++v31 >= v30 )
                  goto LABEL_39;
              }
              --v32[1];
            }
            else
            {
LABEL_39:
              if ( !_bittestandreset((signed __int32 *)(v27 + 16), 0xFu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v27, 0xFuLL);
            }
          }
        }
        v33 = (*(_WORD *)(v25 + 8))-- == 1;
        if ( v33 && !*(_BYTE *)(v25 + 11) )
        {
          NdisFreeRefCount(*(PVOID *)(v25 + 16));
          *(_QWORD *)(v25 + 16) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v25, v28);
      }
    }
  }
  if ( v3 && !v20 )
  {
    if ( !v62 )
    {
      v41 = *((unsigned int *)a1 + 10);
      v42 = a1[4];
      if ( v8 )
        ndisInvokeDirectOidRequestComplete(v3, v42, v41);
      else
        (*((void (__fastcall **)(_BYTE *, __int64, __int64))v3 + 98))(v3, v42, v41);
    }
    v43 = *((_QWORD *)v3 + 2);
    v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v43 + 96));
    *(_QWORD *)(v43 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v43 + 1856) = 1442229;
    KeAcquireSpinLockAtDpcLevel(v63 + 87);
    v45 = v63[86];
    if ( v45 )
    {
      if ( *(_BYTE *)(v45 + 1) )
      {
        if ( *(_BYTE *)(v45 + 1) == 1 )
        {
          v59 = v45 + 392;
          v60 = *(_DWORD *)(v45 + 448);
          if ( v60 >> 17 < 0x3FFE && (unsigned __int16)v60 >> 1 == (v60 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v45 + 392));
            *(_DWORD *)(v59 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v60 & 0xFFFE) == 0 && (v60 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v45, 6uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v45 + 392), 0);
          }
        }
      }
      else
      {
        v46 = *(_QWORD *)(v45 + 8);
        if ( v46 && (v47 = *(_BYTE *)(v45 + 3), v48 = 0, v47) )
        {
          while ( 1 )
          {
            v49 = (_BYTE *)(v46 + 2LL * v48);
            if ( *v49 == 6 )
            {
              if ( v49[1] )
                break;
            }
            if ( ++v48 >= v47 )
              goto LABEL_86;
          }
          --v49[1];
        }
        else
        {
LABEL_86:
          if ( !_bittestandreset((signed __int32 *)(v45 + 16), 6u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v45, 6uLL);
        }
      }
    }
    v33 = (*((_DWORD *)v63 + 57))-- == 1;
    v50 = v33;
    KeReleaseSpinLockFromDpcLevel(v63 + 87);
    if ( v50 )
      ndisMFinishClose(v63);
    *(_QWORD *)(v43 + 520) = 0LL;
    *(_DWORD *)(v43 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v43 + 96), v44);
    v5 = v64;
  }
  if ( v5 && !v20 )
  {
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(46LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1[4], v5);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      Template_jqxqqq(
        a1[4],
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v5 + 816,
        (_DWORD)v5 + 816,
        *((_DWORD *)v5 + 208),
        *(_QWORD *)(*((_QWORD *)v5 + 105) + 1312LL),
        *(_DWORD *)(a1[4] + 32),
        *((_DWORD *)a1 + 10),
        102);
    if ( v8 )
    {
      ndisFInvokeDirectOidRequestComplete(v5, a1[4], *((unsigned int *)a1 + 10));
    }
    else
    {
      v34 = a1[4];
      v35 = *((_DWORD *)a1 + 10);
      v36 = *((_QWORD *)v5 + 2);
      v37 = *(_DWORD *)(v34 + 32);
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_qLqL(123LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v5, v37, v34, *((_DWORD *)a1 + 10));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v36 + 256))(*((_QWORD *)v5 + 3), v34, v35);
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_qLq(124LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v5, v37, v34);
    }
  }
  a1[4] = 0LL;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    v61 = *a1;
    if ( !*a1 )
      v61 = a1[2];
    WPP_SF_qqq(47LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v61, BugCheckParameter3, a1[3]);
  }
}
