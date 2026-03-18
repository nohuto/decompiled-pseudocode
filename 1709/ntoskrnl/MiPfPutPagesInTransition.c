/*
 * XREFs of MiPfPutPagesInTransition @ 0x140025FD0
 * Callers:
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x140492FC0 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1404F605C (MiPrefetchControlArea.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInitializeReadInProgressPfn @ 0x140026A90 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x140026F8C (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiSetInPagePriority @ 0x1400271D0 (MiSetInPagePriority.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiObtainFaultCharges @ 0x1400383C0 (MiObtainFaultCharges.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiPrefetchNormally @ 0x1400F4FCC (MiPrefetchNormally.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x1404D1E58 (MiFreeReadListPages.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v3; // r10
  __int64 v4; // r13
  unsigned int v5; // r11d
  _QWORD *v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int IoPriorityThread; // eax
  __int64 v12; // r10
  unsigned int v13; // edx
  _QWORD *v14; // r14
  char v15; // r11
  int v16; // edi
  unsigned __int64 v17; // r9
  _QWORD *v18; // rbx
  _QWORD *v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  ULONG_PTR v23; // r14
  __int64 v24; // rax
  __int64 PteShadow; // rbx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // r10d
  __int64 v30; // rbx
  int v31; // esi
  _QWORD *v32; // r13
  __int64 v33; // r8
  __int64 v34; // r12
  __int64 v35; // r13
  unsigned int v36; // r11d
  _WORD *v37; // rax
  __int64 v38; // r8
  __int16 v39; // dx
  __int64 v40; // rdx
  __int64 Page; // rax
  __int64 v42; // r10
  unsigned int v43; // r8d
  __int64 v44; // r15
  __int64 PrototypePteDirect; // rsi
  volatile signed __int32 *v46; // rbx
  unsigned __int8 CurrentIrql; // r12
  bool v48; // zf
  unsigned __int32 v49; // eax
  ULONG_PTR v50; // rbx
  __int64 v51; // r13
  unsigned int PagingFileOffset; // eax
  __int64 v53; // r9
  __int64 v54; // r12
  int v55; // esi
  bool v56; // cc
  __int64 v57; // r13
  __int64 v58; // rbx
  ULONG_PTR v59; // r15
  __int64 *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  PVOID v68; // rcx
  _QWORD *v69; // rdx
  PVOID *v70; // rax
  _QWORD *v71; // r13
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  _QWORD *v75; // rbx
  __int64 v77; // [rsp+30h] [rbp-A9h]
  __int64 v78; // [rsp+38h] [rbp-A1h]
  int v79; // [rsp+40h] [rbp-99h]
  unsigned int v80; // [rsp+44h] [rbp-95h]
  int v81; // [rsp+48h] [rbp-91h]
  __int64 v82; // [rsp+50h] [rbp-89h]
  __int64 v83; // [rsp+58h] [rbp-81h]
  __int64 v84; // [rsp+60h] [rbp-79h] BYREF
  int v85; // [rsp+68h] [rbp-71h] BYREF
  int v86; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v87; // [rsp+70h] [rbp-69h]
  _BYTE *v88; // [rsp+78h] [rbp-61h]
  unsigned int v89; // [rsp+80h] [rbp-59h]
  unsigned __int64 v90; // [rsp+88h] [rbp-51h]
  _QWORD *v91; // [rsp+90h] [rbp-49h]
  _QWORD *v92; // [rsp+98h] [rbp-41h]
  __int64 v93; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v94; // [rsp+A8h] [rbp-31h]
  unsigned __int64 v95; // [rsp+B0h] [rbp-29h]
  void *Src; // [rsp+B8h] [rbp-21h]
  unsigned __int64 v97; // [rsp+C0h] [rbp-19h]
  __int64 v98; // [rsp+C8h] [rbp-11h] BYREF
  __int64 *v99; // [rsp+D0h] [rbp-9h]
  PVOID P; // [rsp+D8h] [rbp-1h]
  _WORD *v101; // [rsp+E0h] [rbp+7h] BYREF
  __int16 v102; // [rsp+E8h] [rbp+Fh]
  unsigned __int16 v103; // [rsp+EAh] [rbp+11h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v107; // [rsp+150h] [rbp+77h] BYREF
  unsigned int v108; // [rsp+158h] [rbp+7Fh]

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  v87 = *(_DWORD *)(a1 + 52);
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_WORD *)(v3 + 60) & 0x3FF;
  v80 = v5;
  v92 = 0LL;
  v77 = 0LL;
  v83 = 0LL;
  v10 = *(_QWORD *)(qword_140388AF0 + 8 * v9);
  v89 = *(_DWORD *)(a1 + 56) + 1;
  v94 = v10;
  v107 = 17;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
  v13 = *(_DWORD *)(v12 + 56);
  v14 = *(_QWORD **)(v4 + 88);
  v86 = IoPriorityThread;
  v99 = (__int64 *)(v4 + 88);
  v78 = (__int64)v14;
  v79 = v15 & 7 | 0x18;
  v82 = 0LL;
  MiInitializePageColorBase(&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], (v13 >> 20) & 0x3F, &v101);
  if ( v14 != (_QWORD *)(v4 + 88) )
  {
    v16 = v79;
    while ( 1 )
    {
      v17 = 0xFFFFF68000000000uLL;
      P = v14;
      if ( v86 >= 2 )
      {
        if ( (*(_DWORD *)(v4 + 72) & 1) != 0 )
          *((_BYTE *)v14 + 189) |= 0x10u;
      }
      else
      {
        *((_BYTE *)v14 + 189) |= 0x40u;
      }
      v18 = (_QWORD *)v14[29];
      v88 = v18;
      v14[29] = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
      v97 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
      v95 = v14[24] + 8LL;
      Src = (void *)v14[31];
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
          *v19++ = qword_140389198;
        }
        while ( v20 < v21 );
      }
      v81 = 0;
      if ( !v2 )
      {
        v82 = MiGetInPageSupportBlock(0LL, v19, v21, 0xFFFFF68000000000uLL);
        v2 = v82;
        if ( v82 )
        {
          v22 = v87;
          *(_QWORD *)(v82 + 240) = 0LL;
          MiSetInPagePriority(v82, v22, v80);
        }
        v17 = 0xFFFFF68000000000uLL;
      }
      if ( (unsigned __int64)v18 >= v95 )
        goto LABEL_107;
      while ( 2 )
      {
        v23 = *v18 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v7 )
        {
          if ( v8 == ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            goto LABEL_20;
          MiUnlockProtoPoolPage(v7, v107);
        }
        v83 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v77 = MiLockProtoPoolPage(v23, &v107);
        v7 = v77;
        if ( !v77 )
        {
          do
          {
            MmAccessFault(2uLL, v23);
            v24 = MiLockProtoPoolPage(v23, &v107);
            v77 = v24;
          }
          while ( !v24 );
          v16 = v79;
          v7 = v24;
          v4 = a1;
        }
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_20:
            PteShadow = *(_QWORD *)v23;
            if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow(v23, *(_QWORD *)v23);
            v93 = PteShadow;
            if ( (PteShadow & 1) == 0 )
              break;
            v26 = MI_GET_PAGE_FRAME_FROM_PTE(&v93);
LABEL_29:
            if ( (unsigned int)MiIsPfnInline(v26) )
            {
              v27 = 48 * v17 - 0x58000000000LL;
              MiLockPageAtDpcInline(v27);
              v28 = *(_QWORD *)v23;
              if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL )
                v28 = MiReadPteShadow(v23, *(_QWORD *)v23);
              if ( v28 == PteShadow )
              {
                v29 = 0;
                goto LABEL_37;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
            break;
          if ( (unsigned int)MiInvalidPteConforms(PteShadow, 0xFFFFF6FB7DBED000uLL, v21, v17) )
          {
            v26 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v93);
            goto LABEL_29;
          }
        }
        v29 = 0;
        v27 = 0LL;
LABEL_37:
        v30 = *(_QWORD *)v23;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL )
          v30 = MiReadPteShadow(v23, *(_QWORD *)v23);
        v98 = v30;
        if ( v27 )
        {
          MiUpdatePfnPriority(v27, v80, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_101;
        }
        if ( (v30 & 0x400) != 0 )
        {
          v31 = 1;
          goto LABEL_47;
        }
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v30) || !v2 )
          goto LABEL_101;
        v31 = 2;
LABEL_47:
        v32 = *(_QWORD **)(v4 + 40);
        v33 = v29;
        v108 = v29;
        v91 = v32;
        if ( v32 )
        {
          v34 = a1;
          *(_QWORD *)(a1 + 40) = *v32;
          v84 = (__int64)(v32 + 0xB000000000LL) / 48;
          goto LABEL_58;
        }
        v35 = v94;
        if ( !(unsigned int)MiPrefetchNormally(v94, v89, v29) )
          goto LABEL_106;
        if ( !a2 )
          goto LABEL_53;
        if ( !*a2 )
          goto LABEL_106;
        --*a2;
LABEL_53:
        if ( !(unsigned int)MiObtainFaultCharges(v35, v36, v36) )
          goto LABEL_106;
        v37 = v101;
        v38 = 194LL;
        v39 = v102;
        ++*v101;
        v40 = v103 | (unsigned int)(unsigned __int16)(*v37 & v39);
        if ( (*v88 & 1) == 0 )
          v38 = 128LL;
        Page = MiGetPage(v35, v40, v38);
        v84 = Page;
        if ( Page == -1 )
        {
          MiReturnFaultCharges(v35, 1LL, 1LL);
LABEL_106:
          v8 = v83;
          v14 = (_QWORD *)v78;
          break;
        }
        v33 = v108;
        v32 = (_QWORD *)(48 * Page - 0x58000000000LL);
        v34 = a1;
        v91 = v32;
LABEL_58:
        v42 = 1LL;
        if ( (*v88 & 1) != 0 )
        {
          if ( (unsigned int)MiPfnZeroingNeeded(v32, 1LL, v33) )
            v43 = v42;
          v108 = v43;
        }
        if ( v31 == 1 )
        {
          if ( !*(_QWORD *)(v78 + 240) )
            *(_QWORD *)(v78 + 240) = v32;
          ++v81;
          MiInitializeReadInProgressPfn(-1, (unsigned int)&v84, v42, v23, v78, v16);
          v44 = *(_QWORD *)(v34 + 8);
          if ( (*(_DWORD *)(v44 + 56) & 0x20) != 0 || !*(_QWORD *)(v44 + 64) )
            PrototypePteDirect = 0LL;
          else
            PrototypePteDirect = MiGetPrototypePteDirect(v30);
          v46 = (volatile signed __int32 *)(v44 + 72);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v44 + 72, CurrentIrql);
          }
          else
          {
            v85 = 0;
            if ( _interlockedbittestandset(v46, 0x1Fu) )
              v85 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v44 + 72), CurrentIrql);
            v19 = (_QWORD *)*(unsigned int *)v46;
            if ( (*v46 & 0xBFFFFFFF) != 0x80000000 )
            {
              do
              {
                if ( ((unsigned int)v19 & 0x40000000) == 0 )
                {
                  v49 = _InterlockedCompareExchange(v46, (unsigned int)v19 | 0x40000000, (signed __int32)v19);
                  v48 = (_DWORD)v19 == v49;
                  v19 = (_QWORD *)v49;
                  if ( !v48 )
                    continue;
                }
                KeYieldProcessorEx(&v85);
                v19 = (_QWORD *)*(unsigned int *)v46;
              }
              while ( ((unsigned int)v19 & 0xBFFFFFFF) != 0x80000000 );
            }
          }
          ++*(_QWORD *)(v44 + 32);
          if ( PrototypePteDirect )
            ++*(_DWORD *)(PrototypePteDirect + 104);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v44 + 72, retaddr);
          else
            *v46 = 0;
          __writecr8(CurrentIrql);
          v50 = v84;
          *((_QWORD *)Src + ((__int64)(v23 - v97) >> 3) + 6) = v84;
          v14 = (_QWORD *)v78;
          if ( !*(_QWORD *)(v78 + 160) )
          {
            MiObtainProtoReference(v77, 0LL);
            *(_QWORD *)(v78 + 160) = v77;
          }
          if ( v108 == 1 )
          {
            MiUnlockProtoPoolPage(v77, v107);
            v7 = 0LL;
            v77 = 0LL;
            MiZeroPhysicalPage(v50);
            v2 = v82;
          }
          else
          {
            v2 = v82;
            v7 = v77;
          }
          v4 = a1;
          goto LABEL_102;
        }
        v51 = v94;
        MiReturnCommit(v94, v42);
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v84, 1, v23, v2, v16);
        PagingFileOffset = MiGetPagingFileOffset(&v98);
        v54 = PagingFileOffset;
        v55 = 0;
        LODWORD(v90) = PagingFileOffset;
        if ( (v30 & 4) != 0 )
          LOBYTE(v55) = (_DWORD)v53 == *(_DWORD *)(v51 + 1140);
        v56 = v86 < 2;
        v57 = *(_QWORD *)(v51 + 8 * v53 + 5792);
        *(_QWORD *)(v2 + 248) = v2 + 256;
        v58 = (unsigned int)v53;
        if ( v56 )
          *(_BYTE *)(v2 + 189) |= 0x40u;
        *(_QWORD *)(v2 + 256) = 0LL;
        *(_QWORD *)(v2 + 288) = 0LL;
        *(_DWORD *)(v2 + 264) = 56;
        *(_QWORD *)(v2 + 296) = 4096LL;
        *(_WORD *)(v2 + 266) |= 0x4042u;
        v59 = v84;
        *(_QWORD *)(v82 + 304) = v84;
        MiObtainProtoReference(v77, 0LL);
        v60 = v99;
        *(_QWORD *)(v82 + 160) = v77;
        v61 = *v60;
        if ( *(__int64 **)(*v60 + 8) != v60 )
          __fastfail(3u);
        *(_QWORD *)v82 = v61;
        *(_QWORD *)(v82 + 8) = v60;
        *(_QWORD *)(v61 + 8) = v82;
        *v60 = v82;
        v62 = v107;
        ++*(_DWORD *)(a1 + 76);
        MiUnlockProtoPoolPage(v77, v62);
        v77 = 0LL;
        if ( v108 == 1 )
          MiZeroPhysicalPage(v59);
        *(_QWORD *)(v82 + 216) = 0LL;
        if ( v55 )
        {
          *(_BYTE *)(v82 + 189) |= 0x80u;
          *(_QWORD *)(v82 + 96) = v54 | (v58 << 60);
        }
        else
        {
          v90 = (unsigned __int64)(unsigned int)v90 << 12;
          *(_QWORD *)(v82 + 96) = v90;
        }
        v66 = *(_QWORD *)(v57 + 56);
        *(_BYTE *)(v82 + 191) |= 0x10u;
        *(_QWORD *)(v82 + 192) = v66;
        *(_QWORD *)(v82 + 240) = v91;
        *(_QWORD *)(v82 + 232) = v23;
        v82 = MiGetInPageSupportBlock(0LL, v63, v64, v65);
        v2 = v82;
        if ( v82 )
        {
          v67 = v87;
          *(_QWORD *)(v82 + 240) = 0LL;
          MiSetInPagePriority(v82, v67, v80);
        }
        v4 = a1;
        v7 = 0LL;
LABEL_101:
        v14 = (_QWORD *)v78;
LABEL_102:
        v8 = v83;
        v18 = v88 + 8;
        v88 = v18;
        if ( (unsigned __int64)v18 < v95 )
        {
          v17 = 0xFFFFF68000000000uLL;
          continue;
        }
        break;
      }
LABEL_107:
      if ( v7 )
      {
        MiUnlockProtoPoolPage(v7, v107);
        v7 = 0LL;
        v77 = 0LL;
      }
      if ( v81 )
      {
        v71 = Src;
        v72 = MiReduceMdl(Src, v19, v21, v17);
        if ( v72 )
        {
          v14[12] += v72 << 12;
          v73 = 48LL * v71[6] - 0x58000000000LL;
          v74 = *(_QWORD *)(v73 + 8) | 0x8000000000000000uLL;
          v14[30] = v73;
          v14[29] = v74;
        }
        if ( v71 != v14 + 32 && *((_DWORD *)v71 + 10) <= 0x10000u )
        {
          memmove(v14 + 32, v71, *((__int16 *)v71 + 4));
          *v71 = v92;
          v14[31] = v14 + 32;
          v92 = v71;
        }
        v14 = (_QWORD *)*v14;
        v4 = a1;
        v78 = (__int64)v14;
      }
      else
      {
        v68 = P;
        v14 = (_QWORD *)*v14;
        v78 = (__int64)v14;
        v69 = *(_QWORD **)P;
        if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v70 = (PVOID *)*((_QWORD *)P + 1), *v70 != P) )
          __fastfail(3u);
        v4 = a1;
        *v70 = v69;
        v69[1] = v70;
        --*(_DWORD *)(a1 + 76);
        MiFreeInPageSupportBlock(v68);
      }
      if ( v14 == (_QWORD *)(v4 + 88) )
      {
        v6 = v92;
        break;
      }
    }
  }
  MiFreeReadListPages(v4);
  if ( v6 )
  {
    do
    {
      v75 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v75;
    }
    while ( v75 );
  }
  if ( v2 )
    MiFreeInPageSupportBlock((PVOID)v2);
  return 0LL;
}
