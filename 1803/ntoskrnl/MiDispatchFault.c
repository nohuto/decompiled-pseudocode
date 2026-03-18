/*
 * XREFs of MiDispatchFault @ 0x14001D2A0
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     PfSnLogPageFault @ 0x14004B630 (PfSnLogPageFault.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiDispatchFault(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r10
  int v18; // ecx
  _QWORD *v19; // r14
  char v20; // al
  _BYTE *v21; // rdi
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // r11
  unsigned __int64 v37; // rbx
  unsigned __int64 Process; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r8
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r9
  __int16 v51; // ax
  __int64 v52; // rdx
  bool v53; // bl
  __int64 v54; // rcx
  ULONG_PTR *v55; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v58; // ett
  unsigned __int64 v59; // rdx
  char v60; // al
  unsigned __int64 i; // rbx
  char v62; // al
  __int64 v63; // rdx
  unsigned __int64 v64; // r8
  __int64 v65; // rax
  char v66; // r8
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r9
  ULONG_PTR v71; // rbx
  __int64 v72; // r13
  unsigned __int64 v73; // rdx
  ULONG_PTR v74; // rdi
  unsigned __int64 v75; // rax
  __int64 v76; // r14
  unsigned __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  unsigned int v81; // r9d
  __int64 v82; // rcx
  unsigned int v83; // edi
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rsi
  __int64 v88; // r13
  _QWORD *PrototypePteDirect; // rbx
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v91; // rbx
  _QWORD *v92; // r14
  _QWORD *v93; // r15
  unsigned int v94; // r12d
  __int64 v95; // rdi
  unsigned int v96; // ebx
  char v97; // al
  unsigned __int64 v98; // rax
  unsigned __int64 *v99; // rbx
  unsigned int v100; // eax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // r8
  _BYTE *v105; // rax
  __int16 v106; // ax
  void *v107; // rax
  unsigned int v108; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v109; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v110; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v111; // [rsp+58h] [rbp-A8h]
  __int64 v112; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v113; // [rsp+68h] [rbp-98h]
  __int64 v114; // [rsp+70h] [rbp-90h]
  unsigned __int64 v115; // [rsp+78h] [rbp-88h]
  PVOID v116; // [rsp+80h] [rbp-80h] BYREF
  int v117; // [rsp+88h] [rbp-78h] BYREF
  int v118; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v119; // [rsp+90h] [rbp-70h]
  __int64 v120; // [rsp+98h] [rbp-68h]
  __int64 ValidPte; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v122; // [rsp+A8h] [rbp-58h]
  _QWORD *v123; // [rsp+B0h] [rbp-50h]
  _QWORD v124[8]; // [rsp+C0h] [rbp-40h] BYREF

  v123 = a2;
  v4 = 0;
  v111 = (unsigned __int64 *)a1;
  *a2 = 0LL;
  v5 = a2;
  v6 = *(_QWORD *)a1;
  v7 = (unsigned __int64 *)a1;
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_DWORD *)(a1 + 8) & 2;
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 16);
  v115 = v8;
  v122 = v11;
  v120 = v10;
  v116 = MmBadPointer;
  if ( !v9 )
  {
    v101 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(a1, v101, v10, a4)
        && (v101 & 1) != 0
        && ((v101 & 0x20) == 0 || (v101 & 0x42) == 0) )
      {
        v102 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v102 )
        {
          v103 = *(_QWORD *)(v102 + 8 * ((v8 >> 3) & 0x1FF));
          v104 = v101 | 0x20;
          if ( (v103 & 0x20) == 0 )
            v104 = v101;
          v101 = v104;
          if ( (v103 & 0x42) != 0 )
            v101 = v104 | 0x42;
        }
      }
      v10 = v120;
    }
    if ( (v101 & 1) != 0 || !v101 )
      return 0LL;
    if ( (v101 & 0x800) != 0 )
    {
      v100 = MiResolveTransitionFault(v7, v8, 0LL, v10, &v116);
      goto LABEL_237;
    }
    if ( (v101 & 4) != 0 )
    {
      v100 = MiResolvePageFileFault(v6, v8, 0, v11, v12, (__int64)&v116);
LABEL_237:
      v4 = v100;
      if ( v100 == -1073532109 )
        *v5 = v116;
      return v4;
    }
    if ( (v12 & 1) != 0
      && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 1
      && (*(_DWORD *)((v12 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
    {
      return v4;
    }
    v105 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v12 & 1) != 0 )
    {
      if ( *v105 == 1 )
        goto LABEL_232;
      if ( (v12 & 1) != 0 )
      {
        if ( *v105 != 3 )
        {
          if ( (v12 & 1) != 0 )
            goto LABEL_235;
          goto LABEL_226;
        }
LABEL_232:
        if ( v6 >= 0xFFFF800000000000uLL && ((v101 >> 5) & 0x18) == 0x10 )
          return 3221225477LL;
        goto LABEL_235;
      }
    }
LABEL_226:
    if ( v12 )
    {
      v106 = *(_WORD *)(v12 + 368);
      if ( v106 == 16 )
      {
        v107 = &ExpInterlockedPopEntrySListFault;
      }
      else
      {
        if ( v106 != 51 )
          goto LABEL_235;
        v107 = (void *)KeUserPopEntrySListFault;
      }
      if ( *(void **)(v12 + 360) == v107 )
        goto LABEL_232;
    }
LABEL_235:
    v100 = MiResolveDemandZeroFault(v7, v8, 0LL, v10);
    goto LABEL_237;
  }
  if ( v6 >= 0xFFFF800000000000uLL )
  {
    if ( !MiLockProtoPoolPage(v9, 0LL) )
      return 3221225494LL;
    goto LABEL_200;
  }
  v13 = *(_QWORD *)v8;
  v113 = 1LL;
  LODWORD(v114) = 0;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, a2, v10, 0xFFFFF6FB7DBED000uLL)
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 8 * ((v8 >> 3) & 0x1FF));
      v16 = v13 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v13;
      v13 = v16;
      if ( (v15 & 0x42) != 0 )
        v13 = v16 | 0x42;
    }
  }
  v119 = v7[11];
  v112 = v13;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v13) || (v13 & 8) != 0 )
  {
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 + 48);
      if ( (v18 & 7) != 2 && (v18 & 0x20000) == 0 && *(__int64 *)(v17 + 120) >= 0 )
      {
        v19 = *(_QWORD **)(v17 + 72);
        if ( (unsigned int)MiSufficientAvailablePages(
                             *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*v19 + 60LL) & 0x3FF)),
                             20000LL) )
        {
          if ( (*((_DWORD *)v111 + 21) & 2) == 0 )
          {
            v20 = v12;
            v21 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( ((v20 & 1) == 0 || *v21 != 1 && *v21 != 5)
              && ((*(_BYTE *)(v122 + 184) & 0x40) == 0
               || (unsigned __int64)(*(_QWORD *)(v122 + 120) + 8LL) <= *(_QWORD *)(v122 + 152))
              && (BYTE12(xmmword_14044C2D0) & 2) == 0 )
            {
              v22 = 8LL;
              if ( v9 < *(_QWORD *)(v119 + 80) || (v23 = *(_QWORD *)(v119 + 88), v9 > v23) )
              {
                v110 = v19;
                v24 = 1LL;
                if ( !v19 )
                  goto LABEL_35;
                MiGetProtoPteAddress(v119, v6 >> 12, 0LL, &v110);
                if ( !v110 )
                  goto LABEL_35;
                v24 = (__int64)(v110[1]
                              + 8
                              * (*((unsigned int *)v110 + 11) - (unsigned __int64)(*((_DWORD *)v110 + 13) & 0x3FFFFFFF))
                              - v9) >> 3;
              }
              else
              {
                v24 = ((__int64)(v23 - v9) >> 3) + 1;
              }
              if ( v24 >= 8 )
              {
LABEL_36:
                v25 = (unsigned __int64)(4096 - (unsigned int)(v8 & 0xFFF)) >> 3;
                if ( v22 <= v25 )
                  v25 = v22;
                v26 = (unsigned __int64)(4096 - (unsigned int)(v9 & 0xFFF)) >> 3;
                if ( v25 <= v26 )
                  v26 = v25;
                v27 = (*(unsigned int *)(v119 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v119 + 33) << 32))
                    - (*v111 >> 12)
                    + 1;
                if ( v26 <= v27 )
                  v27 = v26;
                v28 = (unsigned __int64)(4096 - (unsigned int)((*v111 >> 9) & 0xFF8)) >> 3;
                v29 = 1LL;
                v113 = 1LL;
                if ( !v28 )
                  v28 = 1LL;
                if ( v27 <= v28 )
                  v28 = v27;
                if ( v28 > 1 )
                {
                  do
                  {
                    if ( *(_QWORD *)(v8 + 8 * v29) )
                      break;
                    ++v29;
                  }
                  while ( v29 < v28 );
                  v113 = v29;
                }
                v114 = (v13 >> 5) & 0x1F;
                goto LABEL_51;
              }
LABEL_35:
              v22 = v24;
              goto LABEL_36;
            }
          }
        }
      }
    }
  }
LABEL_51:
  v108 = 0;
  v30 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v31 = MI_READ_PTE_LOCK_FREE(v30);
    v109 = v31;
    v37 = v31;
    if ( (v31 & 1) == 0 || (v31 & 0x200) != 0 )
      return 3221225494LL;
    Process = (unsigned __int64)&v109;
    if ( (unsigned __int64)&v109 >= v34 )
    {
      Process = (unsigned __int64)&v109;
      if ( (unsigned __int64)&v109 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v109, v32, v33, v34)
        && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v33 = *(_QWORD *)(Process + 1544);
        if ( v33 )
        {
          v39 = *(_QWORD *)(v33 + 8 * (((unsigned __int64)&v109 >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v37 |= 0x20uLL;
          if ( (v39 & 0x42) != 0 )
            v37 |= 0x42uLL;
        }
        else
        {
          v37 = v109;
        }
      }
    }
    v40 = (v37 >> 12) & 0xFFFFFFFFFLL;
    if ( v40 <= qword_1403CB780 )
    {
      if ( !MmPhysicalMemoryBlock )
        break;
      Process = *(_QWORD *)(v35 + 48 * v40);
      if ( (Process & v36) != 0 )
        break;
    }
  }
  v41 = 48 * v40 - 0x58000000000LL;
  v117 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v117);
      while ( *(__int64 *)(v41 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
    v34 = 0xFFFFF6FB7DBED000uLL;
  }
  v42 = *(_QWORD *)v30;
  if ( v30 >= v34
    && v30 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v42, v33, v34)
    && (v42 & 1) != 0
    && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
  {
    v43 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v43 )
    {
      v33 = v42 | 0x20;
      v44 = *(_QWORD *)(v43 + 8 * ((v30 >> 3) & 0x1FF));
      if ( (v44 & 0x20) == 0 )
        v33 = v42;
      v42 = v33;
      if ( (v44 & 0x42) != 0 )
        v42 = v33 | 0x42;
    }
  }
  v109 = v42;
  if ( (v42 & 1) == 0 || (v42 & 0x200) != 0 )
    goto LABEL_195;
  if ( (unsigned __int64)&v109 >= v34
    && (unsigned __int64)&v109 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v109, v42, v33, v34)
    && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
  {
    v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)&v109 >> 3) & 0x1FF));
      v47 = v42 | 0x20;
      if ( (v46 & 0x20) == 0 )
        v47 = v42;
      v42 = v47;
      if ( (v46 & 0x42) != 0 )
        v42 = v47 | 0x42;
    }
  }
  if ( v40 != ((v42 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_195:
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v48 = 0xFFFFFFFFLL;
  v49 = *(_QWORD *)(v41 + 40);
  v50 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v49 & 0x10000000000000LL) != 0 )
    goto LABEL_121;
  v51 = *(_WORD *)(v41 + 32);
  v52 = *(_QWORD *)(v41 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v51 )
  {
    if ( v51 != 1 )
    {
      if ( v51 != 2 || !v52 )
        goto LABEL_121;
      goto LABEL_103;
    }
    if ( !v52 )
    {
LABEL_103:
      if ( (*(_BYTE *)(v41 + 34) & 8) != 0 )
        goto LABEL_104;
LABEL_121:
      ++*(_WORD *)(v41 + 32);
      goto LABEL_122;
    }
  }
LABEL_104:
  v53 = 0;
  if ( (v49 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v41 + 16) & 0x400LL) != 0 )
  {
    v53 = 1;
  }
  else
  {
    v50 = 0xFFFFF68000000000uLL;
    v59 = *(_QWORD *)(v41 + 8) | 0x8000000000000000uLL;
    if ( v59 <= 0xFFFFF6BFFFFFFF78uLL && v59 >= 0xFFFFF68000000000uLL )
      v53 = (*(_BYTE *)(v41 + 35) & 0x20) != 0;
  }
  v54 = (v49 >> 40) & 0x3FF;
  v55 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v54);
  if ( v53 )
  {
    if ( !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v54), 1LL, 4LL, v50) )
      goto LABEL_122;
    v48 = 0xFFFFFFFFLL;
  }
  if ( v55 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( CachedResidentAvailable )
    {
      if ( CachedResidentAvailable == -1 )
        break;
      v49 = (unsigned int)(CachedResidentAvailable - 1);
      v58 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  v49,
                                  CachedResidentAvailable);
      if ( v58 == CachedResidentAvailable )
        goto LABEL_121;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(v55, 1LL, 0xFFFFFFFFLL, v50) )
    goto LABEL_121;
  if ( v53 )
    MiReturnCommit((__int64)v55, 1uLL);
LABEL_122:
  v60 = *(_BYTE *)(v41 + 34);
  for ( i = *(_QWORD *)(v41 + 8) | 0x8000000000000000uLL; (v60 & 0x20) != 0; v60 = *(_BYTE *)(v41 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v62 = *(_BYTE *)(v41 + 34);
    v118 = 0;
    if ( (v62 & 0x20) != 0 )
    {
      do
        KeYieldProcessorEx(&v118);
      while ( (*(_BYTE *)(v41 + 34) & 0x20) != 0 );
    }
    MiLockPageInline(v41);
  }
  *(_BYTE *)(v41 + 34) = v60 | 0x20;
  if ( (*(_QWORD *)(v41 + 24) & 0x4000000000000000LL) == 0 )
  {
    v63 = *(_QWORD *)i;
    if ( i >= 0xFFFFF6FB7DBED000uLL
      && i <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v49, v63, v48, v50)
      && (v63 & 1) != 0
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v64 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v64 )
      {
        v65 = *(_QWORD *)(v64 + 8 * ((i >> 3) & 0x1FF));
        v66 = v63 | 0x20;
        if ( (v65 & 0x20) == 0 )
          v66 = v63;
        LOBYTE(v63) = v66;
        if ( (v65 & 0x42) != 0 )
          LOBYTE(v63) = v66 | 0x42;
      }
    }
    if ( (v63 & 0x20) == 0 )
      MiWriteValidPteVolatile(i, 1LL, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*((_DWORD *)v111 + 21) & 2) != 0 )
  {
    MiLockLeafPage(v9, 0LL);
    v67 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v67 & 1) == 0 && (v67 & 0x400) == 0 )
    {
      v114 = (v67 >> 5) & 0x1F;
      if ( (_DWORD)v114 == 24 )
      {
        if ( v69 )
          _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v68) = 17;
        MiUnlockProtoPoolPage(v41, v68);
        return 3221225477LL;
      }
    }
    if ( v69 )
      _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v113 == 1 )
    goto LABEL_199;
  v71 = 0LL;
  v72 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(**(_QWORD **)(v119 + 72) + 60LL) & 0x3FF));
  while ( 1 )
  {
    v74 = MiLockLeafPage(v9, 0LL);
    if ( !v74 )
      break;
    v112 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v112 & 1) != 0 )
    {
      v75 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v112);
      v73 = 0x3FFFFFFFFFFFFFFFLL;
      v76 = (v75 >> 12) & 0xFFFFFFFFFLL;
      *(_QWORD *)(v74 + 24) ^= (*(_QWORD *)(v74 + 24) ^ (*(_QWORD *)(v74 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v76 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v112);
      if ( (*(_BYTE *)(v74 + 34) & 0x20) != 0 || !(unsigned int)MiSufficientAvailablePages(v72, 160LL) )
        goto LABEL_171;
      v73 = *(_QWORD *)(v74 + 16);
      v77 = v73 >> 11;
      if ( (v73 & 0x400) == 0 )
        v77 = v73 >> 3;
      if ( (v77 & 1) != 0 )
        goto LABEL_171;
      if ( !(unsigned int)MiUnlinkPageFromList(v74) )
      {
        MiDiscardTransitionPte(v74);
LABEL_171:
        _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        break;
      }
      v78 = *(_QWORD *)(v74 + 24);
      ++*(_WORD *)(v74 + 32);
      *(_QWORD *)(v74 + 24) = v78 & 0xC000000000000000uLL | 1;
      *(_BYTE *)(v74 + 34) = *(_BYTE *)(v74 + 34) & 0xF8 | 6;
      if ( (*(_DWORD *)(v74 + 16) & 0x400LL) != 0 || !(unsigned int)MiIsPteInStore(v72, *(_QWORD *)(v74 + 16)) )
        v79 = 0LL;
      else
        v79 = MiCaptureDirtyBitToPfn(v74);
      ValidPte = MI_READ_PTE_LOCK_FREE(v9);
      v80 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ValidPte);
      ValidPte = MiMakeValidPte(v9, v80, v81);
      v112 = ValidPte;
      *(_QWORD *)v9 = ValidPte;
      if ( MiPteInShadowRange(v9) )
        MiWritePteShadow(v82, v73);
      _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v79 )
        MiReleasePageFileInfo(v72, v79, 0LL);
    }
    v71 = v74;
    v9 += 8LL;
    v124[v108++] = v76;
    v83 = v108;
    if ( v108 == v113 )
      goto LABEL_173;
  }
  v83 = v108;
LABEL_173:
  if ( !v83 )
  {
LABEL_199:
    v5 = v123;
LABEL_200:
    v100 = MiResolveProtoPteFault(v111, v120, &v116);
    goto LABEL_237;
  }
  LOBYTE(v73) = 17;
  MiUnlockProtoPoolPage(v41, v73);
  v110 = 0LL;
  v87 = 0LL;
  __addgsdword(0x2E98u, v83);
  v88 = 0LL;
  if ( PfSnNumActiveTraces && (*(_DWORD *)(v71 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v71 + 16));
    v110 = PrototypePteDirect;
    v88 = MiReferenceControlAreaFile(*PrototypePteDirect);
    v87 = MiStartingOffset(PrototypePteDirect, v9 - 8LL * v83, 0xFFFFFFFFLL);
  }
  if ( v83 > 1 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle(*v111, v84, v85, v86);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v83 - 1);
  }
  v91 = 48
      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v115 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
      - 0x58000000000LL;
  MiLockPageAtDpcInline(v91);
  *(_QWORD *)(v91 + 24) ^= (*(_QWORD *)(v91 + 24) ^ (*(_QWORD *)(v91 + 24) + v83)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v92 = v124;
  v93 = v110;
  v94 = v114 & 0xFFFFFFE7;
  do
  {
    v95 = 48LL * *v92 - 0x58000000000LL;
    v96 = v94;
    v97 = *(_BYTE *)(v95 + 34) >> 6;
    if ( v97 != 1 )
    {
      if ( v97 )
      {
        if ( v97 == 2 )
          v96 = v94 | 0x18;
      }
      else
      {
        v96 = v94 | 8;
      }
    }
    v98 = MiMakeValidPte(v115, *v92, v96) & 0xFFFFFFFFFFFFFFDFuLL;
    if ( v120 && (v98 & 0x800) != 0 && (v96 & 5) != 5 )
      v98 |= 0x42uLL;
    v99 = (unsigned __int64 *)v115;
    MiAllocateWsle(v122, (unsigned __int64 *)v115, (_QWORD *)v95, v114, v98, 0, 0LL);
    if ( v93 )
    {
      PfSnLogPageFault(v88, v87, 0LL);
      v87 += 4096LL;
    }
    ++v92;
    v115 = (unsigned __int64)(v99 + 1);
    --v108;
  }
  while ( v108 );
  if ( v93 )
    MiDereferenceControlAreaFile(*v93, v88);
  return 272LL;
}
