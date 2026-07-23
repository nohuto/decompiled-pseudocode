/*
 * XREFs of MiProcessDereferenceList @ 0x14013A7D0
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140161338 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiFreeClonePool @ 0x140004ABC (MiFreeClonePool.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     MiAttemptPageFileReduction @ 0x140219584 (MiAttemptPageFileReduction.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 *     MiExtendPagingFiles @ 0x1406B7A90 (MiExtendPagingFiles.c)
 */

PSLIST_ENTRY __fastcall MiProcessDereferenceList(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // al
  __int64 **v4; // rdi
  KIRQL v5; // r15
  __int64 *v6; // r14
  __int64 v7; // rax
  struct _KEVENT *v8; // rbx
  PSLIST_ENTRY result; // rax
  __int64 *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  LIST_ENTRY WaitListHead; // xmm0
  LIST_ENTRY v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v16[2]; // [rsp+20h] [rbp-60h] BYREF
  LIST_ENTRY v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int128 v19; // [rsp+60h] [rbp-20h]
  __int64 *v20; // [rsp+70h] [rbp-10h]
  struct _LIST_ENTRY *Blink; // [rsp+78h] [rbp-8h]

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v4 = (__int64 **)(a1 + 1456);
LABEL_2:
  v5 = v3;
  while ( *v4 != (__int64 *)v4 )
  {
    v6 = *v4;
    v7 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v4 = (__int64 *)v7;
    v8 = (struct _KEVENT *)(v6 - 1);
    *(_QWORD *)(v7 + 8) = v4;
    if ( *(v6 - 1) )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&v8[3].Header.Lock) )
      {
        LODWORD(v8[2].Header.WaitListHead.Flink) &= ~0x8000000u;
        v6[1] = (__int64)v6;
        *v6 = (__int64)v6;
        ExReleaseSpinLockExclusiveFromDpcLevel(v1);
        ExReleaseSpinLockExclusiveFromDpcLevel(&v8[3].Header.Lock);
        __writecr8(v5);
        MiSegmentDelete(v6 - 1);
      }
      else
      {
        v10 = *v4;
        if ( (__int64 **)(*v4)[1] != v4 )
          __fastfail(3u);
        *v6 = (__int64)v10;
        v6[1] = (__int64)v4;
        v10[1] = (__int64)v6;
        *v4 = v6;
        ExReleaseSpinLockExclusiveFromDpcLevel(v1);
        __writecr8(v5);
      }
      goto LABEL_9;
    }
    if ( v8[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)-1LL )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 984)) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v1);
        __writecr8(v5);
        MiAttemptPageFileReduction(v8);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 984));
        v5 = ExAcquireSpinLockExclusive(v1);
      }
      if ( !BYTE1(v8[3].Header.WaitListHead.Blink) )
LABEL_25:
        KeSetEvent(v8 + 2, 0, 0);
    }
    else
    {
      v11 = *(_OWORD *)&v8->Header.Lock;
      v16[1] = *(_OWORD *)&v8->Header.WaitListHead.Blink;
      v12 = *(_OWORD *)&v8[2].Header.Lock;
      v16[0] = v11;
      WaitListHead = v8[1].Header.WaitListHead;
      v18 = v12;
      v14 = v8[3].Header.WaitListHead;
      v17 = WaitListHead;
      v15 = *(_OWORD *)&v8[2].Header.WaitListHead.Blink;
      v8[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
      Blink = v14.Blink;
      v20 = v6 - 1;
      v19 = v15;
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      __writecr8(v5);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 984)) )
      {
        MiExtendPagingFiles(v16);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 984));
      }
      if ( (_BYTE)Blink == 1 )
      {
        _InterlockedExchange(&v8[3].Header.Lock, 0);
LABEL_9:
        v3 = ExAcquireSpinLockExclusive(v1);
        goto LABEL_2;
      }
      v5 = ExAcquireSpinLockExclusive(v1);
      if ( v20 )
      {
        v8[1].Header.WaitListHead.Blink = v17.Blink;
        goto LABEL_25;
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  result = (PSLIST_ENTRY)v5;
  __writecr8(v5);
  if ( *(_DWORD *)(a1 + 1668) )
  {
    KeResetEvent((PRKEVENT)(a1 + 1664));
    return MiFreeClonePool((_SLIST_HEADER *)a1);
  }
  return result;
}
