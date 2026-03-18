/*
 * XREFs of MiPfPutPagesInTransition @ 0x140108850
 * Callers:
 *     MiPrefetchControlArea @ 0x140423A90 (MiPrefetchControlArea.c)
 *     MmPrefetchPagesEx @ 0x14053D370 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14053D5DC (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiIsPteInStore @ 0x140074CBC (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiPrefetchNormally @ 0x140108510 (MiPrefetchNormally.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1401096B4 (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x1401099B8 (MiSetInPagePriority.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiFreeReadListPages @ 0x140515BFC (MiFreeReadListPages.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, _QWORD *a2)
{
  char *v2; // r14
  __int64 v3; // r15
  _QWORD *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 v8; // r8
  int v9; // eax
  int IoPriorityThread; // eax
  __int64 v11; // r10
  unsigned int v12; // edx
  _QWORD *v13; // r12
  __int64 v14; // r11
  int v15; // edi
  _QWORD *v16; // rbx
  _QWORD *v17; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // r9d
  __int64 v30; // rbx
  int v31; // esi
  __int64 v32; // r15
  __int64 v33; // r13
  ULONG_PTR *v34; // r15
  _WORD *v35; // rax
  unsigned int v36; // r8d
  __int64 Page; // rax
  unsigned __int64 v38; // r10
  int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rsi
  __int64 PrototypePteDirect; // r14
  unsigned __int8 CurrentIrql; // r13
  signed __int32 v46; // edx
  bool v47; // zf
  signed __int32 v48; // eax
  ULONG_PTR v49; // rbx
  __int64 *v50; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v52; // r15
  BOOL IsPteInStore; // eax
  bool v54; // cc
  BOOL v55; // r14d
  __int64 v56; // r9
  __int64 v57; // r13
  __int64 v58; // rbx
  ULONG_PTR v59; // rsi
  __int64 *v60; // rdx
  __int64 v61; // rax
  unsigned __int8 v62; // dl
  __int64 v63; // rax
  char *v64; // rax
  __int64 v65; // rdx
  PVOID v66; // rcx
  _QWORD *v67; // rdx
  PVOID *v68; // rax
  _QWORD *v69; // r15
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  _QWORD *v73; // rbx
  __int64 v75; // [rsp+30h] [rbp-A9h]
  _QWORD *v76; // [rsp+38h] [rbp-A1h]
  unsigned int v77; // [rsp+40h] [rbp-99h]
  int v78; // [rsp+48h] [rbp-91h]
  char *v79; // [rsp+50h] [rbp-89h]
  __int64 v80; // [rsp+58h] [rbp-81h]
  __int64 v81; // [rsp+60h] [rbp-79h] BYREF
  int v82; // [rsp+68h] [rbp-71h] BYREF
  int v83; // [rsp+6Ch] [rbp-6Dh]
  unsigned int v84; // [rsp+70h] [rbp-69h]
  _BYTE *v85; // [rsp+78h] [rbp-61h]
  unsigned int v86; // [rsp+80h] [rbp-59h]
  unsigned __int64 v87; // [rsp+88h] [rbp-51h]
  __int64 v88; // [rsp+90h] [rbp-49h]
  _QWORD *v89; // [rsp+98h] [rbp-41h]
  __int64 v90; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR *v91; // [rsp+A8h] [rbp-31h]
  unsigned __int64 v92; // [rsp+B0h] [rbp-29h]
  void *Src; // [rsp+B8h] [rbp-21h]
  unsigned __int64 v94; // [rsp+C0h] [rbp-19h]
  __int64 v95; // [rsp+C8h] [rbp-11h] BYREF
  __int64 *v96; // [rsp+D0h] [rbp-9h]
  PVOID P; // [rsp+D8h] [rbp-1h]
  _WORD *v98; // [rsp+E0h] [rbp+7h] BYREF
  __int16 v99; // [rsp+E8h] [rbp+Fh]
  unsigned __int16 v100; // [rsp+EAh] [rbp+11h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int8 v104; // [rsp+150h] [rbp+77h] BYREF
  int v105; // [rsp+158h] [rbp+7Fh]

  v2 = 0LL;
  v77 = *(_DWORD *)(a1 + 48);
  v3 = a1;
  v4 = 0LL;
  v84 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v89 = 0LL;
  v75 = 0LL;
  v8 = *(_WORD *)(v7 + 60) & 0x3FF;
  v80 = 0LL;
  v104 = 17;
  v9 = *(_DWORD *)(a1 + 56) + 1;
  v91 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v8);
  v86 = v9;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v12 = *(_DWORD *)(v11 + 56);
  v13 = *(_QWORD **)(v3 + 88);
  v83 = IoPriorityThread;
  v96 = (__int64 *)(v3 + 88);
  v76 = v13;
  v79 = 0LL;
  MiInitializePageColorBase(v14 + 1280, (v12 >> 20) & 0x3F, (__int64)&v98);
  if ( v13 != (_QWORD *)(v3 + 88) )
  {
    v15 = v77 & 7 | 0x18;
    while ( 1 )
    {
      P = v13;
      if ( v83 >= 2 )
      {
        if ( (*(_DWORD *)(v3 + 72) & 1) != 0 )
          *((_BYTE *)v13 + 189) |= 0x10u;
      }
      else
      {
        *((_BYTE *)v13 + 189) |= 0x40u;
      }
      v16 = (_QWORD *)v13[29];
      v85 = v16;
      v13[29] = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v94 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
      v92 = v13[24] + 8LL;
      Src = (void *)v13[31];
      v17 = (char *)Src + 48;
      v18 = 0;
      v19 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
           + (unsigned __int64)*((unsigned int *)Src + 10)
           + 4095) >> 12;
      if ( v19 )
      {
        do
        {
          ++v18;
          *v17++ = qword_14036CED8;
        }
        while ( v18 < v19 );
      }
      v78 = 0;
      if ( !v2 )
      {
        v79 = (char *)MiGetInPageSupportBlock(0);
        v2 = v79;
        if ( v79 )
        {
          v20 = v84;
          *((_QWORD *)v79 + 30) = 0LL;
          MiSetInPagePriority(v79, v20, v77);
        }
      }
      if ( (unsigned __int64)v16 >= v92 )
        goto LABEL_95;
      while ( 2 )
      {
        v21 = *v16 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 )
        {
          if ( v6 == ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            goto LABEL_19;
          MiUnlockProtoPoolPage(v5, v104);
        }
        v80 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v75 = MiLockProtoPoolPage(v21, &v104);
        v5 = v75;
        if ( !v75 )
        {
          do
          {
            MmAccessFault(2uLL, v21, 0, 0LL);
            v22 = MiLockProtoPoolPage(v21, &v104);
            v75 = v22;
          }
          while ( !v22 );
          v15 = v77 & 7 | 0x18;
          v5 = v22;
          v3 = a1;
        }
        while ( 1 )
        {
LABEL_19:
          while ( 1 )
          {
            v23 = MI_READ_PTE_LOCK_FREE(v21);
            v90 = v23;
            v24 = v23;
            if ( (v23 & 1) == 0 )
              break;
            v25 = MI_GET_PAGE_FRAME_FROM_PTE(&v90);
LABEL_25:
            if ( MiIsPfnInline(v25) )
            {
              v27 = 48 * v26 - 0x58000000000LL;
              MiLockPageAtDpcInline(v27);
              if ( MI_READ_PTE_LOCK_FREE(v21) == v24 )
                goto LABEL_30;
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          if ( (v23 & 0x400) != 0 || (v23 & 0x800) == 0 )
            break;
          if ( (unsigned int)MiInvalidPteConforms(v23) )
          {
            v25 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v90);
            goto LABEL_25;
          }
        }
        v27 = 0LL;
LABEL_30:
        v28 = MI_READ_PTE_LOCK_FREE(v21);
        v95 = v28;
        v30 = v28;
        if ( v27 )
        {
          MiUpdatePfnPriority(v27);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_89;
        }
        if ( (v28 & 0x400) != 0 )
        {
          v31 = 1;
          goto LABEL_37;
        }
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v28) || !v2 )
          goto LABEL_89;
        v31 = 2;
LABEL_37:
        v32 = *(_QWORD *)(v3 + 40);
        v105 = v29;
        v88 = v32;
        if ( v32 )
        {
          v33 = a1;
          *(_QWORD *)(a1 + 40) = *(_QWORD *)v32;
          v81 = (v32 + 0x58000000000LL) / 48;
          goto LABEL_48;
        }
        v34 = v91;
        if ( MiPrefetchNormally((__int64 *)v91, v86) )
        {
          if ( !a2 )
            goto LABEL_43;
          if ( *a2 )
          {
            --*a2;
LABEL_43:
            if ( (unsigned int)MiObtainFaultCharges(v34, 1u, 1) )
            {
              v35 = v98;
              v36 = 194;
              ++*v98;
              if ( (*v85 & 1) == 0 )
                v36 = 128;
              Page = MiGetPage((__int64)v34, v100 | (unsigned int)(unsigned __int16)(v99 & *v35), v36);
              v81 = Page;
              if ( Page != -1 )
              {
                v32 = 48 * Page - 0x58000000000LL;
                v33 = a1;
                v88 = v32;
LABEL_48:
                v38 = 1LL;
                if ( (*v85 & 1) != 0 )
                {
                  if ( MiPfnZeroingNeeded() )
                    v39 = v38;
                  v105 = v39;
                }
                if ( v31 != 1 )
                {
                  v50 = (__int64 *)v91;
                  MiReturnCommit((__int64)v91, v38);
                  MiInitializeReadInProgressPfn(-1, (unsigned int)&v81, 1, v21, (__int64)(v2 + 32), v15);
                  PagingFileOffset = MiGetPagingFileOffset((__int64)&v95);
                  v52 = PagingFileOffset;
                  LODWORD(v87) = PagingFileOffset;
                  IsPteInStore = MiIsPteInStore((__int64)v50, v30);
                  v54 = v83 < 2;
                  v55 = IsPteInStore;
                  v57 = v50[v56 + 700];
                  v58 = (unsigned int)v56;
                  *((_QWORD *)v79 + 31) = v79 + 256;
                  if ( v54 )
                    v79[189] |= 0x40u;
                  v59 = v81;
                  *((_QWORD *)v79 + 32) = 0LL;
                  *((_QWORD *)v79 + 36) = 0LL;
                  *((_DWORD *)v79 + 66) = 56;
                  *((_QWORD *)v79 + 37) = 4096LL;
                  *((_WORD *)v79 + 133) |= 0x4042u;
                  *((_QWORD *)v79 + 38) = v59;
                  MiObtainProtoReference(v75, 0LL);
                  v60 = v96;
                  *((_QWORD *)v79 + 20) = v75;
                  v61 = *v60;
                  if ( *(__int64 **)(*v60 + 8) != v60 )
                    __fastfail(3u);
                  *(_QWORD *)v79 = v61;
                  *((_QWORD *)v79 + 1) = v60;
                  *(_QWORD *)(v61 + 8) = v79;
                  *v60 = (__int64)v79;
                  v62 = v104;
                  ++*(_DWORD *)(a1 + 76);
                  MiUnlockProtoPoolPage(v75, v62);
                  v75 = 0LL;
                  if ( v105 == 1 )
                    MiZeroPhysicalPage(v59, 1, *(unsigned __int8 *)(v88 + 34) >> 6);
                  *((_QWORD *)v79 + 27) = 0LL;
                  if ( v55 )
                  {
                    v79[189] |= 0x80u;
                    *((_QWORD *)v79 + 12) = v52 | (v58 << 60);
                  }
                  else
                  {
                    v87 = (unsigned __int64)(unsigned int)v87 << 12;
                    *((_QWORD *)v79 + 12) = v87;
                  }
                  v63 = *(_QWORD *)(v57 + 56);
                  v79[191] |= 0x10u;
                  *((_QWORD *)v79 + 24) = v63;
                  *((_QWORD *)v79 + 30) = v88;
                  *((_QWORD *)v79 + 29) = v21;
                  v64 = (char *)MiGetInPageSupportBlock(0);
                  v79 = v64;
                  v2 = v64;
                  if ( v64 )
                  {
                    v65 = v84;
                    *((_QWORD *)v64 + 30) = 0LL;
                    MiSetInPagePriority(v64, v65, v77);
                  }
                  v3 = a1;
                  v5 = 0LL;
LABEL_89:
                  v13 = v76;
                  goto LABEL_90;
                }
                if ( !v76[30] )
                  v76[30] = v32;
                ++v78;
                MiInitializeReadInProgressPfn(-1, (unsigned int)&v81, v38, v21, (__int64)(v76 + 4), v15);
                v43 = *(_QWORD *)(v33 + 8);
                if ( (*(_DWORD *)(v43 + 56) & 0x20) != 0 || !*(_QWORD *)(v43 + 64) )
                  PrototypePteDirect = 0LL;
                else
                  PrototypePteDirect = MiGetPrototypePteDirect(v30, v40, v41, v42);
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v43 + 72, CurrentIrql);
                }
                else
                {
                  v82 = 0;
                  if ( _interlockedbittestandset((volatile signed __int32 *)(v43 + 72), 0x1Fu) )
                    v82 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v43 + 72), CurrentIrql);
                  v46 = *(_DWORD *)(v43 + 72);
                  while ( (v46 & 0xBFFFFFFF) != 0x80000000 )
                  {
                    if ( (v46 & 0x40000000) == 0 )
                    {
                      v48 = _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 72), v46 | 0x40000000, v46);
                      v47 = v46 == v48;
                      v46 = v48;
                      if ( !v47 )
                        continue;
                    }
                    KeYieldProcessorEx(&v82);
                    v46 = *(_DWORD *)(v43 + 72);
                  }
                }
                ++*(_QWORD *)(v43 + 32);
                if ( PrototypePteDirect )
                  ++*(_DWORD *)(PrototypePteDirect + 104);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v43 + 72, retaddr);
                else
                  *(_DWORD *)(v43 + 72) = 0;
                __writecr8(CurrentIrql);
                v49 = v81;
                *((_QWORD *)Src + ((__int64)(v21 - v94) >> 3) + 6) = v81;
                v13 = v76;
                if ( !v76[20] )
                {
                  MiObtainProtoReference(v75, 0LL);
                  v76[20] = v75;
                }
                if ( v105 == 1 )
                {
                  MiUnlockProtoPoolPage(v75, v104);
                  v5 = 0LL;
                  v75 = 0LL;
                  MiZeroPhysicalPage(v49, 1, *(unsigned __int8 *)(v32 + 34) >> 6);
                  v2 = v79;
                }
                else
                {
                  v2 = v79;
                  v5 = v75;
                }
                v3 = a1;
LABEL_90:
                v6 = v80;
                v16 = v85 + 8;
                v85 = v16;
                if ( (unsigned __int64)v16 >= v92 )
                  goto LABEL_95;
                continue;
              }
              MiReturnFaultCharges((__int64)v34, 1uLL, 1LL);
            }
          }
        }
        break;
      }
      v6 = v80;
      v13 = v76;
LABEL_95:
      if ( v5 )
      {
        MiUnlockProtoPoolPage(v5, v104);
        v5 = 0LL;
        v75 = 0LL;
      }
      if ( v78 )
      {
        v69 = Src;
        v70 = MiReduceMdl(Src);
        if ( v70 )
        {
          v13[12] += v70 << 12;
          v71 = 48LL * v69[6] - 0x58000000000LL;
          v72 = *(_QWORD *)(v71 + 8) | 0x8000000000000000uLL;
          v13[30] = v71;
          v13[29] = v72;
        }
        if ( v69 != v13 + 32 && *((_DWORD *)v69 + 10) <= 0x10000u )
        {
          memmove(v13 + 32, v69, *((__int16 *)v69 + 4));
          *v69 = v89;
          v13[31] = v13 + 32;
          v89 = v69;
        }
        v13 = (_QWORD *)*v13;
        v3 = a1;
        v76 = v13;
      }
      else
      {
        v66 = P;
        v13 = (_QWORD *)*v13;
        v76 = v13;
        v67 = *(_QWORD **)P;
        v68 = (PVOID *)*((_QWORD *)P + 1);
        if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v68 != P )
          __fastfail(3u);
        v3 = a1;
        *v68 = v67;
        v67[1] = v68;
        --*(_DWORD *)(a1 + 76);
        MiFreeInPageSupportBlock(v66);
      }
      if ( v13 == (_QWORD *)(v3 + 88) )
      {
        v4 = v89;
        break;
      }
    }
  }
  MiFreeReadListPages(v3);
  if ( v4 )
  {
    do
    {
      v73 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v73;
    }
    while ( v73 );
  }
  if ( v2 )
    MiFreeInPageSupportBlock(v2);
  return 0LL;
}
