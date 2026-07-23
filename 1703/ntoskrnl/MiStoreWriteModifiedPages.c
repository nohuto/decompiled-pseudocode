/*
 * XREFs of MiStoreWriteModifiedPages @ 0x14005630C
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1400321DC (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14003224C (MiRefPageFileSpaceBitmaps.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiStoreFreeWriteSupport @ 0x140054EB0 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x140054EDC (MiStoreModifiedWriteDereference.c)
 *     MiStoreWriteIssue @ 0x140056248 (MiStoreWriteIssue.c)
 *     MiStoreCheckCandidatePage @ 0x140056BA4 (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x140057400 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x1400574A4 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreUpdatePagefileHash @ 0x140077074 (MiStoreUpdatePagefileHash.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     MiStoreLogNotCandidate @ 0x14013DD00 (MiStoreLogNotCandidate.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x140220BF4 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x140220CFC (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140220DB8 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140220F00 (MiStoreLogWriteIssueRetry.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // r12
  ULONG v4; // r11d
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  ULONG v10; // r11d
  unsigned int v11; // r8d
  _QWORD *v12; // rax
  int v13; // edx
  _DWORD *v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  int v18; // r11d
  __int64 v19; // r10
  unsigned int v20; // esi
  unsigned int v21; // edx
  __int64 *v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // r14d
  int v27; // eax
  _SLIST_ENTRY *PoolWithTag; // r11
  unsigned int v29; // ecx
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r9
  ULONG v38; // ecx
  unsigned __int8 v39; // al
  _DWORD *v40; // r8
  _DWORD *v41; // rdx
  __int64 v42; // r14
  __int64 updated; // rbx
  unsigned int *v44; // rax
  unsigned int v45; // r8d
  unsigned int v46; // esi
  unsigned int v47; // r10d
  int v48; // edx
  int v49; // r11d
  __int64 v50; // r9
  unsigned int v51; // r14d
  unsigned __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // ebx
  unsigned __int64 v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rsi
  unsigned __int8 v62; // al
  _DWORD *v63; // rax
  unsigned int v64; // [rsp+40h] [rbp-99h]
  unsigned int v65; // [rsp+44h] [rbp-95h]
  int v66; // [rsp+48h] [rbp-91h]
  int v67; // [rsp+4Ch] [rbp-8Dh]
  ULONG v68; // [rsp+50h] [rbp-89h]
  _SLIST_ENTRY *v69; // [rsp+58h] [rbp-81h]
  __int64 v70; // [rsp+60h] [rbp-79h]
  unsigned int v71; // [rsp+68h] [rbp-71h]
  _QWORD *v72; // [rsp+70h] [rbp-69h]
  __int64 v73; // [rsp+78h] [rbp-61h]
  __int64 v74; // [rsp+80h] [rbp-59h] BYREF
  __int64 v75; // [rsp+88h] [rbp-51h]
  int v76; // [rsp+90h] [rbp-49h]
  int v77; // [rsp+94h] [rbp-45h]
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-41h]
  union _MM_STORE_KEY v79; // [rsp+A0h] [rbp-39h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-31h]
  _BYTE v81[16]; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD *v82; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v83; // [rsp+C8h] [rbp-11h]
  __int64 v84; // [rsp+D0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp+Fh] BYREF
  unsigned __int8 v87; // [rsp+148h] [rbp+6Fh]
  unsigned int v88; // [rsp+148h] [rbp+6Fh]
  unsigned int v89; // [rsp+150h] [rbp+77h]
  int v90; // [rsp+158h] [rbp+7Fh]
  __int64 v91; // [rsp+158h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 248) >> 12;
  v75 = a1 + 208;
  v5 = *(_QWORD *)(v1 + 256);
  v68 = v4;
  v6 = *(unsigned int *)(v5 + 1204);
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v4);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1204);
    return result;
  }
  v8 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1188) + 5600);
  v70 = v8;
  if ( !*(_QWORD *)(v8 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v82 = 0LL;
  *(_DWORD *)(v3 + 44) = 1;
  v69 = 0LL;
  v67 = 0;
  v9 = 0LL;
  v65 = 0;
  v64 = *(_DWORD *)(v8 + 120);
  v87 = 17;
  v90 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(-255LL);
  v11 = 0;
  v12 = (_QWORD *)(v2 + 48);
LABEL_6:
  v72 = v12;
  v89 = v11;
LABEL_7:
  if ( v11 < v10 )
  {
    v13 = 1;
    v73 = *v12;
    v66 = 1;
    if ( *v12 == qword_14036CEC8 || !*(_QWORD *)(v8 + 24) )
      goto LABEL_58;
    if ( v82 != *(_DWORD **)(v8 + 112) )
    {
      if ( v82 )
      {
        v14 = MiDerefPageFileSpaceBitmaps(v8, &v82, 1);
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
      }
      MiRefPageFileSpaceBitmaps(v8, (__int64)&v82);
    }
    v15 = v64;
    v16 = v83 - 1;
    v17 = v64 < v83 ? v64 : 0;
    v18 = (v84 & 4) != 0 ? 0x20 : 0;
    v19 = v84 - ((v84 & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v20 = v18 + v16;
      if ( v16 - v17 == -1 )
      {
        v21 = -1;
        goto LABEL_24;
      }
      v22 = (__int64 *)(v19 + 8 * ((unsigned __int64)(v18 + v17) >> 6));
      v23 = *v22 | ((1LL << ((v18 + v17) & 0x3F)) - 1);
      if ( v23 == -1 )
      {
        while ( (unsigned __int64)++v22 <= v19 + 8 * ((unsigned __int64)v20 >> 6) )
        {
          v23 = *v22;
          if ( *v22 != -1 )
            goto LABEL_21;
        }
      }
      else
      {
LABEL_21:
        _BitScanForward64(&v24, ~v23);
        v21 = v24 + ((unsigned int)(((__int64)v22 - v19) >> 3) << 6);
        v76 = v24;
        if ( v21 <= v20 )
        {
          if ( v21 != -1 )
            goto LABEL_29;
          goto LABEL_23;
        }
      }
      v21 = -1;
LABEL_23:
      v15 = v64;
LABEL_24:
      if ( !v17 )
      {
LABEL_29:
        v26 = v21 - v18;
        if ( v21 == -1 )
          v26 = -1;
        v71 = v26;
        v9 = 48 * v73 - 0x58000000000LL;
        v87 = MiLockPageInline(v9);
        v3 = a1;
        if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 )
        {
          v74 = 0LL;
          v27 = MiStoreCheckCandidatePage(48 * (int)v73, v26, (unsigned int)&v79, (unsigned int)v81, (__int64)&v74);
          if ( v27 < 0 )
          {
            MiStoreLogNotCandidate((unsigned int)v27, v26);
            goto LABEL_57;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v87);
          PoolWithTag = v69;
          v87 = 17;
          if ( !v69 )
          {
            v69 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 1248));
            PoolWithTag = v69;
            if ( !v69 )
            {
              PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
              v69 = PoolWithTag;
            }
            if ( !PoolWithTag )
            {
              v67 = 1;
              goto LABEL_39;
            }
          }
          v29 = 1;
          if ( (unsigned __int64)(*(_QWORD *)(v8 + 24) - 1LL) >= 8 )
            v30 = 8;
          else
            v30 = *(_DWORD *)(v8 + 24) - 1;
          v31 = v90;
          if ( v90 )
          {
            if ( *(_QWORD *)(v5 + 5760) >= 0x120uLL )
            {
              v31 = (unsigned __int64)(KiQueryUnbiasedInterruptTime(1LL) - UnbiasedInterruptTime) < 0x2FAF080 ? v90 : 0;
              v90 = v31;
            }
            else
            {
              v31 = 0;
              v90 = 0;
              if ( v30 >= 3 )
                v30 = 3;
            }
          }
          _InterlockedAdd((volatile signed __int32 *)(a1 + 44), v29);
          v32 = MiStoreWriteIssue((__int64)PoolWithTag, v9, &v79, (__int64)v81, (__int64)PoolWithTag, v74, a1, v31);
          if ( v32 < 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
            if ( v32 == -1073740682 )
            {
              v64 = v26 + 1;
              if ( v65 < v30 )
              {
                MiStoreLogWriteIssueRetry((unsigned int)v81, v26, v65, v90, *(_DWORD *)(v5 + 1208));
                v10 = v68;
                ++v65;
                v8 = v70;
                v11 = v89;
                v12 = v72;
                goto LABEL_7;
              }
            }
            else
            {
              v33 = v67;
              if ( v32 == -1073741670 )
                v33 = 1;
              v67 = v33;
            }
            MiStoreLogWriteIssueFailure(v32, (unsigned int)v81, v26, v65, v90, ++*(_DWORD *)(v5 + 1208));
LABEL_39:
            v11 = v89;
LABEL_61:
            _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1288) + 8LL), v11);
LABEL_62:
            ++v11;
            v10 = v68;
            v12 = v72 + 1;
            v65 = 0;
            v8 = v70;
            goto LABEL_6;
          }
          v66 = 0;
          v69 = 0LL;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v70 + 232), &LockHandle);
          v64 = v26 + 1;
          _bittestandset(*(signed __int32 **)(*(_QWORD *)(v70 + 112) + 16LL), v26);
          --*(_QWORD *)(v70 + 24);
          *(_DWORD *)(v70 + 120) = v26 + 1;
          MiUpdatePagefilePeakUsage(v70);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v34 = (unsigned __int8)MiLockPageInline(v9);
          v35 = MiCapturePageFileInfoInline((_QWORD *)(v9 + 16), 1, 1);
          *(_QWORD *)(v9 + 16) &= ~2uLL;
          v36 = v35;
          MiUpdatePfnBackingStore(v9, v70, v71, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v34);
          v87 = 17;
          MiReleasePageFileInfo(v5, v36, 2LL);
        }
LABEL_57:
        v13 = v66;
        v11 = v89;
LABEL_58:
        if ( v87 != 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v87);
          v87 = 17;
        }
        if ( v13 )
          goto LABEL_61;
        goto LABEL_62;
      }
      v25 = v15 + 1;
      if ( v15 + 1 > v83 )
        v25 = v83;
      v16 = v25 - 1;
      v17 = 0;
    }
  }
  if ( v67 )
    *(_DWORD *)(v5 + 1204) = 32;
  v37 = *(_QWORD *)(v5 + 1288);
  v38 = v10 - 1;
  if ( v10 - 1 >= *(_DWORD *)v37 )
    goto LABEL_71;
  if ( v10 > 1 )
  {
    v40 = *(_DWORD **)(v37 + 8);
    v41 = &v40[(unsigned __int64)v38 >> 5];
    if ( v40 == v41 )
    {
      if ( ((0xFFFFFFFF >> (32 - v10)) & *v40) != 0xFFFFFFFF >> (32 - v10) )
        goto LABEL_71;
    }
    else
    {
      do
      {
        if ( *v40 != -1 )
          goto LABEL_71;
        ++v40;
      }
      while ( v40 != v41 );
      if ( ((0xFFFFFFFF >> ~(_BYTE)v38) & *v40) != 0xFFFFFFFF >> ~(_BYTE)v38 )
      {
        v39 = 0;
LABEL_79:
        if ( v39 )
          goto LABEL_80;
        goto LABEL_71;
      }
    }
LABEL_80:
    RtlClearBits(*(PRTL_BITMAP *)(v5 + 1288), 0, v10);
    *(_DWORD *)(v3 + 44) = 0;
    v54 = -1073740759;
    goto LABEL_99;
  }
  if ( v10 == 1 )
  {
    v39 = _bittest(*(const signed __int32 **)(v37 + 8), 0);
    goto LABEL_79;
  }
LABEL_71:
  LODWORD(v42) = -1;
  v91 = *(_QWORD *)(v3 + 176) >> 12;
  updated = MiTransferSoftwarePte(0LL, *(_QWORD *)(v3 + 144), (unsigned int)v91);
  while ( 2 )
  {
    v44 = *(unsigned int **)(v5 + 1288);
    v45 = v42 + 1;
    v88 = v45;
    v46 = *v44;
    v47 = v45 < *v44 ? v45 : 0;
    v48 = *v44 - 1;
    v49 = (v44[2] & 4) != 0LL ? 0x20 : 0;
    v50 = *((_QWORD *)v44 + 1) - ((*((_QWORD *)v44 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v51 = v48 + v49;
      v52 = v47 + v49;
      if ( v48 - v47 == -1 )
      {
        v53 = 0xFFFFFFFFLL;
        goto LABEL_87;
      }
      v55 = v52 >> 6;
      LOBYTE(v52) = (v47 + v49) & 0x3F;
      v56 = (_QWORD *)(v50 + 8 * v55);
      v57 = ~*v56 | ((1LL << v52) - 1);
      if ( v57 == -1 )
      {
        while ( (unsigned __int64)++v56 <= v50 + 8 * ((unsigned __int64)v51 >> 6) )
        {
          v57 = ~*v56;
          if ( *v56 )
            goto LABEL_84;
        }
      }
      else
      {
LABEL_84:
        _BitScanForward64(&v58, ~v57);
        v53 = (unsigned int)v58 + ((unsigned int)(((__int64)v56 - v50) >> 3) << 6);
        v77 = v58;
        if ( (unsigned int)v53 <= v51 )
        {
          if ( (_DWORD)v53 != -1 )
            break;
          goto LABEL_86;
        }
      }
      v53 = 0xFFFFFFFFLL;
LABEL_86:
      v45 = v88;
LABEL_87:
      if ( !v47 )
        break;
      v59 = v45 + 1;
      if ( v45 + 1 > v46 )
        v59 = v46;
      v48 = v59 - 1;
      v47 = 0;
    }
    v42 = (unsigned int)(v53 - v49);
    if ( (_DWORD)v53 == -1 )
      v42 = 0xFFFFFFFFLL;
    if ( (_DWORD)v42 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1288) + 8LL), v42);
      v60 = *(_QWORD *)(v75 + 8 * v42 + 48);
      if ( v60 == qword_14036CEC8 )
      {
        updated = MiUpdatePageFileHighInPte(updated, (unsigned int)(v91 + v42));
        MiReleasePageFileInfo(v5, updated, 2LL);
      }
      else
      {
        v61 = 48 * v60 - 0x58000000000LL;
        v62 = MiLockPageInline(v61);
        *(_BYTE *)(v61 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v62);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(v52, v53, v75, v68);
  *(_DWORD *)(a1 + 40) |= 0x20u;
  MiStoreModifiedWriteDereference(a1);
  v54 = 259;
LABEL_99:
  KiLeaveCriticalRegionUnsafe(CurrentThread);
  if ( v69 )
    MiStoreFreeWriteSupport(v69, (_SLIST_HEADER *)v5);
  if ( v82 )
  {
    v63 = MiDerefPageFileSpaceBitmaps(v70, &v82, 0);
    if ( v63 )
      ExFreePoolWithTag(v63, 0);
  }
  return v54;
}
