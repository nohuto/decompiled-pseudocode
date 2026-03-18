/*
 * XREFs of MiPfPutPagesInTransition @ 0x140047200
 * Callers:
 *     MmPrefetchPagesEx @ 0x1404BBAC8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1404BBCB8 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14053E190 (MiPrefetchControlArea.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14004826C (MiReduceMdl.c)
 *     MiSetInPagePriority @ 0x140048490 (MiSetInPagePriority.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     MiPrefetchNormally @ 0x14012B448 (MiPrefetchNormally.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiRefillPurgedExtents @ 0x14025E774 (MiRefillPurgedExtents.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x1404BBFB8 (MiFreeReadListPages.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2)
{
  void *v2; // r14
  unsigned int v3; // r13d
  __int64 v4; // r12
  PVOID *v5; // rdi
  ULONG_PTR v6; // r15
  __int64 v7; // r10
  __int64 v8; // r8
  int v9; // eax
  int IoPriorityThread; // eax
  __int64 v11; // r10
  unsigned int v12; // edx
  PVOID *v13; // rsi
  __int64 v14; // r11
  int v15; // edi
  _QWORD *v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // r13
  _QWORD *v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 v21; // r8
  int v22; // esi
  __int64 v23; // rdx
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rbx
  unsigned __int64 v31; // r9
  __int64 v32; // r9
  ULONG_PTR v33; // rsi
  __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  ULONG_PTR PrototypePteDirect; // rax
  PVOID v39; // rcx
  PVOID *v40; // rax
  PVOID *v41; // rdx
  int v42; // esi
  _QWORD *v43; // r12
  __int64 v44; // r15
  __int64 v45; // r12
  __int16 v46; // cx
  unsigned int v47; // r8d
  int v48; // ecx
  __int64 Page; // rax
  unsigned __int64 v50; // r10
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v58; // eax
  signed __int32 v59; // edx
  bool v60; // zf
  signed __int32 v61; // eax
  struct _KPRCB *v62; // rcx
  _DWORD *v63; // rdx
  int v64; // eax
  ULONG_PTR v65; // rbx
  __int64 v66; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v68; // r15
  int IsPteInStore; // eax
  bool v70; // cc
  int v71; // r14d
  __int64 v72; // r9
  __int64 v73; // r13
  __int64 v74; // rbx
  ULONG_PTR v75; // rsi
  __int64 v76; // r9
  __int64 *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  PVOID *v84; // r13
  __int64 v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  PVOID *v88; // rbx
  __int64 v90; // [rsp+30h] [rbp-A9h]
  int v91; // [rsp+38h] [rbp-A1h]
  int v92; // [rsp+3Ch] [rbp-9Dh]
  unsigned int v93; // [rsp+40h] [rbp-99h]
  __int64 v94; // [rsp+48h] [rbp-91h]
  PVOID *v95; // [rsp+50h] [rbp-89h]
  int v96; // [rsp+58h] [rbp-81h] BYREF
  int v97; // [rsp+5Ch] [rbp-7Dh]
  unsigned int v98; // [rsp+60h] [rbp-79h]
  __int64 v99; // [rsp+68h] [rbp-71h] BYREF
  _BYTE *v100; // [rsp+70h] [rbp-69h]
  unsigned int v101; // [rsp+78h] [rbp-61h]
  unsigned __int64 v102; // [rsp+80h] [rbp-59h]
  PVOID *v103; // [rsp+88h] [rbp-51h]
  __int64 v104; // [rsp+90h] [rbp-49h]
  __int64 v105; // [rsp+98h] [rbp-41h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-39h]
  void *Src; // [rsp+A8h] [rbp-31h]
  unsigned __int64 v108; // [rsp+B0h] [rbp-29h]
  __int64 v109; // [rsp+B8h] [rbp-21h] BYREF
  __int64 *v110; // [rsp+C0h] [rbp-19h]
  unsigned __int64 v111; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v112; // [rsp+D0h] [rbp-9h]
  PVOID P; // [rsp+D8h] [rbp-1h]
  volatile signed __int32 *v114; // [rsp+E0h] [rbp+7h] BYREF
  __int16 v115; // [rsp+E8h] [rbp+Fh]
  unsigned __int16 v116; // [rsp+EAh] [rbp+11h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v120; // [rsp+150h] [rbp+77h] BYREF
  int v121; // [rsp+158h] [rbp+7Fh]

  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = a1;
  v98 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v93 = v3;
  v103 = 0LL;
  v8 = *(_WORD *)(v7 + 60) & 0x3FF;
  v90 = 0LL;
  v104 = 0LL;
  v120 = 17;
  v9 = *(_DWORD *)(a1 + 56) + 1;
  v106 = *(_QWORD *)(qword_1403CBD88 + 8 * v8);
  v101 = v9;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(PVOID **)(v4 + 88);
  v97 = IoPriorityThread;
  v110 = (__int64 *)(v4 + 88);
  v95 = v13;
  v92 = v3 & 7 | 0x18;
  v94 = 0LL;
  MiInitializePageColorBase(v14 + 1280, (v12 >> 20) & 0x3F, &v114);
  if ( v13 != (PVOID *)(v4 + 88) )
  {
    v15 = v3 & 7 | 0x18;
    while ( 1 )
    {
      P = v13;
      if ( v97 >= 2 )
      {
        if ( (*(_DWORD *)(v4 + 72) & 1) != 0 )
          *((_BYTE *)v13 + 189) |= 0x10u;
      }
      else
      {
        *((_BYTE *)v13 + 189) |= 0x40u;
      }
      v16 = v13[29];
      v17 = 0LL;
      v18 = (unsigned __int64)v13[24] + 8;
      v100 = v16;
      v112 = v18;
      v13[29] = (PVOID)(*v16 & 0xFFFFFFFFFFFFFFFCuLL);
      v108 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
      Src = v13[31];
      v19 = (char *)Src + 48;
      v20 = 0;
      v21 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
           + (unsigned __int64)*((unsigned int *)Src + 10)
           + 4095) >> 12;
      if ( v21 )
      {
        do
        {
          ++v20;
          *v19++ = qword_1403CC418;
        }
        while ( v20 < v21 );
      }
      v121 = 0;
      v22 = 0;
      if ( !v2 )
      {
        v94 = MiGetInPageSupportBlock(0LL, v19);
        v2 = (void *)v94;
        if ( v94 )
        {
          v23 = v98;
          *(_QWORD *)(v94 + 240) = 0LL;
          MiSetInPagePriority(v94, v23, v93);
        }
      }
      if ( (unsigned __int64)v16 >= v18 )
        goto LABEL_123;
      while ( 2 )
      {
        v24 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
        v111 = v24;
        if ( v6 )
        {
          if ( v104 == ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            goto LABEL_19;
          MiUnlockProtoPoolPage(v6, v120, v21, v17);
        }
        v104 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v90 = MiLockProtoPoolPage(v24, &v120);
        v6 = v90;
        if ( !v90 )
        {
          do
          {
            MmAccessFault(2uLL, v24, 0, 0LL);
            v25 = MiLockProtoPoolPage(v24, &v120);
            v90 = v25;
          }
          while ( !v25 );
          v15 = v92;
          v6 = v25;
          v4 = a1;
        }
        while ( 1 )
        {
LABEL_19:
          while ( 1 )
          {
            v26 = MI_READ_PTE_LOCK_FREE(v24);
            v105 = v26;
            v30 = v26;
            if ( (v26 & 1) == 0 )
              break;
            v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105) >> 12) & 0xFFFFFFFFFLL;
LABEL_25:
            if ( (unsigned int)MiIsPfnInline(v31) )
            {
              v33 = 48 * v32 - 0x58000000000LL;
              MiLockPageAtDpcInline(v33);
              if ( MI_READ_PTE_LOCK_FREE(v24) == v30 )
              {
                v21 = 0LL;
                goto LABEL_30;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          if ( (v26 & 0x400) != 0 || (v26 & 0x800) == 0 )
            break;
          if ( (unsigned int)MiInvalidPteConforms(v26) )
          {
            v31 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v105);
            goto LABEL_25;
          }
        }
        v21 = 0LL;
        v33 = 0LL;
LABEL_30:
        v34 = *(_QWORD *)v24;
        if ( v24 >= 0xFFFFF6FB7DBED000uLL
          && v24 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v28, v27, 0LL, v29)
          && (v34 & 1) != 0
          && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v35 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 8 * ((v24 >> 3) & 0x1FF));
            v37 = v34 | 0x20;
            if ( (v36 & 0x20) == 0 )
              v37 = v34;
            v34 = v37;
            if ( (v36 & 0x42) != 0 )
              v34 = v37 | 0x42;
          }
        }
        v109 = v34;
        if ( v33 )
        {
          MiUpdatePfnPriority(v33);
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_119;
        }
        if ( (v34 & 0x400) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 56LL) & 0x40000000) != 0 )
          {
            MiUnlockProtoPoolPage(v6, v120, v21, v29);
            v6 = 0LL;
            v90 = 0LL;
            PrototypePteDirect = MiGetPrototypePteDirect(v34);
            if ( (int)MiRefillPurgedExtents(PrototypePteDirect) < 0 )
            {
              v22 = v121;
              goto LABEL_47;
            }
LABEL_119:
            v16 = v100 + 8;
            v100 = v16;
            if ( (unsigned __int64)v16 >= v112 )
              goto LABEL_122;
            continue;
          }
          v42 = 1;
        }
        else
        {
          if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v34) || !v2 )
            goto LABEL_119;
          v42 = 2;
        }
        break;
      }
      v43 = *(_QWORD **)(v4 + 40);
      v91 = v21;
      if ( v43 )
      {
        v44 = a1;
        *(_QWORD *)(a1 + 40) = *v43;
        v99 = (__int64)(v43 + 0xB000000000LL) / 48;
LABEL_66:
        v50 = 1LL;
        if ( (*v100 & 1) != 0 )
        {
          if ( (unsigned int)MiPfnZeroingNeeded(v43, 1LL) )
            v51 = v50;
          v91 = v51;
        }
        if ( v42 == 1 )
        {
          if ( !v95[30] )
            v95[30] = v43;
          ++v121;
          MiInitializeReadInProgressPfn(-1, (unsigned int)&v99, v50, v24, (__int64)v95, v15);
          v52 = MiGetPrototypePteDirect(v34);
          v53 = *(_QWORD *)(v44 + 8);
          v54 = v52;
          if ( (*(_DWORD *)(v53 + 56) & 0x20) != 0 || !*(_QWORD *)(v53 + 64) )
            v54 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v53 + 72, CurrentIrql);
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v96 = 0;
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v58 = SchedulerAssist[5];
                SchedulerAssist[5] = v58 + 1;
                if ( v58 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
                  KiPerformUnboostKick(CurrentPrcb);
              }
            }
            if ( _interlockedbittestandset((volatile signed __int32 *)(v53 + 72), 0x1Fu) )
            {
              KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
              v96 = ExpWaitForSpinLockExclusiveAndAcquire(v53 + 72, CurrentIrql);
            }
            v59 = *(_DWORD *)(v53 + 72);
            while ( (v59 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v59 & 0x40000000) == 0 )
              {
                v61 = _InterlockedCompareExchange((volatile signed __int32 *)(v53 + 72), v59 | 0x40000000, v59);
                v60 = v59 == v61;
                v59 = v61;
                if ( !v60 )
                  continue;
              }
              KeYieldProcessorEx(&v96);
              v59 = *(_DWORD *)(v53 + 72);
            }
          }
          ++*(_QWORD *)(v53 + 32);
          if ( v54 )
            ++*(_DWORD *)(v54 + 104);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v53 + 72, retaddr);
          else
            *(_DWORD *)(v53 + 72) = 0;
          v62 = KeGetCurrentPrcb();
          v63 = v62->SchedulerAssist;
          if ( v63 )
          {
            if ( v62->NestingLevel <= 1u )
            {
              v64 = v63[5] - 1;
              v63[5] = v64;
              if ( !v64 )
              {
                v21 = *((unsigned __int8 *)v63 + 27);
                if ( !*((_BYTE *)v63 + 25) && !(_BYTE)v21 )
                  KiPerformUnboostKick(v62);
              }
            }
          }
          __writecr8(CurrentIrql);
          v65 = v99;
          v6 = v90;
          *((_QWORD *)Src + ((__int64)(v24 - v108) >> 3) + 6) = v99;
          if ( !v95[20] )
          {
            MiObtainProtoReference(v90, 0LL);
            v95[20] = (PVOID)v90;
          }
          if ( v91 == 1 )
          {
            MiUnlockProtoPoolPage(v90, v120, v21, v17);
            v6 = 0LL;
            v90 = 0LL;
            MiZeroPhysicalPage(v65);
          }
          v2 = (void *)v94;
        }
        else
        {
          v66 = v106;
          MiReturnCommit(v106, v50);
          MiInitializeReadInProgressPfn(-1, (unsigned int)&v99, 1, v24, (__int64)v2, v15);
          PagingFileOffset = MiGetPagingFileOffset(&v109);
          v68 = PagingFileOffset;
          LODWORD(v102) = PagingFileOffset;
          IsPteInStore = MiIsPteInStore(v66, v34);
          v70 = v97 < 2;
          v71 = IsPteInStore;
          v73 = *(_QWORD *)(v66 + 8 * v72 + 6880);
          v74 = (unsigned int)v72;
          *(_QWORD *)(v94 + 248) = v94 + 264;
          if ( v70 )
            *(_BYTE *)(v94 + 189) |= 0x40u;
          v75 = v99;
          *(_QWORD *)(v94 + 264) = 0LL;
          *(_QWORD *)(v94 + 296) = 0LL;
          *(_DWORD *)(v94 + 272) = 56;
          *(_QWORD *)(v94 + 304) = 4096LL;
          *(_WORD *)(v94 + 274) |= 0x4042u;
          *(_QWORD *)(v94 + 312) = v75;
          MiObtainProtoReference(v90, 0LL);
          v77 = v110;
          *(_QWORD *)(v94 + 160) = v90;
          v78 = *v77;
          if ( *(__int64 **)(*v77 + 8) != v77 )
            __fastfail(3u);
          *(_QWORD *)v94 = v78;
          *(_QWORD *)(v94 + 8) = v77;
          *(_QWORD *)(v78 + 8) = v94;
          *v77 = v94;
          v79 = v120;
          ++*(_DWORD *)(a1 + 76);
          MiUnlockProtoPoolPage(v90, v79, v90, v76);
          v90 = 0LL;
          if ( v91 == 1 )
            MiZeroPhysicalPage(v75);
          *(_QWORD *)(v94 + 216) = 0LL;
          if ( v71 )
          {
            *(_BYTE *)(v94 + 189) |= 0x80u;
            *(_QWORD *)(v94 + 96) = v68 | (v74 << 60);
          }
          else
          {
            v102 = (unsigned __int64)(unsigned int)v102 << 12;
            *(_QWORD *)(v94 + 96) = v102;
          }
          v81 = *(_QWORD *)(v73 + 56);
          *(_BYTE *)(v94 + 191) |= 0x10u;
          *(_QWORD *)(v94 + 192) = v81;
          *(_QWORD *)(v94 + 232) = v111;
          *(_QWORD *)(v94 + 240) = v43;
          v82 = MiGetInPageSupportBlock(0LL, v80);
          v94 = v82;
          v2 = (void *)v82;
          if ( v82 )
          {
            v83 = v98;
            *(_QWORD *)(v82 + 240) = 0LL;
            MiSetInPagePriority(v82, v83, v93);
          }
          v6 = 0LL;
        }
        v4 = a1;
        goto LABEL_119;
      }
      v45 = v106;
      if ( (unsigned int)MiPrefetchNormally(v106, v101) )
      {
        if ( a2 )
        {
          if ( *a2 )
          {
            --*a2;
            goto LABEL_61;
          }
        }
        else
        {
LABEL_61:
          if ( (unsigned int)MiObtainFaultCharges(v45, 1LL, 1LL) )
          {
            v46 = _InterlockedExchangeAdd(v114, 1u);
            v47 = 770;
            v48 = (unsigned __int16)(v115 & v46);
            if ( (*v100 & 1) == 0 )
              v47 = 512;
            Page = MiGetPage(v45, v48 | (unsigned int)v116, v47);
            v99 = Page;
            if ( Page != -1 )
            {
              v43 = (_QWORD *)(48 * Page - 0x58000000000LL);
              v44 = a1;
              goto LABEL_66;
            }
            MiReturnFaultCharges(v45, 1LL, 1LL);
          }
        }
      }
LABEL_122:
      v22 = v121;
LABEL_123:
      if ( v6 )
      {
        MiUnlockProtoPoolPage(v6, v120, v21, v17);
        v6 = 0LL;
        v90 = 0LL;
      }
      v4 = a1;
LABEL_47:
      if ( v22 )
      {
        v84 = (PVOID *)Src;
        v85 = MiReduceMdl(Src);
        if ( v85 )
        {
          v95[12] = (char *)v95[12] + 4096 * v85;
          v86 = 48LL * (_QWORD)v84[6] - 0x58000000000LL;
          v87 = *(_QWORD *)(v86 + 8) | 0x8000000000000000uLL;
          v95[30] = (PVOID)v86;
          v95[29] = (PVOID)v87;
        }
        if ( v84 != v95 + 33 && *((_DWORD *)v84 + 10) <= 0x10000u )
        {
          memmove(v95 + 33, v84, *((__int16 *)v84 + 4));
          *v84 = v103;
          v95[31] = v95 + 33;
          v103 = v84;
        }
        v13 = (PVOID *)*v95;
        v95 = (PVOID *)*v95;
      }
      else
      {
        v39 = P;
        v40 = (PVOID *)*v95;
        v41 = (PVOID *)*((_QWORD *)P + 1);
        v13 = v40;
        v95 = (PVOID *)*v95;
        if ( v40[1] != P || *v41 != P )
          __fastfail(3u);
        *v41 = v40;
        v40[1] = v41;
        --*(_DWORD *)(v4 + 76);
        MiFreeInPageSupportBlock(v39);
      }
      if ( v13 == (PVOID *)(v4 + 88) )
      {
        v5 = v103;
        break;
      }
    }
  }
  MiFreeReadListPages(v4);
  if ( v5 )
  {
    do
    {
      v88 = (PVOID *)*v5;
      ExFreePoolWithTag(v5, 0);
      v5 = v88;
    }
    while ( v88 );
  }
  if ( v2 )
    MiFreeInPageSupportBlock(v2);
  return 0LL;
}
