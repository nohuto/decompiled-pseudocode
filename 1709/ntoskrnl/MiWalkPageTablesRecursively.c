/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14009D030
 * Callers:
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MiRecomputeWalkHierarchy @ 0x14021596C (MiRecomputeWalkHierarchy.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     EtwTraceShouldYieldProcessor @ 0x14027B8F8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  unsigned __int64 *v6; // r9
  int v7; // r10d
  int v8; // ecx
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 DpcRequestSummary; // r8
  bool v12; // cc
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int16 **v16; // r10
  __int64 v17; // r11
  unsigned __int16 *v18; // rcx
  __int64 v19; // rsi
  LONG *v20; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // ebp
  unsigned int v24; // ebx
  _KTHREAD *NextThread; // rax
  __int64 (__fastcall *v26)(_QWORD *, __int64, unsigned __int64, __int64); // rax
  int v27; // eax
  unsigned __int64 v28; // rbx
  LONG *SharedVm; // rax
  unsigned __int8 v30; // bp
  LONG *v31; // rsi
  int v32; // ebx
  unsigned int v33; // ebx
  int v34; // ebx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // ebx
  unsigned __int64 v41; // r9
  int v42; // r11d
  __int64 v43; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  int v46; // r9d
  __int64 *v47; // rcx
  __int64 PteShadow; // rax
  char v49; // al
  int v50; // eax
  unsigned __int64 *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 result; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // r9
  unsigned __int64 *v59; // r10
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // rbx
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // r9
  char v65; // cl
  int v66; // edx
  int v67; // [rsp+20h] [rbp-98h]
  __int64 v70; // [rsp+30h] [rbp-88h]
  __int64 v71; // [rsp+38h] [rbp-80h] BYREF
  __int64 v72; // [rsp+40h] [rbp-78h]
  unsigned __int64 *v73; // [rsp+48h] [rbp-70h]
  unsigned __int64 i; // [rsp+50h] [rbp-68h]
  __int64 (__fastcall *v75)(_QWORD *, __int64, unsigned __int64, __int64); // [rsp+58h] [rbp-60h]
  __int64 v76; // [rsp+60h] [rbp-58h] BYREF
  __int64 (__fastcall *v77)(_QWORD *, unsigned __int64); // [rsp+68h] [rbp-50h]
  __int64 v78; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v79[4]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v70 = a1[1];
  v4 = 0LL;
  v5 = a1;
  v77 = (__int64 (__fastcall *)(_QWORD *, unsigned __int64))a1[16];
  v75 = (__int64 (__fastcall *)(_QWORD *, __int64, unsigned __int64, __int64))a1[17];
  v6 = &a1[2 * a3 + 7];
  v72 = 16LL * a3;
  v7 = a3;
  v8 = 0;
  v9 = *v6;
  v10 = a2 < *v6;
  v67 = 0;
  v73 = v6;
  if ( v10 )
    a2 = v9;
  if ( a3 == 3 )
  {
    DpcRequestSummary = v5[14];
  }
  else
  {
    DpcRequestSummary = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( DpcRequestSummary > v6[1] )
      DpcRequestSummary = v6[1];
  }
  v12 = a2 <= DpcRequestSummary;
  for ( i = DpcRequestSummary; ; v12 = a2 <= i )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !v12 )
          {
            if ( v7 != 3 )
              LODWORD(v4) = v8;
            return (unsigned int)v4;
          }
          ++v5[15];
          v13 = 2LL;
          v14 = v5[15];
          if ( (*(_DWORD *)v5 & 8) != 0 && (v14 & 0xF) == 0 )
          {
            v15 = v5[6];
            DpcRequestSummary = *(_QWORD *)(v15 + 5952);
            if ( DpcRequestSummary < 0x420 )
            {
              v16 = (unsigned __int16 **)(v15 + 4072);
              v17 = 0LL;
              while ( 1 )
              {
                v18 = *v16;
                if ( dword_140388544 )
                  break;
LABEL_16:
                ++v17;
                ++v16;
                if ( v17 > 1 )
                  return 2LL;
                LODWORD(v4) = 0;
              }
              while ( 1 )
              {
                DpcRequestSummary += *v18;
                if ( DpcRequestSummary >= 0x420 )
                  break;
                LODWORD(v4) = v4 + 1;
                v18 += 8;
                if ( (unsigned int)v4 >= dword_140388544 )
                  goto LABEL_16;
              }
              v4 = 0LL;
              v13 = 2LL;
            }
          }
          if ( (*(_DWORD *)v5 & 2) == 0 )
            goto LABEL_83;
          if ( ((unsigned __int8)v14 & *((_BYTE *)v5 + 6)) != 0 )
            break;
          v19 = v70;
          v20 = &dword_140389780;
          if ( (*(_BYTE *)(v70 + 192) & 7) != 2 )
            v20 = (LONG *)(v70 + 200);
          if ( (*v20 & 0x40000000) == 0 )
            break;
LABEL_47:
          v26 = v75;
          if ( v75 )
          {
            *((_BYTE *)v5 + 5) = 1;
            v27 = v26(v5, v4, DpcRequestSummary, v13);
            *((_BYTE *)v5 + 5) = 0;
            if ( v27 == 2 )
              return 2LL;
          }
          if ( (*(_DWORD *)v5 & 4) != 0 )
          {
            v28 = *((unsigned __int8 *)v5 + 4);
            SharedVm = MiGetSharedVm(v19);
            ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
            __writecr8(v28);
            MiLockWorkingSetShared(v19);
          }
          else
          {
            v30 = *((_BYTE *)v5 + 4);
            MiPreUnlockWorkingSetExclusive(v19, v30);
            if ( (*(_BYTE *)(v19 + 192) & 7) == 2 )
              v31 = &dword_140389780;
            else
              v31 = (LONG *)(v19 + 200);
            if ( (*v31 & 0x40000000) != 0 )
            {
              v32 = 1;
              v31[1] = 1;
            }
            else
            {
              v32 = 0;
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v31, retaddr);
            else
              *v31 = 0;
            __writecr8(v30);
            if ( v32 && (v33 = 0, v31[1]) )
            {
              while ( 1 )
              {
                if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v33);
                if ( (v33 & 0x3F) == 0 )
                  break;
                if ( !v31[1] )
                  goto LABEL_68;
              }
              v34 = 1;
            }
            else
            {
LABEL_68:
              v34 = 0;
            }
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v31, CurrentIrql);
            else
              ExpAcquireSpinLockExclusive(v31, CurrentIrql);
            v5 = a1;
            if ( !v34 )
              v31[1] = 0;
          }
          v7 = a3;
          if ( a3 < 4 )
          {
            v36 = &v5[(unsigned __int64)v72 / 8 + 7];
            v37 = 4 - a3;
            do
            {
              *v36 = a2;
              a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v36 += 2;
              --v37;
            }
            while ( v37 );
            v5 = a1;
            v7 = a3;
          }
          if ( v7 != 3 )
            return 1LL;
          a2 = v5[13];
          if ( !a2 )
            return 1LL;
          v8 = 1;
          v67 = 1;
          v4 = 0LL;
          v12 = a2 <= i;
        }
        if ( *((_BYTE *)v5 + 4) >= 2u )
          goto LABEL_83;
        CurrentPrcb = KeGetCurrentPrcb();
        DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
        DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
        DpcTimeCount = CurrentPrcb->DpcTimeCount;
        if ( (DpcRequestSummary & 1) == 0 )
        {
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v24 = 2;
            goto LABEL_43;
          }
          if ( CurrentPrcb->QuantumEnd )
          {
            v24 = 3;
            goto LABEL_43;
          }
          NextThread = CurrentPrcb->NextThread;
          if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
          {
            v24 = 4;
            goto LABEL_43;
          }
LABEL_36:
          if ( DpcWatchdogCount <= 7 )
          {
            v5 = a1;
            goto LABEL_83;
          }
          if ( !(_DWORD)v4 )
            goto LABEL_42;
          goto LABEL_38;
        }
        v4 = 1LL;
        if ( DpcTimeCount <= 7 )
          goto LABEL_36;
        if ( CurrentPrcb->QuantumEnd )
        {
          v24 = 1;
          goto LABEL_43;
        }
LABEL_38:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v24 = 5;
          goto LABEL_43;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v24 = 6;
          goto LABEL_43;
        }
LABEL_42:
        _disable();
        v24 = 0;
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
        _enable();
LABEL_43:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v24, DpcWatchdogCount, DpcTimeCount);
        v5 = a1;
        if ( v24 )
        {
          v19 = v70;
          goto LABEL_47;
        }
LABEL_83:
        v38 = *(_QWORD *)a2;
        v7 = a3;
        v71 = v38;
        if ( (v38 & 1) == 0 )
          goto LABEL_136;
        if ( !a3 )
          goto LABEL_106;
        v39 = v5[4];
        v40 = 1;
        if ( v39 && v39 == *v73 )
        {
          v40 = 0;
          v5[4] = 0LL;
        }
        if ( (v38 & 0x80u) == 0LL )
        {
          v41 = 0xFFFFF6FB7DBED000uLL;
          DpcRequestSummary = 0xFFFFF68000000000uLL;
          if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
            break;
        }
LABEL_136:
        v8 = v67;
        a2 += 8LL;
        v4 = 0LL;
        v12 = a2 <= i;
      }
      v42 = *(_DWORD *)v5;
      if ( (*(_DWORD *)v5 & 1) != 0 )
        goto LABEL_97;
      if ( (*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v71) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      {
        if ( v7 != 1 || (*(_BYTE *)(v70 + 192) & 7) != 2 )
          goto LABEL_96;
        if ( (unsigned __int16)*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(a2 << 25) >> 16 << 25 >> 16) + 32) >> 6 == (unsigned __int64)*(unsigned __int16 *)(v70 + 172) )
          break;
      }
LABEL_106:
      v7 = a3;
      v46 = *(_DWORD *)v5 & 1;
      if ( !v46 && !a3 )
      {
        v47 = (__int64 *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        PteShadow = *v47;
        if ( (unsigned __int64)v47 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v47 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v47, *v47);
        v49 = (PteShadow & 1) != 0 ? HIBYTE(PteShadow) & 0xF : 10;
        if ( (unsigned __int8)(v49 - 8) <= 2u )
          goto LABEL_136;
      }
      v53 = v5[4];
      if ( v53 && v53 == *v73 )
        v5[4] = 0LL;
      if ( v7 && (*(_BYTE *)(v70 + 192) & 7) != 0 && !v46 )
        goto LABEL_136;
      result = v77(v5, a2);
      v67 = result;
      v8 = result;
      if ( (_DWORD)result == 3 || (_DWORD)result == 2 )
        return result;
      if ( (_DWORD)result == 1 )
      {
        v55 = MiRecomputeWalkHierarchy(v5, a2, a3);
        a2 = v55;
        if ( !v55 )
          return 1LL;
        v8 = v67;
        v4 = 0LL;
        v12 = v55 <= i;
        v7 = DpcRequestSummary;
      }
      else
      {
        v7 = a3;
        a2 += 8LL;
        v4 = 0LL;
        v12 = a2 <= i;
      }
    }
    v7 = a3;
    v41 = 0xFFFFF6FB7DBED000uLL;
LABEL_96:
    DpcRequestSummary = 0xFFFFF68000000000uLL;
LABEL_97:
    if ( !v40 )
      goto LABEL_106;
    v43 = (__int64)(a2 << 25) >> 16;
    if ( v7 == 1 && (v42 & 0x11) == 0x10 )
    {
      v44 = *(_QWORD *)a2;
      if ( a2 >= v41 && a2 <= 0xFFFFF6FB7DBED7F8uLL )
        v44 = MiReadPteShadow(a2, *(_QWORD *)a2);
      v76 = v44;
      v45 = *(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v76) - 0x58000000000LL);
      if ( (v45 & 0x3FF0) == 0 || ((v45 >> 14) & 7) < *((unsigned __int8 *)v5 + 7) )
      {
        v67 = 0;
        goto LABEL_106;
      }
    }
    v50 = MiWalkPageTablesRecursively(v5, v43, (unsigned int)(v7 - 1));
    v67 = v50;
    v8 = v50;
    if ( v50 == 2 )
      return 2LL;
    if ( v50 == 3 )
      break;
    if ( v50 != 1 )
      goto LABEL_106;
    v7 = a3;
    if ( a3 < 4 )
    {
      DpcRequestSummary = 0xFFFFF68000000000uLL;
      v51 = &v5[(unsigned __int64)v72 / 8 + 7];
      v52 = 4 - a3;
      do
      {
        *v51 = a2;
        a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v51 += 2;
        --v52;
      }
      while ( v52 );
      v8 = v50;
      v5 = a1;
    }
    if ( a3 != 3 )
      return 1LL;
    a2 = v5[13];
    if ( !a2 )
      return 1LL;
    v4 = 0LL;
  }
  if ( a3 == 1 )
  {
    v56 = (((v43 << 25 >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
    v57 = *(_QWORD *)v56;
    if ( v56 >= 0xFFFFF6FB7DBED000uLL && v56 <= 0xFFFFF6FB7DBED7F8uLL )
      v57 = MiReadPteShadow(v56, *(_QWORD *)v56);
    v78 = v57;
    v59 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v78) - 0x58000000000LL);
    if ( ((*(_DWORD *)v59 >> 4) & 0x3FF) == 0 )
    {
      v61 = (__int64)(v56 << 25) >> 16;
      memset(v79, 0, sizeof(v79));
      do
      {
        v62 = *(_QWORD *)v61;
        v63 = v58;
        if ( v61 >= v58 )
        {
          v63 = v60;
          if ( v61 <= v60 )
            LOBYTE(v62) = MiReadPteShadow(v61, *(_QWORD *)v61);
        }
        if ( (v62 & 1) != 0 )
        {
          v64 = MiGetWsleContents(v63, (__int64)(v61 << 25) >> 16) & 0xF;
          if ( (unsigned __int8)(v64 - 8) > 2u )
            ++*((_DWORD *)v79 + (unsigned __int8)v64);
          v58 = 0xFFFFF6FB7DBED000uLL;
        }
        v61 += 8LL;
      }
      while ( (v61 & 0xFFF) != 0 );
      v65 = 8;
      while ( 1 )
      {
        v66 = *((_DWORD *)v79 + (unsigned __int8)--v65);
        if ( v66 )
          break;
        if ( !v65 )
          return 3LL;
      }
      *v59 = *v59 & 0xFFFFFFFFFFFE000FuLL | (16 * (v66 & 0x3FF | ((unsigned __int64)(v65 & 7) << 10)));
    }
  }
  return 3LL;
}
