/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x14025EDD0
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     MiOkToShrinkPageFiles @ 0x1400704CC (MiOkToShrinkPageFiles.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14009D014 (MiInvalidatePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x1400C2BC0 (RtlFindLastBackwardRunClear.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400D7170 (MiCoalescePageFileBitmapsCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiReduceCommitLimits @ 0x140265970 (MiReduceCommitLimits.c)
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
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int16 v14; // ax
  __int64 v15; // rax
  unsigned int v16; // ecx
  _RTL_BITMAP *v17; // r10
  const signed __int32 *v18; // r9
  const signed __int32 *v19; // r8
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned int v22; // edx
  ULONG v23; // ebx
  unsigned __int64 LastBackwardRunClear; // r14
  ULONG v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  _DWORD *v34; // [rsp+30h] [rbp-59h]
  unsigned int v35; // [rsp+38h] [rbp-51h]
  unsigned __int64 v36; // [rsp+40h] [rbp-49h]
  __int64 v37; // [rsp+48h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-39h] BYREF
  PRTL_BITMAP v39; // [rsp+68h] [rbp-21h]
  __int64 v40; // [rsp+70h] [rbp-19h]
  ULONG StartingRunIndex; // [rsp+78h] [rbp-11h] BYREF
  ULONG v42; // [rsp+7Ch] [rbp-Dh] BYREF
  PRTL_BITMAP v43; // [rsp+80h] [rbp-9h]
  _RTL_BITMAP BitMapHeader; // [rsp+88h] [rbp-1h] BYREF
  _RTL_BITMAP v45; // [rsp+98h] [rbp+Fh] BYREF
  struct _KEVENT *Event; // [rsp+F0h] [rbp+67h]
  int v47; // [rsp+108h] [rbp+7Fh]

  Event = a1;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  if ( Flink >= 0x10 )
  {
    LOBYTE(v7) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 7400), *(_QWORD *)(v2 + 7528));
    if ( !v7 )
      return KeSetEvent(Event, 0, 0);
    v3 = *(_DWORD *)(v2 + 6872);
    Flink_high = 0x4000LL;
    v37 = 0x8000LL;
    v5 = 1;
    v10 = (((v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v8;
    a1 = Event;
    v6 = v10 - 0x8000;
    Flink = 0;
  }
  else
  {
    v37 = 0LL;
    v3 = Flink + 1;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v35 = v3;
  v47 = v5;
  v36 = Flink_high;
  if ( Flink < v3 )
  {
    v11 = (_DWORD *)&a1[1].Header.WaitListHead.Blink + Flink;
    v12 = 8LL * Flink + 6880;
    v34 = v11;
    v40 = v12;
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
        v16 = *(_DWORD *)v13 - 1;
        v17 = (_RTL_BITMAP *)(v15 + 8);
        v18 = *(const signed __int32 **)(v15 + 16);
        v39 = (PRTL_BITMAP)(v15 + 8);
        v43 = (PRTL_BITMAP)(v15 + 24);
        if ( _bittest(v18, v16) == 1 || (v19 = *(const signed __int32 **)(v15 + 32), _bittest(v19, v16) == 1) )
        {
          v26 = v47;
          LastBackwardRunClear = 0LL;
        }
        else
        {
          v20 = *(_QWORD *)v13 - *(_QWORD *)(v13 + 16);
          if ( v6 <= v20 )
            v20 = v6;
          v21 = (*(_QWORD *)v13 - v20) & 0xFFFFFFFFFFFFFFE0uLL;
          v22 = *(_QWORD *)v13 - v21;
          v21 >>= 5;
          BitMapHeader.SizeOfBitMap = v22;
          v45.SizeOfBitMap = v22;
          BitMapHeader.Buffer = (unsigned int *)&v18[v21];
          v23 = v22 - 1;
          v45.Buffer = (unsigned int *)&v19[v21];
          LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v22 - 1, &StartingRunIndex);
          if ( LastBackwardRunClear > v20 )
            LastBackwardRunClear = v20;
          v25 = RtlFindLastBackwardRunClear(&v45, v23, &v42);
          v26 = v47;
          Flink_high = v36;
          v11 = v34;
          v17 = v39;
          if ( LastBackwardRunClear > v25 )
            LastBackwardRunClear = v25;
          if ( !v47 )
            LastBackwardRunClear &= ~(v36 - 1);
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
            v11 = v34;
          }
          else
          {
LABEL_35:
            *(_QWORD *)(v13 + 24) -= LastBackwardRunClear;
            *(_QWORD *)(v13 + 48) -= LastBackwardRunClear;
            *(_QWORD *)v13 = v29;
            RtlSetBits(v17, v29, LastBackwardRunClear);
            RtlSetBits(v43, v29, LastBackwardRunClear);
            MiInvalidatePageFileBitmapsCache(v13, v29, LastBackwardRunClear, 0LL);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            v6 -= LastBackwardRunClear;
            if ( (*(_BYTE *)(v13 + 204) & 0x10) == 0 )
            {
              if ( !(unsigned int)MiChargeCommit(v2, LastBackwardRunClear + v37, 2u) )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 232), &LockHandle);
                v32 = *(_QWORD *)(v13 + 112);
                *(_QWORD *)(v13 + 24) += LastBackwardRunClear;
                *(_QWORD *)(v13 + 48) += LastBackwardRunClear;
                *(_QWORD *)v13 = v29 + LastBackwardRunClear;
                RtlClearBits((PRTL_BITMAP)(v32 + 8), v29, LastBackwardRunClear);
                RtlClearBits((PRTL_BITMAP)(v32 + 24), v29, LastBackwardRunClear);
                if ( v29 < *(unsigned int *)(v13 + 120) )
                  *(_DWORD *)(v13 + 120) = v29;
                MiCoalescePageFileBitmapsCache(v13, 0, v29);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
                return KeSetEvent(Event, 0, 0);
              }
              MiReduceCommitLimits(v2, LastBackwardRunClear, 0LL);
              MiReturnCommit(v2, LastBackwardRunClear + v37);
            }
            *v34 = v29;
            v11 = v34;
          }
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
      }
      ++v11;
      v12 = v40 + 8;
      v34 = v11;
      ++Flink;
      v40 += 8LL;
      if ( Flink >= v35 )
        return KeSetEvent(Event, 0, 0);
      v5 = v47;
    }
  }
  return KeSetEvent(Event, 0, 0);
}
