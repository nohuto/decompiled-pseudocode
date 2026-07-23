/*
 * XREFs of MiStoreWriteModifiedPages @ 0x14022CE80
 * Callers:
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140224FAC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140226C68 (MiRefPageFileSpaceBitmaps.c)
 *     MiUpdatePagefilePeakUsage @ 0x140227164 (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x1402271CC (MiUpdatePfnBackingStore.c)
 *     MiStoreCheckCandidatePage @ 0x14022C1C4 (MiStoreCheckCandidatePage.c)
 *     MiStoreFreeWriteSupport @ 0x14022C490 (MiStoreFreeWriteSupport.c)
 *     MiStoreLogFullPagefile @ 0x14022C4C4 (MiStoreLogFullPagefile.c)
 *     MiStoreLogNotCandidate @ 0x14022C530 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteDisabled @ 0x14022C68C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x14022C748 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14022C890 (MiStoreLogWriteIssueRetry.c)
 *     MiStoreModifiedWriteDereference @ 0x14022CB28 (MiStoreModifiedWriteDereference.c)
 *     MiStoreUpdatePagefileHash @ 0x14022CC04 (MiStoreUpdatePagefileHash.c)
 *     MiStoreWriteIssue @ 0x14022CD90 (MiStoreWriteIssue.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // r11d
  __int64 v5; // r15
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  ULONG v9; // r11d
  unsigned int v10; // r8d
  _QWORD *v11; // rax
  int v12; // edx
  _DWORD *v13; // rax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // r9d
  int v17; // r11d
  __int64 v18; // r10
  unsigned int v19; // esi
  unsigned int v20; // edx
  __int64 *v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // r14d
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // ebx
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // r9
  ULONG v35; // ecx
  unsigned __int8 v36; // al
  _DWORD *v37; // r8
  _DWORD *v38; // rdx
  __int64 v39; // r14
  __int64 updated; // rbx
  unsigned int *v41; // rax
  unsigned int v42; // r8d
  unsigned int v43; // esi
  unsigned int v44; // r10d
  int v45; // edx
  int v46; // r11d
  __int64 v47; // r9
  unsigned int v48; // r14d
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned int v51; // ebx
  __int64 v52; // rsi
  _QWORD *v53; // rdx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rsi
  unsigned __int8 v59; // al
  _DWORD *v60; // rax
  unsigned int v61; // [rsp+40h] [rbp-99h]
  unsigned int v62; // [rsp+44h] [rbp-95h]
  int v63; // [rsp+48h] [rbp-91h]
  int v64; // [rsp+4Ch] [rbp-8Dh]
  unsigned int v65; // [rsp+50h] [rbp-89h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-81h]
  __int64 v67; // [rsp+60h] [rbp-79h]
  unsigned int v68; // [rsp+68h] [rbp-71h]
  _QWORD *v69; // [rsp+70h] [rbp-69h]
  __int64 v70; // [rsp+78h] [rbp-61h]
  __int64 v71; // [rsp+80h] [rbp-59h] BYREF
  __int64 v72; // [rsp+88h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-49h]
  int v74; // [rsp+98h] [rbp-41h]
  int v75; // [rsp+9Ch] [rbp-3Dh]
  __int64 UnbiasedInterruptTime; // [rsp+A0h] [rbp-39h]
  union _MM_STORE_KEY v77; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v78; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD *v79; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v80; // [rsp+C8h] [rbp-11h]
  __int64 v81; // [rsp+D0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp+Fh] BYREF
  unsigned __int8 v84; // [rsp+148h] [rbp+6Fh]
  unsigned int v85; // [rsp+148h] [rbp+6Fh]
  unsigned int v86; // [rsp+150h] [rbp+77h]
  unsigned int v87; // [rsp+158h] [rbp+7Fh]
  __int64 v88; // [rsp+158h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 248) >> 12;
  v72 = a1 + 208;
  v5 = *(_QWORD *)(v1 + 256);
  v65 = v4;
  if ( *(_DWORD *)(v5 + 1156) )
  {
    MiStoreLogWriteDisabled();
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1156);
    return result;
  }
  v7 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1140) + 5792);
  v67 = v7;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v79 = 0LL;
  *(_DWORD *)(a1 + 44) = 1;
  ListEntry = 0LL;
  v64 = 0;
  v8 = 0LL;
  v62 = 0;
  v61 = *(_DWORD *)(v7 + 120);
  v84 = 17;
  v87 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v10 = 0;
  v11 = (_QWORD *)(v2 + 48);
LABEL_6:
  v69 = v11;
  v86 = v10;
LABEL_7:
  if ( v10 < v9 )
  {
    v12 = 1;
    v70 = *v11;
    v63 = 1;
    if ( *v11 == qword_140389188 || !*(_QWORD *)(v7 + 24) )
      goto LABEL_57;
    if ( v79 != *(_DWORD **)(v7 + 112) )
    {
      if ( v79 )
      {
        v13 = MiDerefPageFileSpaceBitmaps(v7, &v79, 1);
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
      }
      MiRefPageFileSpaceBitmaps(v7, (__int64)&v79);
    }
    v14 = v61;
    v15 = v80 - 1;
    v16 = v61 < v80 ? v61 : 0;
    v17 = (v81 & 4) != 0 ? 0x20 : 0;
    v18 = v81 - ((v81 & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v19 = v15 + v17;
      if ( v15 - v16 == -1 )
      {
        v20 = -1;
        goto LABEL_24;
      }
      v21 = (__int64 *)(v18 + 8 * ((unsigned __int64)(v16 + v17) >> 6));
      v22 = *v21 | ((1LL << ((v16 + v17) & 0x3F)) - 1);
      if ( v22 == -1 )
      {
        while ( (unsigned __int64)++v21 <= v18 + 8 * ((unsigned __int64)v19 >> 6) )
        {
          v22 = *v21;
          if ( *v21 != -1 )
            goto LABEL_21;
        }
      }
      else
      {
LABEL_21:
        _BitScanForward64(&v23, ~v22);
        v20 = v23 + ((unsigned int)(((__int64)v21 - v18) >> 3) << 6);
        v74 = v23;
        if ( v20 <= v19 )
        {
          if ( v20 != -1 )
            goto LABEL_29;
          goto LABEL_23;
        }
      }
      v20 = -1;
LABEL_23:
      v14 = v61;
LABEL_24:
      if ( !v16 )
      {
LABEL_29:
        v25 = v20 - v17;
        if ( v20 == -1 )
          v25 = -1;
        v68 = v25;
        v8 = 48 * v70 - 0x58000000000LL;
        v84 = MiLockPageInline(v8);
        v3 = a1;
        if ( (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
        {
          v71 = 0LL;
          v26 = MiStoreCheckCandidatePage(v8, v25, (unsigned __int64 *)&v77, &v78, &v71);
          if ( v26 < 0 )
          {
            MiStoreLogNotCandidate(v26);
            goto LABEL_56;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v84);
          v84 = 17;
          if ( !ListEntry )
          {
            ListEntry = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 1216));
            if ( !ListEntry )
            {
              ListEntry = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
              if ( !ListEntry )
              {
                v64 = 1;
                goto LABEL_38;
              }
            }
          }
          if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - 1LL) >= 8 )
            v27 = 8;
          else
            v27 = *(_DWORD *)(v7 + 24) - 1;
          v28 = v87;
          if ( v87 )
          {
            v28 = MiSufficientAvailablePages(v5, 0x120uLL);
            if ( v28 )
            {
              v28 = (unsigned __int64)(KiQueryUnbiasedInterruptTime() - UnbiasedInterruptTime) < 0x2FAF080 ? v87 : 0;
              v87 = v28;
            }
            else
            {
              v87 = 0;
              if ( v27 >= 3 )
                v27 = 3;
            }
          }
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
          v29 = MiStoreWriteIssue((__int64)ListEntry, v8, &v77, (int)&v78, (__int64)ListEntry, v71, a1, v28);
          if ( v29 < 0 )
          {
            _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
            if ( v29 == -1073740682 )
            {
              v61 = v25 + 1;
              if ( v62 < v27 )
              {
                MiStoreLogWriteIssueRetry((__int64)&v78, v25, v62, v87, *(_DWORD *)(v5 + 1160));
                v9 = v65;
                ++v62;
                v7 = v67;
                v10 = v86;
                v11 = v69;
                goto LABEL_7;
              }
            }
            else
            {
              v30 = v64;
              if ( v29 == -1073741670 )
                v30 = 1;
              v64 = v30;
            }
            MiStoreLogWriteIssueFailure(v29, (__int64)&v78, v25, v62, v87, ++*(_DWORD *)(v5 + 1160));
LABEL_38:
            v10 = v86;
LABEL_60:
            _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1256) + 8LL), v10);
LABEL_61:
            ++v10;
            v9 = v65;
            v11 = v69 + 1;
            v62 = 0;
            v7 = v67;
            goto LABEL_6;
          }
          v63 = 0;
          ListEntry = 0LL;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v67 + 232), &LockHandle);
          v61 = v25 + 1;
          _bittestandset(*(signed __int32 **)(*(_QWORD *)(v67 + 112) + 16LL), v25);
          *(_DWORD *)(v67 + 120) = v25 + 1;
          --*(_QWORD *)(v67 + 24);
          MiUpdatePagefilePeakUsage((_QWORD *)v67);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v31 = (unsigned __int8)MiLockPageInline(v8);
          v32 = MiCapturePageFileInfoInline((unsigned __int64 *)(v8 + 16), 1, 1);
          *(_QWORD *)(v8 + 16) &= ~2uLL;
          v33 = v32;
          MiUpdatePfnBackingStore(v8, v67, v68, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v31);
          v84 = 17;
          MiReleasePageFileInfo((struct _KEVENT *)v5, v33, 2);
        }
LABEL_56:
        v12 = v63;
        v10 = v86;
LABEL_57:
        if ( v84 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v84);
          v84 = 17;
        }
        if ( v12 )
          goto LABEL_60;
        goto LABEL_61;
      }
      v24 = v14 + 1;
      if ( v14 + 1 > v80 )
        v24 = v80;
      v15 = v24 - 1;
      v16 = 0;
    }
  }
  if ( v64 )
    *(_DWORD *)(v5 + 1156) = 32;
  v34 = *(_QWORD *)(v5 + 1256);
  v35 = v9 - 1;
  if ( v9 - 1 >= *(_DWORD *)v34 )
    goto LABEL_70;
  if ( v9 > 1 )
  {
    v37 = *(_DWORD **)(v34 + 8);
    v38 = &v37[(unsigned __int64)v35 >> 5];
    if ( v37 == v38 )
    {
      if ( ((0xFFFFFFFF >> (32 - v9)) & *v37) != 0xFFFFFFFF >> (32 - v9) )
        goto LABEL_70;
    }
    else
    {
      do
      {
        if ( *v37 != -1 )
          goto LABEL_70;
        ++v37;
      }
      while ( v37 != v38 );
      if ( ((0xFFFFFFFF >> ~(_BYTE)v35) & *v37) != 0xFFFFFFFF >> ~(_BYTE)v35 )
      {
        v36 = 0;
LABEL_78:
        if ( v36 )
          goto LABEL_79;
        goto LABEL_70;
      }
    }
LABEL_79:
    RtlClearBits(*(PRTL_BITMAP *)(v5 + 1256), 0, v9);
    *(_DWORD *)(v3 + 44) = 0;
    v51 = -1073740759;
    v52 = (__int64)CurrentThread;
    goto LABEL_98;
  }
  if ( v9 == 1 )
  {
    v36 = _bittest(*(const signed __int32 **)(v34 + 8), 0);
    goto LABEL_78;
  }
LABEL_70:
  LODWORD(v39) = -1;
  v88 = *(_QWORD *)(v3 + 176) >> 12;
  updated = MiTransferSoftwarePte(0LL, *(_QWORD *)(v3 + 144), v88, 1);
  while ( 2 )
  {
    v41 = *(unsigned int **)(v5 + 1256);
    v42 = v39 + 1;
    v85 = v42;
    v43 = *v41;
    v44 = v42 < *v41 ? v42 : 0;
    v45 = *v41 - 1;
    v46 = (v41[2] & 4) != 0LL ? 0x20 : 0;
    v47 = *((_QWORD *)v41 + 1) - ((*((_QWORD *)v41 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v48 = v45 + v46;
      v49 = v44 + v46;
      if ( v45 - v44 == -1 )
      {
        v50 = 0xFFFFFFFFLL;
        goto LABEL_86;
      }
      v53 = (_QWORD *)(v47 + 8 * (v49 >> 6));
      v54 = ~*v53 | ((1LL << ((v44 + v46) & 0x3F)) - 1);
      v49 = -1LL;
      if ( v54 == -1 )
      {
        while ( (unsigned __int64)++v53 <= v47 + 8 * ((unsigned __int64)v48 >> 6) )
        {
          v54 = ~*v53;
          if ( v54 != -1 )
            goto LABEL_83;
        }
      }
      else
      {
LABEL_83:
        _BitScanForward64(&v55, ~v54);
        v50 = (unsigned int)v55 + ((unsigned int)(((__int64)v53 - v47) >> 3) << 6);
        v75 = v55;
        if ( (unsigned int)v50 <= v48 )
        {
          if ( (_DWORD)v50 != -1 )
            break;
          goto LABEL_85;
        }
      }
      v50 = 0xFFFFFFFFLL;
LABEL_85:
      v42 = v85;
LABEL_86:
      if ( !v44 )
        break;
      v56 = v42 + 1;
      if ( v42 + 1 > v43 )
        v56 = v43;
      v45 = v56 - 1;
      v44 = 0;
    }
    v39 = (unsigned int)(v50 - v46);
    if ( (_DWORD)v50 == -1 )
      v39 = 0xFFFFFFFFLL;
    if ( (_DWORD)v39 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1256) + 8LL), v39);
      v57 = *(_QWORD *)(v72 + 8 * v39 + 48);
      if ( v57 == qword_140389188 )
      {
        updated = MiUpdatePageFileHighInPte(updated, (unsigned int)(v39 + v88));
        MiReleasePageFileInfo((struct _KEVENT *)v5, updated, 2);
      }
      else
      {
        v58 = 48 * v57 - 0x58000000000LL;
        v59 = MiLockPageInline(v58);
        *(_BYTE *)(v58 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v59);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(v49, v50, v72, v65);
  v52 = (__int64)CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --*(_WORD *)(v52 + 486);
  ++*(_DWORD *)(v5 + 1164);
  KiLeaveGuardedRegionUnsafe(v52);
  MiStoreModifiedWriteDereference(a1);
  v51 = 259;
LABEL_98:
  KeLeaveCriticalRegionThread(v52);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v5);
  if ( v79 )
  {
    v60 = MiDerefPageFileSpaceBitmaps(v67, &v79, 0);
    if ( v60 )
      ExFreePoolWithTag(v60, 0);
  }
  return v51;
}
