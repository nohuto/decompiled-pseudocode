/*
 * XREFs of MiProcessDeleteOnClose @ 0x14020A790
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140098DC0 (MiInsertUnusedSegment.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MiDestroySection @ 0x1401490F8 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // bp
  _QWORD *v6; // r14
  __int64 v7; // rbx
  volatile LONG *v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 inserted; // rbx
  _QWORD *v14; // rax
  __int64 result; // rax
  struct _FILE_OBJECT *v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = (volatile LONG *)(a1 + 1344);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  if ( a2 == 1 && *(_BYTE *)(a1 + 1552) == 1 && !KeCancelTimer((PKTIMER)(a1 + 1488)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    __writecr8(v5);
    KeWaitForSingleObject((PVOID)(a1 + 1488), Executive, 0, 0, 0LL);
  }
  v6 = (_QWORD *)(a1 + 1472);
  while ( 1 )
  {
    v14 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v7 = (__int64)(v14 - 1);
    v8 = (volatile LONG *)(v14 + 8);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8) )
    {
      --*(_DWORD *)(a1 + 1348);
      v9 = (_QWORD *)(v7 + 8);
      v10 = *(_QWORD *)(v7 + 8);
      v11 = *(_QWORD **)(v7 + 16);
      if ( *(_QWORD *)(v10 + 8) != v7 + 8 || (_QWORD *)*v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_DWORD *)(v7 + 56) &= ~0x8000000u;
      *(_QWORD *)(v7 + 16) = v7 + 8;
      *v9 = v9;
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( *(_DWORD *)(v7 + 76) )
      {
        inserted = MiInsertUnusedSegment(v7, v12);
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        __writecr8(v5);
        if ( inserted )
          MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      }
      else
      {
        v16 = 0LL;
        if ( (unsigned int)MiFlushControlArea(v7, v5, (__int64 *)&v17, &v16) == 1 )
          MiDestroySection(v7, v5, v16);
        if ( v17 )
          MiReleaseControlAreaWaiters(v17);
      }
      ExAcquireSpinLockExclusive(v2);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      __writecr8(v5);
      v5 = ExAcquireSpinLockExclusive(v2);
    }
  }
  *(_BYTE *)(a1 + 1552) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v5;
  __writecr8(v5);
  return result;
}
