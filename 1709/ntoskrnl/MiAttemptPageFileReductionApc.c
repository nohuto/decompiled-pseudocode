/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x140224310
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     MiOkToShrinkPageFiles @ 0x1400B86F8 (MiOkToShrinkPageFiles.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400C0700 (MiCoalescePageFileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14011A84C (MiInvalidatePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x14011B980 (RtlFindLastBackwardRunClear.c)
 *     MiReduceCommitLimits @ 0x1402223B4 (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned __int64 Flink_high; // rbx
  int v5; // edx
  unsigned __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  _DWORD *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int16 v14; // ax
  __int64 v15; // rax
  int v16; // r9d
  _RTL_BITMAP *v17; // r10
  const signed __int32 *v18; // r8
  unsigned int v19; // ecx
  const signed __int32 *v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  unsigned int v23; // r9d
  unsigned __int64 LastBackwardRunClear; // rsi
  ULONG v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rbx
  unsigned int v35; // [rsp+30h] [rbp-59h]
  _DWORD *v36; // [rsp+38h] [rbp-51h]
  unsigned int v37; // [rsp+40h] [rbp-49h]
  unsigned __int64 v38; // [rsp+48h] [rbp-41h]
  __int64 v39; // [rsp+50h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-31h] BYREF
  PRTL_BITMAP v41; // [rsp+70h] [rbp-19h]
  __int64 v42; // [rsp+78h] [rbp-11h]
  ULONG StartingRunIndex; // [rsp+80h] [rbp-9h] BYREF
  ULONG v44; // [rsp+84h] [rbp-5h] BYREF
  PRTL_BITMAP v45; // [rsp+88h] [rbp-1h]
  _RTL_BITMAP BitMapHeader; // [rsp+90h] [rbp+7h] BYREF
  _RTL_BITMAP v47; // [rsp+A0h] [rbp+17h] BYREF
  struct _KEVENT *Event; // [rsp+F0h] [rbp+67h]
  int v49; // [rsp+108h] [rbp+7Fh]

  Event = a1;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  if ( Flink >= 0x10 )
  {
    LOBYTE(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 6320), *(_QWORD *)(v2 + 6440));
    if ( !v7 )
      return KeSetEvent(Event, 0, 0);
    v3 = *(_DWORD *)(v2 + 5784);
    Flink_high = 0x4000LL;
    v39 = 0x8000LL;
    v5 = 1;
    v10 = (((v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v8;
    a1 = Event;
    v6 = v10 - 0x8000;
    Flink = 0;
  }
  else
  {
    v39 = 0LL;
    v3 = Flink + 1;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v35 = v3;
  v49 = v5;
  v38 = Flink_high;
  if ( Flink < v3 )
  {
    v11 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    v12 = 8LL * Flink + 5792;
    v36 = v11;
    v42 = v12;
    while ( Flink_high <= v6 )
    {
      v13 = *(_QWORD *)(v12 + v2);
      v14 = *(_WORD *)(v13 + 204);
      if ( ((v14 & 0x10) == 0 || !v5)
        && (v14 & 0x40) == 0
        && *(_QWORD *)v13 != *(_QWORD *)(v13 + 16)
        && *(_QWORD *)(v13 + 24) >= Flink_high )
      {
        v2 = *(_QWORD *)(v13 + 256);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 232), &LockHandle);
        v15 = *(_QWORD *)(v13 + 112);
        v16 = *(_DWORD *)v13;
        v17 = (_RTL_BITMAP *)(v15 + 8);
        v18 = *(const signed __int32 **)(v15 + 16);
        v19 = *(_DWORD *)v13 - 1;
        v41 = (PRTL_BITMAP)(v15 + 8);
        v45 = (PRTL_BITMAP)(v15 + 24);
        if ( _bittest(v18, v19) == 1 || (v20 = *(const signed __int32 **)(v15 + 32), _bittest(v20, v19) == 1) )
        {
          v26 = v49;
          LastBackwardRunClear = 0LL;
        }
        else
        {
          v21 = *(_QWORD *)v13 - *(_QWORD *)(v13 + 16);
          if ( v6 <= v21 )
            v21 = v6;
          v22 = (*(_QWORD *)v13 - v21) & 0xFFFFFFFFFFFFFFE0uLL;
          v23 = v16 - v22;
          v22 >>= 5;
          v37 = v23;
          BitMapHeader.SizeOfBitMap = v23;
          v47.SizeOfBitMap = v23;
          BitMapHeader.Buffer = (unsigned int *)&v18[v22];
          v47.Buffer = (unsigned int *)&v20[v22];
          LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v23 - 1, &StartingRunIndex);
          if ( LastBackwardRunClear > v21 )
            LastBackwardRunClear = v21;
          v25 = RtlFindLastBackwardRunClear(&v47, v37 - 1, &v44);
          v26 = v49;
          Flink_high = v38;
          v17 = v41;
          if ( LastBackwardRunClear > v25 )
            LastBackwardRunClear = v25;
          if ( !v49 )
            LastBackwardRunClear &= ~(v38 - 1);
        }
        if ( LastBackwardRunClear )
        {
          v27 = *(_QWORD *)v13;
          v28 = *(_QWORD *)(v13 + 248);
          v29 = *(_QWORD *)v13 - LastBackwardRunClear;
          if ( !v28 )
            goto LABEL_35;
          do
          {
            v30 = v28;
            v28 = *(_QWORD *)(v28 + 8);
          }
          while ( v28 );
          v31 = *(_QWORD *)(v30 - 8);
          if ( !v31 || v29 > v31 )
            goto LABEL_35;
          v29 = v31 + 1;
          if ( v31 + 1 < v31 )
            goto LABEL_34;
          LastBackwardRunClear = v27 - v29;
          if ( !v26 )
          {
            LastBackwardRunClear &= ~(Flink_high - 1);
            v29 = v27 - LastBackwardRunClear;
          }
          if ( !LastBackwardRunClear )
          {
LABEL_34:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            v11 = v36;
          }
          else
          {
LABEL_35:
            *(_QWORD *)(v13 + 24) -= LastBackwardRunClear;
            *(_QWORD *)(v13 + 48) -= LastBackwardRunClear;
            *(_QWORD *)v13 = v29;
            RtlSetBits(v17, v29, LastBackwardRunClear);
            RtlSetBits(v45, v29, LastBackwardRunClear);
            MiInvalidatePageFileBitmapsCache(v13, v29, LastBackwardRunClear, 0LL);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            v6 -= LastBackwardRunClear;
            if ( (*(_BYTE *)(v13 + 204) & 0x10) == 0 )
            {
              if ( !(unsigned int)MiChargeCommit(v2, LastBackwardRunClear + v39, 2LL, v32) )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 232), &LockHandle);
                v33 = *(_QWORD *)(v13 + 112);
                *(_QWORD *)(v13 + 24) += LastBackwardRunClear;
                *(_QWORD *)(v13 + 48) += LastBackwardRunClear;
                *(_QWORD *)v13 = v29 + LastBackwardRunClear;
                RtlClearBits((PRTL_BITMAP)(v33 + 8), v29, LastBackwardRunClear);
                RtlClearBits((PRTL_BITMAP)(v33 + 24), v29, LastBackwardRunClear);
                if ( v29 < *(unsigned int *)(v13 + 120) )
                  *(_DWORD *)(v13 + 120) = v29;
                MiCoalescePageFileBitmapsCache(v13, 0, v29);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
                return KeSetEvent(Event, 0, 0);
              }
              MiReduceCommitLimits((_QWORD *)v2, LastBackwardRunClear, 0LL);
              MiReturnCommit(v2, LastBackwardRunClear + v39);
            }
            *v36 = v29;
            v11 = v36;
          }
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
      }
      ++v11;
      v12 = v42 + 8;
      v36 = v11;
      ++Flink;
      v42 += 8LL;
      if ( Flink >= v35 )
        return KeSetEvent(Event, 0, 0);
      v5 = v49;
    }
  }
  return KeSetEvent(Event, 0, 0);
}
