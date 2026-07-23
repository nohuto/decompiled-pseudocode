/*
 * XREFs of MiFreePagedPoolPages @ 0x1400094C0
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400E1834 (MiFreePoolPages.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     RtlSetBitsEx @ 0x1400DA370 (RtlSetBitsEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiFreePagedPoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  ULONG_PTR v5; // r8
  int v6; // r11d
  unsigned __int64 v7; // rsi
  char v8; // al
  ULONG_PTR v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 *v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  _SLIST_HEADER *v14; // rcx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r10
  _QWORD *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdi
  __int64 v28; // rsi
  struct _KEVENT *v29; // rcx
  struct _KEVENT *v30; // rcx
  struct _KTHREAD *v31; // rdi
  unsigned int v32; // r10d
  BOOL v33; // esi
  unsigned int v34; // edx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rbx
  __int64 v39; // rdx
  PSLIST_ENTRY result; // rax
  struct _KTHREAD *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r10
  _QWORD *v44; // rdi
  _QWORD *v45; // r12
  bool v46; // zf
  struct _KTHREAD *v47; // rdi
  unsigned int SessionId; // r10d
  BOOL v49; // r14d
  unsigned int v50; // edx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rbx
  __int64 v55; // rdx
  _KPROCESS *Process; // rcx
  __int64 SessionVm; // rax
  _QWORD *v58; // rdi
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // r8
  unsigned __int64 v64; // r10
  bool v65; // cf
  unsigned __int64 v66; // rcx
  _QWORD *v67; // rdi
  __int64 i; // rax
  _SLIST_ENTRY *v69; // rdx
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // [rsp+30h] [rbp-29h]
  int v72; // [rsp+38h] [rbp-21h] BYREF
  int v73; // [rsp+3Ch] [rbp-1Dh] BYREF
  unsigned __int64 v74; // [rsp+40h] [rbp-19h]
  int v75; // [rsp+48h] [rbp-11h]
  ULONG_PTR v76; // [rsp+50h] [rbp-9h]
  int v77; // [rsp+58h] [rbp-1h]
  int v78; // [rsp+5Ch] [rbp+3h]
  unsigned __int16 *v79; // [rsp+60h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+Fh]
  int v81; // [rsp+70h] [rbp+17h]
  int v82; // [rsp+74h] [rbp+1Bh]
  unsigned __int64 v83; // [rsp+78h] [rbp+1Fh]
  ULONG_PTR BugCheckParameter2a; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int64 v85; // [rsp+C8h] [rbp+6Fh] BYREF

  v85 = a2;
  BugCheckParameter2a = BugCheckParameter2;
  v5 = BugCheckParameter2;
  v6 = 0;
  v7 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
    goto LABEL_149;
  v8 = byte_1403CCF90[((BugCheckParameter2 >> 39) & 0x1FF) - 256];
  if ( v8 != 6 )
  {
    if ( v8 == 1 )
    {
      v75 = 1;
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = Process[1].ActiveProcessors.Bitmap[2];
      v9 = v10 + 160;
      SessionVm = MiGetSessionVm(Process, 0LL, v5);
      v5 = BugCheckParameter2a;
      v79 = (unsigned __int16 *)SessionVm;
      goto LABEL_5;
    }
LABEL_149:
    KeBugCheckEx(0xC2u, 0x42uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v75 = 6;
  v79 = (unsigned __int16 *)&unk_1403CC8E0;
  v9 = (ULONG_PTR)&::BugCheckParameter2;
  v10 = 0LL;
  if ( a3 == 1951624525 || a3 == 1816358221 )
    v6 = 1;
LABEL_5:
  v11 = (unsigned __int64 *)(v9 + 8);
  v12 = (__int64)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - *(_QWORD *)(v9 + 24)) >> 3;
  v13 = v12 + v7 - 1;
  v83 = v12 + v7;
  if ( v13 >= *(_QWORD *)(v9 + 8) )
    goto LABEL_139;
  if ( v7 <= 1 )
  {
    if ( v7 == 1 )
    {
      if ( _bittest64(*(const signed __int64 **)(v9 + 16), v12) )
        goto LABEL_9;
      v5 = BugCheckParameter2a;
    }
LABEL_139:
    KeBugCheckEx(0xC2u, 0x50uLL, v5, v12, qword_1403CC5D8 << 12);
  }
  v42 = *(_QWORD *)(v9 + 16);
  v43 = *(_QWORD *)(v42 + 8 * (v12 >> 6));
  v44 = (_QWORD *)(v42 + 8 * (v12 >> 6));
  v45 = (_QWORD *)(v42 + 8 * (v13 >> 6));
  if ( v44 == v45 )
  {
    v46 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v12) & v43) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v12;
  }
  else
  {
    if ( ((-1LL << v12) & v43) != -1LL << v12 )
      goto LABEL_139;
    v58 = v44 + 1;
    if ( v58 != v45 )
    {
      while ( *v58 == -1LL )
      {
        if ( ++v58 == v45 )
          goto LABEL_96;
      }
      goto LABEL_139;
    }
LABEL_96:
    v46 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13) & *v58) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13;
  }
  if ( !v46 )
    goto LABEL_139;
  v11 = (unsigned __int64 *)(v9 + 8);
LABEL_9:
  if ( !v10 && !a4 && v7 == 1 && !v6 )
  {
    v14 = &qword_1403CB6A8[25 * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]];
    if ( LOWORD(v14->Alignment) < (unsigned int)dword_1403CB190 )
    {
      v69 = (_SLIST_ENTRY *)BugCheckParameter2a;
      *(_QWORD *)BugCheckParameter2a = BugCheckParameter2a ^ qword_1403CC500;
      return RtlpInterlockedPushEntrySList(v14, v69 + 1);
    }
  }
  MmFreePoolMemory(&BugCheckParameter2a, &v85, 0x4000LL);
  v76 = ((BugCheckParameter2a >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v74 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  RtlClearBitsEx((__int64)v11, v12, v7);
  v15 = *v11;
  v16 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  v17 = v11[1];
  if ( (v12 & 0xFFFFFFFFFFFFFE00uLL) >= *v11 )
    v16 = 0LL;
  v71 = *(_QWORD *)(v9 + 40);
  v18 = v15 - 1;
  v19 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  while ( 1 )
  {
    if ( v18 - v16 == -1LL )
      goto LABEL_101;
    v20 = (_QWORD *)(v17 + 8 * (v16 >> 6));
    v21 = ~*v20;
    if ( *v20 )
      break;
    while ( (unsigned __int64)++v20 <= v17 + 8 * (v18 >> 6) )
    {
      v21 = ~*v20;
      if ( *v20 )
        goto LABEL_19;
    }
LABEL_101:
    if ( !v16 )
    {
      v22 = *v11;
      v23 = v12 & 0xFFFFFFFFFFFFFE00uLL;
LABEL_105:
      v25 = v71;
      goto LABEL_106;
    }
    v59 = v19 + 1;
    if ( v19 + 1 > v15 )
      v59 = v15;
    v18 = v59 - 1;
    v16 = 0LL;
  }
LABEL_19:
  _BitScanForward64((unsigned __int64 *)&v21, ~v21);
  v22 = v21 + ((__int64)((__int64)v20 - v17) >> 3 << 6);
  v81 = v21;
  if ( v22 > v18 || v22 == -1LL )
    goto LABEL_101;
  v23 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  if ( v22 < v19 )
    goto LABEL_105;
  v24 = v19 + 512;
  if ( v22 >= v19 + 512 )
    goto LABEL_105;
  if ( v12 + v7 <= v24 )
    goto LABEL_24;
  v62 = *v11;
  v63 = v19 + 512;
  v64 = v11[1];
  v65 = v24 < *v11;
  v74 = v24;
  if ( !v65 )
    v63 = 0LL;
  v23 = v24;
  v66 = v62 - 1;
  while ( 2 )
  {
    if ( v66 - v63 == -1LL )
    {
      v22 = -1LL;
      goto LABEL_142;
    }
    v67 = (_QWORD *)(v64 + 8 * (v63 >> 6));
    for ( i = ~*v67; !*v67; i = ~*v67 )
    {
      if ( (unsigned __int64)++v67 > v64 + 8 * (v66 >> 6) )
        goto LABEL_136;
    }
    _BitScanForward64((unsigned __int64 *)&i, ~i);
    v22 = i + ((__int64)((__int64)v67 - v64) >> 3 << 6);
    v82 = i;
    if ( v22 > v66 )
    {
LABEL_136:
      v22 = -1LL;
      goto LABEL_142;
    }
    if ( v22 != -1LL )
      break;
LABEL_142:
    if ( v63 )
    {
      v70 = v23 + 1;
      v63 = 0LL;
      if ( v23 + 1 > v62 )
        v70 = v62;
      v66 = v70 - 1;
      continue;
    }
    break;
  }
  if ( v22 >= v23 && v22 < v23 + 512 )
  {
LABEL_24:
    v25 = v71;
    v76 = 0LL;
LABEL_25:
    v74 = 0LL;
    v26 = 0LL;
    if ( v12 < v25 )
      *(_QWORD *)(v9 + 40) = v12;
    goto LABEL_27;
  }
  v25 = v71;
  if ( v12 < v71 )
  {
    v25 = v12;
    *(_QWORD *)(v9 + 40) = v12;
    v71 = v12;
  }
LABEL_106:
  if ( !v76 )
    goto LABEL_25;
  if ( v22 < v23 )
    v61 = *v11;
  else
    v61 = v22 & 0xFFFFFFFFFFFFFE00uLL;
  v26 = v61 - v23;
  RtlSetBitsEx(v9 + 8, v23, v61 - v23);
  if ( v61 < v83 && v61 < v71 || v71 >= v74 && v71 < v61 )
    *(_QWORD *)(v9 + 40) = v61;
LABEL_27:
  *(_QWORD *)(v9 + 48) -= v7;
  if ( v10 )
  {
    if ( v76 )
      *(_DWORD *)(v10 + 8124) -= v26 >> 9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v72 = 0;
    v47 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
      SessionId = MmGetSessionIdEx(v47->ApcState.Process);
    else
      SessionId = -1;
    --v47->SpecialApcDisable;
    v49 = ++v47->AbAllocationRegionCount == 1;
    v50 = ((char)v47->AbEntrySummary | (char)v47->AbOrphanedEntrySummary) ^ 0x3F;
    v46 = !_BitScanReverse((unsigned int *)&v51, v50);
    v77 = v51;
    if ( v46 )
      goto LABEL_99;
    while ( 1 )
    {
      v52 = 1 << v51;
      v53 = v51;
      v54 = &v47->LockEntries[v53];
      v50 &= ~v52;
      if ( (v54->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v54->LockState.0 & 1) == 0
        && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && v54->LockState.SessionId == SessionId )
      {
        v54->AcquiredByte &= ~1u;
        if ( v54->LockState.0 )
          break;
      }
      v46 = !_BitScanReverse((unsigned int *)&v51, v50);
      v77 = v51;
      if ( v46 )
        goto LABEL_99;
    }
    if ( !v54 )
    {
LABEL_99:
      if ( (*((_DWORD *)&v47->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v47, v9, SessionId, 0LL);
    }
    else
    {
      v54->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v54->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v47->LockEntries[v53].TreeNode);
      v72 = 0;
      v72 = v54->BoostBitmap.AllFields & 0x1FFFF;
      v54->BoostBitmap.AllFields &= 0xFFFE0000;
      v54->ThreadLocalFlags &= ~1u;
      v54->LockState.0 = 0LL;
      v55 = ((char *)v54 - (char *)v47 - 800) / 96;
      if ( v49 )
        v47->AbEntrySummary |= 1 << v55;
      else
        _InterlockedOr8((volatile signed __int8 *)&v47->AbOrphanedEntrySummary, 1 << v55);
    }
    --v47->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v47, v9, &v72);
    v46 = v47->SpecialApcDisable++ == -1;
    if ( v46 && ($005F0E83B22994B61E86C72E0CE43C71 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
      KiCheckForKernelApcDelivery();
    result = (PSLIST_ENTRY)KiLeaveGuardedRegionUnsafe(CurrentThread);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 48), -(__int64)v7);
  }
  else
  {
    if ( v75 == 6 )
    {
      v27 = qword_1403CC5D8 - qword_1403CC5C8;
      if ( qword_1403CC5D8 - qword_1403CC5C8 > (unsigned __int64)qword_1403CB180 )
      {
        v28 = *(_QWORD *)(qword_1403CBD88 + 8LL * v79[87]);
        v29 = *(struct _KEVENT **)(v28 + 240);
        if ( v29->Header.SignalState )
          KeResetEvent(v29);
        if ( v27 >= qword_1403CB188 )
        {
          v30 = *(struct _KEVENT **)(v28 + 248);
          if ( !v30->Header.SignalState )
            KeSetEvent(v30, 0, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v73 = 0;
    v31 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
      v32 = MmGetSessionIdEx(v31->ApcState.Process);
    else
      v32 = -1;
    --v31->SpecialApcDisable;
    v33 = ++v31->AbAllocationRegionCount == 1;
    v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
    v46 = !_BitScanReverse((unsigned int *)&v35, v34);
    v78 = v35;
    if ( v46 )
      goto LABEL_92;
    while ( 1 )
    {
      v36 = 1 << v35;
      v37 = v35;
      v38 = &v31->LockEntries[v37];
      v34 &= ~v36;
      if ( (v38->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v38->LockState.0 & 1) == 0
        && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && v38->LockState.SessionId == v32 )
      {
        v38->AcquiredByte &= ~1u;
        if ( v38->LockState.0 )
          break;
      }
      v46 = !_BitScanReverse((unsigned int *)&v35, v34);
      v78 = v35;
      if ( v46 )
        goto LABEL_92;
    }
    if ( !v38 )
    {
LABEL_92:
      if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, v9, v32, 0LL);
    }
    else
    {
      v38->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v38->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v31->LockEntries[v37].TreeNode);
      v73 = 0;
      v73 = v38->BoostBitmap.AllFields & 0x1FFFF;
      v38->BoostBitmap.AllFields &= 0xFFFE0000;
      v38->ThreadLocalFlags &= ~1u;
      v38->LockState.0 = 0LL;
      v39 = ((char *)v38 - (char *)v31 - 800) / 96;
      if ( v33 )
        v31->AbEntrySummary |= 1 << v39;
      else
        _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v39);
    }
    --v31->AbAllocationRegionCount;
    result = (PSLIST_ENTRY)KiAbThreadRemoveBoosts(v31, v9, &v73);
    v46 = v31->SpecialApcDisable++ == -1;
    if ( v46 )
    {
      result = (PSLIST_ENTRY)&v31->152;
      if ( result->Next != result )
        result = (PSLIST_ENTRY)KiCheckForKernelApcDelivery();
    }
    v41 = CurrentThread;
    v46 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v46 )
    {
      result = (PSLIST_ENTRY)&v41->152;
      if ( result->Next != result )
        result = (PSLIST_ENTRY)KiCheckForKernelApcDelivery();
    }
  }
  if ( v76 )
  {
    v60 = (v74 << 28) + (*(_QWORD *)(v9 + 24) << 25);
    v85 = v26 << 12;
    BugCheckParameter2a = v60 >> 16;
    return (PSLIST_ENTRY)MmFreePoolMemory(&BugCheckParameter2a, &v85, 0x8000LL);
  }
  return result;
}
