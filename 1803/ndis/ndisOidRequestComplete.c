/*
 * XREFs of ndisOidRequestComplete @ 0x1C000D290
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C000BD50 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ndisPreProcessOid @ 0x1C000D870 (ndisPreProcessOid.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     ndisMAbortRequests @ 0x1C00124B0 (ndisMAbortRequests.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C004431C (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00444B0 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045BB0 (ndisMOidRequestCompleteInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059780 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E1C60 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     WPP_SF_qDqL @ 0x1C0042180 (WPP_SF_qDqL.c)
 *     ?ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0043148 (-ndisCheckOidBufferIntegrity@@YAXPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qLq @ 0x1C0043C94 (WPP_SF_qLq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     WPP_SF_qqqqDL @ 0x1C004414C (WPP_SF_qqqqDL.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0059D2C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C005CA54 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMResetCompleteStage2 @ 0x1C00614CC (ndisMResetCompleteStage2.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 */

void __fastcall ndisOidRequestComplete(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  _BYTE *v4; // r15
  _BYTE *v5; // rdi
  int v6; // eax
  bool v7; // r13
  ULONG_PTR v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  void (__fastcall *v12)(__int64 *); // rax
  __int64 v13; // rbp
  int v14; // ebp
  bool v15; // cl
  _DWORD *v16; // r8
  int v17; // ebp
  int v18; // edi
  ULONG_PTR v19; // rdi
  __int64 v20; // rdi
  KIRQL v21; // al
  __int64 v22; // rdi
  KIRQL v23; // al
  ULONG_PTR v24; // r8
  KIRQL v25; // r14
  int v26; // ecx
  __int64 v27; // r9
  unsigned __int8 v28; // dl
  _BYTE *v29; // r10
  bool v30; // zf
  _BYTE *v31; // rdi
  unsigned int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // rbp
  unsigned int v35; // r14d
  char v36; // al
  __int64 v37; // r9
  KIRQL v38; // r14
  int v39; // ecx
  int v40; // ecx
  unsigned __int8 v41; // al
  __int64 v42; // rcx
  unsigned __int8 v43; // al
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rsi
  KIRQL v47; // al
  KIRQL v48; // r12
  ULONG_PTR v49; // r8
  int v50; // ecx
  __int64 v51; // r10
  unsigned __int8 v52; // r9
  _BYTE *v53; // rdx
  char v54; // al
  char v55; // di
  KIRQL v56; // al
  __int64 v57; // rax
  __int64 *v58; // rsi
  __int64 v59; // rsi
  KIRQL v60; // r15
  int v61; // edx
  ULONG_PTR v62; // rsi
  unsigned int v63; // edx
  int v64; // ecx
  ULONG_PTR v65; // rdi
  unsigned int v66; // edx
  int v67; // ecx
  __int64 v68; // r8
  char v69; // [rsp+A0h] [rbp+8h]
  _BYTE *v70; // [rsp+A8h] [rbp+10h]
  _BYTE *v71; // [rsp+B0h] [rbp+18h]
  ULONG_PTR v72; // [rsp+B8h] [rbp+20h]

  v2 = a1[4];
  v70 = 0LL;
  v4 = 0LL;
  v71 = 0LL;
  v69 = 0;
  v5 = *(_BYTE **)(v2 + 104);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqqDL(a1, a2, *a1, a1[2], a1[3], v2, *(_DWORD *)(v2 + 32), *((_DWORD *)a1 + 10));
  *(_DWORD *)(v2 + 88) |= 1u;
  v6 = *(_DWORD *)(v2 + 88);
  v7 = (v6 & 0x200000) != 0;
  v8 = a1[4];
  v72 = v8;
  if ( (v6 & 0x220) != 0 )
  {
    a1[3] = (__int64)v5;
    v70 = v5;
    if ( (*(_DWORD *)(v2 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    a1[3] = 0LL;
    if ( *v5 == 5 )
    {
      v4 = v5;
      v71 = v5;
      a1[1] = (__int64)v5;
      goto LABEL_6;
    }
  }
  v69 = 1;
LABEL_6:
  v9 = *a1;
  if ( *a1 )
  {
    v41 = *(_BYTE *)(v9 + 32);
    if ( (v41 > 6u || v41 == 6 && *(_BYTE *)(v9 + 33) >= 0x28u) && !*((_DWORD *)a1 + 10) )
      goto LABEL_104;
  }
  else
  {
    v9 = a1[2];
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 16);
      v11 = *(_BYTE *)(v10 + 100);
      if ( v11 > 6u || v11 == 6 && *(_BYTE *)(v10 + 101) >= 0x28u )
      {
        v42 = *(_QWORD *)(v9 + 32);
        v43 = *(_BYTE *)(v42 + 32);
        if ( (v43 > 6u || v43 == 6 && *(_BYTE *)(v42 + 33) >= 0x28u) && !*((_DWORD *)a1 + 10) )
LABEL_104:
          ndisCheckOidBufferIntegrity(v8, (struct _NDIS_OBJECT_HEADER *)v9);
      }
    }
  }
  if ( (*(_DWORD *)(v2 + 88) & 0x40004) == 4 && !v7 && (*(_DWORD *)(v2 + 88) & 0x1000000) == 0 )
  {
    v12 = (void (__fastcall *)(__int64 *))*((_QWORD *)&unk_1C007F380 + 3 * *(unsigned int *)(v2 + 92));
    if ( v12 )
      v12(a1);
  }
  v13 = *a1;
  if ( *a1 && *(_DWORD *)(a1[4] + 32) == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 3896));
    *(_DWORD *)(v13 + 3904) = *(_DWORD *)(v13 + 3908);
    *(_DWORD *)(v13 + 3908) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 3896), v56);
  }
  v14 = *(_DWORD *)(v2 + 88);
  v15 = (v14 & 2) != 0;
  v16 = (_DWORD *)a1[4];
  v17 = v14 & 0x2000000;
  v18 = v16[1];
  if ( (*(_DWORD *)(v2 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v2 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v2 + 112), 0, 0);
  }
  else
  {
    if ( !v15 )
      goto LABEL_19;
    if ( (*(_DWORD *)(v2 + 88) & 0x100) != 0 )
    {
      v57 = a1[2];
      v58 = (__int64 *)(v57 + 32);
      if ( !v57 )
        v58 = a1;
      v59 = *v58;
      v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v59 + 96));
      *(_QWORD *)(v59 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v59 + 1856) = 2297293;
      if ( v18 == 1 && (*(_DWORD *)(v59 + 120) & 0x200000) != 0 )
      {
        v61 = *((_DWORD *)a1 + 10);
        if ( v61 && v61 != -1073676276 && (unsigned __int8)byte_1C0099612 >= 3u )
          WPP_SF_qdD(44LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v59, *(unsigned int *)(a1[4] + 32), v61);
        ndisMResetCompleteStage2((NDIS_HANDLE)v59);
      }
      *(_DWORD *)(v59 + 120) &= ~0x1000000u;
      *(_QWORD *)(v59 + 520) = 0LL;
      *(_DWORD *)(v59 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v59 + 96), v60);
      v16 = (_DWORD *)a1[4];
      v4 = v71;
    }
    ExFreePoolWithTag(v16, 0);
  }
  a1[4] = 0LL;
LABEL_19:
  v19 = *a1;
  if ( *a1 )
  {
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 96));
    *(_QWORD *)(v19 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v19 + 1856) = 2297350;
    if ( !v7 )
    {
      *(_DWORD *)(v19 + 4452) &= ~2u;
      v39 = *((_DWORD *)a1 + 11);
      if ( (v39 & 1) == 0 )
      {
        if ( (unsigned __int8)byte_1C0099612 >= 4u )
          WPP_SF_q(45LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v19, v37);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          McTemplateK0jqxq(
            v39,
            (unsigned int)&ClearingOidRequest,
            v19 + 4032,
            v19 + 4032,
            *(_DWORD *)(v19 + 4080),
            *(_QWORD *)(v19 + 4048),
            28);
        *(_DWORD *)(v19 + 4452) &= ~1u;
        *(_QWORD *)(v19 + 2224) = 0LL;
      }
      v40 = *((_DWORD *)a1 + 11);
      if ( (v40 & 3) == 2 && *(_QWORD *)(v19 + 2216) != v8 )
        ndisBugCheckEx(0x26uLL, v19, v8, 0LL);
      if ( (v40 & 1) == 0 && *(_QWORD *)(v19 + 2216) )
        *(_QWORD *)(v19 + 2216) = 0LL;
    }
    *(_QWORD *)(v19 + 520) = 0LL;
    *(_DWORD *)(v19 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 96), v38);
    *(_WORD *)(v19 + 1822) = 0;
  }
  else
  {
    v20 = a1[2];
    if ( v20 )
    {
      if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
      {
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 144));
        *(_QWORD *)(v20 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v20 + 160) = 2297422;
        if ( v7 )
        {
          --*(_DWORD *)(v20 + 856);
        }
        else
        {
          *(_DWORD *)(v20 + 56) &= ~0x800u;
          *(_QWORD *)(v20 + 184) = 0LL;
        }
        *(_QWORD *)(v20 + 152) = 0LL;
        *(_DWORD *)(v20 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 144), v21);
      }
      v22 = v20 + 320;
      if ( v7 )
      {
        ndisDereferenceRef((PKSPIN_LOCK)v22);
      }
      else
      {
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v22);
        v24 = *(_QWORD *)(v22 + 16);
        v25 = v23;
        if ( v24 - 2 > 1 )
        {
          if ( v24 <= 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v24, 0LL);
          if ( *(_BYTE *)(v24 + 2) <= 0xFu )
            ndisBugCheckEx(0x1EuLL, 2uLL, v24, 0xFuLL);
          v26 = *(unsigned __int8 *)(v24 + 1);
          if ( *(_BYTE *)(v24 + 1) )
          {
            if ( v26 == 1 )
            {
              v62 = v24 + 968;
              v63 = *(_DWORD *)(v24 + 1024);
              v64 = (unsigned __int16)v63 >> 1;
              if ( v63 >> 17 < 0x3FFE && v64 == (v63 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 968));
                *(_DWORD *)(v62 + 56) &= 0x10001u;
              }
              else
              {
                if ( v64 == 0 && (v63 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v24, 0xFuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 968), 0);
              }
            }
          }
          else
          {
            v27 = *(_QWORD *)(v24 + 8);
            if ( v27 && (v28 = *(_BYTE *)(v24 + 3)) != 0 )
            {
              while ( 1 )
              {
                v29 = (_BYTE *)(v27 + 2LL * (unsigned __int8)v26);
                if ( *v29 == 15 )
                {
                  v36 = v29[1];
                  if ( v36 )
                    break;
                }
                LOBYTE(v26) = v26 + 1;
                if ( (unsigned __int8)v26 >= v28 )
                  goto LABEL_34;
              }
              v29[1] = v36 - 1;
            }
            else
            {
LABEL_34:
              if ( !_bittestandreset((signed __int32 *)(v24 + 16), 0xFu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v24, 0xFuLL);
            }
          }
        }
        v30 = (*(_WORD *)(v22 + 8))-- == 1;
        if ( v30 && !*(_BYTE *)(v22 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v22 + 16));
          *(_QWORD *)(v22 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v22, v25);
      }
    }
  }
  v31 = v70;
  if ( v70 && !v17 )
  {
    if ( !v69 )
    {
      v44 = *((unsigned int *)a1 + 10);
      v45 = a1[4];
      if ( v7 )
        ndisInvokeDirectOidRequestComplete(v70, v45, v44);
      else
        (*((void (__fastcall **)(_BYTE *, __int64, __int64))v70 + 98))(v70, v45, v44);
    }
    v46 = *((_QWORD *)v70 + 2);
    v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v46 + 96));
    *(_QWORD *)(v46 + 520) = KeGetCurrentThread();
    v48 = v47;
    *(_DWORD *)(v46 + 1856) = 1442229;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v70 + 87);
    v49 = *((_QWORD *)v70 + 86);
    if ( v49 - 2 > 1 )
    {
      if ( v49 <= 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v49, 0LL);
      if ( *(_BYTE *)(v49 + 2) <= 6u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v49, 6uLL);
      v50 = *(unsigned __int8 *)(v49 + 1);
      if ( *(_BYTE *)(v49 + 1) )
      {
        if ( v50 == 1 )
        {
          v65 = v49 + 392;
          v66 = *(_DWORD *)(v49 + 448);
          v67 = (unsigned __int16)v66 >> 1;
          if ( v66 >> 17 < 0x3FFE && v67 == (v66 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v49 + 392));
            *(_DWORD *)(v65 + 56) &= 0x10001u;
          }
          else
          {
            if ( v67 == 0 && (v66 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v49, 6uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 392), 0);
          }
          v31 = v70;
        }
      }
      else
      {
        v51 = *(_QWORD *)(v49 + 8);
        if ( v51 && (v52 = *(_BYTE *)(v49 + 3)) != 0 )
        {
          while ( 1 )
          {
            v53 = (_BYTE *)(v51 + 2LL * (unsigned __int8)v50);
            if ( *v53 == 6 )
            {
              v54 = v53[1];
              if ( v54 )
                break;
            }
            LOBYTE(v50) = v50 + 1;
            if ( (unsigned __int8)v50 >= v52 )
              goto LABEL_91;
          }
          v53[1] = v54 - 1;
        }
        else
        {
LABEL_91:
          if ( !_bittestandreset((signed __int32 *)(v49 + 16), 6u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v49, 6uLL);
        }
      }
    }
    v30 = (*((_DWORD *)v31 + 57))-- == 1;
    v55 = v30;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v70 + 87);
    if ( v55 )
      ndisMFinishClose(v70);
    *(_QWORD *)(v46 + 520) = 0LL;
    *(_DWORD *)(v46 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v46 + 96), v48);
    v4 = v71;
    v8 = v72;
  }
  if ( v4 && !v17 )
  {
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(46LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1[4], v4);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      McTemplateK0jqxqqq(
        a1[4],
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v4 + 816,
        (_DWORD)v4 + 816,
        *((_DWORD *)v4 + 208),
        *(_QWORD *)(*((_QWORD *)v4 + 105) + 1312LL),
        *(_DWORD *)(a1[4] + 32),
        *((_DWORD *)a1 + 10),
        146);
    v32 = *((_DWORD *)a1 + 10);
    v33 = a1[4];
    if ( v7 )
    {
      ndisFInvokeDirectOidRequestComplete(v4, a1[4], v32);
    }
    else
    {
      v34 = *((_QWORD *)v4 + 2);
      v35 = *(_DWORD *)(v33 + 32);
      if ( (unsigned __int8)byte_1C0099612 >= 4u )
        WPP_SF_qDqL(121LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, v4, v35, v33, *((_DWORD *)a1 + 10));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v34 + 256))(*((_QWORD *)v4 + 3), v33, v32);
      if ( (unsigned __int8)byte_1C0099612 >= 4u )
        WPP_SF_qLq(122LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, v4, v35, v33);
    }
  }
  a1[4] = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v68 = *a1;
    if ( !*a1 )
      v68 = a1[2];
    WPP_SF_qqq(47LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v68, v8, a1[3]);
  }
}
