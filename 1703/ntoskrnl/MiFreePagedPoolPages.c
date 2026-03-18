/*
 * XREFs of MiFreePagedPoolPages @ 0x1400CCF60
 * Callers:
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     RtlSetBitsEx @ 0x1400AECC0 (RtlSetBitsEx.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiFreePagedPoolPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  unsigned __int64 v7; // rsi
  ULONG_PTR v8; // r15
  unsigned __int64 v9; // r11
  unsigned __int16 *v10; // r14
  ULONG_PTR v11; // rdx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r8
  union _SLIST_HEADER *v14; // rcx
  __int64 v15; // r10
  unsigned __int64 v16; // r12
  unsigned __int64 *v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int64 v20; // r11
  unsigned __int64 v21; // r9
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  bool v25; // zf
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r13
  int v32; // r13d
  unsigned __int64 v33; // rdi
  struct _KEVENT *v34; // rcx
  struct _KEVENT *v35; // rcx
  struct _KTHREAD *v36; // rbx
  unsigned int v37; // r10d
  BOOL v38; // esi
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  _KLOCK_ENTRY *v44; // rdi
  __int64 v45; // rdx
  __int16 v46; // ax
  struct _KTHREAD *v47; // rcx
  __int64 result; // rax
  __int64 v49; // rcx
  _QWORD *v50; // r9
  _QWORD *v51; // r10
  struct _KTHREAD *v52; // rbx
  unsigned int SessionId; // r10d
  BOOL v54; // r14d
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  _KLOCK_ENTRY *v60; // rdi
  __int64 v61; // rdx
  __int16 v62; // ax
  _KPROCESS *Process; // rcx
  _QWORD *v64; // r9
  unsigned __int64 v65; // r9
  __int64 v66; // rbx
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // r11
  unsigned __int64 v70; // r10
  __int64 v71; // r14
  unsigned __int64 v72; // r8
  _QWORD *v73; // rdi
  __int64 v74; // rax
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+38h] [rbp-C8h] BYREF
  int v78; // [rsp+3Ch] [rbp-C4h]
  int v79; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v80; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v81; // [rsp+50h] [rbp-B0h]
  int v82; // [rsp+58h] [rbp-A8h]
  int v83; // [rsp+5Ch] [rbp-A4h]
  int v84; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v85; // [rsp+68h] [rbp-98h]
  unsigned __int64 v86; // [rsp+70h] [rbp-90h]
  unsigned __int64 v87; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-80h]
  int v89; // [rsp+88h] [rbp-78h]
  int v90; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 v91; // [rsp+90h] [rbp-70h]
  __int64 v92; // [rsp+98h] [rbp-68h]
  unsigned __int64 v93[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v94; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v95; // [rsp+C4h] [rbp-3Ch]
  __int64 v96; // [rsp+C8h] [rbp-38h]
  __int64 v97; // [rsp+D0h] [rbp-30h]
  __int64 v98; // [rsp+D8h] [rbp-28h]

  memset(v93, 0, sizeof(v93));
  LOBYTE(BugCheckParameter4) = 0;
  v82 = 0;
  v7 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v87 = v7;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 6 )
  {
    v8 = (ULONG_PTR)&qword_14036D058;
    v78 = 6;
    v9 = 0LL;
    v86 = 0LL;
    v10 = (unsigned __int16 *)&unk_14036D3A0;
  }
  else
  {
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) != 1 )
      KeBugCheckEx(0xC2u, 0x42uLL, BugCheckParameter2, BugCheckParameter4, BugCheckParameter4);
    v78 = 1;
    v82 = 2;
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    Process = KeGetCurrentThread()->ApcState.Process;
    v86 = v9;
    v8 = v9 + 160;
    v10 = (unsigned __int16 *)(Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  v11 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = v11;
  v12 = (__int64)(v11 - *(_QWORD *)(v8 + 24)) >> 3;
  v13 = v7 + v12 - 1;
  v91 = v7 + v12;
  if ( v13 >= *(_QWORD *)(v8 + 8) )
    goto LABEL_153;
  if ( v7 <= 1 )
  {
    if ( v7 == 1 && _bittest64(*(const signed __int64 **)(v8 + 16), v12) )
      goto LABEL_8;
LABEL_153:
    KeBugCheckEx(0xC2u, 0x50uLL, BugCheckParameter2, v12, qword_14036D098 << 12);
  }
  v49 = *(_QWORD *)(v8 + 16);
  v50 = (_QWORD *)(v49 + 8 * (v12 >> 6));
  v51 = (_QWORD *)(v49 + 8 * (v13 >> 6));
  if ( v50 == v51 )
  {
    if ( (*v50 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v12)) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << v12 )
      goto LABEL_153;
  }
  else
  {
    if ( (*v50 & (-1LL << v12)) != -1LL << v12 )
      goto LABEL_153;
    v64 = v50 + 1;
    if ( v64 != v51 )
    {
      while ( *v64 == -1LL )
      {
        if ( ++v64 == v51 )
          goto LABEL_97;
      }
      goto LABEL_153;
    }
LABEL_97:
    if ( (*v64 & (0xFFFFFFFFFFFFFFFFuLL >> -(char)(v7 + v12))) != 0xFFFFFFFFFFFFFFFFuLL >> -(char)(v7 + v12) )
      goto LABEL_153;
  }
  v11 = v80;
  LOBYTE(BugCheckParameter4) = 0;
LABEL_8:
  if ( !v9 && v7 == 1 && a3 != 1951624525 && a3 != 1816358221 )
  {
    v14 = &qword_14036C1C8[25 * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]];
    if ( LOWORD(v14->Alignment) < (unsigned int)dword_14036BD90 )
    {
      *(_QWORD *)BugCheckParameter2 = qword_14036CFC0 ^ BugCheckParameter2;
      return (__int64)RtlpInterlockedPushEntrySList(v14, (PSLIST_ENTRY)(BugCheckParameter2 + 16));
    }
  }
  MiDeleteSystemPagableVm((__int64)v10, 0LL, v11, v7, BugCheckParameter4, v93);
  v15 = *(_QWORD *)(qword_14036C8F8 + 8LL * v10[86]);
  v92 = v15;
  if ( !v86 && (dword_1403E3104 & 2) != 0 )
  {
    if ( (ULONG_PTR *)v15 == &MiSystemPartition )
      MiReturnResidentAvailable(v93[0]);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 5824), v93[0]);
  }
  MiReturnCommit(v15, v93[3] - v93[1]);
  v16 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  CurrentThread = KeGetCurrentThread();
  v81 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  v17 = (unsigned __int64 *)(v8 + 8);
  RtlClearBitsEx(v8 + 8, v12, v7);
  v18 = *(_QWORD *)(v8 + 8);
  v76 = *(_QWORD *)(v8 + 40);
  v85 = v18;
  if ( (v12 & 0xFFFFFFFFFFFFFE00uLL) >= v18 )
    v19 = 0LL;
  else
    v19 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  v20 = *(_QWORD *)(v8 + 16);
  v21 = v18 - 1;
  while ( 1 )
  {
    if ( v21 - v19 != -1LL )
    {
      v22 = (_QWORD *)(v20 + 8 * (v19 >> 6));
      v23 = ((1LL << (v19 & 0x3F)) - 1) | ~*v22;
      if ( v23 == -1 )
      {
        while ( (unsigned __int64)++v22 <= v20 + 8 * (v21 >> 6) )
        {
          v23 = ~*v22;
          if ( *v22 )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        _BitScanForward64((unsigned __int64 *)&v23, ~v23);
        v24 = v23 + (((__int64)v22 - v20) >> 3 << 6);
        v89 = v23;
        if ( v24 <= v21 )
        {
          v25 = v24 == -1LL;
          if ( v24 != -1LL )
            goto LABEL_22;
          goto LABEL_103;
        }
      }
      v24 = -1LL;
LABEL_103:
      v18 = v85;
      goto LABEL_104;
    }
    v24 = -1LL;
LABEL_104:
    if ( !v19 )
      break;
    v65 = v16 + 1;
    if ( v16 + 1 > v18 )
      v65 = v18;
    v21 = v65 - 1;
    v19 = 0LL;
  }
  v25 = v24 == -1LL;
LABEL_22:
  v26 = v87;
  if ( v25 )
  {
    v24 = *v17;
LABEL_111:
    v28 = v76;
    goto LABEL_112;
  }
  if ( v24 < v16 )
    goto LABEL_111;
  v27 = v16 + 512;
  if ( v24 >= v16 + 512 )
    goto LABEL_111;
  if ( v87 + v12 <= v27 )
    goto LABEL_26;
  v69 = *v17;
  v16 += 512LL;
  v81 = v27;
  if ( v27 >= v69 )
    v70 = 0LL;
  else
    v70 = v27;
  v71 = *(_QWORD *)(v8 + 16);
  v72 = v69 - 1;
  while ( 2 )
  {
    if ( v72 - v70 == -1LL )
      goto LABEL_139;
    v73 = (_QWORD *)(v71 + 8 * (v70 >> 6));
    v74 = ((1LL << (v70 & 0x3F)) - 1) | ~*v73;
    if ( v74 == -1 )
    {
      while ( (unsigned __int64)++v73 <= v71 + 8 * (v72 >> 6) )
      {
        v74 = ~*v73;
        if ( *v73 )
          goto LABEL_126;
      }
LABEL_139:
      v24 = -1LL;
      goto LABEL_140;
    }
LABEL_126:
    _BitScanForward64((unsigned __int64 *)&v74, ~v74);
    v24 = v74 + (((__int64)v73 - v71) >> 3 << 6);
    v90 = v74;
    if ( v24 > v72 )
    {
      v24 = -1LL;
    }
    else if ( v24 != -1LL )
    {
      break;
    }
LABEL_140:
    if ( v70 )
    {
      v75 = v16 + 1;
      if ( v16 + 1 > v69 )
        v75 = v69;
      v72 = v75 - 1;
      v70 = 0LL;
      continue;
    }
    break;
  }
  v26 = v87;
  if ( v24 >= v16 && v24 < v16 + 512 )
  {
LABEL_26:
    v28 = v76;
    v80 = 0LL;
LABEL_27:
    v29 = 0LL;
    v30 = 0LL;
    v81 = 0LL;
    if ( v12 < v28 )
      *(_QWORD *)(v8 + 40) = v12;
    goto LABEL_29;
  }
  v28 = v76;
  v17 = (unsigned __int64 *)(v8 + 8);
  if ( v12 < v76 )
  {
    v28 = v12;
    *(_QWORD *)(v8 + 40) = v12;
    v76 = v12;
  }
LABEL_112:
  if ( !v80 )
    goto LABEL_27;
  if ( v24 >= v16 )
    v68 = v24 & 0xFFFFFFFFFFFFFE00uLL;
  else
    v68 = *v17;
  v30 = v68 - v81;
  RtlSetBitsEx((__int64)v17, v81, v68 - v81);
  if ( v68 < v91 && v68 < v76 )
  {
    v29 = v81;
    goto LABEL_118;
  }
  v29 = v81;
  if ( v76 >= v81 && v76 < v68 )
LABEL_118:
    *(_QWORD *)(v8 + 40) = v68;
LABEL_29:
  *(_QWORD *)(v8 + 48) -= v26;
  v31 = v86;
  if ( v86 )
  {
    if ( v80 )
      *(_DWORD *)(v86 + 7996) -= v30 >> 9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    v77 = 0;
    v52 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
      SessionId = MmGetSessionIdEx(v52->ApcState.Process);
    else
      SessionId = -1;
    --v52->SpecialApcDisable;
    v54 = ++v52->AbAllocationRegionCount == 1;
    v55 = v8 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v56) = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
    v25 = !_BitScanReverse((unsigned int *)&v57, v56);
    v83 = v57;
    if ( v25 )
      goto LABEL_100;
    while ( 1 )
    {
      v58 = 1 << v57;
      v59 = v57;
      v60 = &v52->LockEntries[v59];
      v56 = ~v58 & (unsigned int)v56;
      if ( (v60->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v60->LockState.0 & 1) == 0
        && (*(_QWORD *)&v60->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v55
        && v60->LockState.SessionId == SessionId )
      {
        v60->AcquiredByte &= ~1u;
        if ( v60->LockState.0 )
          break;
      }
      v25 = !_BitScanReverse((unsigned int *)&v57, v56);
      v83 = v57;
      if ( v25 )
        goto LABEL_100;
    }
    if ( !v60 )
    {
LABEL_100:
      if ( (*((_DWORD *)&v52->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v52, v8, SessionId, 0LL);
    }
    else
    {
      v60->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v60->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree((__int64)&v52->LockEntries[v59], v56, v55);
      v77 = 0;
      v77 = v60->BoostBitmap.AllFields & 0x1FFFF;
      v60->BoostBitmap.AllFields &= 0xFFFE0000;
      v60->ThreadLocalFlags &= ~1u;
      v60->LockState.0 = 0LL;
      v61 = ((char *)v60 - (char *)v52 - 800) / 96;
      if ( v54 )
        v52->AbEntrySummary |= 1 << v61;
      else
        _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v61);
    }
    --v52->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v52, v8, &v77);
    v62 = v52->SpecialApcDisable + 1;
    v52->SpecialApcDisable = v62;
    if ( !v62 && ($69CD3F157F9F39B6F7113F2231989901 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
      KiCheckForKernelApcDelivery();
    result = KiLeaveGuardedRegionUnsafe(CurrentThread);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 48), -(__int64)v26);
    v29 = v81;
    v32 = v78;
  }
  else
  {
    v32 = v78;
    if ( v78 == 6 )
    {
      v33 = qword_14036D098 - qword_14036D088;
      if ( qword_14036D098 - qword_14036D088 > (unsigned __int64)qword_14036BD80 )
      {
        v34 = *(struct _KEVENT **)(v92 + 280);
        if ( v34->Header.SignalState )
          KeResetEvent(v34);
        if ( v33 >= qword_14036BD88 )
        {
          v35 = *(struct _KEVENT **)(v92 + 288);
          if ( !v35->Header.SignalState )
            KeSetEvent(v35, 0, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    v79 = 0;
    v36 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
      v37 = MmGetSessionIdEx(v36->ApcState.Process);
    else
      v37 = -1;
    --v36->SpecialApcDisable;
    v38 = ++v36->AbAllocationRegionCount == 1;
    v39 = v8 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v40) = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    v25 = !_BitScanReverse((unsigned int *)&v41, v40);
    v84 = v41;
    if ( v25 )
      goto LABEL_92;
    while ( 1 )
    {
      v42 = 1 << v41;
      v43 = v41;
      v44 = &v36->LockEntries[v43];
      v40 = ~v42 & (unsigned int)v40;
      if ( (v44->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v44->LockState.0 & 1) == 0
        && (*(_QWORD *)&v44->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v39
        && v44->LockState.SessionId == v37 )
      {
        v44->AcquiredByte &= ~1u;
        if ( v44->LockState.0 )
          break;
      }
      v25 = !_BitScanReverse((unsigned int *)&v41, v40);
      v84 = v41;
      if ( v25 )
        goto LABEL_92;
    }
    if ( !v44 )
    {
LABEL_92:
      if ( (*((_DWORD *)&v36->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v36, v8, v37, 0LL);
    }
    else
    {
      v44->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v44->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree((__int64)&v36->LockEntries[v43], v40, v39);
      v79 = 0;
      v79 = v44->BoostBitmap.AllFields & 0x1FFFF;
      v44->BoostBitmap.AllFields &= 0xFFFE0000;
      v44->ThreadLocalFlags &= ~1u;
      v44->LockState.0 = 0LL;
      v45 = ((char *)v44 - (char *)v36 - 800) / 96;
      if ( v38 )
        v36->AbEntrySummary |= 1 << v45;
      else
        _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v45);
    }
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v36, v8, &v79);
    v46 = v36->SpecialApcDisable + 1;
    v36->SpecialApcDisable = v46;
    if ( !v46 && ($69CD3F157F9F39B6F7113F2231989901 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery();
    v47 = CurrentThread;
    result = (unsigned int)++CurrentThread->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&v47->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery();
    }
  }
  if ( v80 )
  {
    v66 = *(_QWORD *)(v8 + 24) << 25;
    v95 = 0;
    v97 = 0LL;
    v98 = 0LL;
    v96 = 20LL;
    v67 = (__int64)((v29 << 28) + v66) >> 16;
    v94 = v82;
    MiInsertTbFlushEntry(&v94, v67, v30, 0LL);
    return MiReturnSystemVa(v67, v67 + (v30 << 12), v32, (__int64)&v94);
  }
  return result;
}
