/*
 * XREFs of ndisOidRequestComplete @ 0x1C000C470
 * Callers:
 *     ndisMAbortRequests @ 0x1C0001808 (ndisMAbortRequests.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000A160 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000C1D0 (ndisFDoOidRequestInternal.c)
 *     ndisPreProcessOid @ 0x1C000CA90 (ndisPreProcessOid.c)
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0043230 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00433C4 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C00449E0 (ndisMOidRequestCompleteInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059080 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E0480 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     WPP_SF_qDqL @ 0x1C0041034 (WPP_SF_qDqL.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqqqDL @ 0x1C0043060 (WPP_SF_qqqqDL.c)
 *     WPP_SF_qLq @ 0x1C004ED08 (WPP_SF_qLq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C0059620 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C005C1B8 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060AB4 (ndisMResetCompleteStage2.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMFinishClose @ 0x1C00FF3D8 (ndisMFinishClose.c)
 */

void __fastcall ndisOidRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _BYTE *v3; // r13
  _BYTE *v5; // rdi
  int v6; // eax
  bool v7; // r15
  _DWORD *v8; // r12
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  void (__fastcall *v13)(__int64); // rax
  ULONG_PTR v14; // rbp
  int v15; // ebp
  bool v16; // dl
  int v17; // ebp
  int v18; // edi
  ULONG_PTR v19; // rdi
  __int64 v20; // rdi
  KIRQL v21; // al
  __int64 v22; // rdi
  KIRQL v23; // al
  ULONG_PTR v24; // r8
  KIRQL v25; // r14
  __int64 v26; // r10
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // cl
  _BYTE *v29; // r9
  bool v30; // zf
  _BYTE *v31; // rdi
  __int64 v32; // rdi
  unsigned int v33; // esi
  __int64 v34; // rbp
  unsigned int v35; // r14d
  char v36; // al
  KIRQL v37; // r14
  int v38; // ecx
  int v39; // ecx
  unsigned __int8 v40; // al
  int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rcx
  unsigned __int8 v45; // al
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rsi
  KIRQL v52; // al
  KIRQL v53; // r12
  ULONG_PTR v54; // r10
  __int64 v55; // r9
  unsigned __int8 v56; // r8
  unsigned __int8 v57; // cl
  _BYTE *v58; // rdx
  char v59; // al
  char v60; // di
  KIRQL v61; // al
  __int64 v62; // rax
  __int64 *v63; // rsi
  __int64 v64; // rsi
  KIRQL v65; // r15
  int v66; // edx
  ULONG_PTR v67; // rsi
  unsigned int v68; // edx
  ULONG_PTR v69; // rdi
  unsigned int v70; // edx
  ULONG_PTR v71; // r8
  char v72; // [rsp+A0h] [rbp+8h]
  bool v73; // [rsp+A8h] [rbp+10h]
  _BYTE *v74; // [rsp+B0h] [rbp+18h]
  _DWORD *v75; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v74 = 0LL;
  v72 = 0;
  v5 = *(_BYTE **)(v2 + 104);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqqDL(
      a1,
      a2,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 24),
      v2,
      *(_DWORD *)(v2 + 32),
      *(_DWORD *)(a1 + 40));
  *(_DWORD *)(v2 + 88) |= 1u;
  v6 = *(_DWORD *)(v2 + 88);
  v7 = (v6 & 0x200000) != 0;
  v8 = *(_DWORD **)(a1 + 32);
  v75 = v8;
  v73 = v7;
  if ( (v6 & 0x220) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v5;
    v74 = v5;
    if ( (*(_DWORD *)(v2 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( *v5 == 5 )
    {
      v3 = v5;
      *(_QWORD *)(a1 + 8) = v5;
      goto LABEL_6;
    }
  }
  v72 = 1;
LABEL_6:
  v9 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v40 = *(_BYTE *)(v9 + 32);
    if ( (v40 > 6u || v40 == 6 && *(_BYTE *)(v9 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
    {
      v41 = v8[1];
      if ( (v41 & 0xFFFFFFFD) != 0 )
      {
        if ( v41 != 12 )
          goto LABEL_11;
        v42 = v8[13];
        v43 = v8[15];
      }
      else
      {
        v42 = v8[12];
        v43 = v8[13];
      }
      if ( v43 > v42 )
        ndisBugCheckEx(0x1DuLL, v9, (ULONG_PTR)v8, 0LL);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_BYTE *)(v11 + 100);
      if ( v12 > 6u || v12 == 6 && *(_BYTE *)(v11 + 101) >= 0x28u )
      {
        v44 = *(_QWORD *)(v10 + 32);
        v45 = *(_BYTE *)(v44 + 32);
        if ( (v45 > 6u || v45 == 6 && *(_BYTE *)(v44 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
        {
          v46 = v8[1];
          if ( (v46 & 0xFFFFFFFD) != 0 )
          {
            if ( v46 != 12 )
              goto LABEL_11;
            v47 = v8[13];
            v48 = v8[15];
          }
          else
          {
            v47 = v8[12];
            v48 = v8[13];
          }
          if ( v48 > v47 )
            ndisBugCheckEx(0x1DuLL, v10, (ULONG_PTR)v8, 0LL);
        }
      }
    }
  }
LABEL_11:
  if ( (*(_DWORD *)(v2 + 88) & 0x40004) == 4 && !v7 && (*(_DWORD *)(v2 + 88) & 0x1000000) == 0 )
  {
    v13 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_1C007E360 + 3 * *(unsigned int *)(v2 + 92));
    if ( v13 )
      v13(a1);
  }
  v14 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL) == -50265855 && *(_DWORD *)(a1 + 40) )
  {
    v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 3896));
    *(_DWORD *)(v14 + 3904) = *(_DWORD *)(v14 + 3908);
    *(_DWORD *)(v14 + 3908) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 3896), v61);
  }
  v15 = *(_DWORD *)(v2 + 88);
  v16 = (v15 & 2) != 0;
  v17 = v15 & 0x2000000;
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL);
  if ( (*(_DWORD *)(v2 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(a1 + 40);
    KeSetEvent((PRKEVENT)(v2 + 112), 0, 0);
  }
  else
  {
    if ( !v16 )
      goto LABEL_19;
    if ( (*(_DWORD *)(v2 + 88) & 0x100) != 0 )
    {
      v62 = *(_QWORD *)(a1 + 16);
      v63 = (__int64 *)(v62 + 32);
      if ( !v62 )
        v63 = (__int64 *)a1;
      v64 = *v63;
      v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v64 + 96));
      *(_QWORD *)(v64 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v64 + 1856) = 2297298;
      if ( v18 == 1 && (*(_DWORD *)(v64 + 120) & 0x200000) != 0 )
      {
        v66 = *(_DWORD *)(a1 + 40);
        if ( v66 && v66 != -1073676276 && (unsigned __int8)byte_1C0098752 >= 3u )
          WPP_SF_qdD(
            44LL,
            &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids,
            v64,
            *(unsigned int *)(*(_QWORD *)(a1 + 32) + 32LL),
            v66);
        ndisMResetCompleteStage2((NDIS_HANDLE)v64);
      }
      *(_DWORD *)(v64 + 120) &= ~0x1000000u;
      *(_QWORD *)(v64 + 520) = 0LL;
      *(_DWORD *)(v64 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v64 + 96), v65);
      v7 = v73;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
LABEL_19:
  v19 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 96));
    *(_QWORD *)(v19 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v19 + 1856) = 2297355;
    if ( !v7 )
    {
      *(_DWORD *)(v19 + 4452) &= ~2u;
      v38 = *(_DWORD *)(a1 + 44);
      if ( (v38 & 1) == 0 )
      {
        if ( (unsigned __int8)byte_1C0098752 >= 4u )
          WPP_SF_q(45LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v19);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          McTemplateK0jqxq(
            v38,
            (unsigned int)&ClearingOidRequest,
            v19 + 4032,
            v19 + 4032,
            *(_DWORD *)(v19 + 4080),
            *(_QWORD *)(v19 + 4048),
            33);
        *(_DWORD *)(v19 + 4452) &= ~1u;
        *(_QWORD *)(v19 + 2224) = 0LL;
      }
      v39 = *(_DWORD *)(a1 + 44);
      if ( (v39 & 3) == 2 && *(_DWORD **)(v19 + 2216) != v8 )
        ndisBugCheckEx(0x26uLL, v19, (ULONG_PTR)v8, 0LL);
      if ( (v39 & 1) == 0 && *(_QWORD *)(v19 + 2216) )
        *(_QWORD *)(v19 + 2216) = 0LL;
    }
    *(_QWORD *)(v19 + 520) = 0LL;
    *(_DWORD *)(v19 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 96), v37);
    *(_WORD *)(v19 + 1822) = 0;
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 16);
    if ( v20 )
    {
      if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
      {
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 144));
        *(_QWORD *)(v20 + 152) = KeGetCurrentThread();
        *(_DWORD *)(v20 + 160) = 2297427;
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
      if ( v7 )
      {
        ndisDereferenceRef((PKSPIN_LOCK)(v20 + 320));
      }
      else
      {
        v22 = v20 + 320;
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v22);
        v24 = *(_QWORD *)(v22 + 16);
        v25 = v23;
        if ( v24 )
        {
          if ( *(_BYTE *)(v24 + 1) )
          {
            if ( *(_BYTE *)(v24 + 1) == 1 )
            {
              v67 = v24 + 968;
              v68 = *(_DWORD *)(v24 + 1024);
              if ( v68 >> 17 < 0x3FFE && (unsigned __int16)v68 >> 1 == (v68 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 968));
                *(_DWORD *)(v67 + 56) &= 0x10001u;
              }
              else
              {
                if ( (v68 & 0xFFFE) == 0 && (v68 & 1) == 0 )
                  ndisBugCheckEx(0x1EuLL, 0LL, v24, 0xFuLL);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 968), 0);
              }
            }
          }
          else
          {
            v26 = *(_QWORD *)(v24 + 8);
            if ( v26 && (v27 = *(_BYTE *)(v24 + 3), v28 = 0, v27) )
            {
              while ( 1 )
              {
                v29 = (_BYTE *)(v26 + 2LL * v28);
                if ( *v29 == 15 )
                {
                  v36 = v29[1];
                  if ( v36 )
                    break;
                }
                if ( ++v28 >= v27 )
                  goto LABEL_32;
              }
              v29[1] = v36 - 1;
            }
            else
            {
LABEL_32:
              if ( !_bittestandreset((signed __int32 *)(v24 + 16), 0xFu) )
                ndisBugCheckEx(0x1EuLL, 0LL, v24, 0xFuLL);
            }
          }
        }
        v30 = (*(_WORD *)(v22 + 8))-- == 1;
        if ( v30 && !*(_BYTE *)(v22 + 11) )
        {
          NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v22 + 16));
          *(_QWORD *)(v22 + 16) = 0LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v22, v25);
      }
    }
  }
  v31 = v74;
  if ( v74 && !v17 )
  {
    if ( !v72 )
    {
      v49 = *(unsigned int *)(a1 + 40);
      v50 = *(_QWORD *)(a1 + 32);
      if ( v7 )
        ndisInvokeDirectOidRequestComplete(v74, v50, v49);
      else
        (*((void (__fastcall **)(_BYTE *, __int64, __int64))v74 + 98))(v74, v50, v49);
    }
    v51 = *((_QWORD *)v74 + 2);
    v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v51 + 96));
    *(_QWORD *)(v51 + 520) = KeGetCurrentThread();
    v53 = v52;
    *(_DWORD *)(v51 + 1856) = 1442229;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v74 + 87);
    v54 = *((_QWORD *)v74 + 86);
    if ( v54 )
    {
      if ( *(_BYTE *)(v54 + 1) )
      {
        if ( *(_BYTE *)(v54 + 1) == 1 )
        {
          v69 = v54 + 392;
          v70 = *(_DWORD *)(v54 + 448);
          if ( v70 >> 17 < 0x3FFE && (unsigned __int16)v70 >> 1 == (v70 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v54 + 392));
            *(_DWORD *)(v69 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v70 & 0xFFFE) == 0 && (v70 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v54, 6uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v54 + 392), 0);
          }
          v31 = v74;
        }
      }
      else
      {
        v55 = *(_QWORD *)(v54 + 8);
        if ( v55 && (v56 = *(_BYTE *)(v54 + 3), v57 = 0, v56) )
        {
          while ( 1 )
          {
            v58 = (_BYTE *)(v55 + 2LL * v57);
            if ( *v58 == 6 )
            {
              v59 = v58[1];
              if ( v59 )
                break;
            }
            if ( ++v57 >= v56 )
              goto LABEL_95;
          }
          v58[1] = v59 - 1;
        }
        else
        {
LABEL_95:
          if ( !_bittestandreset((signed __int32 *)(v54 + 16), 6u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v54, 6uLL);
        }
      }
    }
    v30 = (*((_DWORD *)v31 + 57))-- == 1;
    v60 = v30;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v74 + 87);
    if ( v60 )
      ndisMFinishClose(v74);
    *(_QWORD *)(v51 + 520) = 0LL;
    *(_DWORD *)(v51 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v51 + 96), v53);
    v7 = v73;
    v8 = v75;
  }
  if ( v3 && !v17 )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qq(46LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, *(_QWORD *)(a1 + 32), v3);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      McTemplateK0jqxqqq(
        *(_QWORD *)(a1 + 32),
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v3 + 816,
        (_DWORD)v3 + 816,
        *((_DWORD *)v3 + 208),
        *(_QWORD *)(*((_QWORD *)v3 + 105) + 1312LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL),
        *(_DWORD *)(a1 + 40),
        151);
    if ( v7 )
    {
      ndisFInvokeDirectOidRequestComplete(v3, *(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40));
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 32);
      v33 = *(_DWORD *)(a1 + 40);
      v34 = *((_QWORD *)v3 + 2);
      v35 = *(_DWORD *)(v32 + 32);
      if ( (unsigned __int8)byte_1C0098752 >= 4u )
        WPP_SF_qDqL(121LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v3, v35, v32, *(_DWORD *)(a1 + 40));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v34 + 256))(*((_QWORD *)v3 + 3), v32, v33);
      if ( (unsigned __int8)byte_1C0098752 >= 4u )
        WPP_SF_qLq(122LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v3, v35, v32);
    }
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v71 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      v71 = *(_QWORD *)(a1 + 16);
    WPP_SF_qqq(47LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v71, v8, *(_QWORD *)(a1 + 24));
  }
}
