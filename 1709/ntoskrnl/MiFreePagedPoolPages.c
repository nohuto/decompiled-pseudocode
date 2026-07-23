/*
 * XREFs of MiFreePagedPoolPages @ 0x140035950
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 */

PSLIST_ENTRY __fastcall MiFreePagedPoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v7; // r9
  unsigned __int64 v8; // r15
  ULONG_PTR v9; // r13
  unsigned __int16 *v10; // r14
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // rdx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r8
  _SLIST_HEADER *v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r11
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r12
  unsigned int v29; // r15d
  unsigned __int64 v30; // rdi
  struct _KEVENT *v31; // rcx
  struct _KEVENT *v32; // rcx
  struct _KTHREAD *v33; // rbx
  unsigned int v34; // r8d
  BOOL v35; // esi
  unsigned int v36; // edx
  bool v37; // zf
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  _KLOCK_ENTRY *v41; // rdi
  __int64 v42; // rdx
  PSLIST_ENTRY result; // rax
  struct _KTHREAD *v44; // rcx
  __int64 v45; // rcx
  __int64 *v46; // r10
  __int64 *v47; // r11
  __int64 v48; // rax
  struct _KTHREAD *v49; // rbx
  unsigned int SessionId; // r8d
  BOOL v51; // esi
  unsigned int v52; // edx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  _KLOCK_ENTRY *v56; // rdi
  __int64 v57; // rdx
  _KPROCESS *Process; // rcx
  __int64 *v59; // r10
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // r8
  __int64 v63; // r10
  unsigned __int64 v64; // rdx
  _QWORD *v65; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // rdi
  __int64 v68; // rbx
  __int64 v69; // rbx
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // [rsp+30h] [rbp-D0h]
  int v72; // [rsp+38h] [rbp-C8h] BYREF
  int v73; // [rsp+3Ch] [rbp-C4h]
  int v74; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v75; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v76; // [rsp+50h] [rbp-B0h]
  int v77; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v78; // [rsp+60h] [rbp-A0h]
  int v79; // [rsp+68h] [rbp-98h]
  int v80; // [rsp+6Ch] [rbp-94h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-90h]
  int v82; // [rsp+78h] [rbp-88h]
  int v83; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v84; // [rsp+80h] [rbp-80h]
  unsigned __int64 v85[5]; // [rsp+88h] [rbp-78h] BYREF
  int v86; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v87; // [rsp+B4h] [rbp-4Ch]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+C8h] [rbp-38h]

  memset(v85, 0, 0x20uLL);
  LODWORD(BugCheckParameter4) = 0;
  v77 = 0;
  LODWORD(v7) = 0;
  v8 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_1403899D0[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 6 )
  {
    v73 = 6;
    v9 = (ULONG_PTR)&qword_140389318;
    v78 = 0LL;
    v10 = (unsigned __int16 *)&unk_140389660;
    if ( a3 == 1951624525 || a3 == 1816358221 )
    {
      LODWORD(v7) = 0x80000000;
      v11 = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
  }
  else
  {
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) != 1 )
      KeBugCheckEx(0xC2u, 0x42uLL, BugCheckParameter2, v7, BugCheckParameter4);
    v73 = 1;
    v77 = 2;
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    Process = KeGetCurrentThread()->ApcState.Process;
    v78 = v11;
    v9 = v11 + 160;
    v10 = (unsigned __int16 *)(Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  v12 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = v12;
  v13 = (__int64)(v12 - *(_QWORD *)(v9 + 24)) >> 3;
  v14 = v13 + v8 - 1;
  v84 = v13 + v8;
  if ( v14 >= *(_QWORD *)(v9 + 8) )
    goto LABEL_154;
  if ( v8 <= 1 )
  {
    if ( v8 == 1 && _bittest64(*(const signed __int64 **)(v9 + 16), v13) )
      goto LABEL_10;
LABEL_154:
    KeBugCheckEx(0xC2u, 0x50uLL, BugCheckParameter2, v13, qword_140389358 << 12);
  }
  v45 = *(_QWORD *)(v9 + 16);
  v46 = (__int64 *)(v45 + 8 * (v13 >> 6));
  v47 = (__int64 *)(v45 + 8 * (v14 >> 6));
  v48 = *v46;
  if ( v46 == v47 )
  {
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v13) & v48) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v13 )
      goto LABEL_154;
  }
  else
  {
    if ( ((-1LL << v13) & v48) != -1LL << v13 )
      goto LABEL_154;
    v59 = v46 + 1;
    if ( v59 != v47 )
    {
      while ( *v59 == -1 )
      {
        if ( ++v59 == v47 )
          goto LABEL_96;
      }
      goto LABEL_154;
    }
LABEL_96:
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v14) & *v59) != 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v14 )
      goto LABEL_154;
  }
  v12 = v75;
  LODWORD(BugCheckParameter4) = 0;
LABEL_10:
  if ( !v11 && v8 == 1 && !(_DWORD)v7 )
  {
    v15 = &qword_140388510[25 * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]];
    if ( LOWORD(v15->Alignment) < (unsigned int)dword_140388090 )
    {
      *(_QWORD *)BugCheckParameter2 = qword_140389280 ^ BugCheckParameter2;
      return RtlpInterlockedPushEntrySList(v15, (PSLIST_ENTRY)(BugCheckParameter2 + 16));
    }
  }
  MiDeleteSystemPagableVm(v10, 0LL, v12, v8, BugCheckParameter4, v85);
  v16 = *(_QWORD *)(qword_140388AF0 + 8LL * v10[86]);
  if ( !v11 && (dword_140400104 & 2) != 0 )
  {
    if ( (ULONG_PTR *)v16 == &MiSystemPartition )
      MiReturnResidentAvailable(v85[0]);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 6016), v85[0]);
  }
  MiReturnCommit(v16, v85[3] - v85[1]);
  CurrentThread = KeGetCurrentThread();
  v76 = v13 & 0xFFFFFFFFFFFFFE00uLL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  RtlClearBitsEx(v9 + 8, v13, v8);
  v17 = *(_QWORD *)(v9 + 8);
  v71 = *(_QWORD *)(v9 + 40);
  if ( (v13 & 0xFFFFFFFFFFFFFE00uLL) >= v17 )
    v18 = 0LL;
  else
    v18 = v13 & 0xFFFFFFFFFFFFFE00uLL;
  v19 = *(_QWORD *)(v9 + 16);
  v20 = v17 - 1;
  v21 = v13 & 0xFFFFFFFFFFFFFE00uLL;
  while ( 1 )
  {
    if ( v20 - v18 == -1LL )
      goto LABEL_99;
    v22 = (_QWORD *)(v19 + 8 * (v18 >> 6));
    v23 = ~*v22;
    if ( *v22 )
      break;
    while ( (unsigned __int64)++v22 <= v19 + 8 * (v20 >> 6) )
    {
      v23 = ~*v22;
      if ( *v22 )
        goto LABEL_21;
    }
LABEL_99:
    if ( !v18 )
    {
      v24 = *(_QWORD *)(v9 + 8);
LABEL_116:
      v26 = v71;
      goto LABEL_117;
    }
    v60 = v21 + 1;
    if ( v21 + 1 > v17 )
      v60 = v17;
    v20 = v60 - 1;
    v18 = 0LL;
  }
LABEL_21:
  _BitScanForward64((unsigned __int64 *)&v23, ~v23);
  v24 = v23 + (((__int64)v22 - v19) >> 3 << 6);
  v82 = v23;
  if ( v24 > v20 || v24 == -1LL )
    goto LABEL_99;
  if ( v24 < v21 )
    goto LABEL_116;
  v25 = v21 + 512;
  if ( v24 >= v21 + 512 )
    goto LABEL_116;
  if ( v13 + v8 <= v25 )
    goto LABEL_26;
  v61 = *(_QWORD *)(v9 + 8);
  v21 += 512LL;
  v76 = v25;
  if ( v25 >= v61 )
    v62 = 0LL;
  else
    v62 = v25;
  v63 = *(_QWORD *)(v9 + 16);
  v64 = v61 - 1;
  while ( 2 )
  {
    if ( v64 - v62 == -1LL )
      goto LABEL_133;
    v65 = (_QWORD *)(v63 + 8 * (v62 >> 6));
    v66 = ~*v65;
    if ( !*v65 )
    {
      while ( (unsigned __int64)++v65 <= v63 + 8 * (v64 >> 6) )
      {
        v66 = ~*v65;
        if ( *v65 )
          goto LABEL_111;
      }
LABEL_133:
      v24 = -1LL;
      goto LABEL_145;
    }
LABEL_111:
    _BitScanForward64((unsigned __int64 *)&v66, ~v66);
    v24 = v66 + (((__int64)v65 - v63) >> 3 << 6);
    v83 = v66;
    if ( v24 > v64 )
    {
      v24 = -1LL;
    }
    else if ( v24 != -1LL )
    {
      break;
    }
LABEL_145:
    if ( v62 )
    {
      v70 = v21 + 1;
      if ( v21 + 1 > v61 )
        v70 = v61;
      v64 = v70 - 1;
      v62 = 0LL;
      continue;
    }
    break;
  }
  if ( v24 >= v21 && v24 < v21 + 512 )
  {
LABEL_26:
    v26 = v71;
    v75 = 0LL;
LABEL_27:
    v76 = 0LL;
    v27 = 0LL;
    if ( v13 < v26 )
      *(_QWORD *)(v9 + 40) = v13;
    goto LABEL_29;
  }
  v26 = v71;
  if ( v13 < v71 )
  {
    v26 = v13;
    *(_QWORD *)(v9 + 40) = v13;
    v71 = v13;
  }
LABEL_117:
  if ( !v75 )
    goto LABEL_27;
  if ( v24 < v21 )
    v67 = *(_QWORD *)(v9 + 8);
  else
    v67 = v24 & 0xFFFFFFFFFFFFFE00uLL;
  v27 = v67 - v21;
  RtlSetBitsEx(v9 + 8, v21, v67 - v21);
  if ( v67 < v84 && v67 < v71 || v71 >= v76 && v71 < v67 )
    *(_QWORD *)(v9 + 40) = v67;
LABEL_29:
  *(_QWORD *)(v9 + 48) -= v8;
  v28 = v78;
  if ( v78 )
  {
    if ( v75 )
      *(_DWORD *)(v78 + 7996) -= v27 >> 9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v72 = 0;
    v49 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
      SessionId = MmGetSessionIdEx(v49->ApcState.Process);
    else
      SessionId = -1;
    --v49->SpecialApcDisable;
    v51 = ++v49->AbAllocationRegionCount == 1;
    v52 = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
    v37 = !_BitScanReverse((unsigned int *)&v53, v52);
    v79 = v53;
    if ( v37 )
      goto LABEL_104;
    while ( 1 )
    {
      v54 = 1 << v53;
      v55 = v53;
      v56 = &v49->LockEntries[v55];
      v52 &= ~v54;
      if ( (v56->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v56->LockState.0 & 1) == 0
        && (*(_QWORD *)&v56->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && v56->LockState.SessionId == SessionId )
      {
        v56->AcquiredByte &= ~1u;
        if ( v56->LockState.0 )
          break;
      }
      v37 = !_BitScanReverse((unsigned int *)&v53, v52);
      v79 = v53;
      if ( v37 )
        goto LABEL_104;
    }
    if ( !v56 )
    {
LABEL_104:
      if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v49, v9, SessionId, 0LL);
    }
    else
    {
      v56->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v56->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v49->LockEntries[v55].TreeNode);
      v72 = 0;
      v72 = v56->BoostBitmap.AllFields & 0x1FFFF;
      v56->BoostBitmap.AllFields &= 0xFFFE0000;
      v56->ThreadLocalFlags &= ~1u;
      v56->LockState.0 = 0LL;
      v57 = ((char *)v56 - (char *)v49 - 800) / 96;
      if ( v51 )
        v49->AbEntrySummary |= 1 << v57;
      else
        _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, 1 << v57);
    }
    --v49->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v49, v9, &v72);
    v37 = v49->SpecialApcDisable++ == -1;
    if ( v37 && ($B476B70DB57F76B110DA5B9238C3E934 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
      KiCheckForKernelApcDelivery();
    result = (PSLIST_ENTRY)KiLeaveGuardedRegionUnsafe(CurrentThread);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 48), -(__int64)v8);
    v29 = v73;
  }
  else
  {
    v29 = v73;
    if ( v73 == 6 )
    {
      v30 = qword_140389358 - qword_140389348;
      if ( qword_140389358 - qword_140389348 > (unsigned __int64)qword_140388080 )
      {
        v31 = *(struct _KEVENT **)(v16 + 240);
        if ( v31->Header.SignalState != (_DWORD)v78 )
          KeResetEvent(v31);
        if ( v30 >= qword_140388088 )
        {
          v32 = *(struct _KEVENT **)(v16 + 248);
          if ( !v32->Header.SignalState )
            KeSetEvent(v32, 0, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v74 = 0;
    v33 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
      v34 = MmGetSessionIdEx(v33->ApcState.Process);
    else
      v34 = -1;
    --v33->SpecialApcDisable;
    v35 = ++v33->AbAllocationRegionCount == 1;
    v36 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
    v37 = !_BitScanReverse((unsigned int *)&v38, v36);
    v80 = v38;
    if ( v37 )
      goto LABEL_91;
    while ( 1 )
    {
      v39 = 1 << v38;
      v40 = v38;
      v41 = &v33->LockEntries[v40];
      v36 &= ~v39;
      if ( (v41->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v41->LockState.0 & 1) == 0
        && (*(_QWORD *)&v41->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && v41->LockState.SessionId == v34 )
      {
        v41->AcquiredByte &= ~1u;
        if ( v41->LockState.0 )
          break;
      }
      v37 = !_BitScanReverse((unsigned int *)&v38, v36);
      v80 = v38;
      if ( v37 )
        goto LABEL_91;
    }
    if ( !v41 )
    {
LABEL_91:
      if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v33, v9, v34, 0LL);
    }
    else
    {
      v41->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v41->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v33->LockEntries[v40].TreeNode);
      v74 = 0;
      v74 = v41->BoostBitmap.AllFields & 0x1FFFF;
      v41->BoostBitmap.AllFields &= 0xFFFE0000;
      v41->ThreadLocalFlags &= ~1u;
      v41->LockState.0 = 0LL;
      v42 = ((char *)v41 - (char *)v33 - 800) / 96;
      if ( v35 )
        v33->AbEntrySummary |= 1 << v42;
      else
        _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v42);
    }
    --v33->AbAllocationRegionCount;
    result = (PSLIST_ENTRY)KiAbThreadRemoveBoosts(v33, v9, &v74);
    v37 = v33->SpecialApcDisable++ == -1;
    if ( v37 )
    {
      result = (PSLIST_ENTRY)&v33->152;
      if ( result->Next != result )
        result = (PSLIST_ENTRY)KiCheckForKernelApcDelivery();
    }
    v44 = CurrentThread;
    v37 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v37 )
    {
      result = (PSLIST_ENTRY)&v44->152;
      if ( result->Next != result )
        result = (PSLIST_ENTRY)KiCheckForKernelApcDelivery();
    }
  }
  if ( v75 )
  {
    v68 = *(_QWORD *)(v9 + 24) << 25;
    v88 = 20LL;
    v87 = 0;
    v69 = (__int64)((v76 << 28) + v68) >> 16;
    v86 = v77;
    v89 = 0LL;
    v90 = 0LL;
    MiInsertTbFlushEntry(&v86, v69, v27, 0LL);
    return (PSLIST_ENTRY)MiReturnSystemVa(v69, v69 + (v27 << 12), v29, &v86);
  }
  return result;
}
