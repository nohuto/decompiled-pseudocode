/*
 * XREFs of MiDeletePteRun @ 0x14002A950
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiDeleteBatch @ 0x14002D060 (MiDeleteBatch.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1400524F0 (MiTryDeleteTransitionPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiPteIsSessionDynamicBuffer @ 0x1401553E4 (MiPteIsSessionDynamicBuffer.c)
 *     MiWriteTopLevelPxe @ 0x140165CA8 (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 */

__int64 __fastcall MiDeletePteRun(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // rdi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rcx
  ULONG_PTR v12; // rbx
  unsigned __int16 v13; // si
  __int64 v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r12d
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  int v29; // r10d
  __int64 v30; // r11
  unsigned __int64 v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // r9
  __int64 v36; // r15
  unsigned __int8 v37; // cl
  char v38; // dl
  __int64 v39; // rsi
  char v40; // r8
  char v41; // dl
  __int64 v42; // rax
  BOOL v43; // r14d
  int IsZero; // esi
  __int64 v45; // rcx
  unsigned int v46; // edi
  bool v47; // zf
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdi
  int v55; // eax
  int v56; // r11d
  ULONG_PTR v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 result; // rax
  ULONG_PTR v61; // r9
  __int16 v62; // [rsp+30h] [rbp-D0h]
  unsigned int v63; // [rsp+34h] [rbp-CCh]
  char v64; // [rsp+38h] [rbp-C8h]
  int v66; // [rsp+48h] [rbp-B8h]
  __int64 v67; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+58h] [rbp-A8h]
  __int64 BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-98h] BYREF
  __int64 v71; // [rsp+70h] [rbp-90h]
  _QWORD *v72; // [rsp+78h] [rbp-88h]
  unsigned __int64 v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+88h] [rbp-78h]
  int v75; // [rsp+90h] [rbp-70h] BYREF
  int v76; // [rsp+94h] [rbp-6Ch] BYREF
  int v77; // [rsp+98h] [rbp-68h]
  int v78; // [rsp+9Ch] [rbp-64h] BYREF
  int v79; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v80; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v83; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v85; // [rsp+D0h] [rbp-30h]
  __int64 v86; // [rsp+D8h] [rbp-28h]
  __int64 v87; // [rsp+E0h] [rbp-20h]
  _QWORD v88[3]; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v89; // [rsp+100h] [rbp+0h] BYREF
  __int64 v90; // [rsp+108h] [rbp+8h]
  _QWORD v91[16]; // [rsp+110h] [rbp+10h]
  _QWORD v92[2]; // [rsp+190h] [rbp+90h] BYREF

  v2 = *(_QWORD **)(a2 + 24);
  v3 = a1;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int *)(a2 + 32);
  v64 = *(_BYTE *)(a2 + 16);
  v87 = *(_QWORD *)(a2 + 40);
  v72 = v2;
  v84 = v4;
  v85 = v5;
  v89 = 0;
  v90 = 0LL;
  v63 = v6;
  v7 = 0LL;
  v86 = 0LL;
  v8 = (__int64)(v4 << 25) >> 16;
  v9 = 1;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = 0;
  v10 = v3 - 1280;
  v11 = *(unsigned __int16 *)(v3 + 174);
  v12 = 0LL;
  if ( (*(_BYTE *)(v3 + 184) & 7) != 0 )
    v10 = 0LL;
  v66 = v9;
  v13 = 0;
  v74 = v10;
  v68 = 0;
  v14 = *(_QWORD *)(qword_1403CBD88 + 8 * v11);
  v67 = v14;
  v62 = 0;
  v71 = 0LL;
  v82 = 0LL;
  if ( v4 <= v5 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v7, v15, v6)
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 8 * ((v4 >> 3) & 0x1FF));
            v18 = v15 | 0x20;
            if ( (v17 & 0x20) == 0 )
              v18 = v15;
            v15 = v18;
            if ( (v17 & 0x42) != 0 )
              v15 = v18 | 0x42;
          }
        }
        v7 = v86;
      }
      if ( v15 )
      {
        v19 = v6 & 0x40;
        if ( (v6 & 0x40) != 0 && (v4 < 0xFFFFF6FB7DBED000uLL || v4 > 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v62 = ++v13;
          if ( !v12 )
          {
            v20 = ((((__int64)((v4 << 25) - v7) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v21 = *(_QWORD *)v20;
            if ( v20 >= 0xFFFFF6FB7DBED000uLL
              && v20 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v21, v15, v20)
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v22 )
              {
                v23 = *(_QWORD *)(v22 + 8 * ((v20 >> 3) & 0x1FF));
                v20 = v21 | 0x20;
                if ( (v23 & 0x20) == 0 )
                  v20 = v21;
                v21 = v20;
                if ( (v23 & 0x42) != 0 )
                  v21 = v20 | 0x42;
              }
            }
            v80 = v21;
            if ( (unsigned __int64)&v80 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v80 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(&v80, v21, v15, v20)
              && (v21 & 1) != 0
              && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
            {
              v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v24 )
              {
                v25 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v80 >> 3) & 0x1FF));
                v26 = v21 | 0x20;
                if ( (v25 & 0x20) == 0 )
                  v26 = v21;
                v21 = v26;
                if ( (v25 & 0x42) != 0 )
                  v21 = v26 | 0x42;
              }
            }
            v82 = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          }
        }
        if ( (v15 & 0x400) != 0 )
        {
          v73 = 0LL;
          BugCheckParameter2 = 0LL;
          BugCheckParameter3 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 1;
          v27 = 0LL;
          v81 = 0LL;
          v83 = 0LL;
          v28 = MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter3);
          v31 = v28;
          if ( v28 > qword_1403CB780
            || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v28 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
          {
            MiDeleteBatch(&v89);
            MiDereferenceIoPages(1LL, v31, 1LL);
            v36 = 48 * MiGetContainingPageTable(v4) - 0x58000000000LL;
            IsZero = 4;
            v43 = 0;
          }
          else
          {
            if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && v29 && (v28 & 0xF) == 0 && ((__int64)(v85 - v4) >> 3) + 1 >= 16 )
            {
              if ( (unsigned int)MiDeleteClusterPage(v4, &v89, v2) == 1 )
              {
                v3 = a1;
                v4 += 120LL;
LABEL_57:
                v6 = v63;
                goto LABEL_58;
              }
              v30 = v74;
            }
            v32 = 48 * v31 - 0x58000000000LL;
            v33 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL;
            if ( (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0 )
            {
              if ( *(__int64 *)(v32 + 8) >= 0 )
              {
                v73 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL;
                v2[1] += MiDeleteBatch(&v89);
                goto LABEL_64;
              }
              if ( v4 <= 0xFFFFF6BFFFFFFF78uLL && v4 >= 0xFFFFF68000000000uLL && *(_QWORD *)(v30 + 912) )
              {
                v83 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL;
                BugCheckParameter2 = MiLocateCloneAddress(v30, v83);
                v34 = BugCheckParameter2;
                if ( BugCheckParameter2 )
                  v2[1] += MiDeleteBatch(&v89);
              }
              else
              {
LABEL_64:
                v34 = 0LL;
              }
              v36 = 48 * MiGetContainingPageTable(v4) - 0x58000000000LL;
              if ( !(_BYTE)v89 )
                goto LABEL_71;
              if ( v36 != v90
                || *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL)) != v67
                || _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
              {
                v2[1] += MiDeleteBatch(&v89);
              }
              v37 = v89;
              if ( !(_BYTE)v89 )
              {
LABEL_71:
                v90 = v36;
                v75 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v75);
                  while ( *(__int64 *)(v32 + 24) < 0 );
                }
                v37 = v89;
              }
              if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
              {
                v38 = *(_BYTE *)(v32 + 34);
                if ( (v38 & 7) == 6
                  && (*(_DWORD *)(v32 + 16) & 0x400LL) == 0
                  && ((BugCheckParameter3 & 0x42) != 0 || (v38 & 0x10) != 0)
                  && !v73
                  && !v34 )
                {
                  v91[v37] = BugCheckParameter3;
                  if ( !(_BYTE)v89 )
                    v71 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL));
                  *(_QWORD *)v4 = ZeroPte;
                  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
                    MiWritePteShadow(v4, ZeroPte);
                  LOBYTE(v89) = v89 + 1;
                  if ( (_BYTE)v89 == 16 )
                    v2[1] += MiDeleteBatch(&v89);
                  v3 = a1;
                  v13 = v62;
                  v14 = v67;
                  goto LABEL_57;
                }
              }
              if ( v37 )
              {
                HIBYTE(v89) = 1;
                v2[1] += MiDeleteBatch(&v89);
                HIBYTE(v89) = 0;
              }
              v39 = a1;
            }
            else
            {
              if ( v32 == qword_1403CC400 )
              {
                *(_QWORD *)v4 = ZeroPte;
                if ( MiPteInShadowRange(v4) )
                  MiWritePteShadow(v51, v50);
                v3 = a1;
                v13 = v62;
                goto LABEL_57;
              }
              v2[1] += MiDeleteBatch(&v89);
              if ( v33 != v4 )
                KeBugCheckEx(0x1Au, 0x403uLL, v4, BugCheckParameter3, *(_QWORD *)(v32 + 8));
              v52 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL;
              if ( v52 == 0xFFFFFFFFFLL )
                v36 = 0LL;
              else
                v36 = 48 * v52 - 0x58000000000LL;
              ++v2[3];
              v76 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v76);
                while ( *(__int64 *)(v32 + 24) < 0 );
              }
              *(_QWORD *)(v32 + 24) |= 0x4000000000000000uLL;
              if ( v64 && v66 )
              {
                memset(v88, 0, sizeof(v88));
                MiIdentifyPfn(v32, v88);
                v68 = 1;
              }
              v39 = a1;
              if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && ((*(_QWORD *)(v32 + 40) >> 54) & 7) == 2 )
                *(_QWORD *)(v32 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
            }
            v40 = *(_BYTE *)(v32 + 34);
            if ( (v40 & 7) != 6 )
              MiBadShareCount(v32);
            v71 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL));
            if ( (BugCheckParameter3 & 0x42) != 0 )
            {
              v81 = 0LL;
              if ( (v40 & 0x10) == 0 )
              {
                v41 = v40;
                if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 && (v40 & 8) == 0 )
                {
                  v42 = MiCapturePageFileInfoInline(v32 + 16, 1LL);
                  v41 = *(_BYTE *)(v32 + 34);
                  v27 = v42;
                  v81 = v42;
                }
                *(_BYTE *)(v32 + 34) = v41 | 0x10;
              }
            }
            if ( (*(_BYTE *)(v39 + 184) & 7) != 0
              && (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0
              && ((*(_DWORD *)(v32 + 16) & 0x400LL) == 0
               || (BugCheckParameter3 & 0x200) != 0
               || (*(_DWORD *)(*(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v32 + 16)) + 56LL) & 0x820) == 0x820) )
            {
              ++v2[3];
            }
            v43 = 0;
            IsZero = 4;
            if ( v66 && v19 )
              v43 = (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000;
            v45 = *(_QWORD *)(v32 + 24) ^ (*(_QWORD *)(v32 + 24) ^ (*(_QWORD *)(v32 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v32 + 24) = v45;
            if ( (v45 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
            {
              if ( v66 )
              {
                IsZero = 2;
                if ( (v63 & 0x80u) == 0 )
                  *(_QWORD *)v32 &= ~1uLL;
              }
            }
            else
            {
              IsZero = MiPfnShareCountIsZero(v32);
              if ( IsZero == 3 )
              {
                if ( v66 && v19 )
                  v43 = 1;
                if ( (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0 && !v73 && !BugCheckParameter2 )
                  IsZero = 4;
              }
            }
            if ( v43 )
              MiChargeCommit(v71, 1LL, 4LL, v35);
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v68 )
            {
              v92[1] = 24LL;
              v92[0] = v88;
              v46 = *(_DWORD *)(EtwpHostSiloState + 4188);
              v47 = !_BitScanForward((unsigned int *)&v48, v46);
              v77 = v48;
              if ( !v47 )
              {
                do
                {
                  v46 &= v46 - 1;
                  v49 = EtwpHostSiloState + 32 * (v48 + 132);
                  if ( v49 && (*(_DWORD *)(v49 + 4) & 1) != 0 )
                    EtwpLogKernelEvent(
                      (unsigned int)v92,
                      EtwpHostSiloState,
                      *(unsigned __int8 *)(EtwpHostSiloState + 2 * v48 + 4172),
                      1,
                      631,
                      289413890);
                  v47 = !_BitScanForward((unsigned int *)&v48, v46);
                }
                while ( !v47 );
                v27 = v81;
                v4 = v84;
                v77 = v48;
              }
              v68 = 0;
            }
          }
          if ( v36 )
          {
            v78 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v78);
              while ( *(__int64 *)(v36 + 24) < 0 );
            }
            if ( (*(_BYTE *)(v36 + 34) & 7) != 6 )
              MiBadShareCount(v36);
            v53 = *(_QWORD *)(v36 + 24);
            *(_QWORD *)(v36 + 24) = v53 ^ (((v53 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v53) & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v53 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              MiPfnShareCountIsZero(v36);
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v54 = v71;
          if ( v27 )
            MiReleasePageFileInfo(v71, v27, 1LL);
          if ( v73 )
          {
            v55 = MiDecrementCombinedPte(v74 + 1280, v73);
            goto LABEL_170;
          }
          if ( BugCheckParameter2 )
          {
            v55 = MiDecrementCloneBlockReference(BugCheckParameter2, v83);
LABEL_170:
            IsZero = v55;
          }
          if ( v43 )
            goto LABEL_178;
          if ( IsZero != 3 )
          {
            v2 = v72;
            if ( IsZero == 5 )
              ++v72[2];
            goto LABEL_179;
          }
          if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && v54 != v67 )
          {
LABEL_178:
            v2 = v72;
          }
          else
          {
            v2 = v72;
            ++v72[1];
          }
LABEL_179:
          v3 = a1;
          if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v4) )
            ++*v2;
          if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBEDFFFuLL && (*(_BYTE *)(a1 + 184) & 7) != 0 )
          {
            MiWriteTopLevelPxe(v4, ZeroPte);
            v13 = v62;
            v14 = v67;
          }
          else
          {
            *(_QWORD *)v4 = ZeroPte;
            if ( v4 < 0xFFFFF6FB7DBED000uLL || v4 > 0xFFFFF6FB7DBED7F8uLL )
            {
              v13 = v62;
              v14 = v67;
            }
            else
            {
              MiWritePteShadow(v4, ZeroPte);
              v13 = v62;
              v14 = v67;
            }
          }
          goto LABEL_57;
        }
        v2[1] += MiDeleteBatch(&v89);
        v56 = MiTryDeleteTransitionPte(v4);
        if ( v56 == 1 )
        {
          BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v4);
          v57 = BugCheckParameter3;
          MiReleasePageFileSpace(v14, BugCheckParameter3, 1LL);
          if ( (*(_BYTE *)(v3 + 184) & 7) != 0 )
          {
            ++v2[3];
            if ( !(unsigned int)MiPteIsSessionDynamicBuffer(v4) )
              ++*v2;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v57) )
          {
            ++v2[3];
          }
          *(_QWORD *)v4 = ZeroPte;
          if ( MiPteInShadowRange(v4) )
            MiWritePteShadow(v59, v58);
          goto LABEL_57;
        }
        ++v2[3];
        if ( (*(_BYTE *)(v3 + 184) & 7) != 0 && !(unsigned int)MiPteIsSessionDynamicBuffer(v4) )
          ++*v2;
        v6 = v63;
        if ( v56 == 3 )
          ++v2[1];
      }
LABEL_58:
      v12 = v82;
      v4 += 8LL;
      v84 = v4;
      if ( v4 > v85 )
        break;
      v7 = v86;
    }
  }
  result = MiDeleteBatch(&v89);
  if ( v13 )
  {
    v61 = HIWORD(*(_DWORD *)(v12 + 16)) & 0x3FF;
    if ( v61 < v13 )
      KeBugCheckEx(0x1Au, 0x41790uLL, v12, v61, v13);
    v79 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v79);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    result = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v12 + 16) ^= ((unsigned int)*(_QWORD *)(v12 + 16) ^ ((unsigned __int16)(WORD1(*(_QWORD *)(v12 + 16))
                                                                                      - v13) << 16)) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
