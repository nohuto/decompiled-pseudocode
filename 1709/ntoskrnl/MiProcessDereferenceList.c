/*
 * XREFs of MiProcessDereferenceList @ 0x14014B46C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14014B2F0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFreeClonePool @ 0x14012BE94 (MiFreeClonePool.c)
 *     MiProcessingPageExtendComplete @ 0x140211544 (MiProcessingPageExtendComplete.c)
 *     MiRemoveUnusedSegments @ 0x1402118EC (MiRemoveUnusedSegments.c)
 *     MiAttemptPageFileReduction @ 0x1402241B4 (MiAttemptPageFileReduction.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x1406E46D4 (MiExtendPagingFiles.c)
 */

PSLIST_ENTRY __fastcall MiProcessDereferenceList(__int64 a1, int a2)
{
  volatile LONG *v2; // r15
  KIRQL v4; // al
  __int64 **v5; // rsi
  KIRQL v6; // r12
  __int64 *v7; // rbx
  __int64 *v8; // rax
  _QWORD **v9; // r14
  _QWORD *v10; // rbx
  int v11; // r13d
  _QWORD **v12; // r13
  _QWORD *v13; // rbx
  PSLIST_ENTRY result; // rax
  __int64 *v15; // rax
  _QWORD *v16; // rax
  struct _KEVENT *v17; // rbx
  struct _KEVENT *v18; // rcx
  __int128 v19; // xmm0
  KIRQL v20; // al
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  __int128 v23; // xmm0
  int v24; // eax
  int v25; // ecx
  bool v26; // zf
  __int64 Blink; // rax
  __int128 v28; // [rsp+20h] [rbp-60h] BYREF
  __int128 v29; // [rsp+30h] [rbp-50h]
  LIST_ENTRY WaitListHead; // [rsp+40h] [rbp-40h]
  __int128 v31; // [rsp+50h] [rbp-30h]
  __int128 v32; // [rsp+60h] [rbp-20h]
  struct _KEVENT *v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+C0h] [rbp+40h]

  v34 = 0;
  v2 = (volatile LONG *)(a1 + 1280);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v5 = (__int64 **)(a1 + 1480);
LABEL_2:
  v6 = v4;
  do
  {
    v7 = *v5;
    if ( *v5 != (__int64 *)v5 )
    {
      if ( (__int64 **)v7[1] != v5 || (v8 = (__int64 *)*v7, *(__int64 **)(*v7 + 8) != v7) )
        __fastfail(3u);
      *v5 = v8;
      v8[1] = (__int64)v5;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v7 + 16) )
      {
        *((_DWORD *)v7 + 12) &= ~0x8000000u;
        v7[1] = (__int64)v7;
        *v7 = (__int64)v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7 + 16);
        __writecr8(v6);
        MiSegmentDelete(v7 - 1);
      }
      else
      {
        v15 = *v5;
        if ( (__int64 **)(*v5)[1] != v5 )
          __fastfail(3u);
        *v7 = (__int64)v15;
        v7[1] = (__int64)v5;
        v15[1] = (__int64)v7;
        *v5 = v7;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        __writecr8(v6);
      }
      v4 = ExAcquireSpinLockExclusive(v2);
      goto LABEL_2;
    }
    v9 = (_QWORD **)(a1 + 1512);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 == v9 )
        break;
      if ( (_QWORD **)v10[1] != v9 || (v16 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
        __fastfail(3u);
      *v9 = v16;
      v17 = (struct _KEVENT *)(v10 - 1);
      v16[1] = v9;
      if ( v17[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936)) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v2);
          __writecr8(v6);
          MiAttemptPageFileReduction(v17);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936));
          v6 = ExAcquireSpinLockExclusive(v2);
        }
        if ( (v17[3].Header.SignalState & 0x10000000) == 0 )
        {
          v18 = v17 + 2;
          goto LABEL_34;
        }
      }
      else
      {
        v28 = *(_OWORD *)&v17->Header.Lock;
        v29 = *(_OWORD *)&v17->Header.WaitListHead.Blink;
        WaitListHead = v17[1].Header.WaitListHead;
        v31 = *(_OWORD *)&v17[2].Header.Lock;
        v19 = *(_OWORD *)&v17[2].Header.WaitListHead.Blink;
        v33 = v17;
        v32 = v19;
        v17[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v28;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        __writecr8(v6);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936)) )
        {
          MiExtendPagingFiles(&v28);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936));
        }
        v20 = MiProcessingPageExtendComplete(&v28, v17, a1);
        --*(_DWORD *)(a1 + 1788);
        v6 = v20;
        if ( *(_DWORD *)(a1 + 1784) )
        {
          v18 = (struct _KEVENT *)(a1 + 1792);
LABEL_34:
          KeSetEvent(v18, 0, 0);
        }
      }
    }
    v11 = a2;
    if ( a2 )
    {
      v12 = (_QWORD **)(a1 + 1496);
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 == v12 )
          break;
        if ( (_QWORD **)v13[1] != v12 || (v21 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
          __fastfail(3u);
        *v12 = v21;
        v22 = v13 - 1;
        v21[1] = v12;
        v28 = *(_OWORD *)v22;
        v29 = *((_OWORD *)v22 + 1);
        WaitListHead = (LIST_ENTRY)*((_OWORD *)v22 + 2);
        v31 = *((_OWORD *)v22 + 3);
        v23 = *((_OWORD *)v22 + 4);
        v33 = (struct _KEVENT *)v22;
        v32 = v23;
        v22[10] = &v28;
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        __writecr8(v6);
        v24 = MiRemoveUnusedSegments(a1, WaitListHead.Flink);
        v25 = v34;
        v26 = v24 == 0;
        Blink = (__int64)WaitListHead.Blink;
        if ( !v26 )
          v25 = 1;
        v34 = v25;
        if ( v25 )
          Blink = 1LL;
        WaitListHead.Blink = (struct _LIST_ENTRY *)Blink;
        v6 = MiProcessingPageExtendComplete(&v28, v22, a1);
      }
      v11 = a2;
    }
  }
  while ( *v5 != (__int64 *)v5 || v11 && *(_QWORD *)(a1 + 1496) != a1 + 1496 || *v9 != v9 );
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (PSLIST_ENTRY)v6;
  __writecr8(v6);
  if ( *(_DWORD *)(a1 + 1732) )
  {
    KeResetEvent((PRKEVENT)(a1 + 1728));
    return MiFreeClonePool((_SLIST_HEADER *)a1);
  }
  return result;
}
