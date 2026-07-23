/*
 * XREFs of MiStoreWriteModifiedPages @ 0x1400D6708
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiStoreWriteIssue @ 0x14008C488 (MiStoreWriteIssue.c)
 *     MiStoreFreeWriteSupport @ 0x140091704 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x140091738 (MiStoreModifiedWriteDereference.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1400CCD28 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1400CD060 (MiDerefPageFileSpaceBitmaps.c)
 *     MiUpdatePagefilePeakUsage @ 0x1400D5DAC (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x1400D6420 (MiUpdatePfnBackingStore.c)
 *     MiStoreCheckCandidatePage @ 0x1400D64CC (MiStoreCheckCandidatePage.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiStoreUpdatePagefileHash @ 0x14013C1D8 (MiStoreUpdatePagefileHash.c)
 *     MiStoreLogNotCandidate @ 0x140154D10 (MiStoreLogNotCandidate.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x140267878 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x140267988 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140267A44 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140267B8C (MiStoreLogWriteIssueRetry.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  ULONG v2; // edi
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned __int8 v7; // si
  __int64 v8; // r12
  unsigned int v9; // edx
  __int64 v10; // r11
  _QWORD *v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // r9d
  int v19; // r11d
  __int64 v20; // r10
  unsigned int v21; // ebx
  unsigned int v22; // edx
  __int64 *v23; // rdx
  __int64 i; // r8
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // ebx
  char v28; // al
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // esi
  int v32; // eax
  int v33; // ecx
  int v34; // esi
  __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r9
  ULONG v40; // ecx
  unsigned __int8 v41; // al
  int *v42; // r8
  int v43; // r10d
  int *v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r12
  __int64 updated; // rbx
  unsigned int *v48; // rax
  unsigned int v49; // r8d
  unsigned int v50; // edi
  unsigned int v51; // r10d
  int v52; // edx
  int v53; // r11d
  __int64 v54; // r9
  unsigned int v55; // esi
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  bool j; // zf
  unsigned int v59; // ebx
  struct _KTHREAD *v60; // rdi
  _QWORD *v61; // rdx
  __int64 v62; // r8
  unsigned __int64 v63; // rax
  unsigned int v64; // edx
  __int64 v65; // r13
  __int64 v66; // rcx
  __int64 v67; // rdi
  unsigned __int8 v68; // al
  _DWORD *v69; // rax
  unsigned int v70; // [rsp+40h] [rbp-C0h]
  unsigned int v71; // [rsp+44h] [rbp-BCh]
  unsigned int v72; // [rsp+48h] [rbp-B8h]
  int v73; // [rsp+4Ch] [rbp-B4h]
  ULONG v74; // [rsp+50h] [rbp-B0h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-A8h]
  __int64 v76; // [rsp+60h] [rbp-A0h]
  unsigned int v77; // [rsp+68h] [rbp-98h]
  _QWORD *v78; // [rsp+70h] [rbp-90h]
  __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+8Ch] [rbp-74h]
  __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-68h]
  union _MM_STORE_KEY v85; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  __int128 v87; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v88; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v89; // [rsp+C8h] [rbp-38h]
  __int64 v90; // [rsp+D0h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  char v93; // [rsp+158h] [rbp+58h]
  unsigned int v94; // [rsp+158h] [rbp+58h]
  unsigned int v95; // [rsp+160h] [rbp+60h]
  int v96; // [rsp+168h] [rbp+68h]

  v2 = *(_DWORD *)(a1 + 248) >> 12;
  v74 = v2;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 256LL);
  v4 = *(unsigned int *)(v3 + 1156);
  if ( (_DWORD)v4 )
  {
    MiStoreLogWriteDisabled(v4, v2);
    result = 3221225626LL;
    --*(_DWORD *)(v3 + 1156);
    return result;
  }
  v6 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1140) + 6880);
  v76 = v6;
  if ( !*(_QWORD *)(v6 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v88 = 0LL;
  *(_DWORD *)(a1 + 44) = 1;
  v7 = 17;
  v8 = 0LL;
  v70 = *(_DWORD *)(v6 + 120);
  v73 = 0;
  ListEntry = 0LL;
  v93 = 17;
  v71 = 0;
  v96 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v9 = 0;
  v11 = (_QWORD *)(v10 + 48);
  v86 = v10 + 48;
  v13 = v12;
LABEL_6:
  v78 = v11;
  v95 = v9;
  while ( v9 < v2 )
  {
    v14 = v13;
    v83 = *v11;
    v72 = v13;
    if ( v83 == qword_1403CC408 || !*(_QWORD *)(v6 + 24) )
      goto LABEL_58;
    if ( v88 != *(_DWORD **)(v6 + 112) )
    {
      if ( v88 )
      {
        v15 = MiDerefPageFileSpaceBitmaps(v6, &v88, v13);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
      }
      MiRefPageFileSpaceBitmaps(v6, (__int64)&v88);
    }
    v16 = v70;
    v17 = v89 - 1;
    v18 = v70 < v89 ? v70 : 0;
    v19 = (v90 & 4) != 0 ? 0x20 : 0;
    v20 = v90 - ((v90 & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v21 = v17 + v19;
      if ( v17 - v18 == -1 )
      {
        v22 = -1;
      }
      else
      {
        v23 = (__int64 *)(v20 + 8 * ((unsigned __int64)(v18 + v19) >> 6));
        for ( i = *v23 | ((1LL << ((v18 + v19) & 0x3F)) - 1); i == -1; i = *v23 )
        {
          if ( (unsigned __int64)++v23 > v20 + 8 * ((unsigned __int64)v21 >> 6) )
            goto LABEL_29;
        }
        _BitScanForward64(&v25, ~i);
        v22 = v25 + ((unsigned int)(((__int64)v23 - v20) >> 3) << 6);
        v81 = v25;
        if ( v22 > v21 )
        {
LABEL_29:
          v22 = -1;
          goto LABEL_24;
        }
        if ( v22 != -1 )
          break;
LABEL_24:
        v16 = v70;
      }
      if ( !v18 )
        break;
      v26 = v16 + 1;
      if ( v16 + 1 > v89 )
        v26 = v89;
      v17 = v26 - 1;
      v18 = 0;
    }
    v27 = v22 - v19;
    if ( v22 == -1 )
      v27 = -1;
    v77 = v27;
    v8 = 48 * v83 - 0x58000000000LL;
    v28 = MiLockPageInline(v8);
    v13 = 1;
    v2 = v74;
    v7 = v28;
    v93 = v28;
    if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_57;
    v79 = 0LL;
    v29 = MiStoreCheckCandidatePage(v8, v27, (unsigned __int64 *)&v85, &v87, &v79);
    if ( v29 < 0 )
    {
      MiStoreLogNotCandidate((unsigned int)v29, v27);
LABEL_56:
      v13 = 1;
LABEL_57:
      v14 = v72;
      v9 = v95;
LABEL_58:
      if ( v7 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v7);
        v93 = 17;
      }
      if ( v14 )
        goto LABEL_61;
      goto LABEL_62;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    v93 = 17;
    if ( !ListEntry )
    {
      ListEntry = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v3 + 1216));
      if ( !ListEntry )
      {
        ListEntry = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
        if ( !ListEntry )
        {
          v73 = 1;
          goto LABEL_39;
        }
      }
    }
    v30 = *(_QWORD *)(v76 + 24);
    v31 = v30 - 1;
    if ( (unsigned __int64)(v30 - 1) >= 8 )
      v31 = 8;
    v32 = v96;
    if ( v96 )
    {
      v32 = MiSufficientAvailablePages(v3, 288LL);
      if ( v32 )
      {
        v32 = (unsigned __int64)(KiQueryUnbiasedInterruptTime() - UnbiasedInterruptTime) < 0x2FAF080 ? v96 : 0;
        v96 = v32;
      }
      else
      {
        v96 = 0;
        if ( v31 >= 3 )
          v31 = 3;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v33 = MiStoreWriteIssue((__int64)ListEntry, v8, &v85, (int)&v87, (__int64)ListEntry, v79, a1, v32);
    if ( v33 >= 0 )
    {
      v35 = v76;
      v72 = 0;
      ListEntry = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v76 + 232), &LockHandle);
      v70 = v27 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v76 + 112) + 16LL), v27);
      *(_DWORD *)(v76 + 120) = v27 + 1;
      --*(_QWORD *)(v76 + 24);
      MiUpdatePagefilePeakUsage((_QWORD *)v76);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v36 = (unsigned __int8)MiLockPageInline(v8);
      v37 = MiCapturePageFileInfoInline((_QWORD *)(v8 + 16), 1, 1);
      *(_QWORD *)(v8 + 16) &= ~2uLL;
      v38 = v37;
      MiUpdatePfnBackingStore(v8, v35, v77, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v36);
      v7 = 17;
      v93 = 17;
      MiReleasePageFileInfo(v3, v38, 2LL);
      v2 = v74;
      goto LABEL_56;
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
    if ( v33 != -1073740682 )
    {
      v34 = v73;
      if ( v33 == -1073741670 )
        v34 = 1;
      v73 = v34;
LABEL_54:
      MiStoreLogWriteIssueFailure(v33, (unsigned int)&v87, v27, v71, v96, ++*(_DWORD *)(v3 + 1160));
LABEL_39:
      v9 = v95;
LABEL_61:
      v13 = 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v3 + 1256) + 8LL), v9);
LABEL_62:
      v9 += v13;
      v7 = v93;
      v11 = v78 + 1;
      v71 = 0;
      v6 = v76;
      goto LABEL_6;
    }
    v70 = v27 + 1;
    if ( v71 >= v31 )
      goto LABEL_54;
    MiStoreLogWriteIssueRetry((unsigned int)&v87, v27, v71, v96, *(_DWORD *)(v3 + 1160));
    v7 = 17;
    v13 = 1;
    ++v71;
    v6 = v76;
    v9 = v95;
    v11 = v78;
  }
  if ( v73 )
    *(_DWORD *)(v3 + 1156) = 32;
  v39 = *(_QWORD *)(v3 + 1256);
  v40 = v2 - 1;
  if ( v2 - 1 >= *(_DWORD *)v39 )
    goto LABEL_71;
  if ( v2 > v13 )
  {
    v42 = *(int **)(v39 + 8);
    v43 = *v42;
    v44 = &v42[(unsigned __int64)v40 >> 5];
    if ( v42 == v44 )
    {
      if ( (v43 & (0xFFFFFFFF >> (32 - v2))) != 0xFFFFFFFF >> (32 - v2) )
        goto LABEL_71;
    }
    else
    {
      for ( j = v43 == -1; ; j = *v42 == -1 )
      {
        if ( !j )
          goto LABEL_71;
        if ( ++v42 == v44 )
          break;
      }
      if ( ((0xFFFFFFFF >> ~(_BYTE)v40) & *v42) != 0xFFFFFFFF >> ~(_BYTE)v40 )
      {
        v41 = 0;
LABEL_81:
        if ( v41 )
          goto LABEL_82;
        goto LABEL_71;
      }
    }
LABEL_82:
    RtlClearBits(*(PRTL_BITMAP *)(v3 + 1256), 0, v2);
    *(_DWORD *)(a1 + 44) = 0;
    v59 = -1073740759;
    v60 = CurrentThread;
    goto LABEL_101;
  }
  if ( v2 == v13 )
  {
    v41 = _bittest(*(const signed __int32 **)(v39 + 8), 0);
    goto LABEL_81;
  }
LABEL_71:
  LODWORD(v45) = -1;
  v46 = *(_QWORD *)(a1 + 176) >> 12;
  updated = MiTransferSoftwarePte(ZeroPte, *(_QWORD *)(a1 + 144), (unsigned int)v46, v13);
  while ( 2 )
  {
    v48 = *(unsigned int **)(v3 + 1256);
    v49 = v45 + 1;
    v94 = v49;
    v50 = *v48;
    v51 = v49 < *v48 ? v49 : 0;
    v52 = *v48 - 1;
    v53 = (v48[2] & 4) != 0LL ? 0x20 : 0;
    v54 = *((_QWORD *)v48 + 1) - ((*((_QWORD *)v48 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v55 = v52 + v53;
      v56 = v51 + v53;
      if ( v52 - v51 == -1 )
      {
        v57 = 0xFFFFFFFFLL;
        goto LABEL_89;
      }
      v61 = (_QWORD *)(v54 + 8 * (v56 >> 6));
      v62 = ~*v61 | ((1LL << ((v51 + v53) & 0x3F)) - 1);
      v56 = -1LL;
      if ( v62 == -1 )
      {
        while ( (unsigned __int64)++v61 <= v54 + 8 * ((unsigned __int64)v55 >> 6) )
        {
          v62 = ~*v61;
          if ( v62 != -1 )
            goto LABEL_86;
        }
      }
      else
      {
LABEL_86:
        _BitScanForward64(&v63, ~v62);
        v57 = (unsigned int)v63 + ((unsigned int)(((__int64)v61 - v54) >> 3) << 6);
        v82 = v63;
        if ( (unsigned int)v57 <= v55 )
        {
          if ( (_DWORD)v57 != -1 )
            break;
          goto LABEL_88;
        }
      }
      v57 = 0xFFFFFFFFLL;
LABEL_88:
      v49 = v94;
LABEL_89:
      if ( !v51 )
        break;
      v64 = v49 + 1;
      if ( v49 + 1 > v50 )
        v64 = v50;
      v52 = v64 - 1;
      v51 = 0;
    }
    v65 = v86;
    v45 = (unsigned int)(v57 - v53);
    if ( (_DWORD)v57 == -1 )
      v45 = 0xFFFFFFFFLL;
    if ( (_DWORD)v45 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v3 + 1256) + 8LL), v45);
      v66 = *(_QWORD *)(v65 + 8 * v45);
      if ( v66 == qword_1403CC408 )
      {
        updated = MiUpdatePageFileHighInPte(updated, (unsigned int)(v46 + v45));
        MiReleasePageFileInfo(v3, updated, 2LL);
      }
      else
      {
        v67 = 48 * v66 - 0x58000000000LL;
        v68 = MiLockPageInline(v67);
        *(_BYTE *)(v67 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v68);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(v56, v57, a1 + 208, v74);
  v60 = CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --v60->SpecialApcDisable;
  ++*(_DWORD *)(v3 + 1164);
  KiLeaveGuardedRegionUnsafe(v60);
  MiStoreModifiedWriteDereference(a1);
  v59 = 259;
LABEL_101:
  KeLeaveCriticalRegionThread(v60);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v3);
  if ( v88 )
  {
    v69 = MiDerefPageFileSpaceBitmaps(v76, &v88, 0);
    if ( v69 )
      ExFreePoolWithTag(v69, 0);
  }
  return v59;
}
